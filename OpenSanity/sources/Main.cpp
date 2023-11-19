#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/Graphics/Renderer/Renderer.h"
#include "headers/Known/Time/Clock.h"
#include "headers/Known/Input/InputController/InputController.h"
#include "headers/Known/Game/GameContext/GameContext.h"
#include "headers/Known/Graphics/VideoPlayer/VideoPlayer.h"
#include "headers/Known/Memory/Streams/FileStream/FileStream.h"
#include "headers/Known/LevelStructure/Trash/SomeSection/UnkRMRelated.h"
#include "headers/Known/Sound/UnkStruct.h"
#include "headers/Global.h"
#include <stdio.h>
#include <winnt.h>
#include <tlhelp32.h>
#include <psapi.h>
#include <tchar.h>
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <stack>
#include <memory>

class FieldDesc {
public:
    std::string type;
    std::string name;
    bool isPointer;
    bool isStruct;
    bool isArray;
    size_t offset;
    size_t size;
    size_t elements;
    size_t elementSize;

    void Read(std::ifstream& stream) {
        byte typeLength = 0;
        byte nameLength = 0;
        stream.read((char*)&typeLength, sizeof(typeLength));
        char* typeBuff = new char[typeLength + 1];
        stream.read(typeBuff, typeLength);
        typeBuff[typeLength] = 0;
        stream.read((char*)&nameLength, sizeof(nameLength));
        char* nameBuff = new char[nameLength + 1];
        nameBuff[nameLength] = 0;
        stream.read(nameBuff, nameLength);
        type.assign(typeBuff);
        name.assign(nameBuff);

        stream.read((char*)&offset, sizeof(offset));
        stream.read((char*)&size, sizeof(size));

        byte flag = 0;

        stream.read((char*)&flag, sizeof(flag));
        isPointer = (flag == 1);
        stream.read((char*)&flag, sizeof(flag));
        isStruct = (flag == 1);
        stream.read((char*)&flag, sizeof(flag));
        isArray = (flag == 1);

        stream.read((char*)&elements, sizeof(elements));
        stream.read((char*)&elementSize, sizeof(elementSize));

        delete[] typeBuff;
        delete[] nameBuff;
    }
};


class TwinsanitySymbol {
public:
    std::string className;
    std::string parentName;
    bool isVirtual{ false };
    size_t size{ 0 };
    size_t fieldCount{ 0 };

    std::vector<std::unique_ptr<FieldDesc>> fields{};

    void Read(std::ifstream& stream) {
        byte classNameLength = 0;
        byte parentNameLength = 0;
        stream.read((char*)&classNameLength, sizeof(classNameLength));
        char* classNameBuff = new char[classNameLength + 1];
        classNameBuff[classNameLength] = 0;
        stream.read(classNameBuff, classNameLength);
        stream.read((char*)&parentNameLength, sizeof(parentNameLength));
        char* parentNameBuff = new char[parentNameLength + 1];
        parentNameBuff[parentNameLength] = 0;
        stream.read(parentNameBuff, parentNameLength);
        className.assign(classNameBuff);
        parentName.assign(parentNameBuff);

        byte flag = 0;
        stream.read((char*)&flag, sizeof(flag));
        isVirtual = flag == 1;

        stream.read((char*)&size, sizeof(size));
        stream.read((char*)&fieldCount, sizeof(fieldCount));
        for (int i = 0; i < fieldCount; ++i) {
            std::unique_ptr<FieldDesc> field = std::make_unique<FieldDesc>();
            field->Read(stream);
            fields.push_back(std::move(field));
        }

        delete[] classNameBuff;
        delete[] parentNameBuff;
    }
};

class SymbolDatabase {
public:

    uint symbolCount;
    std::map<std::string, std::unique_ptr<TwinsanitySymbol>> symbols{};


    SymbolDatabase() {
        symbolCount = 0;
    }
    SymbolDatabase(std::string path) : SymbolDatabase() {
        std::ifstream stream;
        stream.open(path, std::ios::in | std::ios::binary);

        stream.read((char*) & symbolCount, sizeof(symbolCount));
        for (uint i = 0; i < symbolCount; ++i) {
            auto symbol = std::make_unique<TwinsanitySymbol>();
            symbol->Read(stream);
            symbols.insert({ std::string(symbol->className.c_str()), std::move(symbol)});
        }
    }
};

bool isVideoPlayerValid(Global* GLOBAL);
void HandleWinApiUpdates();
void CreateGameWindow();
void InitD3D();
void InitFrameBuffer();
void InitShaders();
void InitDSound(IDirectSound8* device);
void ReleaseDSound(IDirectSound8* device);
void InitSoundBuffer();
void CreateSectionRelatedStruct(int num);
void CreateSoundRelatedStruct();
void IterateLanguages(const int languageCount, const char** languageNames);
GameContext* ParseArguments(int argc, char** argv);
GameContext* CreateGameContext(uint argc, char** argv);
void DirectSoundDoWork();
int RegisterScreenSurfaces();
void ReleaseScreenSurfaces();

int mainDebugger();
FieldDesc* findField(TwinsanitySymbol* symbol, std::string name);
void pushField(const std::string name, std::string valueStr);
void printSymbol(void* ptr, std::string symbolName);
int mainTwinsanity(int argc, char** argv);

int main(int argc, char** argv) {
    if (argc > 1 && strcmp(argv[1], "DEBUG") == 0) {
        return mainDebugger();
    }
    return mainTwinsanity(argc, argv);
}

int FindProcessId(const WCHAR* processName) {
    PROCESSENTRY32 processEntry;
    processEntry.dwSize = sizeof(PROCESSENTRY32);
    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hSnapshot == INVALID_HANDLE_VALUE) {
        return -1;
    }
    BOOL hResult = Process32First(hSnapshot, &processEntry);
    while (hResult) {
        if (_wcsicmp(processEntry.szExeFile, processName) == 0) {
            CloseHandle(hSnapshot);
            return processEntry.th32ProcessID;
        }
        hResult = Process32Next(hSnapshot, &processEntry);
    }

    CloseHandle(hSnapshot);
    return -1;
}

const wchar_t* EMULATOR_PROCESS_NAME = L"cxbxr-ldr.exe";
const LPVOID STATIC_MEMORY_BASE_ADDRESS = (LPVOID)(0x00010000);
const SIZE_T STATIC_MEMORY_PAGE_SIZE = 0x0410000;
const SIZE_T DYNAMIC_MEMORY_PAGE_SIZE = 0x01500000;

const GameContext** GAME_CONTEXT_PTR_ADDR = (const GameContext**)0x003E6BD4;
const Renderer** RENDERER_PTR_ADDR = (const Renderer**)0x003E6BE8;
const Clock** GLOBAL_CLOCK_PTR_ADDR = (const Clock**)0x003E6BEC;
const InputController** INPUT_CONTROLLER_PTR_ADDR = (const InputController**)0x003E6BDC;
const VideoPlayer** VIDEO_PLAYER_PTR_ADDR = (const VideoPlayer**)0x003E6BE0;

byte reservation[STATIC_MEMORY_PAGE_SIZE];

HANDLE processHandle = INVALID_HANDLE_VALUE;
LPVOID twinStaticMem = NULL;
LPVOID twinDynamicMem = NULL;
SymbolDatabase* database = NULL;
void* currentPtr = null;
std::string currentSymbol;
std::stack<std::pair<void*, std::string>> symbolStack;

LPVOID findDynamicMemoryOffset(HANDLE process) {
    MEMORY_BASIC_INFORMATION memoryBasicInfo;
    SYSTEM_INFO systemInfo;
    GetSystemInfo(&systemInfo);
    LPVOID ptr = STATIC_MEMORY_BASE_ADDRESS;
    while (ptr < systemInfo.lpMaximumApplicationAddress) {
        VirtualQueryEx(process, ptr, &memoryBasicInfo, sizeof(memoryBasicInfo));
        ptr = (LPVOID)((DWORD)(memoryBasicInfo.BaseAddress) + (DWORD)(memoryBasicInfo.RegionSize));
        if (memoryBasicInfo.RegionSize == DYNAMIC_MEMORY_PAGE_SIZE) {
            return memoryBasicInfo.BaseAddress;
        }
    }

    return NULL;
}


void PrepareMemory() {
    MEMORY_BASIC_INFORMATION memoryBasicInfo;
    SYSTEM_INFO systemInfo;
    GetSystemInfo(&systemInfo);
    LPVOID ptr = STATIC_MEMORY_BASE_ADDRESS;
    while ((SIZE_T)ptr < (SIZE_T)STATIC_MEMORY_BASE_ADDRESS + STATIC_MEMORY_PAGE_SIZE) {
        VirtualQuery(ptr, &memoryBasicInfo, sizeof(memoryBasicInfo));
        VirtualFree(ptr, 0, MEM_RELEASE);
        ptr = (LPVOID)((DWORD)(memoryBasicInfo.BaseAddress) + (DWORD)(memoryBasicInfo.RegionSize));
    }
}
void UpdateMem(HANDLE processHandle, LPVOID dynamicMemoryPtr) {
    SIZE_T read;
    ReadProcessMemory(processHandle, dynamicMemoryPtr, twinDynamicMem, DYNAMIC_MEMORY_PAGE_SIZE, &read);
    ReadProcessMemory(processHandle, STATIC_MEMORY_BASE_ADDRESS, twinStaticMem, STATIC_MEMORY_PAGE_SIZE, &read);
}

void Send(HANDLE processHandle, LPVOID ptr, void* object, size_t size) {
    SIZE_T write;
    WriteProcessMemory(processHandle, ptr, object, size, &write);
}

void printHelp() {
    printf("Usage:\n");
    printf("  help: print this message\n");
    printf("  exit: exit application\n");
    printf("  symbol <path>: load debug symbol file. If present in debugger folder, twindb.tsf will be loaded automatically\n");
    printf("  go <where>: set watcher to specific pointer of memory. <where> can be\n");
    printf("    - Global object, such as: GameContext, Renderer, Clock, InputController, VideoPlayer\n");
    printf("    - Variable of current viewed object\n");
    printf("  print: print variables of current viewed object. By default it's GameContext\n");
    printf("  push <variable> <value>: send new value to variable of viewed object\n");
    printf("  back: go to previous memory point\n");
}

int mainDebugger() {
    //PrepareMemory(); //Won't work. Will crash
    int pid = FindProcessId(EMULATOR_PROCESS_NAME);
    processHandle = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ | PROCESS_VM_WRITE, 0, pid);

    LPVOID dynamicMemoryPtr = findDynamicMemoryOffset(processHandle);
    twinStaticMem =  VirtualAlloc(STATIC_MEMORY_BASE_ADDRESS, STATIC_MEMORY_PAGE_SIZE, MEM_COMMIT | MEM_RESERVE | MEM_TOP_DOWN, PAGE_READWRITE);
    twinDynamicMem = VirtualAlloc(dynamicMemoryPtr, DYNAMIC_MEMORY_PAGE_SIZE, MEM_RESERVE |MEM_COMMIT , PAGE_READWRITE);

    SIZE_T read;
    SIZE_T write;
    if (twinDynamicMem != NULL) {
        ReadProcessMemory(processHandle, dynamicMemoryPtr, twinDynamicMem, DYNAMIC_MEMORY_PAGE_SIZE, &read);
    }
    else {
        Logging::LogFormat("COULDN'T ALLOCATE DYNAMIC PAGE. Error: %d", GetLastError());
        VirtualFree(STATIC_MEMORY_BASE_ADDRESS, 0, MEM_RELEASE);
        VirtualFree(dynamicMemoryPtr, 0, MEM_RELEASE);
        return -1;
    }
    if (twinStaticMem != NULL) {
        ReadProcessMemory(processHandle, STATIC_MEMORY_BASE_ADDRESS, twinStaticMem, STATIC_MEMORY_PAGE_SIZE, &read);
    }
    else {
        Logging::LogFormat("COULDN'T ALLOCATE STATIC PAGE. Error: %d", GetLastError());
        VirtualFree(STATIC_MEMORY_BASE_ADDRESS, 0, MEM_RELEASE);
        VirtualFree(dynamicMemoryPtr, 0, MEM_RELEASE);
        return -1;
    }
    

    std::ifstream defaultSymbolFile("twindb.tsf");
    if (defaultSymbolFile.good()) {
        defaultSymbolFile.close();
        database = new SymbolDatabase("twindb.tsf");
        printf("%d symbols are loaded\n", database->symbolCount);
    }
    printf("Twinsanity Debugger booted up successfully\n");
    printHelp();
    GameContext* context = (GameContext*)*GAME_CONTEXT_PTR_ADDR;
    Renderer* renderer = (Renderer*)*RENDERER_PTR_ADDR;
    Clock* clock = (Clock*)*GLOBAL_CLOCK_PTR_ADDR;
    InputController* inputController = (InputController*)*INPUT_CONTROLLER_PTR_ADDR;
    VideoPlayer* videoPlayer = (VideoPlayer*)*VIDEO_PLAYER_PTR_ADDR;
    std::string cmd;
    currentPtr = context;
    currentSymbol = "GameContext";
    
    while (true) {
        UpdateMem(processHandle, dynamicMemoryPtr);
        std::cin >> cmd;
        if (cmd.compare("help") == 0) {
            printHelp();
        }
        if (cmd.compare("exit") == 0) {
            break;
        }
        if (cmd.compare("symbol") == 0) {
            if (database != null) {
                delete database;
            }
            std::string path;
            std::cin >> path;
            database = new SymbolDatabase(path);
            printf("%d symbols are loaded\n", database->symbolCount);
        }
        if (cmd.compare("push") == 0) {
            if (database == null) {
                printf("Symbols are not loaded. Use \"symbol <path> \" command to load symbol file\n");
            }
            else {
                std::string item;
                std::cin >> item;
                std::string value;
                std::cin >> value;
                pushField(item, value);
            }
        }
        if (cmd.compare("go") == 0) {
            if (database == null) {
                printf("Symbols are not loaded. Use \"symbol <path> \" command to load symbol file\n");
            }
            else {
                std::string item;
                std::cin >> item;
                if (item.compare("GameContext") == 0) {
                    currentPtr = context;
                    currentSymbol = "GameContext";
                }
                else if (item.compare("Renderer") == 0) {
                    currentPtr = renderer;
                    currentSymbol = "Renderer";
                }
                else if (item.compare("Clock") == 0) {
                    currentPtr = clock;
                    currentSymbol = "Clock";
                }
                else if (item.compare("InputController") == 0) {
                    currentPtr = inputController;
                    currentSymbol = "InputController";
                }
                else if (item.compare("VideoPlayer") == 0) {
                    currentPtr = videoPlayer;
                    currentSymbol = "VideoPlayer";
                }
                else {
                    TwinsanitySymbol* symbol = database->symbols.find(currentSymbol)->second.get();
                    FieldDesc* field = findField(symbol, item);
                    if (field == null) {
                        printf("Field not found\n");
                    }
                    else if ((field->isPointer || field->isStruct) && !field->isArray){
                        symbolStack.push({ currentPtr, currentSymbol });
                        void* newPtr = null;
                        if (field->isStruct) {
                            newPtr = (void*)((char*)currentPtr + field->offset);
                        }
                        else if (field->isPointer) {
                            newPtr = (void*)(*(uint*)((char*)currentPtr + field->offset)); //AAAAAAAAA
                        }
                        currentPtr = newPtr;
                        currentSymbol = field->type;
                    }
                    else {
                        printf("Type is unsupported\n");
                    }
                }
            }
        }
        if (cmd.compare("back") == 0) {
            if (database == null) {
                printf("Symbols are not loaded. Use \"symbol <path> \" command to load symbol file\n");
            }
            else if (symbolStack.empty()) {
                printf("Can't go back\n");
            }
            else {
                auto previous = symbolStack.top();
                symbolStack.pop();
                currentPtr = previous.first;
                currentSymbol = previous.second;
            }
        }
        if (cmd.compare("print") == 0) {
            if (database == null) {
                printf("Symbols are not loaded. Use \"symbol <path> \" command to load symbol file\n");
            }
            else {
                printSymbol(currentPtr, currentSymbol);
            }
        }
    }

    CloseHandle(processHandle);
    VirtualFree((LPVOID)0x00010000, 0, MEM_RELEASE);
    VirtualFree((LPVOID)0x0D8B0000, 0, MEM_RELEASE);
    return -1;
}

FieldDesc* findField(TwinsanitySymbol* symbol, std::string name) {
    if (!symbol->parentName.empty()) {
        TwinsanitySymbol* parentSymbol = database->symbols.find(symbol->parentName)->second.get();
        FieldDesc* result = findField(parentSymbol, name);
        if (result != null) {
            return result;
        }
    }
    for (int i = 0; i < symbol->fieldCount; ++i) {
        if (symbol->fields.at(i)->name.compare(name) == 0) {
            return symbol->fields.at(i).get();
        }
    }
    return null;
}

void printSymbol(void* ptr, const std::string symbolName) {
    TwinsanitySymbol* symbol = database->symbols.find(symbolName)->second.get();
    if (symbol->parentName.length() > 0) {
        printSymbol(ptr, symbol->parentName);
    }  
    printf("%s: \n", symbol->className.c_str());
    for (int i = 0; i < symbol->fieldCount; ++i) {
        FieldDesc* field = symbol->fields.at(i).get();
        if (field->type.compare("int") == 0) {
            int* value = (int*)((char*)ptr + field->offset);
            printf("  %s %s = %08x\n", field->type.c_str(), field->name.c_str(), *value);
        }
        else if (field->type.compare("uint") == 0) {
            uint* value = (uint*)((char*)ptr + field->offset);
            printf("  %s %s = %08x\n", field->type.c_str(), field->name.c_str(), *value);
        }
        else if (field->type.compare("float") == 0) {
            float* value = (float*)((char*)ptr + field->offset);
            printf("  %s %s = %f\n", field->type.c_str(), field->name.c_str(), *value);
        }
        else if (field->type.compare("short") == 0) {
            short* value = (short*)((char*)ptr + field->offset);
            printf("  %s %s = %04x\n", field->type.c_str(), field->name.c_str(), *value);
        }
        else if (field->type.compare("ushort") == 0) {
            ushort* value = (ushort*)((char*)ptr + field->offset);
            printf("  %s %s = %04x\n", field->type.c_str(), field->name.c_str(), *value);
        }
        else if (field->type.compare("byte") == 0) {
            byte* value = (byte*)((char*)ptr + field->offset);
            printf("  %s %s = %02x\n", field->type.c_str(), field->name.c_str(), *value);
        }
        else if (field->type.compare("TwinString") == 0) {
            TwinString* str = null;
            if (field->isPointer) {
                str = *(TwinString**)((char*)ptr + field->offset);
            }
            else {
                str = (TwinString*)((char*)ptr + field->offset);
            }
            printf("  %s %s = %s\n", field->type.c_str(), field->name.c_str(), str->value);
        }
        else if (field->isStruct && !field->isArray){
            void* fieldPtr = (char*)ptr + field->offset;
            printf("  %s %s (%08x)\n", field->type.c_str(), field->name.c_str(), (uint)fieldPtr);
        }
        else if (field->isPointer && !field->isArray) {
            uint fieldPtr = *(uint*)((char*)ptr + field->offset);
            printf("  %s %s (%08x)\n", field->type.c_str(), field->name.c_str(), fieldPtr);
        }
        else {
            printf("  %s %s\n", field->type.c_str(), field->name.c_str());
        }
    }
}

void pushField(const std::string name, std::string valueStr) {
    TwinsanitySymbol* symbol = database->symbols.find(currentSymbol)->second.get();
    FieldDesc* field = findField(symbol, name);
    if (field == null) {
        printf("Field not found\n");
        return;
    }
    void* targetPointer = (void*)((char*)currentPtr + field->offset);
    if (field->type.compare("int") == 0) {
        int value = atoi(valueStr.c_str());
        Send(processHandle, targetPointer, &value, sizeof(value));
    }
    else if (field->type.compare("uint") == 0) {
        uint value = (uint)atoll(valueStr.c_str());
        Send(processHandle, targetPointer, &value, sizeof(value));
    }
    else if (field->type.compare("float") == 0) {
        float value = atof(valueStr.c_str());
        Send(processHandle, targetPointer, &value, sizeof(value));
    }
    else if (field->type.compare("short") == 0) {
        short value = (short)atoi(valueStr.c_str());
        Send(processHandle, targetPointer, &value, sizeof(value));
    }
    else if (field->type.compare("ushort") == 0) {
        ushort value = (ushort)atoi(valueStr.c_str());
        Send(processHandle, targetPointer, &value, sizeof(value));
    }
    else if (field->type.compare("byte") == 0) {
        byte value = (byte)atoi(valueStr.c_str());
        Send(processHandle, targetPointer, &value, sizeof(value));
    }
    else if (field->isPointer && !field->isArray) {
        uint value = (uint)atoll(valueStr.c_str());
        Send(processHandle, targetPointer, &value, sizeof(value));
    }
    else {
        printf("Unsupported\n");
    }
}

int mainTwinsanity(int argc, char** argv) {
    Global* GLOBAL = GLOBAL->Get();
    bool videoPlayerIsUp;
    char* pcVar2;
    char* pcVar3;
    uint uVar4;
    int iVar5;
    uint uVar6;
    int local_c14;
    TwinString cdRomVolume;
    char local_c04[768];

    Logging::Log("Starting up OpenSanity");
    CreateGameWindow();
    InitD3D();
    InitFrameBuffer();
    InitShaders();
    InitDSound(GLOBAL->DS_DEVICE);
    InitSoundBuffer();

    //cdRomVolume.Set("D:\\");
    cdRomVolume.Set("D:\\Documents\\TwinXbox\\Content\\");
    cdRomVolume.SetCdRomVolume();
    CreateSectionRelatedStruct(8);
    CreateSoundRelatedStruct();
    IterateLanguages(GLOBAL->LANGUAGE_COUNT, GLOBAL->LANGUAGE_LIST);

    GLOBAL->GAME_CONTEXT = ParseArguments(argc, argv);
    GLOBAL->RENDERER = new Renderer(GLOBAL->SCREEN_WIDTH, GLOBAL->SCREEN_HEIGHT, GLOBAL->IS_PAL);
    GLOBAL->CLOCK = new Clock(GLOBAL->FPS);
    GLOBAL->INPUT_CONTROLLER = new InputController();
    GLOBAL->IS_WIDESCREEN = false;
    GLOBAL->GAME_CONTEXT->SetupScreenAndCopyright();

    while (GLOBAL->GAME_STATE != GameState::STATE5) {
        DirectSoundDoWork();
        GLOBAL->DAT_003ead50 = 0;
        iVar5 = RegisterScreenSurfaces();
        uVar6 = iVar5 >> 8;
        if (!isVideoPlayerValid(GLOBAL)) {
            uVar4 = iVar5;
        }
        else {
            uVar4 = 1;
        }
        GLOBAL->GAME_CONTEXT->UpdateGameState();
        if (!isVideoPlayerValid(GLOBAL)) {
            uVar4 = uVar4 & 0xffffff00;
        }
        else {
            uVar4 = 0x2001;
        }
        GLOBAL->GAME_CONTEXT->DoStuff(uVar4);
        if (!isVideoPlayerValid(GLOBAL)) {
            videoPlayerIsUp = false;
        }
        else {
            videoPlayerIsUp = true;
        }
        GLOBAL->GAME_CONTEXT->ProcessCredits(videoPlayerIsUp);
        if (!isVideoPlayerValid(GLOBAL)) {
            videoPlayerIsUp = false;
        }
        else {
            videoPlayerIsUp = true;
        }
        GLOBAL->GAME_CONTEXT->EndFrameUpdate(videoPlayerIsUp);
        ReleaseScreenSurfaces();
        HandleWinApiUpdates();
    }

    ReleaseDSound(GLOBAL->DS_DEVICE);
    delete GLOBAL->INPUT_CONTROLLER;
    delete GLOBAL->CLOCK;
    delete GLOBAL->RENDERER;
    delete GLOBAL->GAME_CONTEXT;

	return 0;
}

bool isVideoPlayerValid(Global* GLOBAL) {
    return !(GLOBAL->VIDEO_PLAYER == null || (GLOBAL->VIDEO_PLAYER->flags & 0xf000) != 0x2000);
}

void HandleWinApiUpdates() {
    //WIN API CRAP 
    Global* GLOBAL = GLOBAL->Get();
    UpdateWindow(GLOBAL->MAIN_WINDOW);
    MSG msg;
    while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
}

LRESULT WINAPI MsgProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    //WIN API CRAP
    switch (msg)
    {
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;

    case WM_PAINT:
        ValidateRect(hWnd, NULL);
        return 0;
    }

    return DefWindowProc(hWnd, msg, wParam, lParam);
}

void CreateGameWindow() {
    //WIN API CRAP 
    Global* GLOBAL = Global::Get();
    // Register the window class.
    const wchar_t CLASS_NAME[] = L"Crash Twinsanity";

    ZeroMemory(&(GLOBAL->MAIN_WINDOW_CLASS), sizeof(GLOBAL->MAIN_WINDOW_CLASS));
    GLOBAL->MAIN_WINDOW_CLASS.lpfnWndProc = MsgProc;
    GLOBAL->MAIN_WINDOW_CLASS.hInstance = GetModuleHandle(NULL);
    GLOBAL->MAIN_WINDOW_CLASS.lpszClassName = CLASS_NAME;
    RegisterClass(&(GLOBAL->MAIN_WINDOW_CLASS));

    GLOBAL->MAIN_WINDOW = CreateWindowEx(0, CLASS_NAME, L"Crash Twinsanity", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 640, 480, NULL, NULL,  GetModuleHandle(NULL), NULL);
    Logging::LogCheck(GLOBAL->MAIN_WINDOW != null, "Window created", "Failed  to create main window");
    ShowWindow(GLOBAL->MAIN_WINDOW, SW_SHOW);
}

void DestroyGameWindow() {
    //WIN API CRAP 
    Global* GLOBAL = Global::Get();
    UnregisterClass(L"Crash Twinsanity", GetModuleHandle(NULL));
}

void InitD3D() {
    Global* GLOBAL = GLOBAL->Get();
    D3DPRESENT_PARAMETERS parameters;
    D3DDISPLAYMODE displayMode;
    ZeroMemory(&parameters, sizeof(parameters));
    parameters.BackBufferWidth = GLOBAL->SCREEN_WIDTH;
    parameters.BackBufferHeight = GLOBAL->SCREEN_HEIGHT;
    parameters.BackBufferFormat = D3DFORMAT::D3DFMT_X8R8G8B8;
    parameters.BackBufferCount = 2;
    parameters.EnableAutoDepthStencil = true;
    parameters.AutoDepthStencilFormat = D3DFORMAT::D3DFMT_D24S8;
    parameters.SwapEffect = D3DSWAPEFFECT::D3DSWAPEFFECT_DISCARD;
    parameters.FullScreen_PresentationInterval = 0;
    parameters.Windowed = true;
    
    if (GLOBAL->INTERLACED_MODE) {
        //parameters.Flags |= D3DPRESENTFLAG_INTERLACED; //Not available on Windows
    }
    else {
        //parameters.Flags |= D3DPRESENTFLAG_PROGRESSIVE; //Not available on Windows
    }

    GLOBAL->GRAPHCIS_ENABLED = true;
    if (GLOBAL->GRAPHCIS_ENABLED) {
        int modeCount = GLOBAL->DIRECT3D8->GetAdapterModeCount(D3DADAPTER_DEFAULT);
        for (int i = 0; i < modeCount; ++i) {
            GLOBAL->DIRECT3D8->EnumAdapterModes(D3DADAPTER_DEFAULT, i, &displayMode);
            break;
        }
        if (GLOBAL->IS_WINDOWED) {
            parameters.FullScreen_RefreshRateInHz = 0;
        } else if (GLOBAL->IS_PAL) {
           parameters.FullScreen_RefreshRateInHz = 50;
        }
        else {
            parameters.FullScreen_RefreshRateInHz = 60;
        }
        GLOBAL->FPS = parameters.FullScreen_RefreshRateInHz;
        GLOBAL->FIXED_DELTA_TIME = 1.0f / (float)GLOBAL->FPS;
        HRESULT result = GLOBAL->DIRECT3D8->CreateDevice(D3DADAPTER_DEFAULT, GLOBAL->D3DEVICE_TYPE, GLOBAL->MAIN_WINDOW, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &parameters, &(GLOBAL->D3D_DEVICE));
        Logging::LogCheck(result == D3D_OK, "D3D Device created", "Failed  to create D3D Device");
        if (result == D3D_OK) {
            GLOBAL->D3D_DEVICE->SetRenderState(D3DRS_ZENABLE, 1);
            GLOBAL->D3D_DEVICE->SetRenderState(D3DRS_FILLMODE, D3DFILLMODE::D3DFILL_SOLID);
            GLOBAL->D3D_DEVICE->SetRenderState(D3DRS_CULLMODE, 0);
            GLOBAL->D3D_DEVICE->SetRenderState(D3DRS_STENCILENABLE, 1);
            GLOBAL->D3D_DEVICE->SetRenderState(D3DRS_STENCILENABLE, 0);
            GLOBAL->D3D_DEVICE->SetPixelShader(0);
            GLOBAL->D3D_DEVICE->SetRenderState(D3DRS_TEXTUREFACTOR, 0xFF000000);

            D3DGAMMARAMP gammaRamp;
            ushort rampValue;
            float arg = 0;
            for (int i = 0; i < 256; ++i) {
                arg = (float)i;
                if (0.0 <= arg) {
                    if (arg <= 255.0) {
                        rampValue = (byte)arg;
                    }
                    else {
                        rampValue = 0xff;
                    }
                }
                else {
                    rampValue = 0;
                }
                gammaRamp.blue[i] = rampValue;
                gammaRamp.green[i] = rampValue;
                gammaRamp.red[i] = rampValue;
            }
            GLOBAL->D3D_DEVICE->SetGammaRamp(D3DSGR_NO_CALIBRATION, &gammaRamp); //D3DSGR_IMMEDIATE not in this SDK
        }
    }
    
}

void InitFrameBuffer() {
    Global* GLOBAL = Global::Get();
    D3DXCreateTexture(GLOBAL->D3D_DEVICE, 320, 240, 1, 0, D3DFORMAT::D3DFMT_X8R8G8B8, D3DPOOL_MANAGED, &(GLOBAL->SCREEN_TEXTURE1));
    D3DXCreateTexture(GLOBAL->D3D_DEVICE, 320, 240, 1, 0, D3DFORMAT::D3DFMT_X8R8G8B8, D3DPOOL_MANAGED, &(GLOBAL->SCREEN_TEXTURE2));
    int a = 0;
}

void InitShaders() {
    
}

void InitDSound(IDirectSound8* device) {
    Global* GLOBAL = Global::Get();
    DirectSoundCreate8(null, &device, null);
    device->GetCaps(&GLOBAL->DS_CAPS); //Fails, idk
    //device->SetI3DL2Listener -> Xbox only it seems
}

void ReleaseDSound(IDirectSound8* device) {
    device->Release();
}

void InitSoundBuffer() {
    //TODO LATER
}

void CreateSectionRelatedStruct(int elementCount) {
    Global* GLOBAL = Global::Get();
    GLOBAL->ROOT_SECTION = new UnkRMRelated(elementCount);
    GLOBAL->ROOT_SECTION->field7_0x14 = 1;
}

void CreateSoundRelatedStruct() {
    Global* GLOBAL = Global::Get();
    GLOBAL->PTR_00489a08 = new UnkStruct();
}

void IterateLanguages(const int languageCount, const char** languageNames) {
    Global* GLOBAL = Global::Get();
    GLOBAL->LANG_CNT = languageCount;
    GLOBAL->LANG_NAMES = languageNames;
    GLOBAL->LANG_ARR1 = new char* [languageCount];
    for (int i = 0; i < languageCount; ++i) {
        GLOBAL->LANG_ARR1[i] = null;
    }
}

GameContext* ParseArguments(int argc, char** argv) {
    Global* GLOBAL = GLOBAL->Get();
    char* parsedLines[256];
    uint parsedLinesCnt = 0;
    if (GLOBAL->GAME_CONTEXT == null) {
        if (argc < 2) {
            FileStream fileStream;
            fileStream.OpenFile("command.txt", 1);
            parsedLines[0] = (char*)"arse";
            if (fileStream.handle == INVALID_HANDLE_VALUE) {
                parsedLinesCnt = 1;
            }
            else {
                size_t fileLength = fileStream.GetLength();
                char buffer[2048];
                buffer[fileLength] = 0;
                fileStream.Read((byte*)buffer, fileLength);
                parsedLinesCnt = fileStream.ReadLineByLine(fileLength, buffer, parsedLines);
            }
        }
        else {
            for (parsedLinesCnt = 0; parsedLinesCnt < argc; ++parsedLinesCnt) {
                parsedLines[parsedLinesCnt] = argv[parsedLinesCnt];
            }
        }
        GLOBAL->GAME_CONTEXT = CreateGameContext(parsedLinesCnt, parsedLines);
    }
    return GLOBAL->GAME_CONTEXT;
}

GameContext* CreateGameContext(uint argc,char** argv) {
    GameContext* ctx = new GameContext();
    ctx->ParseLaunchArguments(argc, argv);
    return ctx;
}

void DirectSoundDoWork() {
    //IDK?
}

int RegisterScreenSurfaces() {
    Global* GLOBAL = GLOBAL->Get();
    GLOBAL->D3D_DEVICE->GetRenderTarget(&GLOBAL->RENDER_TARGET);
    GLOBAL->D3D_DEVICE->GetDepthStencilSurface(&GLOBAL->STENCIL_SURFACE);

    D3DLOCKED_RECT lockedRect;
    GLOBAL->RENDER_TARGET->LockRect(&lockedRect, null, 0); //D3DLOCK_NOFLUSH D3DLOCK_TILED only Xbox SDK

    return 0;
}

void ReleaseScreenSurfaces() {
    Global* GLOBAL = GLOBAL->Get();
    GLOBAL->RENDER_TARGET->Release();
    GLOBAL->STENCIL_SURFACE->Release();
}