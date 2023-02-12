#include "headers/Known/Collections/CollectionInts.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void CollectionInts::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionInts::Read(CollectionInts *this,MemoryStream *stream){
		uint *val;
		int *piVar1;
		uint uVar2;
		VirtualPool::FreeMemory(this->ints);
		val = &this->intsCnt;
		(*stream->vtable->ReadUInt)(stream,val);
		piVar1 = (int *)*val;
		if (piVar1 != (int *)0x0) {
		piVar1 = (int *)VirtualPool::AllocateMemory((int)piVar1 << 2);
		}
		this->ints = piVar1;
		uVar2 = 0;
		if (*val != 0) {
		do {
		(*stream->vtable->ReadInt2)(stream,this->ints + uVar2);
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < *val);
		}
		return;
		}
		
	*/
	return;
}

void CollectionInts::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionInts::Write(CollectionInts *this,MemoryStream *stream){
		uint i;
		(*stream->vtable->WriteInt3)(stream,this->intsCnt);
		i = 0;
		if (this->intsCnt != 0) {
		do {
		(*stream->vtable->WriteInt1)(stream,this->ints[i]);
		i = i + 1;
		}
		 while (i < this->intsCnt);
		}
		return;
		}
		
	*/
	return;
}

