#include "headers/Known/Game/World/LevelHolderRM.h"

#include "headers/Known/LevelStructure/Sections/RM/NodeSections/RM/SectionRM.h"
#include "headers/Known/Game/World/WorldChunk.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/SortLater/AutoClass16.h"
void LevelHolderRM::Construct(WorldChunk* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	LevelHolderRM * __thiscall LevelHolderRM::Construct(LevelHolderRM *this,WorldChunk *param_1){
		UnkFamily18Abstract *pUVar1;
		LevelHolderAbstract::Construct(&this->parent,param_1);
		(this->parent).vtable = (LevelHolder_VTable *)&LevelHolder_VT_RM;
		this->section = (SectionRM *)0x0;
		this->ptr = (AutoClass16 *)0x0;
		(this->parent).someNum = 1;
		pUVar1 = (UnkFamily18Abstract *)VirtualPool::AllocateMemory(4);
		if (pUVar1 != (UnkFamily18Abstract *)0x0) {
		pUVar1->vtable = (UnkFamily18Abstract_VTable *)&UnkFamily18_VT_B;
		(this->parent).field2_0x8 = pUVar1;
		return this;
		}
		(this->parent).field2_0x8 = (UnkFamily18Abstract *)0x0;
		return this;
		}
		
	*/
	return;
}

void LevelHolderRM::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall LevelHolderRM::Dispose(LevelHolderRM *this){
		UnkFamily18Abstract *pUVar1;
		pUVar1 = (this->parent).field2_0x8;
		(this->parent).vtable = (LevelHolder_VTable *)&LevelHolder_VT_RM;
		if (pUVar1 != (UnkFamily18Abstract *)0x0) {
		(*(code *)pUVar1->vtable->Dispose)(1);
		}
		LevelHolderAbstract::Unroll(&this->parent);
		return;
		}
		
	*/
	return;
}

bool LevelHolderRM::DisposeSection() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall LevelHolderRM::DisposeSection(LevelHolderRM *this){
		SectionRM *this_00;
		if (((uint)this->section->flags >> 1 & 1) != 0) {
		return true;
		}
		if ((((this->parent).worldChunk)->flags >> 9 & 1) == 0) {
		AutoClass16::FUN_001b3970(this->ptr);
		}
		this_00 = this->section;
		if (this_00 != (SectionRM *)0x0) {
		(*((this_00->parent).vtable)->Dispose)(&this_00->parent,1);
		}
		this->section = (SectionRM *)0x0;
		return false;
		}
		
	*/
	return false;
}

bool LevelHolderRM::DoChunkStuff() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall LevelHolderRM::DoChunkStuff(LevelHolderRM *this){
		ChunkDataRefCounter *pCVar1;
		ChunkData *chunkData;
		pCVar1 = ((this->parent).worldChunk)->SM->chunkDataRef;
		if (pCVar1 == (ChunkDataRefCounter *)0x0) {
		chunkData = (ChunkData *)0x0;
		}
		else {
		chunkData = pCVar1->chunk;
		}
		if (this->ptr != (AutoClass16 *)0x0) {
		(*(code *)RM->vtable->CleanUpElement)(this->ptr);
		this->ptr = (AutoClass16 *)0x0;
		}
		if (chunkData != (ChunkData *)0x0) {
		chunkData->field16_0x124 = chunkData->field16_0x124 + -1;
		ChunkData::FUN_001407f0(chunkData,true,false,1);
		}
		return true;
		}
		
	*/
	return false;
}

void LevelHolderRM::Dispose_4(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	LevelHolderRM * __thiscall LevelHolderRM::Dispose(LevelHolderRM *this,byte param_1){
		UnkFamily18Abstract *pUVar1;
		pUVar1 = (this->parent).field2_0x8;
		(this->parent).vtable = (LevelHolder_VTable *)&LevelHolder_VT_RM;
		if (pUVar1 != (UnkFamily18Abstract *)0x0) {
		(*(code *)pUVar1->vtable->Dispose)(1);
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

bool LevelHolderRM::Read(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall LevelHolderRM::Read(LevelHolderRM *this,int param_1){
		WorldChunk *pWVar1;
		ChunkDataRefCounter *pCVar2;
		AutoClass16 *pAVar3;
		uint uVar4;
		AutoClass16 *puVar4;
		IndexToIdList *pIVar5;
		SectionRM *pSVar6;
		int unaff_retaddr;
		ChunkData *chunkData;
		if (param_1 != 0) {
		return false;
		}
		pWVar1 = (this->parent).worldChunk;
		pCVar2 = pWVar1->SM->chunkDataRef;
		if ((pCVar2 != (ChunkDataRefCounter *)0x0) &&(chunkData = pCVar2->chunk, chunkData != (ChunkData *)0x0)) {
		puVar4 = (AutoClass16 *)(*(code *)RM->vtable->AddChunk)((pWVar1->chunkName).value,chunkData);
		this->ptr = puVar4;
		chunkData->field16_0x124 = chunkData->field16_0x124 + 1;
		ChunkData::CreateSomething(chunkData);
		ChunkData::FUN_00138280(chunkData,100);
		ChunkData::CreateCollisionData(chunkData);
		pAVar3 = this->ptr;
		pIVar5 = (IndexToIdList *)VirtualPool::AllocateMemory(0x404);
		if (pIVar5 == (IndexToIdList *)0x0) {
		pIVar5 = (IndexToIdList *)0x0;
		}
		else {
		pIVar5->cnt = 0;
		}
		pAVar3->indexToIdList = pIVar5;
		pSVar6 = (SectionRM *)VirtualPool::AllocateMemory(0x16c);
		if (pSVar6 == (SectionRM *)0x0) {
		pSVar6 = (SectionRM *)0x0;
		}
		else {
		pSVar6 = SectionRM::Construct(pSVar6,this->ptr);
		}
		pWVar1 = (this->parent).worldChunk;
		this->section = pSVar6;
		uVar4 = pWVar1->flags;
		SectionRM::LoadUnpackedLevel(pSVar6,unaff_retaddr,(byte)(uVar4 >> 8) & 1,(byte)(uVar4 >> 9) & 1);
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

bool LevelHolderRM::Method4() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool LevelHolderRM::Method4(void){
		return false;
		}
		
	*/
	return false;
}

bool LevelHolderRM::SameChunkData(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall LevelHolderRM::SameChunkData(LevelHolderRM *this,InstanceContext *ctx){
		ChunkData *pCVar1;
		if (this->ptr == (AutoClass16 *)0x0) {
		return false;
		}
		pCVar1 = (ChunkData *)this->ptr->chunkData;
		if (pCVar1 != (ChunkData *)0x0) {
		pCVar1 = (ChunkData *)pCVar1->chunkRef;
		}
		return pCVar1 == (ctx->parent).chunkData;
		}
		
	*/
	return false;
}

