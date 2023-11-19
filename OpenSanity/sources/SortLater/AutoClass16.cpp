#include "headers/SortLater/AutoClass16.h"

#include "headers/Unknown/IndexToIdList.h"
#include "headers/Unknown/Families/Families1X/Family15/UnkFamily15A.h"
#include "headers/Known/Game/Chunks/ChunkDataRefCounter.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/Known/Game/Chunks/ChunkData.h"
#include "headers/Unknown/Families/Families1X/Family16/UnkFamily16A.h"
#include "headers/Unknown/Families/Families1X/Family16/UnkFamily16Base.h"
void Chunk::FUN_001b3970() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall AutoClass16::FUN_001b3970(AutoClass16 *this){
		UnkFamily17Base *pUVar1;
		UnkFamily12Base *memptr;
		UnkFamily12Base *ptr;
		GameResources *gameResources;
		gameResources = (this->defaultRm->parent).gameResources;
		if (this->field12_0x28 == (UnkFamily12Base *)0x0) {
		pUVar1 = (this->defaultRm->parent).field2046_0x814;
		memptr = (UnkFamily12Base *)VirtualPool::AllocateMemory(0x14);
		if (memptr == (UnkFamily12Base *)0x0) {
		ptr = (UnkFamily12Base *)0x0;
		}
		else {
		ptr = (UnkFamily12Base *)UnkFamily12Base::Construct(memptr,0);
		}
		this->field12_0x28 = ptr;
		pUVar1->ptrArray[this->strCnt] = (undefined *)ptr;
		if (ptr != (UnkFamily12Base *)0x0) {
		UnkFamily12Base::FUN_0016d1a0(ptr,pUVar1);
		}
		}
		GameResources::LoadGameObjects(gameResources,this->indexToIdList);
		return;
		}
		
	*/
	return;
}

InstanceContext* Chunk::GetInstanceContextById(short index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Function: __chkstk replaced with injection: alloca_probe InstanceContext * __thiscall AutoClass16::GetInstanceContextById(AutoClass16 *this,short index){
		ChunkData *chunkData;
		uint cnt;
		InstanceNodeInstance *nodeInstance;
		uint i;
		AutoClass14 local_1024;
		InstanceContext *ctxArray [1023];
		if (((index != -1) && (this->chunkData != (ChunkDataRefCounter *)0x0)) &&(this->chunkData->chunk != (ChunkData *)0x0)) {
		AutoClass14::Construct(&local_1024,ctxArray,0x400,0,1,0);
		chunkData = (ChunkData *)this->chunkData;
		if (chunkData != (ChunkData *)0x0) {
		chunkData = (ChunkData *)chunkData->chunkRef;
		}
		cnt = ChunkData::FillCtxList(chunkData,2,&local_1024);
		i = 0;
		if ((cnt & 0xffff) != 0) {
		do {
		nodeInstance = (InstanceNodeInstance *)InstanceDataList::GetNode(&ctxArray[i]->nodes,Instance);
		if (index == (nodeInstance->body).field49_0x80[0x13]) {
		return ctxArray[i];
		}
		i = i + 1;
		}
		 while (i < (cnt & 0xffff));
		}
		}
		return (InstanceContext *)0x0;
		}
		
	*/
	return null;
}

void Chunk::FUN_001b5950() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall AutoClass16::FUN_001b5950(AutoClass16 *this){
		int iVar1;
		void *ptr;
		uint uVar2;
		void **ppvVar3;
		iVar1 = this->field13_0x2c;
		if (iVar1 != 0) {
		for (uVar2 = 0;
		 (-1 < (int)uVar2 && (uVar2 < *(uint *)(iVar1 + 4)));
		 uVar2 = uVar2 + 1) {
		ppvVar3 = (void **)(*(code *)PTR_Get_0039521c)();
		ptr = *ppvVar3;
		if (ptr != (void *)0x0) {
		::EmptyFunction();
		VirtualPool::FreeMemory(ptr);
		}
		}
		ppvVar3 = (void **)this->field13_0x2c;
		if (ppvVar3 != (void **)0x0) {
		VirtualPool::FreeMemory(*ppvVar3);
		VirtualPool::FreeMemory(ppvVar3);
		}
		this->field13_0x2c = 0;
		}
		return;
		}
		
	*/
	return;
}

void Chunk::FUN_001b59d0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall AutoClass16::FUN_001b59d0(AutoClass16 *this){
		int iVar1;
		void **ptr;
		uint uVar2;
		int *piVar3;
		iVar1 = this->field15_0x34;
		if (iVar1 != 0) {
		for (uVar2 = 0;
		 (-1 < (int)uVar2 && (uVar2 < *(uint *)(iVar1 + 4)));
		 uVar2 = uVar2 + 1) {
		piVar3 = (int *)(*(code *)PTR_Get_00395240)();
		if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
		(***(code ***)(undefined4 *)*piVar3)(1);
		}
		}
		ptr = (void **)this->field15_0x34;
		if (ptr != (void **)0x0) {
		VirtualPool::FreeMemory(*ptr);
		VirtualPool::FreeMemory(ptr);
		}
		this->field15_0x34 = 0;
		}
		return;
		}
		
	*/
	return;
}

void Chunk::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall AutoClass16::CleanUp(AutoClass16 *this){
		ChunkData *pCVar1;
		uint uVar2;
		GameResources *gameResources;
		gameResources = (this->defaultRm->parent).gameResources;
		if (this->field12_0x28 != (UnkFamily12Base *)0x0) {
		this->field12_0x28->field5_0x10->ptrArray[this->strCnt] = (undefined *)0x0;
		if (this->field12_0x28 != (UnkFamily12Base *)0x0) {
		(*(code *)*this->field12_0x28->vtable)(1);
		}
		this->field12_0x28 = (UnkFamily12Base *)0x0;
		}
		FUN_001b5950(this);
		FUN_001b59d0(this);
		if (this->field8_0x20 != (UnkFamily15A *)0x0) {
		(*(code *)((this->field8_0x20->parent).vtable)->Dispose)(1);
		}
		this->field8_0x20 = (UnkFamily15A *)0x0;
		if (this->indexToIdList != (IndexToIdList *)0x0) {
		FUN_001b32d0((int)gameResources,&this->indexToIdList->cnt);
		VirtualPool::FreeMemory(this->indexToIdList);
		this->indexToIdList = (IndexToIdList *)0x0;
		}
		pCVar1 = (ChunkData *)this->chunkData;
		if ((pCVar1 != (ChunkData *)0x0) && (pCVar1->chunkRef != (ChunkDataRefCounter *)0x0)) {
		uVar2 = ChunkData::thunk_FUN_00023d20(pCVar1);
		if (uVar2 == 0) {
		ChunkDataRefCounter::Release(&this->chunkData);
		}
		this->chunkData = (ChunkDataRefCounter *)0x0;
		}
		this->field9_0x24 = 0;
		return;
		}
		
	*/
	return;
}

void Chunk::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall AutoClass16::Dispose(AutoClass16 *this){
		uint uVar1;
		CleanUp(this);
		if (this->field7_0x1c != (UnkFamily15A *)0x0) {
		(*(code *)((this->field7_0x1c->parent).vtable)->Dispose)(1);
		}
		if ((ChunkData *)this->chunkData != (ChunkData *)0x0) {
		uVar1 = ChunkData::thunk_FUN_00023d20((ChunkData *)this->chunkData);
		if (uVar1 == 0) {
		ChunkDataRefCounter::Release(&this->chunkData);
		}
		}
		TwinString::Dispose(&this->levelName);
		return;
		}
		
	*/
	return;
}

void Chunk::Dispose_6(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	AutoClass16 * __thiscall AutoClass16::Dispose(AutoClass16 *this,byte param_1){
		uint uVar1;
		CleanUp(this);
		if (this->field7_0x1c != (UnkFamily15A *)0x0) {
		(*(code *)((this->field7_0x1c->parent).vtable)->Dispose)(1);
		}
		if ((ChunkData *)this->chunkData != (ChunkData *)0x0) {
		uVar1 = ChunkData::thunk_FUN_00023d20((ChunkData *)this->chunkData);
		if (uVar1 == 0) {
		ChunkDataRefCounter::Release(&this->chunkData);
		}
		}
		TwinString::Dispose(&this->levelName);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Chunk::FUN_001b1ca0(UnkFamily15A* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass16::FUN_001b1ca0(AutoClass16 *this,UnkFamily15A *param_1){
		this->field8_0x20 = param_1;
		return;
		}
		
	*/
	return;
}

void Chunk::Construct(char* str, short strCnt, ChunkData* chunkData, UnkFamily16Base* defaultRm, UnkFamily15A* ptr) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	AutoClass16 * __thiscall AutoClass16::Construct(AutoClass16 *this,char *str,short strCnt,ChunkData *chunkData,UnkFamily16Base *defaultRm,UnkFamily15A *ptr){
		ChunkDataRefCounter *pCVar1;
		TwinString::Set(&this->levelName,str);
		this->strCnt = strCnt;
		this->defaultRm = (UnkFamily16A *)defaultRm;
		if (chunkData == (ChunkData *)0x0) {
		this->chunkData = (ChunkDataRefCounter *)0x0;
		}
		else {
		pCVar1 = ChunkData::CreateRefCounter(chunkData,chunkData,0);
		this->chunkData = pCVar1;
		}
		this->indexToIdList = (IndexToIdList *)0x0;
		this->field8_0x20 = (UnkFamily15A *)0x0;
		this->field9_0x24 = 0;
		this->field12_0x28 = (UnkFamily12Base *)0x0;
		this->field13_0x2c = 0;
		this->field14_0x30 = 0;
		this->field15_0x34 = 0;
		this->field7_0x1c = ptr;
		return this;
		}
		
	*/
	return;
}

void Chunk::CreateIndexMapping() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall AutoClass16::CreateIndexMapping(AutoClass16 *this){
		IndexToIdList *puVar1;
		puVar1 = (IndexToIdList *)VirtualPool::AllocateMemory(0x404);
		if (puVar1 != (IndexToIdList *)0x0) {
		puVar1->cnt = 0;
		this->indexToIdList = puVar1;
		return;
		}
		this->indexToIdList = (IndexToIdList *)0x0;
		return;
		}
		
	*/
	return;
}

