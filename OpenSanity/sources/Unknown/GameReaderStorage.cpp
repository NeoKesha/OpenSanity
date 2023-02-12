#include "headers/Unknown/GameReaderStorage.h"

#include "headers/Known/FileResourceDesc/FileResourceDescAbstract.h"
#include "headers/Unknown/AutoClasses/FileReaderHelper.h"
#include "headers/Global.h"
GameReaderStorage::GameReaderStorage()
{
	GameReaderStorage(0);
}
GameReaderStorage::GameReaderStorage(uint index)
{
	Global* GLOBAL = Global::Get();

	FileReaderHelper* reader;
	size_t size;
	UnkRMRelated* src;
	this->bufferSpaceTotal = 0x5dc;
	this->bufferIndex = 0;
	this->bufferSpaceUsed = 0;
	this->readerBuffer = new FileResourceDescAbstract * [1500];
	this->currentReaderItem = (FileResourceDescAbstract*)0x0;
	this->storageSpaceUsed = 0;
	this->storageSpaceTotal = 0x800;
	this->readerStorage = new FileResourceDescAbstract * [2048];
	this->index = 0;
	this->index = index & 7;
	size = 0x80000;
	if (index == 1) {
		size = 0x200000;
	}
	reader = FileReaderHelper::Create(GLOBAL->ROOT_SECTION);
	this->reader = reader;
	reader->AllocateStream(size);
	GLOBAL->DAT_004a7a7c = 0;
}
GameReaderStorage* GameReaderStorage::LazyGetReaderStorage(int i)
{
	Global* GLOBAL = Global::Get();

	if (GLOBAL->GAME_READER_STORAGE[i] == null) {
		GLOBAL->GAME_READER_STORAGE[i] = new GameReaderStorage(i);
	}
	return GLOBAL->GAME_READER_STORAGE[i];
}
bool GameReaderStorage::FUN_0020def0() {
	/*
	bool __fastcall GameReaderStorage::FUN_0020def0(GameReaderStorage *this){
		short sVar1;
		FileResourceDescAbstract *pFVar2;
		int iVar3;
		if (DAT_004a7a7c != 0) {
		return false;
		}
		sVar1 = this->storageSpaceUsed;
		while (sVar1 != 0) {
		this->storageSpaceUsed = this->storageSpaceUsed + -1;
		pFVar2 = this->readerStorage[(ushort)this->storageSpaceUsed];
		iVar3 = this->bufferIndex + -1;
		this->bufferIndex = iVar3;
		if (iVar3 == -1) {
		this->bufferIndex = this->bufferSpaceTotal + -1;
		}
		this->readerBuffer[this->bufferIndex] = pFVar2;
		this->bufferSpaceUsed = this->bufferSpaceUsed + 1;
		sVar1 = this->storageSpaceUsed;
		}
		if (this->bufferSpaceUsed != 0) {
		pFVar2 = this->readerBuffer[this->bufferIndex];
		iVar3 = this->bufferIndex + 1;
		this->bufferIndex = iVar3;
		if (iVar3 == this->bufferSpaceTotal) {
		this->bufferIndex = 0;
		}
		this->bufferSpaceUsed = this->bufferSpaceUsed + -1;
		this->currentReaderItem = pFVar2;
		(*pFVar2->vtable->Method1)(pFVar2,this->reader);
		return true;
		}
		this->currentReaderItem = (FileResourceDescAbstract *)0x0;
		return false;
		}
		
	*/
	return false;
}

bool GameReaderStorage::ReadSection() {
	/*
	bool __fastcall GameReaderStorage::ReadSection(GameReaderStorage *this){
		FileResourceDescAbstract *this_00;
		bool bVar1;
		if (this->currentReaderItem != (FileResourceDescAbstract *)0x0) {
		bVar1 = (*this->currentReaderItem->vtable->IsA)();
		if (bVar1 == false) {
		return false;
		}
		this->index = this->index | 8;
		(*this->currentReaderItem->vtable->Read)(this->currentReaderItem,(int)&this->readerStorage);
		this_00 = this->currentReaderItem;
		if (this_00 != (FileResourceDescAbstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		}
		this->currentReaderItem = (FileResourceDescAbstract *)0x0;
		this->index = this->index & 0xfffffff7;
		}
		return true;
		}
		
	*/
	return false;
}

uint GameReaderStorage::Read(bool* out) {
	/*
	undefined4 __thiscall GameReaderStorage::Read(GameReaderStorage *this,bool *out){
		FileResourceDescAbstract *this_00;
		bool result;
		if (DAT_004a7a7c == 0) {
		if (this->currentReaderItem == (FileResourceDescAbstract *)0x0) {
		result = FUN_0020def0(this);
		*out = result;
		}
		else {
		result = ReadSection(this);
		if (result == false) {
		*out = false;
		}
		else {
		result = FUN_0020def0(this);
		*out = result;
		}
		}
		}
		else if (DAT_004a7a7c == 1) {
		while (this->currentReaderItem != (FileResourceDescAbstract *)0x0) {
		result = (*this->currentReaderItem->vtable->IsA)();
		if (result != false) {
		this->index = this->index | 8;
		(*this->currentReaderItem->vtable->Read)(this->currentReaderItem,(int)&this->readerStorage);
		this_00 = this->currentReaderItem;
		if (this_00 != (FileResourceDescAbstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		}
		this->currentReaderItem = (FileResourceDescAbstract *)0x0;
		this->index = this->index & 0xfffffff7;
		break;
		}
		FileReaderHelper::Read(this->reader);
		}
		}
		else if (DAT_004a7a7c == 2) {
		if (this->currentReaderItem == (FileResourceDescAbstract *)0x0) goto LAB_0020e096;
		FileReaderHelper::FUN_002043d0(this->reader);
		(*this->currentReaderItem->vtable->Method4)(this->currentReaderItem);
		(*this->currentReaderItem->vtable->Method1)(this->currentReaderItem,this->reader);
		}
		if (this->currentReaderItem != (FileResourceDescAbstract *)0x0) {
		return 1;
		}
		LAB_0020e096:if ((this->bufferSpaceUsed == 0) && (this->storageSpaceUsed == 0)) {
		return 0;
		}
		return 1;
		}
		
	*/
	return 0;
}

void GameReaderStorage::AddFileDesc(FileResourceDescAbstract* desc, byte flag) {
	/*
	void __thiscall GameReaderStorage::AddFileDesc(GameReaderStorage *this,FileResourceDescAbstract *desc,byte flag){
		uint i;
		int iVar1;
		if (desc != (FileResourceDescAbstract *)0x0) {
		if (flag != 0) {
		iVar1 = this->bufferIndex + -1;
		this->bufferIndex = iVar1;
		if (iVar1 == -1) {
		this->bufferIndex = this->bufferSpaceTotal + -1;
		}
		this->readerBuffer[this->bufferIndex] = desc;
		this->bufferSpaceUsed = this->bufferSpaceUsed + 1;
		return;
		}
		if ((*(byte *)&this->index & 8) != 0) {
		this->readerStorage[(ushort)this->storageSpaceUsed] = desc;
		this->storageSpaceUsed = this->storageSpaceUsed + 1;
		return;
		}
		i = this->bufferIndex + this->bufferSpaceUsed;
		if ((uint)this->bufferSpaceTotal <= i) {
		i = i - this->bufferSpaceTotal;
		}
		this->readerBuffer[i] = desc;
		this->bufferSpaceUsed = this->bufferSpaceUsed + 1;
		}
		return;
		}
		
	*/
	return;
}

void GameReaderStorage::ReadStuff() {
	/*
	void __fastcall GameReaderStorage::ReadStuff(void){
		undefined4 uVar1;
		PhysicalPool *pool;
		uint i;
		int iVar2;
		bool bStack1;
		bool flag;
		FileReaderHelper *reader;
		 There was undefined* startupLevel, but it is unknowns what and generates a lot of   extraout_ECX iVar2 = DAT_004a7a7c;
		if (DAT_004a7a7c != 0) {
		if (DAT_004a7a7c == 1) {
		i = 0;
		do {
		if (*(GameReaderStorage **)((int)GAME_READER_STORAGE + i) != (GameReaderStorage *)0x0) {
		Read(*(GameReaderStorage **)((int)GAME_READER_STORAGE + i),&bStack1);
		}
		i = i + 4;
		}
		 while (i < 8);
		goto LAB_0020e1fd;
		}
		if (DAT_004a7a7c != 2) {
		return;
		}
		if ((VideoPlayer != (VideoPlayer *)0x0) && (((VideoPlayer->parent).flags >> 7 & 1) != 0)) {
		(*((VideoPlayer->parent).vtable)->ResetFlag)(&VideoPlayer->parent);
		}
		iVar2 = 0;
		}
		do {
		if ((GAME_READER_STORAGE[1] == (GameReaderStorage *)0x0) ||(uVar1 = Read(GAME_READER_STORAGE[1],&bStack1), (char)uVar1 == '\0')) {
		if ((GAME_READER_STORAGE[0] == (GameReaderStorage *)0x0) ||(uVar1 = Read(GAME_READER_STORAGE[0],&bStack1), (char)uVar1 == '\0')) {
		flag = false;
		}
		else {
		flag = true;
		}
		}
		else {
		flag = true;
		}
		if (DAT_004a7a70 != '\0') {
		pool = PhysicalPool::GetPool();
		PhysicalPool::UnkMethod2(pool);
		}
		i = 0;
		do {
		if ((*(int *)((int)GAME_READER_STORAGE + i) != 0) &&(reader = *(FileReaderHelper **)(*(int *)((int)GAME_READER_STORAGE + i) + 4),reader != (FileReaderHelper *)0x0)) {
		FileReaderHelper::Read(reader);
		}
		i = i + 4;
		}
		 while (i < 8);
		}
		 while (flag);
		LAB_0020e1fd:SOME_CNT = SOME_CNT + 1;
		DAT_004a7a7c = iVar2;
		return;
		}
		
	*/
	return;
}

bool GameReaderStorage::FUN_0020e210(bool param_1) {
	/*
	bool __cdecl GameReaderStorage::FUN_0020e210(bool param_1){
		byte *pbVar1;
		undefined4 uVar2;
		bool bVar3;
		int iVar3;
		uint uVar4;
		undefined3 in_stack_00000005;
		iVar3 = DAT_004a7a7c;
		pbVar1 = _param_1;
		bVar3 = false;
		*_param_1 = 0;
		if (-1 < DAT_004a7a7c) {
		if (1 < DAT_004a7a7c) {
		if (DAT_004a7a7c != 2) {
		DAT_004a7a7c = iVar3;
		return false;
		}
		if ((VideoPlayer != (VideoPlayer *)0x0) && (((VideoPlayer->parent).flags >> 7 & 1) != 0)) {
		(*((VideoPlayer->parent).vtable)->ResetFlag)(&VideoPlayer->parent);
		}
		iVar3 = 0;
		}
		uVar4 = 0;
		do {
		if (*(GameReaderStorage **)((int)GAME_READER_STORAGE + uVar4) != (GameReaderStorage *)0x0) {
		uVar2 = Read(*(GameReaderStorage **)((int)GAME_READER_STORAGE + uVar4),&param_1);
		bVar3 = (bool)(bVar3 | (byte)uVar2);
		*pbVar1 = *pbVar1 | param_1;
		}
		uVar4 = uVar4 + 4;
		}
		 while (uVar4 < 8);
		SOME_CNT = SOME_CNT + 1;
		}
		DAT_004a7a7c = iVar3;
		return bVar3;
		}
		
	*/
	return false;
}
