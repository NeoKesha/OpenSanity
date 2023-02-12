#include "headers/Known/GameData/GameObject/GameObjectReferenceList.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void GameObjectReferenceList::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameObjectReferenceList * __thiscall GameObjectReferenceList::Dispose(GameObjectReferenceList *this,byte param_1){
		GameObjectReferenceList *this_00;
		this_00 = this->next;
		if (((GameObjectReferenceList *)&DAT_00000010 < this_00) &&(this_00 != (GameObjectReferenceList *)0x0)) {
		Dispose(this_00,1);
		}
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void GameObjectReferenceList::Add(ushort index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameObjectReferenceList::Add(GameObjectReferenceList *this,ushort index){
		GameObjectReferenceList *pGVar1;
		pGVar1 = this->next;
		if (pGVar1 < (GameObjectReferenceList *)0x10) {
		this->next = (GameObjectReferenceList *)((int)&pGVar1->next + 1);
		this->idArray[(int)pGVar1] = index;
		return;
		}
		if (pGVar1 == (GameObjectReferenceList *)0x10) {
		pGVar1 = (GameObjectReferenceList *)VirtualPool::AllocateMemory(0x24);
		if (pGVar1 == (GameObjectReferenceList *)0x0) {
		pGVar1 = (GameObjectReferenceList *)0x0;
		}
		else {
		*(undefined4 *)pGVar1->idArray = 0xffffffff;
		*(undefined4 *)(pGVar1->idArray + 2) = 0xffffffff;
		*(undefined4 *)(pGVar1->idArray + 4) = 0xffffffff;
		*(undefined4 *)(pGVar1->idArray + 6) = 0xffffffff;
		*(undefined4 *)(pGVar1->idArray + 8) = 0xffffffff;
		*(undefined4 *)(pGVar1->idArray + 10) = 0xffffffff;
		*(undefined4 *)(pGVar1->idArray + 0xc) = 0xffffffff;
		*(undefined4 *)(pGVar1->idArray + 0xe) = 0xffffffff;
		pGVar1->next = (GameObjectReferenceList *)0x0;
		}
		this->next = pGVar1;
		}
		Add(this->next,index);
		return;
		}
		
	*/
	return;
}

void GameObjectReferenceList::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameObjectReferenceList::Read(GameObjectReferenceList *this,MemoryStream *stream){
		GameObjectReferenceList *this_00;
		uint i;
		int cnt;
		GameObjectReferenceList *nestedList;
		 fuk this nestedList = this->next;
		cnt = (int)this;
		if (((GameObjectReferenceList *)&DAT_00000010 < nestedList) &&(nestedList != (GameObjectReferenceList *)0x0)) {
		this_00 = nestedList->next;
		if (((GameObjectReferenceList *)&DAT_00000010 < this_00) &&(this_00 != (GameObjectReferenceList *)0x0)) {
		Dispose(this_00,1);
		}
		VirtualPool::FreeMemory(nestedList);
		}
		this->next = (GameObjectReferenceList *)0x0;
		(*stream->vtable->ReadUInt)(stream,(uint *)&cnt);
		i = 0;
		if (cnt != 0) {
		do {
		 read id (*stream->vtable->ReadShort2)(stream,(short *)&stream);
		Add(this,(ushort)stream);
		i = i + 1;
		}
		 while (i < (uint)cnt);
		}
		return;
		}
		
	*/
	return;
}

void GameObjectReferenceList::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameObjectReferenceList::Write(GameObjectReferenceList *this,MemoryStream *stream){
		GameObjectReferenceList *pGVar1;
		char cVar2;
		short *psVar3;
		uint value;
		GameObjectReferenceList *local_8;
		GameObjectReferenceList *local_4;
		value = 0;
		local_4 = (GameObjectReferenceList *)0x0;
		local_8 = (GameObjectReferenceList *)0x0;
		if (this->next != (GameObjectReferenceList *)0x0) {
		local_8 = this;
		}
		cVar2 = (*(code *)PTR_FUN_003949a0)();
		pGVar1 = local_8;
		while (cVar2 == '\0') {
		value = value + 1;
		local_4 = (GameObjectReferenceList *)((int)&local_4->next + 1);
		local_8 = pGVar1->next;
		if (local_8 < (GameObjectReferenceList *)0x11) {
		if (local_8 <= local_4) {
		local_8 = (GameObjectReferenceList *)0x0;
		goto LAB_001af26e;
		}
		}
		else if ((GameObjectReferenceList *)0xf < local_4) {
		LAB_001af26e:local_4 = (GameObjectReferenceList *)0x0;
		pGVar1 = local_8;
		}
		local_8 = pGVar1;
		cVar2 = (*(code *)PTR_FUN_003949a0)();
		pGVar1 = local_8;
		}
		(*stream->vtable->WriteInt3)(stream,value);
		local_4 = (GameObjectReferenceList *)0x0;
		local_8 = (GameObjectReferenceList *)0x0;
		if (this->next != (GameObjectReferenceList *)0x0) {
		local_8 = this;
		}
		cVar2 = (*(code *)PTR_FUN_003949a0)();
		pGVar1 = local_8;
		do {
		if (cVar2 != '\0') {
		return;
		}
		psVar3 = (short *)(*(code *)PTR_GetRefenreceIndex_003949a4)();
		(*stream->vtable->WriteShort2)(stream,*psVar3);
		local_4 = (GameObjectReferenceList *)((int)&local_4->next + 1);
		local_8 = pGVar1->next;
		if (local_8 < (GameObjectReferenceList *)0x11) {
		if (local_8 <= local_4) {
		local_8 = (GameObjectReferenceList *)0x0;
		goto LAB_001af2f1;
		}
		}
		else if ((GameObjectReferenceList *)0xf < local_4) {
		LAB_001af2f1:local_4 = (GameObjectReferenceList *)0x0;
		pGVar1 = local_8;
		}
		local_8 = pGVar1;
		cVar2 = (*(code *)PTR_FUN_003949a0)();
		pGVar1 = local_8;
		}
		 while( true );
		}
		
	*/
	return;
}

