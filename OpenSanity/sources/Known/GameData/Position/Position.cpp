#include "headers/Known/GameData/Position/Position.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void Position::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Position::Write(Position *this,MemoryStream *stream){
		(*stream->vtable->Write)(stream,(byte *)this,0x10);
		return;
		}
		
	*/
	return;
}

void Position::Construct(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Position::Construct(Position *this,MemoryStream *stream){
		(*stream->vtable->Read)(stream,(int *)this,0x10,1);
		return;
		}
		
	*/
	return;
}

