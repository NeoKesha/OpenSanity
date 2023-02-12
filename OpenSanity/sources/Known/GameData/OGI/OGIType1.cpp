#include "headers/Known/GameData/OGI/OGIType1.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void OGIType1::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps void __thiscall OGIType1::Read(OGIType1 *this,MemoryStream *stream){
		uint uStack16;
		uint uStack12;
		uint uStack8;
		uint uStack4;
		MemoryStream *_stream;
		_stream = stream;
		(*stream->vtable->ReadUInt)(stream,(uint *)&stream);
		(*_stream->vtable->ReadUInt)(_stream,&uStack16);
		(*_stream->vtable->ReadUInt)(_stream,&uStack12);
		(*_stream->vtable->ReadUInt)(_stream,&uStack4);
		(*_stream->vtable->ReadUInt)(_stream,&uStack8);
		this->unkByte1 = (byte)stream;
		this->unkByte2 = (byte)uStack16;
		this->unkByte3 = (byte)uStack12;
		*(uint *)&this->unkByte1 =(uStack8 << 4 | uStack4 & 0xf) << 0x18 | *(uint *)&this->unkByte1 & 0xffffff;
		(*_stream->vtable->Read)(_stream,(int *)this,0x10,1);
		(*_stream->vtable->Read)(_stream,(int *)(this->unkVec + 2),0x10,1);
		(*_stream->vtable->Read)(_stream,(int *)(this->unkVec + 1),0x10,1);
		(*_stream->vtable->Read)(_stream,(int *)(this->unkVec + 3),0x10,1);
		(*_stream->vtable->Read)(_stream,(int *)(this->unkVec + 4),0x10,1);
		return;
		}
		
	*/
	return;
}

