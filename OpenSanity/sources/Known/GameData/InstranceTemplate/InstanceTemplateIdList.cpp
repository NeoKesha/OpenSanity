#include "headers/Known/GameData/InstranceTemplate/InstanceTemplateIdList.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void InstanceTemplateIdList::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceTemplateIdList::Write(InstanceTemplateIdList *this,MemoryStream *stream){
		uint i;
		(*stream->vtable->WriteInt3)(stream,this->amount);
		(*stream->vtable->WriteInt3)(stream,this->allocationAmount);
		(*stream->vtable->WriteInt3)(stream,this->header2);
		i = 0;
		if (this->amount != 0) {
		do {
		(*stream->vtable->WriteShort2)(stream,this->idList[i]);
		i = i + 1;
		}
		 while (i < (uint)this->amount);
		}
		return;
		}
		
	*/
	return;
}

void InstanceTemplateIdList::Construct(uint* allocationAmount) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceTemplateIdList * __thiscall InstanceTemplateIdList::Construct(InstanceTemplateIdList *this,uint *allocationAmount){
		short **ppuVar1;
		uint uVar1;
		short **ppsVar2;
		this->amount = 0;
		this->allocationAmount = (int)allocationAmount;
		this->header2 = (int)allocationAmount;
		ppuVar1 = (short **)VirtualPool::AllocateMemory((int)allocationAmount * 2 + 4);
		if (ppuVar1 != (short **)0x0) {
		*ppuVar1 = (short *)allocationAmount;
		if (-1 < (int)allocationAmount + -1) {
		ppsVar2 = ppuVar1 + 1;
		for (uVar1 = (uint)allocationAmount >> 1;
		 uVar1 != 0;
		 uVar1 = uVar1 - 1) {
		*ppsVar2 = (short *)0xffffffff;
		ppsVar2 = ppsVar2 + 1;
		}
		for (uVar1 = (uint)(((uint)allocationAmount & 1) != 0);
		 uVar1 != 0;
		 uVar1 = uVar1 - 1) {
		*(undefined2 *)ppsVar2 = 0xffff;
		ppsVar2 = (short **)((int)ppsVar2 + 2);
		}
		}
		this->idList = (short *)(ppuVar1 + 1);
		return this;
		}
		this->idList = (short *)0x0;
		return this;
		}
		
	*/
	return;
}

void InstanceTemplateIdList::Read(MemoryStream* memoryStream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceTemplateIdList::Read(InstanceTemplateIdList *this,MemoryStream *memoryStream){
		int cnt;
		short *idList;
		short *startPtr;
		uint index;
		int *amount;
		if (this->idList != (short *)0x0) {
		VirtualPool::FreeMemory(this->idList + -2);
		}
		amount = &this->amount;
		(*memoryStream->vtable->ReadUInt)(memoryStream,(uint *)amount);
		(*memoryStream->vtable->ReadUInt)(memoryStream,(uint *)&this->allocationAmount);
		(*memoryStream->vtable->ReadUInt)(memoryStream,(uint *)&this->header2);
		if (*amount != 0) {
		cnt = this->allocationAmount;
		idList = (short *)VirtualPool::AllocateMemory(cnt * 2 + 4);
		if (idList != (short *)0x0) {
		*(int *)idList = cnt;
		startPtr = idList + 2;
		ForEach(startPtr,2,cnt,LambdaSet65535);
		goto LAB_001af1d5;
		}
		}
		startPtr = (short *)0x0;
		LAB_001af1d5:this->idList = startPtr;
		index = 0;
		if (*amount != 0) {
		do {
		(*memoryStream->vtable->ReadShort2)(memoryStream,this->idList + index);
		index = index + 1;
		}
		 while (index < (uint)*amount);
		}
		return;
		}
		
	*/
	return;
}

