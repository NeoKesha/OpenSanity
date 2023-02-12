#include "headers/Known/GameData/GameObject/GameObjectIdListUInt.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void GameObjectIdListUInt::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameObjectIdListUInt::Read(GameObjectIdListUInt *this,MemoryStream *stream){
		uint *val;
		uint *puVar1;
		uint uVar2;
		if (this->idList != (uint *)0x0) {
		VirtualPool::FreeMemory(this->idList + -1);
		}
		val = &this->count;
		(*stream->vtable->ReadUInt)(stream,val);
		uVar2 = *val;
		if ((uVar2 == 0) ||(puVar1 = (uint *)VirtualPool::AllocateMemory(uVar2 * 4 + 4), puVar1 == (uint *)0x0)) {
		puVar1 = (uint *)0x0;
		}
		else {
		*puVar1 = uVar2;
		puVar1 = puVar1 + 1;
		ForEach(puVar1,4,uVar2,::Passthrough);
		}
		this->idList = puVar1;
		uVar2 = 0;
		if (*val != 0) {
		do {
		(*stream->vtable->ReadUInt)(stream,this->idList + uVar2);
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < *val);
		}
		return;
		}
		
	*/
	return;
}

