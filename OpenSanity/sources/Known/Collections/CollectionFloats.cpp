#include "headers/Known/Collections/CollectionFloats.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void CollectionFloats::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionFloats::Read(CollectionFloats *this,MemoryStream *stream){
		uint *val;
		float *pfVar1;
		uint uVar2;
		VirtualPool::FreeMemory(this->floats);
		val = &this->floatsCnt;
		(*stream->vtable->ReadUInt)(stream,val);
		pfVar1 = (float *)*val;
		if (pfVar1 != (float *)0x0) {
		pfVar1 = (float *)VirtualPool::AllocateMemory((int)pfVar1 << 2);
		}
		this->floats = pfVar1;
		uVar2 = 0;
		if (*val != 0) {
		do {
		(*stream->vtable->ReadFloat)(stream,this->floats + uVar2);
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < *val);
		}
		return;
		}
		
	*/
	return;
}

void CollectionFloats::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionFloats::Write(CollectionFloats *this,MemoryStream *stream){
		uint i;
		(*stream->vtable->WriteInt3)(stream,this->floatsCnt);
		i = 0;
		if (this->floatsCnt != 0) {
		do {
		(*stream->vtable->WriteFloat)(stream,this->floats[i]);
		i = i + 1;
		}
		 while (i < this->floatsCnt);
		}
		return;
		}
		
	*/
	return;
}

