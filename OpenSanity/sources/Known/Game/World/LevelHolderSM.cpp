#include "headers/Known/Game/World/LevelHolderSM.h"

#include "headers/Known/LevelStructure/Sections/RM/SectionSM.h"
#include "headers/Known/Game/Chunks/ChunkDataRefCounter.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void LevelHolderSM::FUN_00154770(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall LevelHolderSM::FUN_00154770(LevelHolderSM *this,int param_1){
		uint *puVar1;
		undefined4 *puVar2;
		ChunkData *chunk;
		int iVar3;
		puVar1 = (uint *)(param_1 + 0x20);
		if (*(int **)(param_1 + 0x10) == (int *)0x0) {
		iVar3 = 0;
		}
		else {
		iVar3 = **(int **)(param_1 + 0x10);
		}
		if (this->chunkDataRef == (ChunkDataRefCounter *)0x0) {
		chunk = (ChunkData *)0x0;
		}
		else {
		chunk = this->chunkDataRef->chunk;
		}
		ChunkData::FUN_0013b700(chunk,puVar1);
		if ((iVar3 != 0) && (*(int *)(iVar3 + 0x24) != 0)) {
		puVar2 = *(undefined4 **)(*(int *)(iVar3 + 0x24) + 0x1c);
		if (puVar2 != (undefined4 *)0x0) {
		puVar2 = (undefined4 *)*puVar2;
		}
		*(undefined4 **)(param_1 + 0x24) = puVar2;
		*puVar1 = *puVar1 ^ ((uint)(puVar2 != (undefined4 *)0x0) << 0x11 ^ *puVar1) & 0x20000;
		}
		return;
		}
		
	*/
	return;
}

void LevelHolderSM::FUN_001547d0(void* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall LevelHolderSM::FUN_001547d0(LevelHolderSM *this,undefined *param_1){
		ChunkData *pCVar1;
		uint *this_00;
		pCVar1 = (ChunkData *)this->chunkDataRef;
		if ((pCVar1 != (ChunkData *)0x0) && ((ChunkData *)pCVar1->chunkRef != (ChunkData *)0x0)) {
		this_00 = (uint *)(param_1 + 0x20);
		if (pCVar1 != (ChunkData *)0x0) {
		pCVar1 = (ChunkData *)pCVar1->chunkRef;
		}
		if ((*this_00 >> 0x10 & 1) != 0) {
		*(undefined4 *)(param_1 + 0x24) = 0;
		*this_00 = *this_00 & 0xfffeffff;
		FUN_00141810(this_00,&pCVar1->chunkLinksMatrices,0xc,8);
		}
		return;
		}
		return;
		}
		
	*/
	return;
}

void LevelHolderSM::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	LevelHolderSM * __thiscall LevelHolderSM::Construct(LevelHolderSM *this,undefined4 param_1){
		UnkFamily18A *puVar1;
		LevelHolderAbstract::Construct(&this->parent,param_1);
		(this->parent).vtable = (LevelHolder_VTable *)&LevelHolder_VT_SM;
		this->section = (SectionSM *)0x0;
		this->chunkDataRef = (ChunkDataRefCounter *)0x0;
		(this->parent).someNum = 1;
		puVar1 = (UnkFamily18A *)VirtualPool::AllocateMemory(4);
		if (puVar1 != (UnkFamily18A *)0x0) {
		(puVar1->parent).vtable = (UnkFamily18Abstract_VTable *)&UnkFamily18_VT_A;
		(this->parent).field2_0x8 = (UnkFamily18Abstract *)puVar1;
		return this;
		}
		(this->parent).field2_0x8 = (UnkFamily18Abstract *)0x0;
		return this;
		}
		
	*/
	return;
}

bool LevelHolderSM::DisposeSection() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall LevelHolderSM::DisposeSection(LevelHolderSM *this){
		SectionSM *this_00;
		this_00 = this->section;
		if (this_00->flag != false) {
		return true;
		}
		if (this_00 != (SectionSM *)0x0) {
		(*((this_00->parent).vtable)->Dispose)(&this_00->parent,1);
		}
		this->section = (SectionSM *)0x0;
		return false;
		}
		
	*/
	return false;
}

void LevelHolderSM::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall LevelHolderSM::Dispose(LevelHolderSM *this){
		SectionSM *this_00;
		UnkFamily18Abstract *pUVar1;
		uint uVar2;
		this_00 = this->section;
		(this->parent).vtable = (LevelHolder_VTable *)&LevelHolder_VT_SM;
		if (this_00 != (SectionSM *)0x0) {
		(*((this_00->parent).vtable)->Dispose)(&this_00->parent,1);
		}
		pUVar1 = (this->parent).field2_0x8;
		if (pUVar1 != (UnkFamily18Abstract *)0x0) {
		(*(code *)pUVar1->vtable->Dispose)(1);
		}
		if ((ChunkData *)this->chunkDataRef != (ChunkData *)0x0) {
		uVar2 = ChunkData::thunk_FUN_00023d20((ChunkData *)this->chunkDataRef);
		if (uVar2 == 0) {
		ChunkDataRefCounter::Release(&this->chunkDataRef);
		}
		}
		LevelHolderAbstract::Unroll(&this->parent);
		return;
		}
		
	*/
	return;
}

bool LevelHolderSM::Method4() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall LevelHolderSM::Method4(LevelHolderSM *this){
		ChunkDataRefCounter **out;
		bool bVar1;
		ChunkData *chunkData;
		ChunkList *chunkList;
		uint uVar2;
		chunkData = (ChunkData *)this->chunkDataRef;
		out = &this->chunkDataRef;
		if ((chunkData != (ChunkData *)0x0) && (chunkData->chunkRef != (ChunkDataRefCounter *)0x0)) {
		if (chunkData != (ChunkData *)0x0) {
		chunkData = (ChunkData *)chunkData->chunkRef;
		}
		bVar1 = ChunkData::FUN_00140680(chunkData,true,(Clock *)0x0);
		if (bVar1 != false) {
		return true;
		}
		chunkData = (*out)->chunk;
		chunkList = ChunkList::GetInstance();
		ChunkList::FUN_0013d250(chunkList,chunkData);
		if ((*out != (ChunkDataRefCounter *)0x0) &&(chunkData = (*out)->chunk, chunkData != (ChunkData *)0x0)) {
		ChunkData::FreeMemory(chunkData);
		VirtualPool::FreeMemory(chunkData);
		}
		chunkData = (ChunkData *)*out;
		if ((chunkData != (ChunkData *)0x0) && (chunkData->chunkRef != (ChunkDataRefCounter *)0x0)) {
		uVar2 = ChunkData::thunk_FUN_00023d20(chunkData);
		if (uVar2 == 0) {
		ChunkDataRefCounter::Release(out);
		}
		*out = (ChunkDataRefCounter *)0x0;
		}
		WorldChunk::FUN_00206990((this->parent).worldChunk);
		}
		return false;
		}
		
	*/
	return false;
}

void LevelHolderSM::Dispose_6(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	LevelHolderSM * __thiscall LevelHolderSM::Dispose(LevelHolderSM *this,byte param_1){
		SectionSM *this_00;
		UnkFamily18Abstract *pUVar1;
		uint uVar2;
		this_00 = this->section;
		(this->parent).vtable = (LevelHolder_VTable *)&LevelHolder_VT_SM;
		if (this_00 != (SectionSM *)0x0) {
		(*((this_00->parent).vtable)->Dispose)(&this_00->parent,1);
		}
		pUVar1 = (this->parent).field2_0x8;
		if (pUVar1 != (UnkFamily18Abstract *)0x0) {
		(*(code *)pUVar1->vtable->Dispose)(1);
		}
		if ((ChunkData *)this->chunkDataRef != (ChunkData *)0x0) {
		uVar2 = ChunkData::thunk_FUN_00023d20((ChunkData *)this->chunkDataRef);
		if (uVar2 == 0) {
		ChunkDataRefCounter::Release(&this->chunkDataRef);
		}
		}
		LevelHolderAbstract::Unroll(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

bool LevelHolderSM::SometimesDoesRead(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall LevelHolderSM::SometimesDoesRead(LevelHolderSM *this,undefined4 param_1){
		bool bVar1;
		uint uVar2;
		if ((this->chunkDataRef != (ChunkDataRefCounter *)0x0) &&(this->chunkDataRef->chunk != (ChunkData *)0x0)) {
		uVar2 = ((this->parent).worldChunk)->flags & 0xf;
		if (uVar2 < 2) {
		uVar2 = 0xffffffff;
		}
		else if (uVar2 == 2) {
		uVar2 = 8;
		}
		else {
		uVar2 = 0;
		}
		if (this->chunkDataRef == (ChunkDataRefCounter *)0x0) {
		uRam00000158 = uVar2;
		bVar1 = LevelHolderAbstract::SometimesDoesRead(&this->parent,param_1);
		return bVar1;
		}
		this->chunkDataRef->chunk->field28_0x158 = uVar2;
		}
		bVar1 = LevelHolderAbstract::SometimesDoesRead(&this->parent,param_1);
		return bVar1;
		}
		
	*/
	return false;
}

void LevelHolderSM::DoChunkStuff(LevelHolderSM* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall LevelHolderSM::DoChunkStuff(LevelHolderSM *param_1){
		if (param_1->chunkDataRef == (ChunkDataRefCounter *)0x0) {
		ChunkData::FUN_001407f0((ChunkData *)0x0,true,true,1);
		return;
		}
		ChunkData::FUN_001407f0(param_1->chunkDataRef->chunk,true,true,1);
		return;
		}
		
	*/
	return;
}

bool LevelHolderSM::SameChunkData(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall LevelHolderSM::SameChunkData(LevelHolderSM *this,InstanceContext *ctx){
		ChunkData *pCVar1;
		if ((this->chunkDataRef != (ChunkDataRefCounter *)0x0) &&(this->chunkDataRef->chunk != (ChunkData *)0x0)) {
		pCVar1 = (ChunkData *)this->chunkDataRef;
		if (pCVar1 != (ChunkData *)0x0) {
		pCVar1 = (ChunkData *)pCVar1->chunkRef;
		}
		if (pCVar1 == (ctx->parent).chunkData) {
		return true;
		}
		}
		return false;
		}
		
	*/
	return false;
}

bool LevelHolderSM::Read(int param_1, bool read) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall LevelHolderSM::Read(LevelHolderSM *this,int param_1,bool read){
		WorldChunk *pWVar1;
		uint uVar2;
		AutoClass1 *someClass;
		ChunkList *chunkList;
		SectionSM *section;
		ChunkData *pCVar3;
		TwinString tmpStr;
		ChunkDataRefCounter **chunkDataRef;
		char *strPtr;
		if (param_1 != 0) {
		return false;
		}
		chunkDataRef = &this->chunkDataRef;
		if ((this->chunkDataRef != (ChunkDataRefCounter *)0x0) &&(this->chunkDataRef->chunk != (ChunkData *)0x0)) {
		return false;
		}
		tmpStr.value = (char *)0x0;
		tmpStr.strLength = 0;
		tmpStr.strSize = 0;
		TwinString::Copy(&tmpStr,(((this->parent).worldChunk)->chunkName).value);
		someClass = (AutoClass1 *)VirtualPool::AllocateMemory(0x1f0);
		if (someClass == (AutoClass1 *)0x0) {
		someClass = (AutoClass1 *)0x0;
		}
		else {
		strPtr = tmpStr.value;
		chunkList = ChunkList::GetInstance();
		someClass = AutoClass1::Construct(someClass,chunkList,strPtr);
		}
		ChunkDataRefCounter::Unpack(chunkDataRef,someClass);
		pCVar3 = (ChunkData *)*chunkDataRef;
		if (pCVar3 != (ChunkData *)0x0) {
		pCVar3 = (ChunkData *)pCVar3->chunkRef;
		}
		ChunkData::CreateLightController(pCVar3);
		if (*chunkDataRef == (ChunkDataRefCounter *)0x0) {
		pCVar3 = (ChunkData *)0x0;
		}
		else {
		pCVar3 = (*chunkDataRef)->chunk;
		}
		ChunkData::CreateSomething(pCVar3);
		section = (SectionSM *)VirtualPool::AllocateMemory(0x88);
		if (section == (SectionSM *)0x0) {
		section = (SectionSM *)0x0;
		}
		else {
		section = SectionSM::Construct(section,this);
		}
		pWVar1 = (this->parent).worldChunk;
		this->section = section;
		uVar2 = pWVar1->flags;
		SectionSM::Read(section,read,(bool)((byte)(uVar2 >> 8) & 1),(bool)((byte)(uVar2 >> 9) & 1));
		TwinString::Dispose(&tmpStr);
		return true;
		}
		
	*/
	return false;
}

