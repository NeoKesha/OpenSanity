#include "headers/Known/Game/Chunks/ChunkDataRefCounter.h"

#include "headers/Known/Game/Chunks/ChunkData.h"
void ChunkDataRefCounter::Release(ChunkDataRefCounter** out) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ChunkDataRefCounter::Release(ChunkDataRefCounter **out){
		ChunkDataRefCounter *ptr;
		ChunkData *pCVar1;
		ChunkData **ptr_00;
		undefined4 *in_stack_00000004;
		if (in_stack_00000004 == (undefined4 *)0x0) {
		ptr = *out;
		if (ptr != (ChunkDataRefCounter *)0x0) {
		if ((*(byte *)((int)&ptr->refCount + 3) & 1) != 0) {
		pCVar1 = ptr->chunk;
		if (pCVar1 != (ChunkData *)0x0) {
		ChunkData::FreeMemory(pCVar1);
		VirtualPool::FreeMemory(pCVar1);
		}
		ptr->chunk = (ChunkData *)0x0;
		}
		VirtualPool::FreeMemory(ptr);
		*out = (ChunkDataRefCounter *)0x0;
		return;
		}
		}
		else {
		ptr_00 = (ChunkData **)*in_stack_00000004;
		if (ptr_00 != (ChunkData **)0x0) {
		if ((*(byte *)((int)ptr_00 + 7) & 1) != 0) {
		pCVar1 = *ptr_00;
		if (pCVar1 != (ChunkData *)0x0) {
		ChunkData::FreeMemory(pCVar1);
		VirtualPool::FreeMemory(pCVar1);
		}
		*ptr_00 = (ChunkData *)0x0;
		}
		VirtualPool::FreeMemory(ptr_00);
		*in_stack_00000004 = 0;
		}
		}
		*out = (ChunkDataRefCounter *)0x0;
		return;
		}
		
	*/
	return;
}

ChunkDataRefCounter** ChunkDataRefCounter::Unpack(ChunkDataRefCounter** chunkDataRef, ChunkData* chunkData) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ChunkDataRefCounter ** __fastcall ChunkDataRefCounter::Unpack(ChunkDataRefCounter **chunkDataRef,ChunkData *chunkData){
		ChunkData *pCVar1;
		ChunkData *other2;
		uint uVar2;
		ChunkDataRefCounter *pCVar3;
		pCVar1 = (ChunkData *)*chunkDataRef;
		if (pCVar1 == (ChunkData *)0x0) {
		other2 = (ChunkData *)0x0;
		}
		else {
		other2 = (ChunkData *)pCVar1->chunkRef;
		}
		if (other2 != chunkData) {
		if (pCVar1 != (ChunkData *)0x0) {
		uVar2 = ChunkData::thunk_FUN_00023d20(pCVar1);
		if (uVar2 == 0) {
		Release(chunkDataRef);
		}
		}
		if (chunkData == (ChunkData *)0x0) {
		*chunkDataRef = (ChunkDataRefCounter *)0x0;
		return chunkDataRef;
		}
		pCVar3 = ChunkData::CreateRefCounter(chunkData,chunkData,0);
		*chunkDataRef = pCVar3;
		}
		return chunkDataRef;
		}
		
	*/
	return null;
}

