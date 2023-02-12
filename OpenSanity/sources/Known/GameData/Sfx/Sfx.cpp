#include "headers/Known/GameData/Sfx/Sfx.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void Sfx::InitSoundPath() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Sfx::InitSoundPath(Sfx *this){
		int iVar1;
		TwinString tmpStr2;
		TwinString *soundPath;
		soundPath = &this->soundPath;
		TwinString::ToLower(soundPath);
		iVar1 = TwinString::FindSubstringEndPos(soundPath,0,"sound\\");
		if (iVar1 == 0) {
		TwinString::SubstringRelated(soundPath,"sound\\");
		}
		if ((this->flags2 >> 1 & 1) != 0) {
		TwinString::Set(&tmpStr2,"Sound\\Language\\");
		TwinString::Append(&tmpStr2,LANG_NAMES[LNG_INDEX]);
		TwinString::Append(&tmpStr2,"\\");
		TwinString::Append(&tmpStr2,soundPath->value);
		TwinString::Copy(soundPath,tmpStr2.value);
		TwinString::Dispose(&tmpStr2);
		return;
		}
		TwinString::AppendVariant(soundPath,"Sound\\");
		return;
		}
		
	*/
	return;
}

void Sfx::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Sfx * __fastcall Sfx::Construct(Sfx *this){
		*(undefined2 *)&this->flags = 0;
		this->index = 0xffffffff;
		this->flags = this->flags & 0xfffcffff;
		(this->soundPath).value = (char *)0x0;
		(this->soundPath).strLength = 0;
		(this->soundPath).strSize = 0;
		(this->someData).buffer = (void *)0x0;
		this->dataSize = 0;
		this->streamPosition = 0;
		this->flags2 = 0;
		return this;
		}
		
	*/
	return;
}

void Sfx::Construct_2(char* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Sfx * __thiscall Sfx::Construct(Sfx *this,char *param_1){
		*(undefined2 *)&this->flags = 0;
		this->flags = this->flags & 0xfffcffff;
		this->index = 0xffffffff;
		TwinString::Set(&this->soundPath,param_1);
		(this->someData).buffer = (void *)0x0;
		this->dataSize = 0;
		this->streamPosition = 0;
		this->flags2 = 0;
		InitSoundPath(this);
		return this;
		}
		
	*/
	return;
}

void Sfx::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Sfx::Dispose(Sfx *this){
		VirtualPool::FreeMemory((this->someData).buffer);
		TwinString::Dispose(&this->soundPath);
		return;
		}
		
	*/
	return;
}

void Sfx::InitData(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Sfx::InitData(Sfx *this,MemoryStream *stream){
		size_t position;
		uint uVar1;
		if (stream == (MemoryStream *)0x0) {
		position = 0;
		}
		else {
		position = (*stream->vtable->GetPosition)(stream);
		}
		this->streamPosition = position;
		uVar1 = SfxDataStream::LoadAudio(&this->someData,this,stream);
		this->dataSize = uVar1;
		return;
		}
		
	*/
	return;
}

void Sfx::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Sfx::Write(Sfx *this,MemoryStream *stream){
		(*stream->vtable->WriteInt1)(stream,3);
		SfxDataStream::Write(&this->someData,stream);
		(*stream->vtable->WriteInt3)(stream,this->dataSize);
		(*stream->vtable->WriteInt3)(stream,this->streamPosition);
		return;
		}
		
	*/
	return;
}

void Sfx::Construct_6(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint * __thiscall Sfx::Construct(Sfx *this,MemoryStream *stream){
		MemoryStream *stream_00;
		stream_00 = stream;
		*(undefined2 *)&this->flags = 0;
		this->index = 0xffffffff;
		this->flags = this->flags & 0xfffcffff;
		(this->soundPath).value = (char *)0x0;
		(this->soundPath).strLength = 0;
		(this->soundPath).strSize = 0;
		(this->someData).buffer = (void *)0x0;
		this->flags2 = 0;
		(*stream->vtable->ReadInt2)(stream,(int *)&stream);
		SfxDataStream::Read(&this->someData,stream_00);
		(*stream_00->vtable->ReadUInt)(stream_00,&this->dataSize);
		(*stream_00->vtable->ReadUInt)(stream_00,&this->streamPosition);
		return &this->flags;
		}
		
	*/
	return;
}

