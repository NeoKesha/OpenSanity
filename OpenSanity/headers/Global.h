#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Unknown/SomeState.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Material/SectionDataMaterialXbox.h"
#include "headers/Unknown/AutoClasses/AutoClass40.h"
#include "headers/Known/Graphics/Decals.h"

class Global {
public:
	static Global* Get() {
		static Global* instance;
		if (instance == null) {
			instance = new Global();
		}

		return instance;
	}

	//COPYRIGHT CHECK
	//uint REFERENCE_CHECKSUM = 0xA24;
	uint REFERENCE_CHECKSUM = 1120;
	//const char* COPYRIGHT_STRING = ")c 2004 Vivendi Universal Games"; 
	const char* COPYRIGHT_STRING = "COPYLEFT LOLOLOL";
	int ENV_INT_114_COPYRIGHT_HASH;

	//ENV CInit
	float ENV_FLOAT_113_SCREEN_FOV = 8191; //45 degree
	float ENV_FLOAT_116_DT3 = 0.0f;
	Decals ENV_CLASS_175_DECAL;

	//UNK ADDRESSES
	int			DAT_003ead50;
	UnkStruct*	PTR_00489a08;
	int INT_003eaac8;
	int INT_003eaacc;
	int INT_003eb440;
	int INT_003ead1c;
	int INT_003ead20;
	int INT_003ead24;
	int INT_003ead28;
	int INT_003ead2c;
	int INT_003ead30;
	int DAT_003ead38;
	int DAT_003eb460;
	int DAT_00495d1a;
	int DAT_00402cb0;
	int DAT_00402cb4;
	int DAT_00402cb8;
	int DAT_00402cbc;
	int DAT_00402cc0;
	int DAT_00402cc4;
	int DAT_00402cc8;
	int DAT_00402ccc;
	int DAT_00402cd0;
	int DAT_00402cd4;
	int DAT_00402cd8;
	int DAT_00402cdc;
	int DAT_00402ce0;
	int DAT_00402ce4;
	int DAT_00402ce8;
	int DAT_00402cec;
	int DAT_00402cf0;
	int DAT_00402cf4;
	int DAT_00402cf8;
	int DAT_00402cfc;
	int DAT_00402d00;
	int DAT_00402d04;
	int DAT_00402d08;
	int DAT_00402d0c;
	int DAT_00402d10;
	int DAT_00402d14;
	int DAT_00402d18;
	int DAT_00402d1c;
	int DAT_00402d20;
	int DAT_00402d24;
	int DAT_00402d28;
	int DAT_00402d2c;
	float FLOAT_0039f094;
	float FLOAT_0039f098;
	float FLOAT_0039f09c;
	float FLOAT_0039f0a0;
	float FLOAT_0039f0a4;
	float FLOAT_0039f0a8;
	float FLOAT_0039f0ac;
	float FLOAT_0039f0b0;
	int DAT_003a3520;
	int DAT_003a3518;
	void* DAT_003a351c;
	void* DAT_00495d28;
	int DAT_00495d10;
	float FLOAT_0039f604;
	float FLOAT_003a36c8;
	int INT_003a3368;
	int DAT_004a7a7c;
	ScreenInfoExt* DAT_003ec544;

	//GLOBAL VALUES
	float SinTable[32768];
	int GRADIENT_STEPS;
	Vector4* GRADIENT;
	TwinsanityMaterialShader* MaterialShader1;
	TwinsanityMaterialShader* MaterialShader2;
	int RENDERER_WIDTH_1;
	int RENDERER_WIDTH_2;
	int RENDERER_WIDTH_3;
	int RENDERER_HEIGHT_1;
	int RENDERER_HEIGHT_2;
	int RENDERER_HEIGHT_3;
	float TIME_PER_TICK_1;
	float TICKS_PER_TIME;
	bool VIEWPORT_CLEARING_NEEDED;
	uint FRAME_NUMBER = 0;
	UnkGlobalStruct UNK_GLOBAL_STRUCT;
	AutoClass40 MATRIX_ARRAY;
	ParticleInstance PARTICLE_INSTANCES[768];
	int PARTICLE_INSTANCE_COUNT;
	int VIDEO_PLAYER_STATE;
	int AI_DIST_SQR;
	int AI_DIST_SQR2;
	int RENDER_DISTANCE_SQR;
	int RENDER_DISTANCE;
	byte BIG_BUFFER1[262144];
	byte BIG_BUFFER2[262144];
	bool IS_CYCLE;
	UnkFamily16A* PTR_DefaultRM;
	UnkFamily16A* PTR_DefaultRM_2;
	UnkClassC* PTR_003e6bf4;
	GameReaderStorage* GAME_READER_STORAGE[2];
	int STR_INDEX[39];
	float DELTA_TIME_SEC1;
	float DELTA_TIME_SEC2;
	InputStruct* INPUT_HANDLE;

	//GLOBAL PARAMETERS
	const char**	LANGUAGE_LIST;
	int				LANGUAGE_COUNT;
	int				LANGUAGE_SELECTED;
	int				SCREEN_WIDTH;
	int				SCREEN_HEIGHT;
	bool			IS_PAL;
	bool			INTERLACED_MODE;
	bool			GRAPHCIS_ENABLED;
	int				FPS;
	float			FIXED_DELTA_TIME;
	bool			IS_WIDESCREEN;
	bool			IS_WINDOWED;

	//DirectX 8 and WinAPI
	HWND MAIN_WINDOW;
	WNDCLASS MAIN_WINDOW_CLASS;
	D3DDEVTYPE D3DEVICE_TYPE;
	IDirect3D8* DIRECT3D8;
	IDirectSound8* DS_DEVICE;
	IDirect3DDevice8* D3D_DEVICE;
	DSCAPS DS_CAPS;
	IDirect3DTexture8* TEXTURE;
	IDirect3DTexture8* SCREEN_TEXTURE1;
	IDirect3DTexture8* SCREEN_TEXTURE2;
	IDirect3DSurface8* RENDER_TARGET;
	IDirect3DSurface8* STENCIL_SURFACE;

	//Game
	TwinString CDROM_VOLUME;
	GameState GAME_STATE;
	Clock* CLOCK = null;
	InputController* INPUT_CONTROLLER;
	VideoPlayer* VIDEO_PLAYER;
	VideoController* VIDEO_CONTROLLER;
	SaveSystemAbstract* SAVE_SYSTEM; //TODO: It's a main menu. duh. Rename later
	Renderer* RENDERER;
	FontRenderer* FONT_RENDERER;
	GameContext* GAME_CONTEXT;
	UnkRMRelated* ROOT_SECTION;
	const char** LANG_NAMES;
	char** LANG_ARR1;
	char** LANG_ARR2;
	int LANG_CNT;
	int LNG_INDEX;
	char* LOCAL_MSG1;
	char* LOCAL_MSG2;
	SomeState SOME_STATE;
	ObjectBuilderStorage* OBJECT_BUILDER_STORAGE;
	GameController* GAME_CONTROLLER_1;
	GameController* GAME_CONTROLLER_2;
	GameController* GAME_CONTROLLER_3;
	GameController* GAME_CONTROLLER_4;
	GameController* GAME_CONTROLLER_5;
	World* WORLD;
	UnkFamily16Base* RM;
	UnkFamily16Sub* UF16SUB;
	UnkFamily17A* UF17;
	GameResourceManager* RESOURCE_MANAGER;

	//RESOURCES
	SectionDataMaterialXbox ENV_CLASS_187_SECTION_MATERIALS;
	
private:
	Global();
};