#include "headers/Known/GameController.h"

#include "headers/Known/Game/GameResources/GameResources.h"
#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"
#include "headers/Unknown/SomeState.h"
#include "headers/Known/Game/Chunks/ChunkDesc.h"
#include "headers/Unknown/Families/Families1X/Family16/UnkFamily16A.h"
#include "headers/Known/Game/GameResourceManager/GameResourceManager.h"
#include "headers/Known/Input/InputController/InputStruct.h"
#include "headers/Known/Credits.h"
#include "headers/Global.h"

GameController::GameController(InputStruct* inputHandle, InputStruct* inputHandle2, FontRenderer* fontRenderer, UnkFamily16A* defaultRm, GameResourceManager* resourceManager, GameResources* gameResources)
{
	Global* GLOBAL = Global::Get();

	int* statePtr;
	this->defaultRm = defaultRm;
	this->fontRenderer = fontRenderer;
	this->resourceManager = resourceManager;
	this->inputHandle1 = inputHandle;
	this->gameResources = gameResources;
	this->inputHandle2 = inputHandle2;
	this->sfxData = SectionDataSfx(3);
	(this->galleryName).value = (char*)0x0;
	(this->galleryName).strLength = 0;
	(this->galleryName).strSize = 0;
	this->font = Font();
	this->field32_0xb0 = AutoClass25();
	this->unkStruct3 = InstanceNodeKSubA();
	this->field42_0x4a0 = InstanceNodeKSubC();
	this->chunkDescriptor = ChunkDesc();
	(this->unkStruct).chunkName.value = (char*)0x0;
	(this->unkStruct).chunkName.strLength = 0;
	(this->unkStruct).chunkName.strSize = 0;
	(this->unkStruct).field4_0x18 = -1;
	(this->unkStruct).flags = 0;
	(this->unkStruct).field1_0x4 = 0;
	(this->unkStruct).someTicks = 0;
	(this->unkStruct).rmDataPool = new byte[0xf000];
	this->chunkDesc = &this->chunkDescriptor;
	this->oleg = Oleg(&this->font, this->chunkDesc);
	statePtr = &this->state;
	this->credits = (Credits*)0x0;
	*statePtr = 0;
	this->flags = 0;
	this->flags2 = 0;
	GLOBAL->INPUT_HANDLE = this->inputHandle1;
	this->waitTime = 0;
	this->progressCounter = 0;
	this->field13_0x1c = 0;
	this->progressGoal = 0;
	*statePtr = *statePtr & 0x87ffffff;
	this->flags = this->flags & 0x8760003f | 0x600000;
	this->timeRelated = 0;
	FUN_000674c0();
	InitSomeShaders();
	this->fontRenderer->field1_0x4 = &this->field32_0xb0;
	*statePtr = *statePtr & 0xfffffffcU | 0x10000;
}
void GameController::ResetCurrentPlayerNodes(bool param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall GameController::ResetCurrentPlayerNodes(GameController *this,bool param_1){
		InstanceContextRefCounter *pIVar1;
		NodeRelated2C *pNVar2;
		bool bVar3;
		uint uVar4;
		InstanceNodeInput *nodeJ;
		InstanceNodeCharacter *nodeC;
		uint index;
		InstanceContext *playerCtx;
		index = (this->chunkDescriptor).flags;
		uVar4 = index >> 0xc & 0xf;
		index = index >> 8 & 0xf;
		if (index != 6) {
		playerCtx = (InstanceContext *)(this->chunkDescriptor).playerInstanceContexts[index];
		if (playerCtx != (InstanceContext *)0x0) {
		playerCtx = *(InstanceContext **)&playerCtx->parent;
		}
		if (playerCtx != (InstanceContext *)0x0) goto LAB_000bca23;
		}
		bVar3 = thunk_FUN_000bc950(this);
		if (bVar3 != false) {
		index = (this->chunkDescriptor).flags >> 8 & 0xf;
		}
		LAB_000bca23:thunk_FUN_000bc6a0(this,index,true,param_1);
		if (((uVar4 != 6) &&(pIVar1 = (this->chunkDescriptor).playerInstanceContexts[uVar4],pIVar1 != (InstanceContextRefCounter *)0x0)) && (pIVar1->ctx != (InstanceContext *)0x0)) {
		index = (this->chunkDescriptor).flags >> 0xc & 0xf;
		if (index == 6) {
		playerCtx = (InstanceContext *)0x0;
		}
		else {
		playerCtx = (InstanceContext *)(this->chunkDescriptor).playerInstanceContexts[index];
		if (playerCtx != (InstanceContext *)0x0) {
		playerCtx = *(InstanceContext **)&playerCtx->parent;
		}
		}
		if (playerCtx != (InstanceContext *)0x0) {
		nodeJ = (InstanceNodeInput *)InstanceDataList::GetNode((InstanceDataList *)(&playerCtx->field27_0xe0 + 1),Input);
		nodeC = (InstanceNodeCharacter *)InstanceDataList::GetNode((InstanceDataList *)(&playerCtx->field27_0xe0 + 1),Character);
		pNVar2 = nodeC->field1_0x18;
		nodeJ->input = (InputStruct *)0x0;
		(pNVar2->field35_0xe0).x = 0.0;
		(pNVar2->field35_0xe0).y = 0.0;
		(pNVar2->field35_0xe0).z = 0.0;
		(pNVar2->field35_0xe0).w = FLOAT_0038639c;
		}
		index = (this->chunkDescriptor).flags;
		(this->chunkDescriptor).flags = index ^ (uVar4 << 0xc ^ index) & 0xf000;
		}
		return;
		}
		
	*/
	return;
}

void GameController::FUN_000ba6c0(int param_1, uint* param_2, char param_3, byte param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall GameController::FUN_000ba6c0(GameController *this,int param_1,undefined4 *param_2,char param_3,byte param_4){
		InstanceNodeAbstract *pIVar1;
		uint uVar2;
		InstanceContext *pIVar3;
		InstanceNodeAbstract *this_00;
		int iVar4;
		if (param_1 == 0) {
		uVar2 = (this->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar2 == 6) {
		pIVar3 = (InstanceContext *)0x0;
		}
		else {
		pIVar3 = (InstanceContext *)(this->chunkDescriptor).playerInstanceContexts[uVar2];
		if (pIVar3 != (InstanceContext *)0x0) {
		pIVar3 = *(InstanceContext **)&pIVar3->parent;
		}
		}
		pIVar1 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar3->field27_0xe0 + 1),Camera);
		if (*(int **)&pIVar1[1].field2_0x8 == (int *)0x0) {
		iVar4 = 0;
		}
		else {
		iVar4 = **(int **)&pIVar1[1].field2_0x8;
		}
		this_00 = InstanceDataList::GetNode((InstanceDataList *)(iVar4 + 0xe4),NodeR);
		if (param_3 != '\0') {
		(**(code **)(*(int *)&pIVar1[3].field2_0x8 + 4))(iVar4);
		}
		FUN_001c75f0((int)this_00,(undefined4 *)&pIVar1[3].field2_0x8,*param_2,param_4);
		}
		else if (param_1 == 3) {
		pIVar3 = (InstanceContext *)(this->field32_0xb0).ctxPtr;
		if (pIVar3 != (InstanceContext *)0x0) {
		pIVar3 = *(InstanceContext **)&pIVar3->parent;
		}
		pIVar1 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar3->field27_0xe0 + 1),NodeR);
		FUN_001c75f0((int)pIVar1,(undefined4 *)&this->unkStruct3,*param_2,param_4);
		return;
		}
		return;
		}
		
	*/
	return;
}

uint GameController::FUN_000af8f0(SomeState* timeState, char param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall GameController::FUN_000af8f0(GameController *this,SomeState *timeState,char param_2){
		bool bVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint state;
		uint uVar5;
		state = (uint)this->state >> 0x1b & 0xf;
		if (state == 7) {
		return 7;
		}
		uVar2 = this->flags;
		uVar5 = 0;
		if ((uVar2 & 0x4000000) != 0) {
		uVar5 = 6;
		this->flags = uVar2 & 0xf8ffffff;
		goto LAB_000afac5;
		}
		if ((uVar2 & 0x1000000) != 0) {
		uVar5 = 4;
		this->flags = uVar2 & 0xf8ffffff;
		goto LAB_000afac5;
		}
		uVar4 = uVar2 >> 0x19 & 1;
		if ((uVar4 != 0) && (DAT_003e2d30 != 0)) {
		this->flags = uVar2 & 0xf8ffffff;
		uVar5 = 5;
		DAT_003e2d30 = 0;
		goto LAB_000afac5;
		}
		uVar3 = uVar2 >> 0xc & 0x3f;
		if ((uVar3 == 0xe) || (uVar3 == 0xf)) {
		uVar2 = uVar2 >> 0x1b & 0xf;
		if ((uVar2 == 4) || (uVar2 == 6)) {
		bVar1 = InputStruct::CheckSomeKeyInput(this->inputHandle1);
		if (bVar1 != false) {
		return state;
		}
		this->flags = this->flags & 0x87ffffff;
		SaveSystem::ResetFlags(SaveSystem);
		LAB_000afa2b:uVar5 = 2;
		goto LAB_000afac5;
		}
		if (state != 3) {
		if ((3 < state) && (state < 7)) {
		bVar1 = InputStruct::CheckSomeKeyInput(this->inputHandle1);
		uVar5 = state;
		if (bVar1 == false) {
		uVar5 = 2;
		DAT_003e2d30 = state;
		goto LAB_000afac5;
		}
		goto LAB_000af9b5;
		}
		goto LAB_000af9bd;
		}
		}
		else {
		if (uVar4 == 0) {
		if ((uVar2 & 0x78000000) == 0x18000000) {
		return 0;
		}
		}
		else {
		if ((uVar2 & 0x78000000) != 0) {
		uVar5 = 5;
		}
		this->flags = uVar2 & 0xf8ffffff;
		LAB_000af9b5:if (uVar5 != 0) goto LAB_000afac5;
		}
		LAB_000af9bd:if (ROOT_SECTION->field7_0x14 == 1) {
		bVar1 = InputStruct::CheckSomeKeyInput(this->inputHandle1);
		if (bVar1 == false) goto LAB_000afa2b;
		if (DAT_003e2d30 == 4) {
		this->flags = this->flags & 0xf9ffffff | 0x1000000;
		LAB_000afa92:DAT_003e2d30 = 0;
		}
		else {
		if (DAT_003e2d30 != 5) {
		this->flags = this->flags & 0xf8ffffff;
		goto LAB_000afa92;
		}
		this->flags = this->flags & 0xfaffffff | 0x2000000;
		}
		if (param_2 == '\0') {
		if (this->state < 0) {
		uVar5 = 1;
		}
		}
		else {
		uVar5 = thunk_FUN_000af730(this);
		}
		goto LAB_000afac5;
		}
		}
		uVar5 = 3;
		LAB_000afac5:this->state = this->state ^ (uVar5 << 0x1b ^ this->state) & 0x78000000;
		if ((param_2 == '\0') || (uVar5 != state)) {
		if (uVar5 == 0) {
		return 0;
		}
		MenuUI(this);
		if (param_2 == '\0') {
		state = this->flags;
		this->flags = (state >> 0xc ^ state) & 0x3f ^ state;
		ResetSomeTimeFlags();
		}
		}
		return uVar5;
		}
		
	*/
	return 0;
}

void GameController::MenuUI() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameController::MenuUI(GameController *this){
		int iVar1;
		UIPresetIndex index;
		Oleg *oleg;
		uint state;
		state = this->state;
		oleg = &this->oleg;
		Oleg::ClearUI(oleg,(this->oleg).parent.uiPresetMask[0x2a].high,(this->oleg).parent.uiPresetMask[0x2a].low,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		switch(state >> 0x1b & 0xf) {
		case 1: In-game Main Menu screen Oleg::ShowUI(oleg,IngameMenu,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		return;
		case 2:iVar1 = INPUT_PORT + 0x20;
		this->flags = this->flags & 0x8fffffff | 0x8000000;
		(this->oleg).caption10.index1 = iVar1;
		iVar1 = (int)(TicksPerTime * FLOAT_00386394);
		 Reconnect controller message index = ReconnectController;
		break;
		case 3:iVar1 = (int)(TicksPerTime * FLOAT_00386394);
		 Problem with a disk message index = DiskProblem;
		break;
		case 4:iVar1 = (int)(TicksPerTime * FLOAT_00386394);
		 Autosave disabled message index = AutosaveDisabled;
		break;
		case 5:iVar1 = (int)(TicksPerTime * FLOAT_00386394);
		 Autosave enabled message index = AutosaveEnabled;
		break;
		case 6:iVar1 = (int)(TicksPerTime * FLOAT_00386394);
		 Autosave failed message index = AutosaveFailed;
		break;
		default:goto switchD_000af49a_caseD_7;
		case 8: Earth Hub gems screen Oleg::ShowUI(oleg,Hub1Gems,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		return;
		case 9: Hub gems screen Oleg::ShowUI(oleg,Hub2Gems,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		return;
		case 10: Hub gems screen Oleg::ShowUI(oleg,Hub3Gems,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		return;
		case 0xb: Hub gems screen Oleg::ShowUI(oleg,Hub4Gems,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		return;
		case 0xc: Extras screen Oleg::ShowUI(oleg,Extras,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		return;
		}
		Oleg::ShowUI(oleg,index,(int)(TicksPerTime * FLOAT_0038cb00),iVar1);
		switchD_000af49a_caseD_7:return;
		}
		
	*/
	return;
}

bool GameController::HandleUIScreenChanges(SomeState* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall GameController::HandleUIScreenChanges(GameController *this,SomeState *param_1){
		uint uVar1;
		SaveSystem *pSVar2;
		uint state;
		Oleg *this_00;
		uint mainMenuFlags;
		pSVar2 = SaveSystem;
		if (SaveSystem != (SaveSystem *)0x0) {
		mainMenuFlags = this->flags;
		state = mainMenuFlags >> 0x1b & 0xf;
		if ((state != 1) && (uVar1 = (SaveSystem->parent).flags1, (uVar1 & 0xf) == 0)) {
		switch(state) {
		case 0:break;
		default:return true;
		case 2:if (((SaveSystem->parent).flags2 >> 4 & 1) == 0) {
		this->flags = mainMenuFlags & 0xf9ffffff | 0x1000000;
		ResetFlag1(this);
		return true;
		}
		this->flags = mainMenuFlags & 0x8fffffff | 0x8000000;
		this->timeRelated = param_1->currentTime;
		return false;
		case 3:Oleg::ClearUI(&this->oleg,AutosaveData,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		if ((this->oleg).field5_0x320 == 1) {
		Oleg::ClearUI(&this->oleg,DimmedScreen,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		ChunkList::SetTimeFlagsAll();
		}
		if (((pSVar2->parent).flags2 >> 4 & 1) == 0) {
		this->flags = this->flags & 0xfcffffff | 0x4000000;
		ResetFlag1(this);
		return true;
		}
		this->flags = this->flags & 0x8fffffff | 0x8000000;
		this->timeRelated = param_1->currentTime;
		return false;
		case 4:if (((SaveSystem->parent).flags2 >> 4 & 1) != 0) {
		this->flags = mainMenuFlags & 0xfaffffff | 0x2000000;
		InitCtxAndWriteRmToPool(this,true);
		return false;
		}
		if ((uVar1 >> 0x1d & 1) == 0) {
		this->flags = mainMenuFlags & 0x87ffffff;
		}
		else {
		this->flags = mainMenuFlags & 0xf9ffffff | 0x1000000;
		ResetFlag1(this);
		}
		this_00 = &this->oleg;
		if ((this->flags & 0x3f000) != 0x7000) {
		Oleg::ClearUI(this_00,ClearUIMaskA,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		Oleg::ShowUI(this_00,IngameMenu,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		return false;
		}
		Oleg::ClearUI(this_00,ClearUIMaskA,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		Oleg::ShowUI(this_00,TileScreenMenu,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		return false;
		case 5:if (((SaveSystem->parent).flags2 >> 4 & 1) == 0) {
		Oleg::ClearUI(&this->oleg,ClearUIMaskA,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		Oleg::ShowUI(&this->oleg,TileScreenMenu,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		ResetFlag1(this);
		return false;
		}
		UpdateFlags(this,true);
		return false;
		case 6:if (((SaveSystem->parent).flags2 >> 4 & 1) == 0) {
		if ((uVar1 >> 0x1d & 1) == 0) {
		this->flags = mainMenuFlags & 0x87ffffff;
		}
		else {
		this->flags = mainMenuFlags & 0xf9ffffff | 0x1000000;
		ResetFlag1(this);
		}
		}
		else {
		this->flags = mainMenuFlags & 0xfaffffff | 0x2000000;
		SetResetSomeFlags(this);
		}
		Oleg::ClearUI(&this->oleg,ClearUIMaskA,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		Oleg::ShowUI(&this->oleg,IngameMenu,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		return false;
		}
		}
		}
		return false;
		}
		
	*/
	return false;
}

bool GameController::FUN_000bc6a0(int index, bool param_2, bool param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall GameController::FUN_000bc6a0(GameController *this,int index,bool param_2,bool param_3){
		NodeRelated2C *pNVar1;
		InstanceContextRefCounter *pIVar2;
		uint uVar3;
		int iVar4;
		InstanceNodeInput *nodeInput;
		InstanceNodeCamera *nodeCamera;
		InstanceNodeCharacter *nodeChar;
		InstanceContext *this_00;
		InstanceContext *playerCtx;
		undefined3 in_stack_00000009;
		InstanceContextRefCounter *ctx;
		ChunkData *chunkData;
		InstanceDataList *nodes;
		if (index == 6) {
		playerCtx = (InstanceContext *)0x0;
		}
		else {
		ctx = (this->chunkDescriptor).playerInstanceContexts[index];
		if (ctx == (InstanceContextRefCounter *)0x0) {
		playerCtx = (InstanceContext *)0x0;
		}
		else {
		playerCtx = ctx->ctx;
		}
		}
		if (playerCtx != (InstanceContext *)0x0) {
		if (param_2 == false) {
		iVar4 = 0xc;
		}
		else {
		iVar4 = 8;
		}
		ResetCharacterNodes(this,(this->chunkDescriptor).flags >> iVar4 & 0xf,_param_2,param_3);
		if (param_2 == false) {
		uVar3 = (this->chunkDescriptor).flags;
		(this->chunkDescriptor).flags = uVar3 ^ (index << 0xc ^ uVar3) & 0xf000;
		return true;
		}
		chunkData = (playerCtx->parent).chunkData;
		nodes = &playerCtx->nodes;
		nodeInput = (InstanceNodeInput *)InstanceDataList::GetNode(nodes,Input);
		nodeCamera = (InstanceNodeCamera *)InstanceDataList::GetNode(nodes,Camera);
		_param_2 = (InstanceContext *)nodeCamera->ctxPtr;
		if (_param_2 != (InstanceContext *)0x0) {
		_param_2 = (InstanceContext *)(_param_2->parent).vtable;
		}
		nodeChar = (InstanceNodeCharacter *)InstanceDataList::GetNode(nodes,Character);
		pNVar1 = nodeChar->field1_0x18;
		InstanceNodeKSubModule2B::thunk_FUN_00059f30(&(nodeCamera->struct).struct.struct3,playerCtx);
		InstanceContext::SetNode(nodeCamera->ctx,false,(InstanceNodeAbstract *)nodeCamera);
		pIVar2 = nodeCamera->ctxPtr;
		if ((pIVar2 != (InstanceContextRefCounter *)0x0) && (pIVar2->ctx != (InstanceContext *)0x0)) {
		if (pIVar2 == (InstanceContextRefCounter *)0x0) {
		this_00 = (InstanceContext *)0x0;
		}
		else {
		this_00 = pIVar2->ctx;
		}
		(*((this_00->parent).vtable)->Method1)(this_00);
		}
		if (_param_2 != (InstanceContext *)0x0) {
		AutoClass25::thunk_FUN_000c5310(&this->field32_0xb0,_param_2);
		thunk_FUN_000c52c0((int)&DAT_0049d240,_param_2);
		ChunkData::FUN_0013e400(chunkData,_param_2);
		}
		nodeInput->input = this->inputHandle1;
		thunk_FUN_000c5370(playerCtx);
		GLOBAL_CHARACTER_R1 = (NodeRelated1C *)(pNVar1->parent).parent.related;
		PTR_003d0eec = (NodeRelated1C *)(pNVar1->parent).parent.related;
		GLOBAL_CHARACTER_R2 = pNVar1;
		PTR_003d0ee8 = pNVar1;
		if (chunkData != (ChunkData *)0x0) {
		iVar4 = *(int *)&chunkData->field_0x1e8;
		FUN_00103f10('\x01');
		DAT_003ec539 = 0;
		FLOAT_0039f278 = FLOAT_0038639c;
		DrawToTexture(iVar4);
		::EmptyFunction();
		}
		uVar3 = (this->chunkDescriptor).flags;
		(this->chunkDescriptor).flags = uVar3 ^ (index << 8 ^ uVar3) & 0xf00;
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void GameController::LoadLocalizedCodeAndAgentLabFiles() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameController::LoadLocalizedCodeAndAgentLabFiles(GameController *this){
		int langId;
		MemoryStream *stream;
		uint i;
		int CodeStrPtr;
		TwinString langTxtPath;
		langId = LNG_INDEX;
		i = 0;
		CodeStrPtr = (int)&Code - (int)this;
		do {
		TwinString::Set(&langTxtPath,"Language\\");
		TwinString::Append(&langTxtPath,*(char **)((int)this + CodeStrPtr));
		TwinString::Append(&langTxtPath,"\\");
		TwinString::Append(&langTxtPath,(&PTR_s_English_0039e158)[langId]);
		TwinString::Append(&langTxtPath,".txt");
		stream = (MemoryStream *)VirtualPool::AllocateMemory(0x14);
		if (stream == (MemoryStream *)0x0) {
		stream = (MemoryStream *)0x0;
		}
		else {
		stream = MemoryStream::ConstructFile(stream,langTxtPath.value,'\x01');
		}
		*(MemoryStream **)this = stream;
		LoadLocalizedMessages(i,langId,(char *)stream->startPtr);
		TwinString::Dispose(&langTxtPath);
		i = i + 1;
		this = (GameController *)&this->field_0x4;
		}
		 while (i < 2);
		FinalizeLanguage();
		return;
		}
		
	*/
	return;
}

uint GameController::FUN_000af730() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling uint __fastcall GameController::FUN_000af730(GameController *this){
		bool bVar1;
		bool bVar2;
		char cVar3;
		uint uVar4;
		uVar4 = (uint)this->state >> 0x1b & 0xf;
		if ((((byte)(this->oleg).option02.parent.parent.flags & 0xf) != 3) &&(((byte)(this->oleg).option01.parent.parent.flags & 0xf) != 3)) {
		bVar1 = InputStruct::CheckKey(this->inputHandle1,KEY_WHITE,'\x01');
		if ((bVar1 == false) &&(bVar1 = InputStruct::CheckKey(this->inputHandle1,KEY_LEFT_TRIGGER,'\x01'), bVar1 == false)){
		bVar1 = false;
		}
		else {
		bVar1 = true;
		}
		bVar2 = InputStruct::CheckKey(this->inputHandle1,KEY_BLACK,'\x01');
		if ((bVar2 != false) ||(cVar3 = InputStruct::CheckKey(this->inputHandle1,KEY_RIGHT_TRIGGER,'\x01'),(bool)cVar3 != false)) {
		cVar3 = '\x01';
		}
		if (bVar1) {
		switch(uVar4) {
		case 1:switchD_000af809_caseD_b:return 0xc;
		default:return uVar4;
		case 8:goto switchD_000af809_caseD_c;
		case 9:switchD_000af809_caseD_1:return 8;
		case 10:return 9;
		case 0xb:return 10;
		case 0xc:uVar4 = (this->chunkDescriptor).flags >> 0x1a & 0x1f;
		if (uVar4 < 6) {
		return 8;
		}
		if (uVar4 < 0xd) {
		return 9;
		}
		return (0x13 < uVar4) + 10;
		}
		}
		if (cVar3 != '\0') {
		switch(uVar4) {
		case 1:goto switchD_000af809_caseD_1;
		default:return uVar4;
		case 8:return ((((byte)((this->chunkDescriptor).flags >> 0x1a) & 0x1f) < 6) - 1 & 0xfffffffd) + 0xc;
		case 9:return (uint)(((byte)((this->chunkDescriptor).flags >> 0x1a) & 0x1f) < 0xd) * 2 + 10;
		case 10:return (((byte)((this->chunkDescriptor).flags >> 0x1a) & 0x1f) < 0x14) + 0xb;
		case 0xb:goto switchD_000af809_caseD_b;
		case 0xc:goto switchD_000af809_caseD_c;
		}
		}
		}
		if ((uVar4 < 2) || (6 < uVar4)) {
		return uVar4;
		}
		switchD_000af809_caseD_c:return 1;
		}
		
	*/
	return 0;
}

void GameController::ResetLevelStuff(int flags) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameController::ResetLevelStuff(GameController *this,int flags){
		ChunkList *chunkList;
		uint local_c;
		undefined4 local_8;
		undefined4 local_4;
		ChunkData *chunk;
		VideoController *videoController;
		videoController = VideoController;
		local_c = 0xfffffdff;
		local_8 = 0;
		local_4 = 0;
		if ((flags == 0) || (flags._0_1_ = '\0', flags == 1)) {
		flags._0_1_ = '\x01';
		}
		ChunkList::GetInstance();
		chunkList = ChunkList::GetInstance();
		for (chunk = chunkList->firstChunk;
		 chunk != (ChunkData *)0x0;
		 chunk = chunk->next) {
		if (chunk->timers != (UnkTimePack *)0x0) {
		UnkTimePack::ResetFlags(chunk->timers);
		}
		}
		ProgressGameState2();
		ResetSomeChunkTimers();
		ChunkDesc::InitPlayerContexts(&this->chunkDescriptor,flags,this->defaultRm);
		(*(code *)((this->oleg).parent.vtable)->ResetScreenMessage)();
		FUN_001b5d00(flags,&local_c);
		VideoController::FUN_001f5be0(videoController);
		SoundRelatedStuff();
		Decals::FUN_000fe1c0(&ENV_CLASS_175_DECAL);
		FUN_00123720();
		DoMemoryTasks(false);
		UnkFamily16A::FUN_001b3100(this->defaultRm,flags,(char)flags);
		UpdateTime();
		return;
		}
		
	*/
	return;
}

bool GameController::SetResetSomeFlags() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall GameController::SetResetSomeFlags(GameController *this){
		uint *puVar1;
		uint uVar2;
		uVar2 = (SaveSystem->parent).flags1;
		puVar1 = &(SaveSystem->parent).flags1;
		if ((uVar2 & 0xf) == 0) {
		if ((uVar2 >> 0x1c & 1) != 0) {
		this->flags = this->flags & 0x8fffffff | 0x8000000;
		*puVar1 = *puVar1 | 0x20000000;
		this->timeRelated = 0;
		return true;
		}
		puVar1 = &(SaveSystem->parent).flags1;
		if (((SaveSystem->parent).flags1 >> 0x1d & 1) != 0) {
		this->flags = this->flags & 0x87ffffff;
		*puVar1 = *puVar1 & 0xdfffffff;
		return false;
		}
		this->flags = this->flags & 0x87ffffff;
		}
		return false;
		}
		
	*/
	return false;
}

bool GameController::ResetCharacterNodes(int index, uint param_2, bool param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling bool __thiscall GameController::ResetCharacterNodes(GameController *this,int index,undefined4 param_2,bool param_3){
		InstanceDataList *this_00;
		NodeRelated2C *pNVar1;
		InstanceContextRefCounter *pIVar2;
		InstanceContext *playerCtx;
		InstanceNodeInput *nodeInput;
		InstanceNodeCharacter *nodeCharacter;
		InstanceNodeCamera *nodeCamera;
		if (index == 6) {
		playerCtx = (InstanceContext *)0x0;
		}
		else {
		playerCtx = (InstanceContext *)(this->chunkDescriptor).playerInstanceContexts[index];
		if (playerCtx != (InstanceContext *)0x0) {
		playerCtx = *(InstanceContext **)&playerCtx->parent;
		}
		}
		if (playerCtx == (InstanceContext *)0x0) {
		return false;
		}
		this_00 = (InstanceDataList *)(&playerCtx->field27_0xe0 + 1);
		nodeInput = (InstanceNodeInput *)InstanceDataList::GetNode(this_00,Input);
		nodeCharacter = (InstanceNodeCharacter *)InstanceDataList::GetNode(this_00,Character);
		pNVar1 = nodeCharacter->field1_0x18;
		nodeInput->input = (InputStruct *)0x0;
		(pNVar1->field35_0xe0).x = 0.0;
		(pNVar1->field35_0xe0).y = 0.0;
		(pNVar1->field35_0xe0).z = 0.0;
		(pNVar1->field35_0xe0).w = FLOAT_0038639c;
		if (param_3 != false) {
		nodeCamera = (InstanceNodeCamera *)InstanceDataList::GetNode(this_00,Camera);
		InstanceContext::FUN_000f85a0(nodeCamera->ctx,'\0',(int *)nodeCamera);
		pIVar2 = nodeCamera->ctxPtr;
		if ((pIVar2 != (InstanceContextRefCounter *)0x0) && (pIVar2->ctx != (InstanceContext *)0x0)) {
		if (pIVar2 == (InstanceContextRefCounter *)0x0) {
		(**(code **)(iRam00000000 + 8))();
		return true;
		}
		(*((pIVar2->ctx->parent).vtable)->Method2)(pIVar2->ctx);
		}
		}
		return true;
		}
		
	*/
	return false;
}

uint* GameController::FUN_000bc490(int param_1, char param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling undefined4 * __thiscall GameController::FUN_000bc490(GameController *this,int param_1,char param_2){
		int *piVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		InstanceContextRefCounter *pIVar6;
		undefined **ppuVar7;
		InstanceTransform *pIVar8;
		GameController *pGVar9;
		InstanceNodeAbstract *pIVar10;
		uint uVar11;
		InstanceContext *pIVar12;
		InstanceNodeKSubC *this_00;
		InstanceContext *pIVar13;
		this->state = this->state ^ (param_1 << 0x13 ^ this->state) & 0x780000U;
		if (param_1 == 0) {
		uVar11 = (this->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar11 == 6) {
		pIVar13 = (InstanceContext *)0x0;
		}
		else {
		pIVar6 = (this->chunkDescriptor).playerInstanceContexts[uVar11];
		if (pIVar6 == (InstanceContextRefCounter *)0x0) {
		pIVar13 = (InstanceContext *)0x0;
		}
		else {
		pIVar13 = pIVar6->ctx;
		}
		}
		pIVar10 = InstanceDataList::GetNode(&pIVar13->nodes,Camera);
		if (*(InstanceContext ***)&pIVar10[1].field2_0x8 == (InstanceContext **)0x0) {
		pIVar12 = (InstanceContext *)0x0;
		}
		else {
		pIVar12 = **(InstanceContext ***)&pIVar10[1].field2_0x8;
		}
		thunk_FUN_00083940(pIVar10 + 2,(int)pIVar12,(int)pIVar13,param_2);
		piVar1 = &(pIVar12->parent).flags;
		*piVar1 = *piVar1 & 0xfffdffff;
		AutoClass25::thunk_FUN_000c5310(&this->field32_0xb0,pIVar12);
		return (undefined4 *)pIVar12;
		}
		if (param_1 != 3) {
		if (param_1 != 4) {
		return (undefined4 *)0x0;
		}
		pIVar6 = (this->field32_0xb0).ctxPtr;
		if (pIVar6 == (InstanceContextRefCounter *)0x0) {
		pIVar13 = (InstanceContext *)0x0;
		}
		else {
		pIVar13 = pIVar6->ctx;
		}
		pGVar9 = (GameController *)InstanceDataList::GetNode(&pIVar13->nodes,NodeR);
		this_00 = &this->field42_0x4a0;
		thunk_FUN_000c42f0((int)this_00,0);
		ppuVar7 = (this->field42_0x4a0).parent.field13_0x10;
		(this->field42_0x4a0).parent.field13_0x10 = (undefined **)((uint)ppuVar7 | 2);
		(this->field42_0x4a0).parent.field13_0x10 = (undefined **)((uint)ppuVar7 & 0xfffffffe | 2);
		thunk_FUN_000c4290((int)this_00,0);
		thunk_FUN_000c4350((int)this_00,0);
		FUN_001c7570(pGVar9,(FontRenderer *)this_00,(bool)param_2);
		return (undefined4 *)pIVar13;
		}
		pIVar6 = (this->field32_0xb0).ctxPtr;
		if (pIVar6 == (InstanceContextRefCounter *)0x0) {
		pIVar13 = (InstanceContext *)0x0;
		}
		else {
		pIVar13 = pIVar6->ctx;
		}
		pGVar9 = (GameController *)InstanceDataList::GetNode(&pIVar13->nodes,NodeR);
		uVar11 = (this->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar11 == 6) {
		pIVar12 = (InstanceContext *)0x0;
		}
		else {
		pIVar12 = (InstanceContext *)(this->chunkDescriptor).playerInstanceContexts[uVar11];
		if (pIVar12 != (InstanceContext *)0x0) {
		pIVar12 = *(InstanceContext **)&pIVar12->parent;
		}
		}
		pIVar8 = (pIVar12->parent).transform;
		if ((*(byte *)((Vector4 *)(&pIVar8->matrix + 1) + 2) & 4) != 0) {
		fVar2 = (pIVar8->matrix).m44;
		fVar3 = (pIVar8->matrix).m43;
		fVar4 = (pIVar8->matrix).m42;
		((Vector4 *)(&pIVar8->matrix + 1))->x = (pIVar8->matrix).m41;
		((Vector4 *)(&pIVar8->matrix + 1))->y = fVar4;
		((Vector4 *)(&pIVar8->matrix + 1))->z = fVar3;
		((Vector4 *)(&pIVar8->matrix + 1))->w = fVar2;
		*(uint *)((Vector4 *)(&pIVar8->matrix + 1) + 2) =(uint)((Vector4 *)(&pIVar8->matrix + 1))[2].x & 0xfffffffa;
		}
		fVar2 = ((Vector4 *)(&pIVar8->matrix + 1))->x;
		fVar3 = ((Vector4 *)(&pIVar8->matrix + 1))->y;
		fVar4 = ((Vector4 *)(&pIVar8->matrix + 1))->z;
		fVar5 = ((Vector4 *)(&pIVar8->matrix + 1))->w;
		FUN_001c7570(pGVar9,(FontRenderer *)&this->unkStruct3,(bool)param_2);
		(this->unkStruct3).struct3.field29_0xa0.x = fVar2;
		(this->unkStruct3).struct3.field29_0xa0.y = fVar3;
		(this->unkStruct3).struct3.field29_0xa0.z = fVar4;
		(this->unkStruct3).struct3.field29_0xa0.w = fVar5;
		return (undefined4 *)pIVar13;
		}
		
	*/
	return null;
}

bool GameController::PlayRandomFMV(uint param_1, int startIndex, int endIndex) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall GameController::PlayRandomFMV(GameController *this,float param_1,int startIndex,int endIndex){
		float val;
		val = PerceptRandom::GetUtilityScoreInternal();
		if (val < FLOAT_0038639c) {
		endIndex = (int)((float)((endIndex - startIndex) + 1) * val) + startIndex;
		}
		this->fmvTimeRelated = param_1;
		this->fmvIndex = endIndex;
		this->flags = this->flags & 0xff37ffff | 0x340000;
		return true;
		}
		
	*/
	return false;
}

bool GameController::FUN_000bc950() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling bool __fastcall GameController::FUN_000bc950(GameController *this){
		bool bVar1;
		uint index;
		InstanceContext *ctx;
		uint i;
		ChunkData *chunkData;
		ChunkDataRefCounter *chunkDataRef;
		chunkDataRef = WORLD->currentChunk->SM->chunkDataRef;
		index = (this->chunkDescriptor).flags >> 8 & 0xf;
		if (chunkDataRef == (ChunkDataRefCounter *)0x0) {
		chunkData = (ChunkData *)0x0;
		}
		else {
		chunkData = chunkDataRef->chunk;
		}
		i = 0;
		do {
		if (i != 0) {
		if (index == 6) {
		ctx = (InstanceContext *)0x0;
		}
		else {
		ctx = (InstanceContext *)(this->chunkDescriptor).playerInstanceContexts[index];
		if (ctx != (InstanceContext *)0x0) {
		ctx = *(InstanceContext **)&ctx->parent;
		}
		}
		if ((ctx != (InstanceContext *)0x0) && ((ctx->parent).chunkData == chunkData)) {
		bVar1 = thunk_FUN_000bc6a0(this,index,true,true);
		return bVar1;
		}
		}
		index = index + 1;
		if (5 < (int)index) {
		index = 0;
		}
		i = i + 1;
		if (5 < i) {
		return false;
		}
		}
		 while( true );
		}
		
	*/
	return false;
}

bool GameController::SetOverlay(UIPresetIndex index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall GameController::SetOverlay(GameController *this,UIPresetIndex index){
		bool bVar1;
		SectionReaderUnknownX *reader;
		FileResourceDescG *pFVar2;
		int iVar3;
		UIElementAbstract *pUVar4;
		uint psmId;
		char *srcStr;
		TwinString loadingScreenPsmPath;
		Oleg *oleg;
		GameReaderStorage *unkClass;
		iVar3 = this->field13_0x1c;
		oleg = &this->oleg;
		this->field13_0x1c = 0;
		unkClass = GAME_READER_STORAGE[1];
		psmId = (this->oleg).field4_0x31c;
		if (((psmId & 1) == 0) && ((psmId & 0x1fe) != 0x18)) {
		if (((*(byte *)&(this->oleg).field4_0x31c & 1) != 0) ||(psmId = (this->oleg).field4_0x31c, ((psmId >> 8 ^ psmId) & 0x1fe) != 0)) {
		bVar1 = Oleg::thunk_FUN_000c2290(oleg,PSMScreenNoUI);
		if (bVar1 != false) {
		Oleg::ClearUI(oleg,(this->oleg).parent.uiPresetMask[0x2a].high,(this->oleg).parent.uiPresetMask[0x2a].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		Oleg::ShowUI(oleg,(this->oleg).parent.uiPresetMask[0x27].high,(this->oleg).parent.uiPresetMask[0x27].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		return false;
		}
		bVar1 = Oleg::thunk_FUN_000c2230(oleg,0x28);
		if (bVar1 == false) {
		return false;
		}
		if (((this->oleg).field4_0x31c & 0x1fe) == 0x18) {
		return false;
		}
		pUVar4 = (UIElementAbstract *)(this->oleg).iconsPsm3;
		iVar3 = 8;
		do {
		(*pUVar4->vtable->FreeMaterial)(pUVar4);
		pUVar4 = pUVar4 + 2;
		iVar3 = iVar3 + -1;
		}
		 while (iVar3 != 0);
		(this->oleg).field4_0x31c = (this->oleg).field4_0x31c & 0xfffffe19 | 0x18;
		return false;
		}
		bVar1 = Oleg::thunk_FUN_000c2230(oleg,0x28);
		if (bVar1 != false) {
		Oleg::ClearUI(oleg,(this->oleg).parent.uiPresetMask[0x2a].high,(this->oleg).parent.uiPresetMask[0x2a].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		Oleg::ShowUI(oleg,(this->oleg).parent.uiPresetMask[0x27].high,(this->oleg).parent.uiPresetMask[0x27].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		Oleg::ShowUI(oleg,(this->oleg).parent.uiPresetMask[index].high,(this->oleg).parent.uiPresetMask[index].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		return false;
		}
		bVar1 = Oleg::thunk_FUN_000c2290(oleg,PSMScreenNoUI);
		if (bVar1 == false) {
		return false;
		}
		if (iVar3 != 0) {
		this->field13_0x1c = iVar3;
		return true;
		}
		this->field13_0x1c = this->progressCounter;
		return true;
		}
		if ((*(byte *)&(this->oleg).field4_0x31c & 1) != 0) {
		return false;
		}
		psmId = (this->oleg).field4_0x31c >> 9 & 0xff;
		loadingScreenPsmPath.value = (char *)0x0;
		loadingScreenPsmPath.strLength = 0;
		loadingScreenPsmPath.strSize = 0;
		if (psmId == 0) {
		TwinString::Copy(&loadingScreenPsmPath,"Language\\");
		TwinString::Append(&loadingScreenPsmPath,PSM_PATH_ARRAY);
		index = CONCAT22(index._2_2_,0x5c);
		TwinString::Append(&loadingScreenPsmPath,(char *)&index);
		srcStr = LANG_NAMES[LNG_INDEX];
		}
		else {
		if ((8 < psmId) && (psmId < 0xb)) {
		TwinString::Copy(&loadingScreenPsmPath,(this->oleg).psmPath.value);
		goto LAB_000b5f42;
		}
		TwinString::Copy(&loadingScreenPsmPath,"Language\\");
		srcStr = (&PSM_PATH_ARRAY)[psmId];
		}
		TwinString::Append(&loadingScreenPsmPath,srcStr);
		LAB_000b5f42:TwinString::Append(&loadingScreenPsmPath,PSM_EXT_STR);
		if (((this->oleg).field4_0x31c & 0x1fe) != 0x18) {
		pUVar4 = (UIElementAbstract *)(this->oleg).iconsPsm3;
		iVar3 = 8;
		do {
		(*pUVar4->vtable->FreeMaterial)(pUVar4);
		pUVar4 = pUVar4 + 2;
		iVar3 = iVar3 + -1;
		}
		 while (iVar3 != 0);
		(this->oleg).field4_0x31c = (this->oleg).field4_0x31c & 0xfffffe19 | 0x18;
		}
		psmId = (this->oleg).field4_0x31c;
		(this->oleg).field4_0x31c = (psmId >> 8 ^ psmId) & 0x1fe ^ psmId | 1;
		reader = (SectionReaderUnknownX *)VirtualPool::AllocateMemory(0xc);
		if (reader == (SectionReaderUnknownX *)0x0) {
		reader = (SectionReaderUnknownX *)0x0;
		}
		else {
		reader->oleg = oleg;
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_X;
		reader->someIndex = 2;
		}
		pFVar2 = (FileResourceDescG *)VirtualPool::AllocateMemory(0x30);
		if (pFVar2 == (FileResourceDescG *)0x0) {
		pFVar2 = (FileResourceDescG *)0x0;
		}
		else {
		pFVar2 = FileResourceDescG::Construct(pFVar2,loadingScreenPsmPath.value,&reader->parent,0xd);
		}
		GameReaderStorage::AddFileDesc(unkClass,&pFVar2->parent,0);
		TwinString::Dispose(&loadingScreenPsmPath);
		return false;
		}
		
	*/
	return false;
}

bool GameController::PlayFMV(SomeState* param_1, float time, FMVIndex videoIndex, char param_4, SomeState* feedbackInt) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall GameController::PlayFMV(GameController *this,SomeState *param_1,float time,FMVIndex videoIndex,char param_4,SomeState *feedbackInt){
		byte bVar1;
		int iVar2;
		bool videoPlayerIsFine;
		bool keyPressed4;
		bool keyPressed9;
		uint audioTrackIndex;
		int iVar3;
		bool videoPlayerError;
		bool skipVideo;
		char *fmvFileName;
		InputStruct *inputSource;
		uint videoFlags;
		VideoPlayer *videoPlayer;
		videoPlayer = VideoPlayer;
		iVar2 = this->field13_0x1c;
		iVar3 = 0;
		videoPlayerError = VideoPlayer == (VideoPlayer *)0x0;
		this->field13_0x1c = 0;
		if (videoPlayerError) {
		if (feedbackInt != (SomeState *)0x0) {
		*(undefined *)&feedbackInt->feedbackCode = 0;
		}
		return true;
		}
		if (this->progressCounter == this->progressGoal) {
		Oleg::ClearUI(&this->oleg,(this->oleg).parent.uiPresetMask[0x2a].high,(this->oleg).parent.uiPresetMask[0x2a].low,(int)time,(int)(TicksPerTime * FLOAT_00386394));
		Oleg::ShowUI(&this->oleg,(this->oleg).parent.uiPresetMask[0x27].high,(this->oleg).parent.uiPresetMask[0x27].low,(int)time,(int)(TicksPerTime * FLOAT_00386394));
		}
		else if ((int)time - (int)(TicksPerTime * FLOAT_0038a774) <param_1->currentTime - this->timeFromStart) {
		if (iVar2 == 0) {
		bVar1 = *(byte *)&FMVFileList[videoIndex].flags;
		fmvFileName = FMVFileList[videoIndex].fname;
		videoFlags = FMVFileList[videoIndex].flags;
		audioTrackIndex = -(uint)((videoFlags >> 1 & 7) != 1) & LNG_INDEX;
		this->field13_0x1c = this->progressCounter;
		Oleg::ClearUI(&this->oleg,(this->oleg).parent.uiPresetMask[0x27].high,(this->oleg).parent.uiPresetMask[0x27].low,(int)(TicksPerTime * FLOAT_00386608),(int)(TicksPerTime * FLOAT_00386394));
		videoPlayerIsFine =VideoPlayer::SetVideoInfo(videoPlayer,fmvFileName,audioTrackIndex,bVar1 & 1,videoFlags >> 4 & 0xfff,videoFlags >> 0x10 & 0xfff);
		if (videoPlayerIsFine == false) {
		if (feedbackInt != (SomeState *)0x0) {
		*(undefined *)&feedbackInt->feedbackCode = 0;
		}
		Oleg::ShowUI(&this->oleg,BlackScreen,(int)(TicksPerTime * 0.0),(int)(TicksPerTime * 0.0));
		return true;
		}
		}
		else {
		this->field13_0x1c = iVar2;
		if (((videoPlayer->parent).flags & 0xf000) != 0x2000) {
		if (feedbackInt != (SomeState *)0x0) {
		*(undefined *)&feedbackInt->feedbackCode = 0;
		}
		Oleg::ShowUI(&this->oleg,BlackScreen,(int)(TicksPerTime * 0.0),(int)(TicksPerTime * 0.0));
		return true;
		}
		videoPlayerError = false;
		skipVideo = false;
		if (((videoIndex == FMV_Attract) || (videoIndex == FMV_Vivendi)) ||(videoIndex == FMV_TTIdent)) {
		do {
		skipVideo = videoPlayerError;
		inputSource = *(InputStruct **)((int)InputController->inputSourceList + iVar3);
		if (inputSource != (InputStruct *)0x0) {
		 Start button check keyPressed4 = InputStruct::CheckKey(inputSource,KEY_START,'\x01');
		if (keyPressed4 == false) {
		 A button check keyPressed9 = InputStruct::CheckKey(inputSource,KEY_A,'\x01');
		if (keyPressed9 == false) goto LAB_000af002;
		}
		skipVideo = true;
		}
		LAB_000af002:iVar3 = iVar3 + 4;
		videoPlayerError = skipVideo;
		}
		 while (iVar3 < 0x10);
		}
		else {
		 A button check videoPlayerError = InputStruct::CheckKey(this->inputHandle1,KEY_A,'\x01');
		if (videoPlayerError != false) {
		skipVideo = true;
		}
		}
		if ((param_4 != '\0') && (skipVideo)) {
		if (feedbackInt != (SomeState *)0x0) {
		*(undefined *)&feedbackInt->feedbackCode = 1;
		}
		Oleg::ShowUI(&this->oleg,BlackScreen,(int)(TicksPerTime * 0.0),(int)(TicksPerTime * 0.0));
		VideoPlayer::FUN_002097f0(videoPlayer);
		return true;
		}
		}
		}
		return false;
		}
		
	*/
	return false;
}

bool GameController::LoadFrontendAssets() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall GameController::LoadFrontendAssets(GameController *this){
		Sfx *memptr;
		Sfx *sfx;
		PhysicalPool *pool;
		int j;
		uint i;
		CodeSectionDataAbstract *unaff_EDI;
		MemoryStream *stream;
		SectionSfx sectionSfx;
		MemoryStream stream2;
		SectionDataSfx *sfxDataPtr;
		sfxDataPtr = &this->sfxData;
		i = 0;
		sectionSfx.parent = (SectionAbstract_VTable *)&Section_VT_Sfx;
		sectionSfx.ptr = (int *)0x0;
		sectionSfx.sfxData = sfxDataPtr;
		Font::ReadFont(&this->font,PTR_s_StartUp\Fonts\Crash_Euro_0039e148);
		this->fontRenderer->font = &this->font;
		(this->font).parent.scale.x = FLOAT_0039e400;
		(this->font).parent.scale.y = FLOAT_0039e404;
		if ((this->flags2 & 1) == 0) {
		if ((this->flags2 & 2) == 0) {
		stream = (MemoryStream *)0x0;
		}
		else {
		stream = SectionDataSfx::InitMemoryStreamBuffer(sfxDataPtr);
		}
		do {
		memptr = (Sfx *)VirtualPool::AllocateMemory(100);
		if (memptr == (Sfx *)0x0) {
		sfx = (Sfx *)0x0;
		}
		else {
		sfx = Sfx::Construct(memptr,(&PTR_s_Frontend\SEL_BP_0039e16c)[i]);
		}
		sfx->index = i | 0x8000;
		Sfx::InitData(sfx,stream);
		if ((short)i != -1) {
		j = i & 0x7fff;
		(this->sfxData).parent.elements[j] = sfx;
		}
		i = i + 1;
		}
		 while (i < 3);
		if ((*(byte *)&this->flags2 & 2) != 0) {
		MemoryStream::Contruct2(&stream2,0x20000,1,1);
		GameReaderStorage::ReadStuff();
		SectionAbstract::Write(&sectionSfx.parent,&stream2);
		SectionDataSfx::WriteToStream(sfxDataPtr,&stream2);
		MemoryStream::FUN_0020fde0(&stream2,PTR_s_StartUp\Frontend.bin_0039e140);
		(*((sfxDataPtr->parent).parent.vtable)->CleanUp)(unaff_EDI);
		pool = PhysicalPool::GetPool();
		PhysicalPool::UnkMethod2(pool);
		MemoryStream::Dispose(&stream2);
		}
		}
		else {
		SectionAbstract::AddToReader(&sectionSfx.parent,PTR_s_StartUp\Frontend.bin_0039e140,false);
		}
		GameReaderStorage::ReadStuff();
		if ((*(byte *)&this->flags2 & 2) == 0) {
		Oleg::InitMenuPages(&this->oleg,this->inputHandle1,&this->font,&this->font,sfxDataPtr);
		}
		UnkFamily16A::LoadDefault(this->defaultRm,PTR_s_StartUp\Default_0039e144);
		return true;
		}
		
	*/
	return false;
}

uint GameController::FUN_001c7570(FontRenderer* param_1, bool param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	FontRenderer * __thiscall GameController::FUN_001c7570(GameController *this,FontRenderer *param_1,bool param_2){
		FontRenderer *pFVar1;
		pFVar1 = this->fontRenderer;
		if (pFVar1 != param_1) {
		if ((*(byte *)&this->progressCounter & 2) != 0) {
		if (pFVar1 != (FontRenderer *)0x0) {
		(*(code *)(pFVar1->renderer->parent).vtable)(1);
		}
		this->progressCounter = this->progressCounter & 0xfffffffd;
		}
		this->progressCounter = this->progressCounter & 0xfffffffd;
		this->fontRenderer = param_1;
		}
		if ((*(byte *)&this->progressCounter & 4) != 0) {
		if (this->defaultRm != (UnkFamily16A *)0x0) {
		(*(code *)((this->defaultRm->parent).vtable)->AddChunk)(1);
		}
		this->progressCounter = this->progressCounter & 0xfffffffb;
		}
		this->resourceManager = (GameResourceManager *)0x0;
		this->progressCounter = this->progressCounter & 0xfffffffb;
		this->defaultRm = (UnkFamily16A *)0x0;
		if ((param_2 != false) && (this->fontRenderer != (FontRenderer *)0x0)) {
		(*(code *)(this->fontRenderer->renderer->parent).substruct.vtable)(*(undefined4 *)&this->field_0x4);
		}
		return this->fontRenderer;
		}
		
	*/
	return 0;
}

bool GameController::InitCtxAndWriteRmToPool(bool param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall GameController::InitCtxAndWriteRmToPool(GameController *this,bool param_1){
		uint *puVar1;
		AutoClass53 *pAVar2;
		SaveSystem *mainMenu;
		if ((this->flags & 0x3f000) == 0x8000) {
		return false;
		}
		if (param_1 == false) {
		pAVar2 = ChunkDesc::InitPlayerContexts(&this->chunkDescriptor,0,this->defaultRm);
		AutoClass56::WriteDataToStream(&this->unkStruct,&this->chunkDescriptor,this->defaultRm,pAVar2);
		mainMenu = SaveSystem;
		if (((SaveSystem->parent).flags1 >> 0x1d & 1) == 0) {
		this->flags = this->flags & 0x87ffffff;
		}
		else {
		this->flags = this->flags & 0x87ffffff;
		puVar1 = &(mainMenu->parent).flags1;
		*puVar1 = *puVar1 & 0xdfffffff;
		}
		}
		else {
		TwinString::Copy(&(this->chunkDescriptor).chunkName,(this->unkStruct).chunkName.value);
		SetResetSomeFlags(this);
		}
		this->state = this->state & 0xf97fffffU | 0x1000000;
		this->flags = this->flags & 0xff23ffff | 0x200000;
		return true;
		}
		
	*/
	return false;
}

int GameController::LoadOtherLevel() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall GameController::LoadOtherLevel(GameController *this){
		bool result;
		UnkFamily16A *default;
		ChunkDesc *chunkDesc;
		if (this->progressCounter == this->progressGoal) {
		Oleg::ChoseRandomLoadingPicture(&this->oleg,2,1,3);
		}
		else {
		result = SetOverlay(this,LoadingScreen);
		if (result != false) {
		if (this->progressCounter == this->field13_0x1c) {
		if ((this->state & 0x7800000U) == 0x1800000) {
		default = (UnkFamily16A *)0x0;
		}
		else {
		default = this->defaultRm;
		}
		(*(code *)((this->oleg).parent.vtable)->ResetScreenMessage)();
		chunkDesc = &this->chunkDescriptor;
		ChunkDesc::ReloadLevel(chunkDesc,default);
		ChunkDesc::InitPlayerContexts(chunkDesc,(uint)this->state >> 0x17 & 0xf,this->defaultRm);
		if ((this->state & 0x7800000U) == 0x1000000) {
		AutoClass56::ReadToChunkDesc(&this->unkStruct,true,chunkDesc,&this->defaultRm->parent);
		}
		return 0x18;
		}
		result = ChunkDesc::CheckReady(&this->chunkDescriptor,((*(byte *)&this->flags2 & 1) != 0) + 1,false);
		return (-(uint)(result != false) & 0xfffffff2) + 0x18;
		}
		}
		return 0x18;
		}
		
	*/
	return 0;
}

uint GameController::PlayIntroCutscene() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling undefined4 __fastcall GameController::PlayIntroCutscene(GameController *this){
		float fVar1;
		int iVar2;
		OlegModuleAbstract *module;
		fVar1 = FLOAT_0039f1f8;
		if (this->progressCounter == this->progressGoal) {
		(this->oleg).uiIcon03.parent.array[1].y = COLOR_BLACK;
		(this->oleg).uiIcon03.parent.array[1].x = fVar1;
		Oleg::ClearUI(&this->oleg,0xffffffff,0xffffffff,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		Oleg::ShowUI(&this->oleg,(this->oleg).parent.uiPresetMask[0x27].high,(this->oleg).parent.uiPresetMask[0x27].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		}
		else {
		iVar2 = GetHighestBitPosition((this->oleg).parent.uiPresetMask[0x27].high,(this->oleg).parent.uiPresetMask[0x27].low);
		if (iVar2 < 0) {
		module = (OlegModuleAbstract *)0x0;
		}
		else {
		module = (this->oleg).parent.modules[iVar2];
		}
		if (((byte)module->flags & 0xf) == 3) {
		AutoClass56::ReadToChunkDesc(&this->unkStruct,false,&this->chunkDescriptor,&this->defaultRm->parent);
		ResetLevelStuff(this,0);
		this->fmvTimeRelated = (float)(int)(TicksPerTime * FLOAT_00386ab4);
		this->flags = this->flags & 0xff37ffff | 0x340000;
		this->fmvIndex = FMV_H01_a;
		return 0xd;
		}
		}
		return 0x18;
		}
		
	*/
	return 0;
}

bool GameController::FUN_000afe90() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall GameController::FUN_000afe90(GameController *this){
		SaveSystem *mainMenu;
		mainMenu = SaveSystem;
		this->flags = this->flags & 0xa0ffffff | 0x20000000;
		FUN_00200f30(mainMenu,5,(int)(TicksPerTime * FLOAT_003865d0));
		return true;
		}
		
	*/
	return false;
}

uint GameController::TileScreen(SomeState* timeState) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall GameController::TileScreen(GameController *this,SomeState *timeState){
		ChunkData *pCVar1;
		InputStruct *this_00;
		bool bVar2;
		AutoClass53 *pAVar3;
		ChunkList *chunkList;
		int i;
		uint index;
		bool showMenu;
		if (this->progressCounter == this->progressGoal) {
		index = 0;
		do {
		ResetCharacterNodes(this,index,0,true);
		index = index + 1;
		}
		 while (index < 6);
		Oleg::ClearUI(&this->oleg,0xffffffff,0xffffffff,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		pAVar3 = ChunkDesc::InitPlayerContexts(&this->chunkDescriptor,0,(UnkFamily16A *)0x0);
		AutoClass56::WriteDataToStream(&this->unkStruct,&this->chunkDescriptor,this->defaultRm,pAVar3);
		showMenu = thunk_FUN_000bc6a0(this,4,true,true);
		if (showMenu == false) {
		ResetCurrentPlayerNodes(this,true);
		}
		ChunkList::GetInstance();
		chunkList = ChunkList::GetInstance();
		for (pCVar1 = chunkList->firstChunk;
		 pCVar1 != (ChunkData *)0x0;
		 pCVar1 = pCVar1->next) {
		if (pCVar1->timers != (UnkTimePack *)0x0) {
		UnkTimePack::SetFlags(pCVar1->timers);
		}
		}
		ProgressGameState();
		}
		else {
		showMenu = false;
		i = 0;
		do {
		this_00 = InputController->inputSourceList[i];
		if ((this_00 != (InputStruct *)0x0) &&((bVar2 = InputStruct::CheckKey(this_00,KEY_START,'\x01'), bVar2 != false ||(bVar2 = InputStruct::CheckKey(this_00,KEY_A,'\x01'), bVar2 != false)))) {
		this->inputHandle1 = this_00;
		INPUT_PORT = i;
		this_00->slot = 0;
		showMenu = true;
		Oleg::SetInputHandles(&this->oleg,this->inputHandle1);
		}
		i = i + 1;
		}
		 while (i < 4);
		if (showMenu) {
		return 7;
		}
		if ((int)(TicksPerTime * MENU_FMV_WAIT) <= timeState->currentTime - this->timeFromStart) {
		 Plays Attract PlayRandomFMV(this,(int)(TicksPerTime * FLOAT_00386ab4),0xd,0xd);
		return this->flags >> 0x12 & 0x3f;
		}
		}
		return 0x18;
		}
		
	*/
	return 0;
}

int GameController::PlayFMVVIvendi(SomeState* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall GameController::PlayFMVVIvendi(GameController *this,SomeState *param_1){
		bool bVar1;
		bVar1 = PlayFMV(this,param_1,(float)(int)(TicksPerTime * FLOAT_00386ab4),FMV_Vivendi,'\x01',(SomeState *)0x0);
		return (-(uint)(bVar1 != false) & 0xffffffec) + 0x18;
		}
		
	*/
	return 0;
}

int GameController::Game(SomeState* timeState) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall GameController::Game(GameController *this,SomeState *timeState){
		InstanceContextRefCounter *pIVar1;
		uint openMenu;
		InstanceContext *ctx;
		float fVar2;
		float fVar3;
		UIPresetIndex index;
		pIVar1 = (this->chunkDescriptor).playerInstanceContexts[4];
		if (pIVar1 == (InstanceContextRefCounter *)0x0) {
		ctx = (InstanceContext *)0x0;
		}
		else {
		ctx = pIVar1->ctx;
		}
		if (ctx != (InstanceContext *)0x0) {
		(*((ctx->parent).vtable)->Method2)(ctx);
		}
		if (this->progressCounter == this->progressGoal) {
		ChunkList::SetTimeFlagsAll();
		return 0x18;
		}
		openMenu = thunk_FUN_000af8f0(this,timeState,'\0');
		if (openMenu != 0) {
		return 0xe;
		}
		if (this->waitTime == 0) {
		return 0x18;
		}
		if (timeState->currentTime - this->timeFromStart < this->waitTime) {
		return 0x18;
		}
		openMenu = (this->chunkDescriptor).flags & 0xf;
		if (openMenu == 1) {
		index = Unknown21;
		LAB_000ba5ee:fVar2 = TicksPerTime * FLOAT_00386394;
		fVar3 = TicksPerTime * FLOAT_0038cb00;
		}
		else {
		if (openMenu == 2) {
		if ((int)this->flags < 0) goto LAB_000ba60f;
		index = Unknown20;
		goto LAB_000ba5ee;
		}
		Oleg::ShowUI(&this->oleg,Unknown1f,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_003865d0));
		Oleg::ShowUI(&this->oleg,Unknown22,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		if ((int)this->flags < 0) goto LAB_000ba60f;
		fVar2 = TicksPerTime * FLOAT_00386394;
		fVar3 = TicksPerTime * FLOAT_0038cb00;
		index = Unknown26;
		}
		Oleg::ShowUI(&this->oleg,index,(int)fVar3,(int)fVar2);
		LAB_000ba60f:this->waitTime = 0;
		return 0x18;
		}
		
	*/
	return 0;
}

uint GameController::GameOver() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall GameController::GameOver(GameController *this){
		uint uVar1;
		bool bVar2;
		if (this->progressCounter == this->progressGoal) {
		uVar1 = (this->chunkDescriptor).flags;
		switch(uVar1 >> 8 & 0xf) {
		case 0:if ((uVar1 & 0xf000) == 0x1000) {
		Oleg::SetScreenFlag(&this->oleg,2,6);
		ResetSomeTimeFlags();
		return 0x18;
		}
		Oleg::SetScreenFlag(&this->oleg,2,5);
		ResetSomeTimeFlags();
		return 0x18;
		case 1:(this->oleg).field4_0x31c = (this->oleg).field4_0x31c & 0xfffe09ff | 0x800;
		ResetSomeTimeFlags();
		return 0x18;
		case 3:(this->oleg).field4_0x31c = (this->oleg).field4_0x31c & 0xfffe11ff | 0x1000;
		default:ResetSomeTimeFlags();
		break;
		case 5:(this->oleg).field4_0x31c = (this->oleg).field4_0x31c & 0xfffe0fff | 0xe00;
		ResetSomeTimeFlags();
		return 0x18;
		}
		}
		else {
		bVar2 = SetOverlay(this,GameOver);
		if (bVar2 != false) {
		this->inputHandle1->slot = 0;
		bVar2 = InputStruct::CheckSomeKeyInput(this->inputHandle1);
		if (bVar2 == false) {
		STORED_STATE = 0x11;
		return 0x16;
		}
		}
		}
		return 0x18;
		}
		
	*/
	return 0;
}

int GameController::State12(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall GameController::State12(GameController *this,SomeState *param_1){
		bool bVar1;
		uint uVar2;
		if (this->progressCounter == this->progressGoal) {
		ChunkList::SetTimeFlagsAll();
		return 0x18;
		}
		uVar2 = thunk_FUN_000af8f0(this,param_1,'\0');
		if (uVar2 == 0) {
		bVar1 = InputStruct::CheckKey(this->inputHandle1,KEY_A,'\x01');
		if ((VideoController->state == 3) && (bVar1 != false)) {
		VideoController::FUN_001f6520(VideoController);
		}
		return 0x18;
		}
		return 0xe;
		}
		
	*/
	return 0;
}

uint GameController::State20() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling uint __fastcall GameController::State20(GameController *this){
		float fVar1;
		int iVar2;
		OlegModuleAbstract *pOVar3;
		if (this->progressCounter == this->progressGoal) {
		ResetSomeTimeFlags();
		fVar1 = FLOAT_0039f1f8;
		(this->oleg).uiIcon03.parent.array[1].y = COLOR_BLACK;
		(this->oleg).uiIcon03.parent.array[1].x = fVar1;
		Oleg::ClearUI(&this->oleg,0xffffffff,0xffffffff,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		Oleg::ShowUI(&this->oleg,(this->oleg).parent.uiPresetMask[0x27].high,(this->oleg).parent.uiPresetMask[0x27].low,(int)(TicksPerTime * FLOAT_00386ab4),(int)(TicksPerTime * FLOAT_00386394));
		::EmptyFunction();
		return 0x18;
		}
		iVar2 = GetHighestBitPosition((this->oleg).parent.uiPresetMask[0x27].high,(this->oleg).parent.uiPresetMask[0x27].low);
		if (iVar2 < 0) {
		pOVar3 = (OlegModuleAbstract *)0x0;
		}
		else {
		pOVar3 = (this->oleg).parent.modules[iVar2];
		}
		return (-(uint)((*(byte *)&pOVar3->flags & 0xf) != 3) & 3) + 0x15;
		}
		
	*/
	return 0;
}

uint GameController::PlayFMVCustom(SomeState* feedbackInt) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall GameController::PlayFMVCustom(GameController *this,SomeState *feedbackInt){
		bool bVar1;
		if (this->progressGoal == this->progressCounter) {
		ResetSomeTimeFlags();
		}
		bVar1 = PlayFMV(this,feedbackInt,this->fmvTimeRelated,this->fmvIndex,'\x01',(SomeState *)&feedbackInt);
		if (bVar1 != false) {
		thunk_FUN_000afbb0(this);
		}
		return 0x18;
		}
		
	*/
	return 0;
}

int GameController::TitleScreenMenu(SomeState* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall GameController::TitleScreenMenu(GameController *this,SomeState *param_1){
		bool skip;
		OlegModuleLabelSelectable *pAVar2;
		Oleg *this_00;
		if (this->progressCounter == this->progressGoal) {
		 removes horizontal letterboxes Oleg::ClearUI(&this->oleg,0xffffffff,0xffffffff,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		 starts menu appearance Oleg::ShowUI(&this->oleg,(this->oleg).parent.uiPresetMask[0xb].high,(this->oleg).parent.uiPresetMask[0xb].low,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		ResetSomeTimeFlags();
		return 0x18;
		}
		pAVar2 = Oleg::GetSelectedLabel(&this->oleg);
		if (((pAVar2 != (OlegModuleLabelSelectable *)0x0) && ((pAVar2->field_0x88 & 1) != 0)) &&((undefined **)pAVar2->field11_0xa4 == &PTR_UnkFamily10_VT_Base_003a3950)) {
		return 6;
		}
		skip = Oleg::thunk_FUN_000c2290(this_00,Loading);
		if (skip == false) {
		this->inputHandle1->slot = 0;
		skip = InputStruct::CheckSomeKeyInput(this->inputHandle1);
		if (skip == false) {
		this->flags = this->flags & 0x8fffffff | 0x8000000;
		STORED_STATE = 7;
		return 0x16;
		}
		}
		HandleUIScreenChanges(this,param_1);
		return 0x18;
		}
		
	*/
	return 0;
}

uint GameController::State16(SomeState* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall GameController::State16(GameController *this,SomeState *param_1){
		if ((int)(TicksPerTime * FLOAT_0038cb00) <= param_1->currentTime - this->timeFromStart) {
		return this->flags & 0x3f;
		}
		return 0x18;
		}
		
	*/
	return 0;
}

int GameController::WaitConfirmation() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall GameController::WaitConfirmation(GameController *this){
		bool bVar1;
		if (this->progressCounter == this->progressGoal) {
		Oleg::ClearUI(&this->oleg,(this->oleg).parent.uiPresetMask[0x2a].high,(this->oleg).parent.uiPresetMask[0x2a].low,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		(this->oleg).caption10.index1 = INPUT_PORT + 0x20;
		Oleg::ShowUI(&this->oleg,(this->oleg).parent.uiPresetMask[0xf].high,(this->oleg).parent.uiPresetMask[0xf].low,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		this->flags = this->flags & 0x8fffffff | 0x8000000;
		SaveSystem::ResetFlags(SaveSystem);
		ResetSomeTimeFlags();
		}
		bVar1 = InputStruct::CheckKey(this->inputHandle1,KEY_START,'\x01');
		if ((bVar1 == false) &&(bVar1 = InputStruct::CheckKey(this->inputHandle1,KEY_A,'\x01'), bVar1 == false)) {
		return 0x18;
		}
		return STORED_STATE;
		}
		
	*/
	return 0;
}

bool GameController::UpdateFlags(bool param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall GameController::UpdateFlags(GameController *this,bool param_1){
		uint *puVar1;
		bool bVar2;
		GameController *_this;
		uint gameControllerFlags;
		SaveSystem *mainMenu;
		uint mainMenuFlags;
		gameControllerFlags = this->flags;
		if ((gameControllerFlags & 0x3f000) != 0x9000) {
		if (param_1 == false) {
		this->flags = gameControllerFlags & 0xf9ffffff | 0x1000000;
		mainMenu = SaveSystem;
		mainMenuFlags = (SaveSystem->parent).flags1;
		this->flags = gameControllerFlags & 0x81ffffff | 0x1000000;
		if ((mainMenuFlags >> 0x1d & 1) != 0) {
		puVar1 = &(mainMenu->parent).flags1;
		*puVar1 = *puVar1 & 0xdfffffff;
		}
		}
		else {
		bVar2 = SetResetSomeFlags(this);
		this = _this;
		if (bVar2 == false) {
		_this->flags = _this->flags & 0xf9ffffff | 0x1000000;
		}
		else {
		_this->flags = _this->flags & 0xfaffffff | 0x2000000;
		(_this->oleg).field5_0x320 = 0;
		}
		}
		this->flags = this->flags & 0xff27ffff | 0x240000;
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

int GameController::LoadBaseResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall GameController::LoadBaseResources(GameController *this){
		uint *puVar1;
		UIElementImage *this_00;
		uint uVar2;
		bool success;
		SaveSystem *mainMenu;
		XBE_SECTION_HEADER *CrashSection;
		int iVar3;
		size_t length;
		void *CrashFolder;
		SectionReaderUnknownX *reader;
		FileResourceDescG *crashPsm;
		TwinString crashPsmPath;
		TwinString path;
		MemoryStream stream;
		GameReaderStorage *readerStorage;
		if (this->progressCounter == this->progressGoal) {
		puVar1 = &(this->oleg).field4_0x31c;
		*puVar1 = *puVar1 & 0xfffe01ff;
		}
		else {
		success = SetOverlay(this,PSMScreenNoUI);
		if (success != false) {
		if (this->progressCounter == this->field13_0x1c) {
		TwinString::Set(&path,"Crash6\\");
		mainMenu = (SaveSystem *)VirtualPool::AllocateMemory(0x238);
		if (mainMenu == (SaveSystem *)0x0) {
		SaveSystem = (SaveSystem *)0x0;
		}
		else {
		SaveSystem = SaveSystem::Construct(mainMenu,this);
		}
		LoadLocalizedCodeAndAgentLabFiles(this);
		TwinString::Append(&path,LANG_NAMES[LNG_INDEX]);
		LoadMusic(PTR_s_Crash6\Music_0039e13c);
		LoadVoice(path.value);
		Oleg::LoadIconsPsm(&this->oleg);
		LoadFrontendAssets(this);
		puVar1 = &(this->oleg).screenFlags;
		*puVar1 = *puVar1 & 0xfffe01ff;
		readerStorage = GAME_READER_STORAGE[1];
		crashPsmPath.value = (char *)0x0;
		crashPsmPath.strLength = 0;
		crashPsmPath.strSize = 0;
		TwinString::Copy(&crashPsmPath,"Language\\Titles\\");
		TwinString::Append(&crashPsmPath,LANG_NAMES[LNG_INDEX]);
		TwinString::Append(&crashPsmPath,"\\Crash");
		TwinString::Append(&crashPsmPath,PSM_EXT_STR);
		if (((this->oleg).screenFlags & 0x1fe) != 2) {
		(*((this->oleg).crashTwinsanityLogo.parent.vtable)->FreeMaterial)(&(this->oleg).crashTwinsanityLogo.parent);
		(this->oleg).screenFlags = (this->oleg).screenFlags & 0xfffffe03 | 2;
		}
		CrashSection = _XGetSectionHandleA@4("Crash");
		if (CrashSection == (XBE_SECTION_HEADER *)0xffffffff) {
		uVar2 = (this->oleg).screenFlags;
		(this->oleg).screenFlags = (uVar2 >> 8 ^ uVar2) & 0x1fe ^ uVar2 | 1;
		reader = (SectionReaderUnknownX *)VirtualPool::AllocateMemory(0xc);
		if (reader == (SectionReaderUnknownX *)0x0) {
		reader = (SectionReaderUnknownX *)0x0;
		}
		else {
		reader->oleg = &this->oleg;
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_X;
		reader->someIndex = 0;
		}
		crashPsm = (FileResourceDescG *)VirtualPool::AllocateMemory(0x30);
		if (crashPsm == (FileResourceDescG *)0x0) {
		crashPsm = (FileResourceDescG *)0x0;
		}
		else {
		crashPsm = FileResourceDescG::Construct(crashPsm,crashPsmPath.value,&reader->parent,0xd);
		}
		GameReaderStorage::AddFileDesc(readerStorage,&crashPsm->parent,0);
		}
		else {
		iVar3 = __stricmp("Crash",(&LevelList)[(this->oleg).field3_0x318 >> 1 & 0xff]);
		uVar2 = (this->oleg).screenFlags;
		if (iVar3 == 0) {
		(this->oleg).screenFlags = uVar2 >> 8 & 0x1fe | uVar2 & 0xfffffe00;
		}
		else {
		(this->oleg).screenFlags = (uVar2 >> 8 ^ uVar2) & 0x1fe ^ uVar2 | 1;
		length = XAPILIB::XGetSectionSize((int)CrashSection);
		CrashFolder = (void *)_XLoadSectionByHandle@4((int)CrashSection);
		MemoryStream::Construct(&stream,CrashFolder,length,0,0x40);
		this_00 = &(this->oleg).crashTwinsanityLogo;
		(this->oleg).screenFlags = (this->oleg).screenFlags & 0xfffffffe;
		(*((this_00->parent).vtable)->Read)(&this_00->parent,&stream);
		_XFreeSectionByHandle@4(CrashSection);
		MemoryStream::Dispose(&stream);
		}
		}
		TwinString::Dispose(&crashPsmPath);
		TwinString::Dispose(&path);
		return 0x18;
		}
		return 2;
		}
		}
		return 0x18;
		}
		
	*/
	return 0;
}

int GameController::State21() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall GameController::State21(GameController *this){
		uint uVar1;
		bool bVar2;
		AutoClass53 *pAVar3;
		WorldChunk *worldChunk;
		float fVar4;
		pAVar3 = ChunkDesc::InitPlayerContexts(&this->chunkDescriptor,(uint)this->state >> 0x17 & 0xf,this->defaultRm);
		if (pAVar3 != (AutoClass53 *)0x0) {
		TwinString::Copy(&(this->chunkDescriptor).chunkName,(pAVar3->str).value);
		}
		if ((this->state & 0x7800000U) == 0x1000000) {
		(this->unkStruct).flags = (this->unkStruct).flags & 0xffffff85 | 5;
		uVar1 = (this->unkStruct).field1_0x4;
		(this->unkStruct).field1_0x4 =uVar1 ^ ((InputController->flags >> 1 & 0xff) << 0xf ^ uVar1) & 0x8000;
		fVar4 = ::GetNum(0);
		(this->unkStruct).field12_0x24 = fVar4;
		fVar4 = ::GetNum(2);
		(this->unkStruct).field13_0x28 = fVar4;
		TwinString::Copy(&(this->chunkDescriptor).chunkName,(this->unkStruct).chunkName.value);
		}
		else {
		if ((this->chunkDescriptor).chunkName.strLength < 1) {
		LAB_000bb42c:ResetLevelStuff(this,(uint)this->state >> 0x17 & 0xf);
		return 10;
		}
		worldChunk = World::GetChunkByName(WORLD,&(this->chunkDescriptor).chunkName);
		if (worldChunk != (WorldChunk *)0x0) {
		bVar2 = WorldChunk::CheckSomeNum(worldChunk,true);
		if (bVar2 != false) goto LAB_000bb42c;
		}
		}
		return 8;
		}
		
	*/
	return 0;
}

int GameController::IngameMenu(SomeState* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall GameController::IngameMenu(GameController *this,SomeState *param_1){
		uint uVar1;
		OlegModuleLabelSelectable *selectedLabel;
		Oleg *oleg;
		uVar1 = thunk_FUN_000af8f0(this,param_1,'\x01');
		if (uVar1 != 0) {
		oleg = &this->oleg;
		selectedLabel = Oleg::GetSelectedLabel(oleg);
		if (((selectedLabel != (OlegModuleLabelSelectable *)0x0) &&((selectedLabel->field_0x88 & 1) != 0)) &&((undefined **)selectedLabel->field11_0xa4 == &PTR_UnkFamily10_VT_Base_003a3950)) {
		Oleg::ClearUI(oleg,(this->oleg).parent.uiPresetMask[0x2a].high,(this->oleg).parent.uiPresetMask[0x2a].low,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		if (((byte)this->flags & 0x3f) == 0xc) {
		Oleg::ShowUI(oleg,(this->oleg).parent.uiPresetMask[0].high,(this->oleg).parent.uiPresetMask[0].low,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		return 0x10;
		}
		if ((int)this->flags < 0) {
		Oleg::ShowUI(oleg,(this->oleg).parent.uiPresetMask[2].high,(this->oleg).parent.uiPresetMask[2].low,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		return 0x10;
		}
		this->waitTime = (int)(TicksPerTime * FLOAT_0038cb00);
		return 0x10;
		}
		}
		return 0x18;
		}
		
	*/
	return 0;
}

bool GameController::ResetFlag1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall GameController::ResetFlag1(GameController *this){
		uint *puVar1;
		SaveSystem *mainMenu;
		mainMenu = SaveSystem;
		if (((SaveSystem->parent).flags1 >> 0x1d & 1) != 0) {
		this->flags = this->flags & 0x87ffffff;
		puVar1 = &(mainMenu->parent).flags1;
		*puVar1 = *puVar1 & 0xdfffffff;
		return true;
		}
		this->flags = this->flags & 0x87ffffff;
		return false;
		}
		
	*/
	return false;
}

uint GameController::PlayTTIdent(SomeState* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall GameController::PlayTTIdent(GameController *this,SomeState *param_1){
		bool bVar1;
		bVar1 = PlayFMV(this,param_1,(float)(int)(TicksPerTime * FLOAT_00386394),FMV_TTIdent,'\x01',(SomeState *)0x0);
		if (bVar1 == false) {
		return 0x18;
		}
		if (0 < (this->chunkDescriptor).chunkName.strLength) {
		this->state = this->state & 0xf97fffffU | 0x1000000;
		AutoClass56::WriteDataToStream(&this->unkStruct,&this->chunkDescriptor,this->defaultRm,(AutoClass53 *)0x0);
		return 8;
		}
		return 5;
		}
		
	*/
	return 0;
}

int GameController::RollCredits(SomeState* someState) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall GameController::RollCredits(GameController *this,SomeState *someState){
		bool done;
		Credits *credits;
		UnkDesc soundtrackDesc;
		DoSoundsStuff(false,someState);
		if (this->progressCounter == this->progressGoal) {
		(this->oleg).field4_0x31c = (this->oleg).field4_0x31c & 0xfffe17ff | 0x1600;
		ResetSomeTimeFlags();
		CREDITS_TRACK_INDEX = 0;
		TRACK_CHANGE_TIME = FLOAT_0038cb3c;
		DAT_003e2d38 = 1;
		}
		else {
		done = SetOverlay(this,PSMScreenNoUI);
		if (done != false) {
		if (this->progressCounter == this->field13_0x1c) {
		TwinString::Set((TwinString *)&soundtrackDesc,"Language\\Credits\\");
		TwinString::Append((TwinString *)&soundtrackDesc,LANG_NAMES[LNG_INDEX]);
		TwinString::Append((TwinString *)&soundtrackDesc,".txt");
		credits = (Credits *)VirtualPool::AllocateMemory(0x34);
		if (credits == (Credits *)0x0) {
		credits = (Credits *)0x0;
		}
		else {
		 overlapping variables. Treat as TwinString credits = Credits::Construct(credits,&this->font,(char *)soundtrackDesc.soundId);
		}
		this->credits = credits;
		(*(code *)((this->oleg).parent.vtable)->ResetScreenMessage)();
		TwinString::Copy(&(this->chunkDescriptor).chunkName,ENV_STR_90_LABEXT.value);
		ChunkDesc::ReloadLevel(&this->chunkDescriptor,(UnkFamily16A *)0x0);
		TwinString::Dispose((TwinString *)&soundtrackDesc);
		return 0x18;
		}
		done = Credits::MoveCredits(this->credits,someState);
		if (done == false) {
		done = ChunkDesc::CheckReady(&this->chunkDescriptor,((*(byte *)&this->flags2 & 1) != 0) + 1,false);
		if (done != false) {
		credits = this->credits;
		if (credits != (Credits *)0x0) {
		Credits::Dispose(credits);
		VirtualPool::FreeMemory(credits);
		}
		this->credits = (Credits *)0x0;
		DAT_003e2d38 = 0;
		return 10;
		}
		}
		else {
		if (TRACK_CHANGE_TIME <= FLOAT_0038cb3c) {
		TRACK_CHANGE_TIME = (float)someState->ticks * TimePerTick1 + TRACK_CHANGE_TIME;
		return 0x18;
		}
		if (CREDITS_TRACK_INDEX < 0xb) {
		soundtrackDesc.soundId =CREDITS_TRACK_ID[CREDITS_TRACK_INDEX][0] & 0xffff |soundtrackDesc.soundId & 0xfffa0000U | 0x1a0000;
		TRACK_CHANGE_TIME = 0.0;
		soundtrackDesc.field1_0x4 = FLOAT_0038639c;
		soundtrackDesc.field2_0x8 = FLOAT_0038639c;
		if (CREDITS_TRACK_INDEX == 0) {
		soundtrackDesc.field3_0xc = 0.0;
		}
		else {
		soundtrackDesc.field3_0xc = FLOAT_003865d0;
		}
		PlaySoundTrack(0,&soundtrackDesc);
		CREDITS_TRACK_INDEX = CREDITS_TRACK_INDEX + 1;
		return 0x18;
		}
		}
		}
		}
		return 0x18;
		}
		
	*/
	return 0;
}

int GameController::LoadStartUpChunk() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall GameController::LoadStartUpChunk(GameController *this){
		uint uVar1;
		bool success;
		if (this->progressCounter == this->progressGoal) {
		uVar1 = this->flags;
		ResetSomeTimeFlags();
		if ((uVar1 >> 6 & 0x3f) == 0xd) {
		ResetLevelStuff(this,0);
		return 6;
		}
		TwinString::Copy(&(this->chunkDescriptor).chunkName,ENV_STR_89_BEACH.value);
		Oleg::ChoseRandomLoadingPicture(&this->oleg,2,1,3);
		}
		else {
		success = SetOverlay(this,LoadingScreen);
		if (success != false) {
		if (this->progressCounter == this->field13_0x1c) {
		(*(code *)((this->oleg).parent.vtable)->ResetScreenMessage)();
		ChunkDesc::ReloadLevel(&this->chunkDescriptor,this->defaultRm);
		return 0x18;
		}
		success = ChunkDesc::CheckReady(&this->chunkDescriptor,((*(byte *)&this->flags2 & 1) != 0) + 1,false);
		return (-(uint)(success != false) & 0xffffffee) + 0x18;
		}
		}
		return 0x18;
		}
		
	*/
	return 0;
}

uint GameController::State19() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling undefined4 __fastcall GameController::State19(GameController *this){
		float fVar1;
		Oleg::ClearUI(&this->oleg,(this->oleg).parent.uiPresetMask[0x2a].high,(this->oleg).parent.uiPresetMask[0x2a].low,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		fVar1 = COLOR_BLACK;
		(this->oleg).uiIcon03.parent.array[1].x = FLOAT_0039f1f8;
		(this->oleg).uiIcon03.parent.array[1].y = fVar1;
		return 5;
		}
		
	*/
	return 0;
}

int GameController::State10() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling int __fastcall GameController::State10(GameController *this){
		ChunkData *pCVar1;
		NodeRelated2C *this_00;
		InstanceContextRefCounter *pIVar2;
		InstanceNodeCamera *pIVar3;
		ChunkList *pCVar3;
		InstanceNodeCharacter *pIVar4;
		InstanceNodeCharacter *pIVar5;
		NodeRelated2C *other;
		UnkFamily5AB *notThis;
		UnkFamily5AB *pUVar4;
		undefined uVar4;
		InstanceContextSmartPtr extraout_ECX;
		InstanceContextSmartPtr extraout_ECX_00;
		uint uVar6;
		InstanceContext *ctx;
		uint uVar7;
		uint *unaff_EDI;
		uint i;
		int unaff_retaddr;
		int iVar8;
		UnkFamily5Ptr *pUVar9;
		InstanceContext *local_c;
		InstanceContextSmartPtr IVar5;
		uVar6 = this->flags >> 6 & 0x3f;
		if (this->progressCounter == this->progressGoal) {
		this->inputHandle1->slot = 0;
		i = 0;
		do {
		ResetCharacterNodes(this,i,0,true);
		i = i + 1;
		}
		 while (i < 6);
		switch(uVar6) {
		case 0:case 8:ChunkDesc::thunk_FUN_000bb7c0(&this->chunkDescriptor,(uint)this->state >> 0x17 & 0xf,&(this->unkStruct).chunkName,&(this->unkStruct).field4_0x18,&this->chunkDescriptor,this->defaultRm);
		ResetCurrentPlayerNodes(this,true);
		uVar6 = (this->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar6 == 6) {
		ctx = (InstanceContext *)0x0;
		}
		else {
		pIVar2 = (this->chunkDescriptor).playerInstanceContexts[uVar6];
		if (pIVar2 == (InstanceContextRefCounter *)0x0) {
		ctx = (InstanceContext *)0x0;
		}
		else {
		ctx = pIVar2->ctx;
		}
		}
		pIVar3 = (InstanceNodeCamera *)InstanceDataList::GetNode(&ctx->nodes,Camera);
		InstanceNodeKSubB::thunk_FUN_0007cde0(&(pIVar3->struct).struct);
		case 0x12:case 0x15:ChunkList::GetInstance();
		pCVar3 = ChunkList::GetInstance();
		for (pCVar1 = pCVar3->firstChunk;
		 pCVar1 != (ChunkData *)0x0;
		 pCVar1 = pCVar1->next) {
		if (pCVar1->timers != (UnkTimePack *)0x0) {
		UnkTimePack::SetFlags(pCVar1->timers);
		}
		}
		ProgressGameState();
		case 0xc:case 0xd:ResetCurrentPlayerNodes(this,true);
		this->flags = this->flags & 0x7fffffff;
		INT_00495d20 = 0;
		return 0x18;
		default:INT_00495d20 = 0;
		return 0x18;
		}
		}
		i = (this->chunkDescriptor).flags >> 8 & 0xf;
		uVar7 = (this->chunkDescriptor).flags >> 4 & 0xf;
		if (i == 6) {
		local_c = (InstanceContext *)0x0;
		}
		else {
		local_c = (InstanceContext *)(this->chunkDescriptor).playerInstanceContexts[i];
		if (local_c != (InstanceContext *)0x0) {
		local_c = *(InstanceContext **)&local_c->parent;
		}
		}
		pIVar4 = (InstanceNodeCharacter *)InstanceDataList::GetNode((InstanceDataList *)(&local_c->field27_0xe0 + 1),Character);
		this_00 = pIVar4->field1_0x18;
		i = (this->chunkDescriptor).flags >> 0xc & 0xf;
		if (i == 6) {
		ctx = (InstanceContext *)0x0;
		}
		else {
		pIVar2 = (this->chunkDescriptor).playerInstanceContexts[i];
		if (pIVar2 == (InstanceContextRefCounter *)0x0) {
		ctx = (InstanceContext *)0x0;
		}
		else {
		ctx = pIVar2->ctx;
		}
		}
		if ((ctx == (InstanceContext *)0x0) ||(pIVar5 = (InstanceNodeCharacter *)InstanceDataList::GetNode(&ctx->nodes,Character),pIVar5 == (InstanceNodeCharacter *)0x0)) {
		other = (NodeRelated2C *)0x0;
		}
		else {
		other = pIVar5->field1_0x18;
		}
		if ((uVar6 != 0xc) && (uVar6 != 0xd)) {
		if (uVar7 == 2) {
		iVar8 = 3;
		}
		else {
		if (uVar7 != 3) {
		if (uVar7 == 4) {
		NodeRelated2C::Connect(this_00,other);
		notThis = (UnkFamily5AB *)VirtualPool::AllocateMemory(0x14);
		if (notThis == (UnkFamily5AB *)0x0) {
		pUVar4 = (UnkFamily5AB *)0x0;
		IVar5 = extraout_ECX;
		}
		else {
		pUVar9 = (UnkFamily5Ptr *)0x2;
		IVar5 = extraout_ECX;
		InstanceContextSmartPtr::SetCtx((InstanceContextSmartPtr *)&stack0xffffffdc,ctx);
		pUVar4 = UnkFamily5AB::Construct(notThis,0x39,IVar5,pUVar9);
		IVar5 = extraout_ECX_00;
		}
		uVar4 = SUB41(IVar5,0);
		UnkFamily5SomeStruct::thunk_FUN_00059cf0((UnkFamily5SomeStruct *)&stack0xffffffe0,(UnkFamily5AA *)pUVar4);
		InstanceContext::FUN_000fa200(ctx,uVar4);
		}
		goto LAB_000bceae;
		}
		iVar8 = 1;
		}
		NodeRelated2C::thunk_FUN_00074060(this_00,iVar8,(int)other,0);
		}
		LAB_000bceae:SoundRelated();
		(*((this->unkStruct3).parent.parent.vtable)->field4_0x10)((InstanceNodeKSubAbstract *)&this->unkStruct3,local_c,unaff_EDI);
		*(InstanceNodeKSubC **)(unaff_retaddr + 0xf8) = &this->field42_0x4a0;
		Oleg::ClearUI(&this->oleg,0xffffffff,0xffffffff,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		this->waitTime = (int)(TicksPerTime * FLOAT_0038cb00);
		TwinString::Copy(&(this->chunkDescriptor).chunkName,"");
		TwinString::Copy(&(this->chunkDescriptor).unkString1,"");
		TwinString::Copy(&(this->chunkDescriptor).unkString2,"");
		return 0xb;
		}
		
	*/
	return 0;
}

int GameController::ShowGallery() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall GameController::ShowGallery(GameController *this){
		bool exitGallery;
		bool nextFrame;
		uint galleryImageIndex;
		char zeroDigitString [2];
		TwinString tmpStr1;
		TwinString tmpStr2;
		uint flags;
		if (this->progressCounter == this->progressGoal) {
		LAB_000b62fe:tmpStr1.value = (char *)0x0;
		tmpStr1.strLength = 0;
		tmpStr1.strSize = 0;
		TwinString::Copy(&tmpStr1,(this->galleryName).value);
		flags = (this->oleg).field4_0x31c;
		galleryImageIndex = this->flags2 >> 0x14 & 0xff;
		if (galleryImageIndex < 10) {
		zeroDigitString[0] = '0';
		zeroDigitString[1] = '\0';
		TwinString::Append(&tmpStr1,zeroDigitString);
		}
		TwinString::AppendInt(&tmpStr2,galleryImageIndex);
		TwinString::Append(&tmpStr1,tmpStr2.value);
		TwinString::Dispose(&tmpStr2);
		TwinString::Copy(&(this->oleg).psmPath,tmpStr1.value);
		galleryImageIndex = (this->oleg).field4_0x31c;
		(this->oleg).field4_0x31c =galleryImageIndex ^((10 - (uint)((flags & 0x1fe) != 0x12)) * 0x200 ^ galleryImageIndex) & 0x1fe00;
		TwinString::Dispose(&tmpStr1);
		return 0x18;
		}
		exitGallery = SetOverlay(this,Gallery);
		if (exitGallery == false) {
		return 0x18;
		}
		exitGallery = InputStruct::CheckSomeKeyInput(this->inputHandle1);
		if (exitGallery == false) {
		STORED_STATE = 0xf;
		return 0x16;
		}
		exitGallery = InputStruct::CheckKey(this->inputHandle1,KEY_B,'\x01');
		nextFrame = InputStruct::CheckKey(this->inputHandle1,KEY_A,'\x01');
		if (ROOT_SECTION->field7_0x14 == 2) {
		return 0x18;
		}
		if (exitGallery == false) {
		if (nextFrame == false) {
		return 0x18;
		}
		flags = this->flags2;
		if (((flags >> 8 ^ flags) & 0xff000) != 0) {
		 Next Gallery Frame this->flags2 = ((flags & 0xfff00000) + 0x100000 ^ flags) & 0xff00000 ^ flags;
		goto LAB_000b62fe;
		}
		}
		MenuUI(this);
		return 0xe;
		}
		
	*/
	return 0;
}

uint GameController::BottomTextShow(float param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall GameController::BottomTextShow(GameController *this,float param_1){
		uint uVar1;
		uVar1 = this->flags;
		if ((uVar1 & 0x3f000) == 0xb000) {
		this->flags = uVar1 | 0x80000000;
		TwinString::Copy(&(this->oleg).screenMessage.message,"");
		Oleg::ClearUI(&this->oleg,0xffffffff,0xffffffff,(int)param_1,(int)(TicksPerTime * FLOAT_00386394));
		uVar1 = (this->oleg).parent.uiPresetMask[2].high;
		Oleg::ShowUI(&this->oleg,uVar1,(this->oleg).parent.uiPresetMask[2].low,(int)param_1,(int)(TicksPerTime * FLOAT_00386394));
		return CONCAT31((int3)(uVar1 >> 8),1);
		}
		return uVar1 & 0xffffff00;
		}
		
	*/
	return 0;
}

uint GameController::WhackawormStart(uint param_1, uint param_2, ushort param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall GameController::WhackawormStart(GameController *this,int param_1,uint param_2,ushort param_3){
		uint uVar1;
		undefined *flags2;
		uint uVar2;
		(this->chunkDescriptor).flags = (this->chunkDescriptor).flags & 0xfffffff2 | 2;
		(this->chunkDescriptor).unkField10 = param_1;
		(this->chunkDescriptor).someDTime = param_1;
		uVar1 = (this->chunkDescriptor).flags2;
		uVar2 = (param_2 & 0x3f | param_2 << 6) << 0x14;
		flags2 = &stack0xfffffff4;
		(this->chunkDescriptor).flags2 = uVar2 | uVar1 & 0xfffff;
		Oleg::thunk_FUN_000b5270(&this->oleg,1,(InstanceContext *)(uVar2 | uVar1 & 0xf0000 | (uint)param_3));
		if ((this->flags & 0x3f000) == 0xb000) {
		flags2 = (undefined *)(this->oleg).parent.uiPresetMask[0x20].low;
		Oleg::ShowUI(&this->oleg,(this->oleg).parent.uiPresetMask[0x20].high,(uint)flags2,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		}
		return CONCAT31((int3)((uint)flags2 >> 8),1);
		}
		
	*/
	return 0;
}

uint GameController::FUN_000bb500(float param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling undefined4 __thiscall GameController::FUN_000bb500(GameController *this,float param_1){
		InstanceContextRefCounter *pIVar1;
		InstanceNodeAbstract_VTable *pIVar2;
		InstanceContext *pIVar3;
		InstanceNodeAbstract *pIVar4;
		InstanceNodeAbstract *pIVar5;
		undefined4 uVar6;
		uint uVar7;
		uint uVar8;
		uVar8 = this->flags;
		uVar7 = uVar8 >> 0xc & 0x3f;
		if (uVar7 == 0xb) {
		this->flags = uVar8 & 0xff33ffff | 0x80300000;
		this->flags2 = this->flags2 & 0xfffffffb;
		thunk_FUN_000ba970((int)this);
		uVar8 = (this->chunkDescriptor).flags;
		uVar7 = uVar8 >> 0xc & 0xf;
		uVar8 = uVar8 >> 8 & 0xf;
		if (uVar8 == 6) {
		pIVar3 = (InstanceContext *)0x0;
		}
		else {
		pIVar1 = (this->chunkDescriptor).playerInstanceContexts[uVar8];
		if (pIVar1 == (InstanceContextRefCounter *)0x0) {
		pIVar3 = (InstanceContext *)0x0;
		}
		else {
		pIVar3 = pIVar1->ctx;
		}
		}
		if (pIVar3 != (InstanceContext *)0x0) {
		pIVar4 = InstanceDataList::GetNode(&pIVar3->nodes,Input);
		pIVar5 = InstanceDataList::GetNode(&pIVar3->nodes,Character);
		pIVar2 = pIVar5[1].vtable;
		pIVar4[1].vtable = (InstanceNodeAbstract_VTable *)0x0;
		pIVar2[5].UpdateTime = (UpdateTime *)0x0;
		pIVar2[5].Step = (Step *)0x0;
		pIVar2[5].Method8 = (Method8 *)0x0;
		pIVar2[5].GetBuilderIndex = (GetBuilderIndex *)FLOAT_0038639c;
		}
		if (uVar7 == 6) {
		pIVar3 = (InstanceContext *)0x0;
		}
		else {
		pIVar3 = (InstanceContext *)(this->chunkDescriptor).playerInstanceContexts[uVar7];
		if (pIVar3 != (InstanceContext *)0x0) {
		pIVar3 = *(InstanceContext **)&pIVar3->parent;
		}
		}
		if (pIVar3 != (InstanceContext *)0x0) {
		pIVar4 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar3->field27_0xe0 + 1),Input);
		pIVar5 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar3->field27_0xe0 + 1),Character);
		pIVar2 = pIVar5[1].vtable;
		pIVar4[1].vtable = (InstanceNodeAbstract_VTable *)0x0;
		pIVar2[5].UpdateTime = (UpdateTime *)0x0;
		pIVar2[5].Step = (Step *)0x0;
		pIVar2[5].Method8 = (Method8 *)0x0;
		pIVar2[5].GetBuilderIndex = (GetBuilderIndex *)FLOAT_0038639c;
		}
		TwinString::Copy(&(this->oleg).screenMessage.message,"");
		Oleg::ClearUI(&this->oleg,0xffffffff,0xffffffff,(int)param_1,(int)(TicksPerTime * FLOAT_00386394));
		Oleg::ShowUI(&this->oleg,(this->oleg).parent.uiPresetMask[0].high,(this->oleg).parent.uiPresetMask[0].low,(int)param_1,(int)(TicksPerTime * FLOAT_00386394));
		uVar6 = FUN_0012df20();
		return CONCAT31((int3)((uint)uVar6 >> 8),1);
		}
		if (uVar7 == 6) {
		this->flags = uVar8 | 0x80000000;
		this->flags2 = this->flags2 & 0xfffffffb;
		uVar8 = (this->oleg).parent.uiPresetMask[0].low;
		Oleg::ShowUI(&this->oleg,(this->oleg).parent.uiPresetMask[0].high,uVar8,(int)param_1,(int)(TicksPerTime * FLOAT_00386394));
		return CONCAT31((int3)(uVar8 >> 8),1);
		}
		return uVar8 & 0xffffff00;
		}
		
	*/
	return 0;
}

uint GameController::FUN_000bb700(float param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall GameController::FUN_000bb700(GameController *this,float param_1){
		undefined4 uVar1;
		uint uVar2;
		uint uVar3;
		uVar2 = this->flags;
		uVar3 = uVar2 >> 0xc & 0x3f;
		if (uVar3 == 0xc) {
		this->flags = uVar2 & 0xff2bffff | 0x280000;
		this->flags2 = this->flags2 & 0xfffffffb;
		Oleg::ClearUI(&this->oleg,(this->oleg).parent.uiPresetMask[0].high,(this->oleg).parent.uiPresetMask[0].low,(int)param_1,(int)(TicksPerTime * FLOAT_00386394));
		FUN_0012df40();
		uVar1 = thunk_FUN_000baa40((int)this,'\x01');
		return CONCAT31((int3)((uint)uVar1 >> 8),1);
		}
		if (uVar3 == 6) {
		this->flags = uVar2 & 0x7fffffff;
		uVar2 = (this->oleg).parent.uiPresetMask[0].low;
		Oleg::ClearUI(&this->oleg,(this->oleg).parent.uiPresetMask[0].high,uVar2,(int)param_1,(int)(TicksPerTime * FLOAT_00386394));
		return CONCAT31((int3)(uVar2 >> 8),1);
		}
		thunk_FUN_000baa40((int)this,'\0');
		uVar2 = FUN_0012df40();
		return uVar2 & 0xffffff00;
		}
		
	*/
	return 0;
}

bool GameController::ActionFsm(int flags) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall GameController::ActionFsm(GameController *this,int flags){
		int *piVar1;
		InstanceContextRefCounter *pIVar2;
		bool startPressed;
		uint playerIndex;
		InstanceNodeCharacter *nodeCharacter;
		bool yPressed;
		InstanceNodeCamera *nodeK;
		NodeRelated2C *nodeData;
		InstanceContext *playerCtx;
		uint state;
		startPressed = InputStruct::CheckKey(this->inputHandle1,KEY_START,'\x01');
		this->state = (uint)startPressed << 0x1f | this->state & 0x7fffffffU;
		this->progressCounter = this->progressCounter + 1;
		HandleUIScreenChanges(this,&SOME_STATE);
		if (((this->flags & 0x3f000) != 0xe000) && (ROOT_SECTION->field7_0x14 == 2)) {
		this->flags = this->flags & 0xff3bffff | 0x380000;
		MenuUI(this);
		ResetSomeTimeFlags();
		}
		state = this->flags;
		if ((state & 0xfc0000) != 0x600000) {
		state = (state >> 6 ^ state) & 0xfc0 ^ state;
		this->flags = (state & 0xfc0000 | 0x18000000) >> 6 | state & 0xff600fff;
		this->progressGoal = this->progressCounter;
		this->timeFromStart = SOME_STATE.currentTime;
		}
		switch(this->flags >> 0xc & 0x3f) {
		case 0:state = SetupLanguages();
		break;
		case 1:state = LoadBaseResources(this);
		if (state == 0x18) goto switchD_000bd05e_caseD_17;
		Oleg::InitValues(&this->oleg);
		break;
		case 2:state = 3;
		goto LAB_000bd1e2;
		case 3:state = PlayFMVVIvendi(this,&SOME_STATE);
		break;
		case 4:state = PlayTTIdent(this,&SOME_STATE);
		break;
		case 5:state = LoadStartUpChunk(this);
		break;
		case 6:state = TileScreen(this,&SOME_STATE);
		break;
		case 7:state = TitleScreenMenu(this,&SOME_STATE);
		break;
		case 8:state = LoadOtherLevel(this);
		break;
		case 9:state = PlayIntroCutscene(this);
		break;
		case 10:state = State10(this);
		break;
		case 0xb:state = Game(this,&SOME_STATE);
		break;
		case 0xc:state = State12(this,&SOME_STATE);
		break;
		case 0xd:state = PlayFMVCustom(this,&SOME_STATE);
		break;
		case 0xe:state = IngameMenu(this,&SOME_STATE);
		break;
		case 0xf:state = ShowGallery(this);
		break;
		case 0x10:state = State16(this,&SOME_STATE);
		break;
		case 0x11:state = GameOver(this);
		break;
		case 0x12:state = RollCredits(this,&SOME_STATE);
		break;
		case 0x13:state = State19(this);
		break;
		case 0x14:state = State20(this);
		break;
		case 0x15:state = State21(this);
		break;
		case 0x16:state = WaitConfirmation(this);
		break;
		default:goto switchD_000bd05e_caseD_17;
		}
		if (state != 0x18) {
		LAB_000bd1e2:this->flags = this->flags ^ (state << 0x12 ^ this->flags) & 0xfc0000;
		}
		switchD_000bd05e_caseD_17:playerIndex = (this->chunkDescriptor).flags >> 8 & 0xf;
		if (playerIndex == 6) {
		playerCtx = (InstanceContext *)0x0;
		}
		else {
		pIVar2 = (this->chunkDescriptor).playerInstanceContexts[playerIndex];
		if (pIVar2 == (InstanceContextRefCounter *)0x0) {
		playerCtx = (InstanceContext *)0x0;
		}
		else {
		playerCtx = pIVar2->ctx;
		}
		}
		if ((playerCtx == (InstanceContext *)0x0) ||(nodeCharacter =(InstanceNodeCharacter *)InstanceDataList::GetNode(&playerCtx->nodes,Character),nodeCharacter == (InstanceNodeCharacter *)0x0)) {
		nodeData = (NodeRelated2C *)0x0;
		}
		else {
		nodeData = nodeCharacter->field1_0x18;
		}
		if ((this->flags & 0x3f000) == 0xb000) {
		if (((byte)(this->chunkDescriptor).flags & 0xf) == 2) {
		piVar1 = &(this->chunkDescriptor).someDTime;
		*piVar1 = *piVar1 - GlobalClock->timeArray[1].time2;
		}
		if ((((this->chunkDescriptor).flags & 0xf) == 0) &&(yPressed = InputStruct::CheckKey(this->inputHandle1,KEY_Y,'\0'), yPressed != false)) {
		Oleg::ShowUI(&this->oleg,(this->oleg).parent.uiPresetMask[0x1f].high,(this->oleg).parent.uiPresetMask[0x1f].low,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_003865d0));
		}
		}
		Oleg::ProcessUI(&this->oleg,&SOME_STATE,this->inputHandle1,nodeData);
		state = this->flags >> 0xc & 0x3f;
		if ((state != 0xb) && (state != 0xc)) {
		return false;
		}
		TimeRelatedUpdate(&SOME_STATE);
		if (playerCtx != (InstanceContext *)0x0) {
		nodeK = (InstanceNodeCamera *)InstanceDataList::GetNode(&playerCtx->nodes,Camera);
		playerCtx = (InstanceContext *)nodeK->ctxPtr;
		if (playerCtx != (InstanceContext *)0x0) {
		playerCtx = (InstanceContext *)(playerCtx->parent).vtable;
		}
		InstanceContext::LazyChangePlayerContext(playerCtx);
		}
		if ((char)flags == '\0') {
		MoveSmthShaderRelated();
		}
		return true;
		}
		
	*/
	return false;
}

void GameController::DrawText(byte videoPlayerIsUp) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Removing unreachable block (ram,0x000ba843)  WARNING: Type propagation algorithm not settling void __thiscall GameController::DrawText(GameController *this,byte videoPlayerIsUp){
		uint state;
		InstanceContext *puVar2;
		InstanceNodeAbstract *iVar3;
		int i;
		float x;
		FontRenderer *pFVar1;
		char *str;
		if (videoPlayerIsUp == 0) {
		state = this->flags >> 0xc & 0x3f;
		if (state == 6) {
		if ((-1 < (int)this->flags) && (this->progressGoal + 0x32 < this->progressCounter)) {
		str = LOCAL_MSG1[0x4b];
		this->fontRenderer->font = &this->font;
		this->fontRenderer->color = COLOR_WHITE;
		pFVar1 = this->fontRenderer;
		x = DAT_003e2dfc * FLOAT_0038a838;
		pFVar1->originX = x;
		pFVar1->originY = x;
		this->fontRenderer->field13_0x34 = 0x22;
		FontRenderer::DrawText(this->fontRenderer,0.5,0.9,str);
		}
		}
		else if ((state == 18) && (this->credits != (Credits *)0x0)) {
		Credits::DrawCredits(this->credits,this->fontRenderer);
		}
		i = 0;
		do {
		puVar2 = (InstanceContext *)(this->chunkDescriptor).playerInstanceContexts[i];
		if (puVar2 != (InstanceContext *)0x0) {
		puVar2 = *(InstanceContext **)&puVar2->parent;
		}
		if (puVar2 != (InstanceContext *)0x0) {
		iVar3 = InstanceDataList::GetNode((InstanceDataList *)(&puVar2->field27_0xe0 + 1),Character);
		thunk_FUN_00066ee0((int)iVar3[1].vtable);
		}
		i = i + 1;
		}
		 while (i < 6);
		}
		(*(code *)((this->oleg).parent.vtable)->RenderUI)();
		return;
		}
		
	*/
	return;
}

void GameController::UpdateAspectRatio(byte videoPlayerIsUp) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameController::UpdateAspectRatio(GameController *this,byte videoPlayerIsUp){
		if (videoPlayerIsUp == 0) {
		FUN_00104350(this->fontRenderer,&this->field32_0xb0);
		return;
		}
		return;
		}
		
	*/
	return;
}

uint GameController::BottomTextHide(float param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall GameController::BottomTextHide(GameController *this,float param_1){
		uint uVar1;
		uVar1 = this->flags;
		if ((int)uVar1 < 0) {
		this->flags = uVar1 & 0x7fffffff;
		this->waitTime = (int)param_1;
		uVar1 = (this->oleg).parent.uiPresetMask[2].low;
		Oleg::ClearUI(&this->oleg,(this->oleg).parent.uiPresetMask[2].high,uVar1,(int)param_1,(int)(TicksPerTime * FLOAT_00386394));
		return CONCAT31((int3)(uVar1 >> 8),1);
		}
		return uVar1 & 0xffffff00;
		}
		
	*/
	return 0;
}

uint GameController::PlayMovie(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall GameController::PlayMovie(GameController *this,float param_1,FMVIndex param_2){
		uint uVar1;
		this->fmvTimeRelated = param_1;
		uVar1 = this->flags & 0xff37ffff | 0x340000;
		this->flags = uVar1;
		this->fmvIndex = param_2;
		return CONCAT31((int3)(uVar1 >> 8),1);
		}
		
	*/
	return 0;
}

uint GameController::ResetGame() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall GameController::ResetGame(GameController *this){
		uint uVar1;
		uVar1 = this->flags;
		if (((this->chunkDescriptor).flags2 & 0x3f80) == 0) {
		if ((undefined *)(uVar1 & 0x3f000) != &DAT_00011000) {
		uVar1 = uVar1 & 0xff47ffff | 0x440000;
		this->flags = uVar1;
		return CONCAT31((int3)(uVar1 >> 8),1);
		}
		}
		else if ((uVar1 & 0x3f000) != 0x14000) {
		this->flags = uVar1 & 0xff53ffff | 0x500000;
		uVar1 = this->state & 0xf9ffffffU | 0x1800000;
		this->state = uVar1;
		return CONCAT31((int3)(uVar1 >> 8),1);
		}
		return uVar1 & 0xffffff00;
		}
		
	*/
	return 0;
}

uint GameController::PlayCredits() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall GameController::PlayCredits(GameController *this){
		uint uVar1;
		uVar1 = this->flags;
		if ((uVar1 & 0x3f000) == 0x12000) {
		return uVar1 & 0xffffff00;
		}
		uVar1 = uVar1 & 0xff4bffff | 0x480000;
		this->flags = uVar1;
		return CONCAT31((int3)(uVar1 >> 8),1);
		}
		
	*/
	return 0;
}

uint GameController::ForceGameOver() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall GameController::ForceGameOver(GameController *this){
		uint uVar1;
		uVar1 = this->flags;
		if ((undefined *)(uVar1 & 0x3f000) == &DAT_00011000) {
		return uVar1 & 0xffffff00;
		}
		uVar1 = uVar1 & 0xff47ffff | 0x440000;
		this->flags = uVar1;
		return CONCAT31((int3)(uVar1 >> 8),1);
		}
		
	*/
	return 0;
}

uint GameController::BossModeEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall GameController::BossModeEnd(GameController *this){
		uint uVar1;
		uVar1 = (this->chunkDescriptor).flags;
		if (((byte)uVar1 & 0xf) == 1) {
		(this->chunkDescriptor).flags = uVar1 & 0xfffffff0;
		uVar1 = (this->oleg).parent.uiPresetMask[0x21].low;
		Oleg::ClearUI(&this->oleg,(this->oleg).parent.uiPresetMask[0x21].high,uVar1,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		return CONCAT31((int3)(uVar1 >> 8),1);
		}
		return uVar1 & 0xffffff00;
		}
		
	*/
	return 0;
}

uint GameController::WhackawormEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall GameController::WhackawormEnd(GameController *this){
		uint uVar1;
		uVar1 = (this->chunkDescriptor).flags;
		if (((byte)uVar1 & 0xf) == 2) {
		(this->chunkDescriptor).flags = uVar1 & 0xfffffff0;
		uVar1 = (this->oleg).parent.uiPresetMask[0x20].low;
		Oleg::ClearUI(&this->oleg,(this->oleg).parent.uiPresetMask[0x20].high,uVar1,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		return CONCAT31((int3)(uVar1 >> 8),1);
		}
		return uVar1 & 0xffffff00;
		}
		
	*/
	return 0;
}

bool GameController::FUN_000af380(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall GameController::FUN_000af380(GameController *this,int param_1){
		if ((this->flags & 0x3f000) == 0x14000) {
		return false;
		}
		this->flags = this->flags & 0xff53ffff | 0x500000;
		this->state = this->state ^ (param_1 << 0x17 ^ this->state) & 0x7800000U;
		return true;
		}
		
	*/
	return false;
}

bool GameController::FUN_000afed0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall GameController::FUN_000afed0(GameController *this){
		SaveSystem *mainMenu;
		mainMenu = SaveSystem;
		this->flags = this->flags & 0xa8ffffff | 0x28000000;
		FUN_00200f30(mainMenu,3,(int)(TicksPerTime * FLOAT_003865d0));
		return true;
		}
		
	*/
	return false;
}

void GameController::ProgressUI2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameController::ProgressUI2(GameController *this){
		(*(code *)((this->oleg).parent.vtable)->CallAll2)();
		return;
		}
		
	*/
	return;
}

void GameController::ProgressUI() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameController::ProgressUI(GameController *this){
		(*(code *)((this->oleg).parent.vtable)->CallAll1)();
		return;
		}
		
	*/
	return;
}

uint GameController::BossModeEnable(uint param_1, ushort param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall GameController::BossModeEnable(GameController *this,uint param_1,ushort param_2,undefined4 param_3){
		uint uVar1;
		undefined *flags2;
		uint uVar2;
		(this->chunkDescriptor).flags = (this->chunkDescriptor).flags & 0xfffffff1 | 1;
		uVar2 = (this->chunkDescriptor).flags2 & 0xfff03fff | (param_1 & 7) << 0xe;
		uVar1 = (param_1 & 7) << 0x11;
		flags2 = &stack0xfffffff4;
		(this->chunkDescriptor).flags2 = uVar2 | uVar1;
		(this->chunkDescriptor).unkReserved1 = param_3;
		Oleg::thunk_FUN_000b5270(&this->oleg,0,(InstanceContext *)(uVar2 & 0xffff0000 | uVar1 | (uint)param_2));
		if ((this->flags & 0x3f000) == 0xb000) {
		flags2 = (undefined *)(this->oleg).parent.uiPresetMask[0x21].low;
		Oleg::ShowUI(&this->oleg,(this->oleg).parent.uiPresetMask[0x21].high,(uint)flags2,(int)(TicksPerTime * FLOAT_0038cb00),(int)(TicksPerTime * FLOAT_00386394));
		}
		return CONCAT31((int3)((uint)flags2 >> 8),1);
		}
		
	*/
	return 0;
}

void GameController::FUN_000674c0()
{
	Logging::LogUnimplemented(__FUNCSIG__);
}

void GameController::InitSomeShaders()
{
	Logging::LogUnimplemented(__FUNCSIG__);
}

