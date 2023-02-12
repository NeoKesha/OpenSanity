#include "headers/Known/GameData/GameObject/GameObjectIdListShort.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void GameObjectIdListShort::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameObjectIdListShort::Write(GameObjectIdListShort *this,MemoryStream *stream){
		uint i;
		(*stream->vtable->WriteInt3)(stream,this->count);
		i = 0;
		if (this->count != 0) {
		do {
		(*stream->vtable->WriteShort2)(stream,this->idList[i]);
		i = i + 1;
		}
		 while (i < this->count);
		}
		return;
		}
		
	*/
	return;
}

void GameObjectIdListShort::Write_1(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameObjectIdListShort::Write(GameObjectIdListShort *this,MemoryStream *stream){
		uint i;
		(*stream->vtable->WriteInt3)(stream,this->count);
		i = 0;
		if (this->count != 0) {
		do {
		(*stream->vtable->WriteInt3)(stream,*(uint *)(this->idList + i * 2));
		i = i + 1;
		}
		 while (i < this->count);
		}
		return;
		}
		
	*/
	return;
}

void GameObjectIdListShort::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameObjectIdListShort::Read(GameObjectIdListShort *this,MemoryStream *stream){
		uint *val;
		uint *puVar1;
		uint uVar2;
		if (this->idList != (short *)0x0) {
		VirtualPool::FreeMemory(this->idList + -2);
		}
		val = &this->count;
		(*stream->vtable->ReadUInt)(stream,val);
		uVar2 = *val;
		if ((uVar2 == 0) ||(puVar1 = (uint *)VirtualPool::AllocateMemory(uVar2 * 2 + 4), puVar1 == (uint *)0x0)) {
		puVar1 = (uint *)0x0;
		}
		else {
		*puVar1 = uVar2;
		puVar1 = puVar1 + 1;
		ForEach(puVar1,2,uVar2,LambdaSet65535);
		}
		this->idList = (short *)puVar1;
		uVar2 = 0;
		if (*val != 0) {
		do {
		(*stream->vtable->ReadShort2)(stream,this->idList + uVar2);
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < *val);
		}
		return;
		}
		
	*/
	return;
}

