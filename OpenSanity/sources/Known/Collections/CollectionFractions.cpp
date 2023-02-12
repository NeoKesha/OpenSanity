#include "headers/Known/Collections/CollectionFractions.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void CollectionFractions::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionFractions::Read(CollectionFractions *this,MemoryStream *stream){
		uint *val;
		uint *startPtr;
		uint uVar1;
		VirtualPool::FreeMemory(this->fraction);
		val = &this->fractionCnt;
		(*stream->vtable->ReadUInt)(stream,val);
		uVar1 = *val;
		if ((uVar1 == 0) ||(startPtr = (uint *)VirtualPool::AllocateMemory(uVar1 * 4), startPtr == (uint *)0x0)) {
		startPtr = (uint *)0x0;
		}
		else {
		ForEach(startPtr,4,uVar1,::Passthrough);
		}
		this->fraction = startPtr;
		uVar1 = 0;
		if (*val != 0) {
		do {
		MemoryStream::ReadInt2(stream,this->fraction + uVar1);
		uVar1 = uVar1 + 1;
		}
		 while (uVar1 < *val);
		}
		return;
		}
		
	*/
	return;
}

void CollectionFractions::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionFractions::Write(CollectionFractions *this,MemoryStream *stream){
		uint uVar1;
		(*stream->vtable->WriteInt3)(stream,this->fractionCnt);
		uVar1 = 0;
		if (this->fractionCnt != 0) {
		do {
		MemoryStream::WriteInt(stream,this->fraction + uVar1);
		uVar1 = uVar1 + 1;
		}
		 while (uVar1 < this->fractionCnt);
		}
		return;
		}
		
	*/
	return;
}

