#include "headers/Known/Game/Chunks/ChunkList.h"

#include "headers/Known/TwinString.h"
#include "headers/Known/Game/Chunks/ChunkDataRefCounter.h"
#include "headers/Known/Game/Chunks/ChunkData.h"
#include "headers/Known/Time/Clock.h"
void ChunkList::SetTimeFlagsAll() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void ChunkList::SetTimeFlagsAll(void){
		ChunkData *pCVar1;
		ChunkList *pCVar2;
		GetInstance();
		pCVar2 = GetInstance();
		for (pCVar1 = pCVar2->firstChunk;
		 pCVar1 != (ChunkData *)0x0;
		 pCVar1 = pCVar1->next) {
		if (pCVar1->timers != (UnkTimePack *)0x0) {
		UnkTimePack::SetFlags(pCVar1->timers);
		}
		}
		ProgressGameState();
		return;
		}
		
	*/
	return;
}

ChunkData* ChunkList::GetDataByName(TwinString* chunkName) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ChunkData * __thiscall ChunkList::GetDataByName(ChunkList *this,TwinString *chunkName){
		byte bVar1;
		byte *pbVar2;
		byte *pbVar3;
		int iVar4;
		byte *pbVar5;
		ChunkData *pCVar6;
		bool bVar7;
		pCVar6 = this->firstChunk;
		if (pCVar6 != (ChunkData *)0x0) {
		pbVar2 = (byte *)chunkName->value;
		do {
		pbVar3 = (byte *)(pCVar6->chunkName2).value;
		pbVar5 = pbVar2;
		if (pbVar3 == (byte *)0x0) {
		if (pbVar2 == (byte *)0x0) {
		LAB_0013b2c6:do {
		bVar1 = *pbVar3;
		bVar7 = bVar1 < *pbVar5;
		if (bVar1 != *pbVar5) {
		LAB_0013b2ee:iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
		goto LAB_0013b2f3;
		}
		if (bVar1 == 0) break;
		bVar1 = pbVar3[1];
		bVar7 = bVar1 < pbVar5[1];
		if (bVar1 != pbVar5[1]) goto LAB_0013b2ee;
		pbVar3 = pbVar3 + 2;
		pbVar5 = pbVar5 + 2;
		}
		 while (bVar1 != 0);
		iVar4 = 0;
		LAB_0013b2f3:if (iVar4 == 0) {
		return pCVar6;
		}
		}
		}
		else if (pbVar2 != (byte *)0x0) goto LAB_0013b2c6;
		pCVar6 = pCVar6->next;
		}
		 while (pCVar6 != (ChunkData *)0x0);
		}
		return (ChunkData *)0x0;
		}
		
	*/
	return null;
}

void ChunkList::FUN_0013d250(ChunkData* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ChunkList::FUN_0013d250(ChunkList *this,ChunkData *param_1){
		ChunkData *data;
		ChunkData::RemoveFromChunkList(param_1,this,0x14c,0x148);
		for (data = this->firstChunk;
		 data != (ChunkData *)0x0;
		 data = data->next) {
		ChunkData::DisconnectChunkLinks(data,param_1);
		}
		return;
		}
		
	*/
	return;
}

void ChunkList::FUN_0013d2e0(uint param_1, uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ChunkList::FUN_0013d2e0(ChunkList *this,undefined4 param_1,uint *param_2){
		ChunkDataRefCounter *pCVar1;
		uint uVar2;
		ChunkData *pCVar3;
		ChunkData *pCVar4;
		pCVar1 = this->chunkRef;
		if ((pCVar1 != (ChunkDataRefCounter *)0x0) && (pCVar1->chunk != (ChunkData *)0x0)) {
		if (pCVar1 == (ChunkDataRefCounter *)0x0) {
		pCVar4 = (ChunkData *)0x0;
		}
		else {
		pCVar4 = pCVar1->chunk;
		}
		uVar2 = pCVar4->sceneryFlags >> 0x12 & 0xf;
		if ((uVar2 != 2) && (uVar2 != 3)) {
		if (pCVar4->field31_0x164 != (ushort *)0x0) {
		FUN_00161250(pCVar4->field31_0x164);
		}
		if ((int *)pCVar4->sceneryRoot != (int *)0x0) {
		 WARNING: Load size is inaccurate (**(code **)(*pCVar4->sceneryRoot + 0x5c))(param_2);
		}
		if (pCVar4->nodes != (AutoClass4 *)0x0) {
		FUN_000f9260(pCVar4->nodes,param_1,param_2);
		}
		}
		}
		for (pCVar4 = this->firstChunk;
		 pCVar4 != (ChunkData *)0x0;
		 pCVar4 = pCVar4->next) {
		pCVar3 = (ChunkData *)this->chunkRef;
		if (pCVar3 != (ChunkData *)0x0) {
		pCVar3 = (ChunkData *)pCVar3->chunkRef;
		}
		if (((pCVar4 != pCVar3) && (uVar2 = pCVar4->sceneryFlags >> 0x12 & 0xf, uVar2 != 2)) &&(uVar2 != 3)) {
		if (pCVar4->field31_0x164 != (ushort *)0x0) {
		FUN_00161250(pCVar4->field31_0x164);
		}
		if ((int *)pCVar4->sceneryRoot != (int *)0x0) {
		 WARNING: Load size is inaccurate (**(code **)(*pCVar4->sceneryRoot + 0x5c))(param_2);
		}
		if (pCVar4->nodes != (AutoClass4 *)0x0) {
		FUN_000f9260(pCVar4->nodes,param_1,param_2);
		}
		}
		}
		return;
		}
		
	*/
	return;
}

ChunkList* ChunkList::GetInstance() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ChunkList * ChunkList::GetInstance(void){
		if ((ChunkList_00491cb0.field2_0x8 & 1U) == 0) {
		ChunkList_00491cb0.field2_0x8 = ChunkList_00491cb0.field2_0x8 | 1;
		ChunkList_00491cb0.firstChunk = (ChunkData *)0x0;
		ChunkList_00491cb0.chunkRef = (ChunkDataRefCounter *)0x0;
		_atexit(FUN_0027d870);
		}
		return &ChunkList_00491cb0;
		}
		
	*/
	return null;
}

void ChunkList::ProcessChunks(bool param_1, Clock* clock) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ChunkList::ProcessChunks(ChunkList *this,bool param_1,Clock *clock){
		ChunkDataRefCounter **out;
		bool bVar3;
		uint uVar4;
		ChunkData *pAVar5;
		ChunkData *chunkData;
		ChunkData *currentPtr;
		out = &this->chunkRef;
		if (((this->chunkRef != (ChunkDataRefCounter *)0x0) &&(currentPtr = this->chunkRef->chunk, currentPtr != (ChunkData *)0x0)) &&(bVar3 = ChunkData::FUN_00140680(currentPtr,param_1,clock), bVar3 == false)) {
		FUN_0013d250(this,currentPtr);
		ChunkData::FreeMemory(currentPtr);
		VirtualPool::FreeMemory(currentPtr);
		currentPtr = (ChunkData *)*out;
		if ((currentPtr != (ChunkData *)0x0) && (currentPtr->chunkRef != (ChunkDataRefCounter *)0x0)) {
		uVar4 = ChunkData::thunk_FUN_00023d20(currentPtr);
		if (uVar4 == 0) {
		ChunkDataRefCounter::Release(out);
		}
		*out = (ChunkDataRefCounter *)0x0;
		}
		}
		currentPtr = this->firstChunk;
		while (chunkData = currentPtr, chunkData != (ChunkData *)0x0) {
		pAVar5 = (ChunkData *)this->chunkRef;
		currentPtr = chunkData->next;
		if (pAVar5 != (ChunkData *)0x0) {
		pAVar5 = (ChunkData *)pAVar5->chunkRef;
		}
		if ((chunkData != pAVar5) &&(bVar3 = ChunkData::FUN_00140680(chunkData,param_1,clock), bVar3 == false)) {
		ChunkData::RemoveFromChunkList(chunkData,this,0x14c,0x148);
		for (pAVar5 = this->firstChunk;
		 pAVar5 != (ChunkData *)0x0;
		 pAVar5 = pAVar5->next) {
		ChunkData::DisconnectChunkLinks(pAVar5,chunkData);
		}
		ChunkData::FreeMemory(chunkData);
		VirtualPool::FreeMemory(chunkData);
		}
		}
		return;
		}
		
	*/
	return;
}

