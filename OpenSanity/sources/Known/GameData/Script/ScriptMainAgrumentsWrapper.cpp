#include "headers/Known/GameData/Script/ScriptMainAgrumentsWrapper.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void ScriptMainAgrumentsWrapper::Construct(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ScriptMainAgrumentsWrapper::Construct(ScriptMainAgrumentsWrapper *this,MemoryStream *stream){
		size_t size;
		int *outArray;
		(*stream->vtable->ReadUInt)(stream,&this->flags);
		(*stream->vtable->ReadUInt)(stream,&this->unkInt);
		size = (this->flags & 0xff) + (uint)*(byte *)((int)&this->flags + 1) * 4;
		VirtualPool::FreeMemory(this->arguments);
		if (size != 0) {
		outArray = (int *)VirtualPool::AllocateMemory(size);
		this->arguments = (byte *)outArray;
		(*stream->vtable->Read)(stream,outArray,size,1);
		}
		return;
		}
		
	*/
	return;
}

