#include "headers/Known/Game/SaveSystem/SaveFile/SaveFileAbstract.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void SaveFileAbstract::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SaveFileAbstract::CleanUp(SaveFileAbstract *this){
		MemoryStream *this_00;
		this_00 = this->stream;
		this->vtable = (SaveFileAbstract_VTable *)&SaveFile_VT_Abstract;
		if (this_00 != (MemoryStream *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		}
		TwinString::Dispose(&this->name);
		return;
		}
		
	*/
	return;
}

uint SaveFileAbstract::GetSaveHash() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __fastcall SaveFileAbstract::GetSaveHash(SaveFileAbstract *this){
		uint length;
		uint uVar1;
		uint uVar2;
		uint uVar3;
		int iVar4;
		length = this->streamLength;
		iVar4 = length - 4;
		uVar1 = 0x18;
		uVar3 = 0x18;
		if (iVar4 != 0) {
		uVar2 = (uint)*this->stream->startPtr;
		do {
		length = uVar2 << ((byte)uVar3 & 0x1f) ^ (uVar2 << ((byte)uVar1 & 0x1f)) + length;
		if (5 < uVar1) {
		uVar1 = uVar1 + 0x18;
		}
		if (7 < uVar3) {
		uVar3 = uVar3 + 0x18;
		}
		uVar1 = uVar1 - 5;
		uVar3 = uVar3 - 7;
		iVar4 = iVar4 + -1;
		}
		 while (iVar4 != 0);
		}
		return length;
		}
		
	*/
	return 0;
}

void SaveFileAbstract::Construct(char* bankName, uint param_2, uint param_3, uint param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveFileAbstract * __thiscall SaveFileAbstract::Construct(SaveFileAbstract *this,char *bankName,uint param_2,undefined4 param_3,byte *param_4){
		this->vtable = (SaveFileAbstract_VTable *)&SaveFile_VT_Abstract;
		TwinString::Set(&this->name,bankName);
		(this->saveTime).dwHighDateTime = 0;
		(this->saveTime).dwLowDateTime = 0;
		this->field3_0x18 = param_2;
		this->saveHash = 0;
		this->stream = (MemoryStream *)0x0;
		this->streamLength = param_3;
		this->streamStartPtr = param_4;
		return this;
		}
		
	*/
	return;
}

MemoryStream* SaveFileAbstract::InitStream() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address MemoryStream * __fastcall SaveFileAbstract::InitStream(SaveFileAbstract *this){
		MemoryStream *stream;
		uint uVar1;
		void *startPtr;
		uint length;
		if (this->streamStartPtr == (byte *)0x0) {
		stream = (MemoryStream *)VirtualPool::AllocateMemory(0x14);
		if (stream == (MemoryStream *)0x0) {
		stream = (MemoryStream *)0x0;
		startPtr = _Eight;
		}
		else {
		stream = MemoryStream::Contruct2(stream,this->streamLength,0,0x40);
		startPtr = stream->startPtr;
		}
		}
		else {
		stream = (MemoryStream *)VirtualPool::AllocateMemory(0x14);
		if (stream == (MemoryStream *)0x0) {
		stream = (MemoryStream *)0x0;
		}
		else {
		stream = MemoryStream::Construct(stream,this->streamStartPtr,this->streamLength,0,0x40);
		}
		startPtr = this->streamStartPtr;
		}
		length = this->streamLength;
		for (uVar1 = length >> 2;
		 uVar1 != 0;
		 uVar1 = uVar1 - 1) {
		*(undefined4 *)startPtr = 0xa5a5a5a5;
		startPtr = (undefined4 *)((int)startPtr + 4);
		}
		for (length = length & 3;
		 length != 0;
		 length = length - 1) {
		*(undefined *)startPtr = 0xa5;
		startPtr = (void *)((int)startPtr + 1);
		}
		return stream;
		}
		
	*/
	return null;
}

bool SaveFileAbstract::Reinitstream() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall SaveFileAbstract::Reinitstream(SaveFileAbstract *this){
		MemoryStream *stream;
		stream = this->stream;
		if (stream != (MemoryStream *)0x0) {
		(*stream->vtable->Dispose)(stream,1);
		}
		stream = (*this->vtable->InitStream)(this);
		this->stream = stream;
		return stream != (MemoryStream *)0x0;
		}
		
	*/
	return false;
}

bool SaveFileAbstract::Write() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall SaveFileAbstract::Write(SaveFileAbstract *this){
		MemoryStream *pMVar1;
		uint uVar2;
		pMVar1 = this->stream;
		if (pMVar1 != (MemoryStream *)0x0) {
		(*pMVar1->vtable->Dispose)(pMVar1,1);
		}
		pMVar1 = (*this->vtable->InitStream)(this);
		this->stream = pMVar1;
		(*this->vtable->UpdateBankData)(this);
		SetTime(&this->saveTime);
		if (this->field3_0x18 != 0) {
		(*this->stream->vtable->Write)(this->stream,(byte *)&this->saveTime,8);
		(*this->vtable->WriteBanks)(this,this->stream);
		uVar2 = GetSaveHash(this);
		this->saveHash = uVar2;
		(*this->stream->vtable->SeekFromStart)(this->stream,this->streamLength + -8);
		(*this->stream->vtable->WriteInt3)(this->stream,this->field3_0x18);
		(*this->stream->vtable->WriteInt3)(this->stream,this->saveHash);
		return this->stream != (MemoryStream *)0x0;
		}
		(*this->vtable->WriteBanks)(this,this->stream);
		return this->stream != (MemoryStream *)0x0;
		}
		
	*/
	return false;
}

bool SaveFileAbstract::DisposeStream() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall SaveFileAbstract::DisposeStream(SaveFileAbstract *this){
		MemoryStream *stream;
		stream = this->stream;
		if (stream != (MemoryStream *)0x0) {
		(*stream->vtable->Dispose)(stream,1);
		}
		this->stream = (MemoryStream *)0x0;
		return true;
		}
		
	*/
	return false;
}

void SaveFileAbstract::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveFileAbstract * __thiscall SaveFileAbstract::Dispose(SaveFileAbstract *this,byte param_1){
		MemoryStream *this_00;
		this_00 = this->stream;
		this->vtable = (SaveFileAbstract_VTable *)&SaveFile_VT_Abstract;
		if (this_00 != (MemoryStream *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		}
		TwinString::Dispose(&this->name);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SaveFileAbstract::Dispose_8(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveFileAbstract * __thiscall SaveFileAbstract::Dispose(SaveFileAbstract *this,byte param_1){
		TwinString::Dispose((TwinString *)(this + 1));
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

bool SaveFileAbstract::Read(int* outArray, uint amount) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SaveFileAbstract::Read(SaveFileAbstract *this,int *outArray,uint amount){
		uint uVar1;
		uint uVar2;
		bool bVar3;
		int pSStack4;
		MemoryStream *pool;
		if (this->field3_0x18 == 0) {
		bVar3 = true;
		goto outBreak;
		}
		(*this->stream->vtable->SeekFromStart)(this->stream,this->streamLength + -8);
		(*this->stream->vtable->ReadUInt)(this->stream,(uint *)&pSStack4);
		(*this->stream->vtable->ReadUInt)(this->stream,&this->saveHash);
		if (this == (SaveFileAbstract *)this->field3_0x18) {
		uVar1 = this->saveHash;
		if (uVar1 != 0) {
		uVar2 = GetSaveHash(this);
		if (uVar2 != uVar1) goto LAB_0020155b;
		}
		bVar3 = true;
		(*this->stream->vtable->Rewind)(this->stream);
		(*this->stream->vtable->Read)(this->stream,&(this->saveTime).dwHighDateTime,8,1);
		(*this->vtable->ReadBanks)(this,this->stream);
		}
		else {
		LAB_0020155b:bVar3 = false;
		}
		outBreak:pool = this->stream;
		if (pool != (MemoryStream *)0x0) {
		(*pool->vtable->Dispose)(pool,1);
		}
		this->stream = (MemoryStream *)0x0;
		return bVar3;
		}
		
	*/
	return false;
}

bool SaveFileAbstract::CompareHash(uint hash) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SaveFileAbstract::CompareHash(SaveFileAbstract *this,uint hash){
		uint uVar1;
		if (hash == 0) {
		return true;
		}
		uVar1 = GetSaveHash(this);
		return (bool)('\x01' - (uVar1 != hash));
		}
		
	*/
	return false;
}

void SaveFileAbstract::Construct_11(char* name) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveFileAbstract * __thiscall SaveFileAbstract::Construct(SaveFileAbstract *this,char *name){
		this->vtable = (SaveFileAbstract_VTable *)&SaveFile_VT_Abstract;
		TwinString::Set(&this->name,name);
		(this->saveTime).dwHighDateTime = 0;
		(this->saveTime).dwLowDateTime = 0;
		this->field3_0x18 = 0;
		this->saveHash = 0;
		this->stream = (MemoryStream *)0x0;
		this->streamLength = 0;
		this->streamStartPtr = (byte *)0x0;
		return this;
		}
		
	*/
	return;
}

void SaveFileAbstract::Construct_12(char* name, uint param_2, uint length) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveFileAbstract * __thiscall SaveFileAbstract::Construct(SaveFileAbstract *this,char *name,undefined4 param_2,uint length){
		this->vtable = (SaveFileAbstract_VTable *)&SaveFile_VT_Abstract;
		TwinString::Set(&this->name,name);
		(this->saveTime).dwHighDateTime = 0;
		(this->saveTime).dwLowDateTime = 0;
		this->field3_0x18 = param_2;
		this->saveHash = 0;
		this->stream = (MemoryStream *)0x0;
		this->streamStartPtr = (byte *)0x0;
		this->streamLength = length;
		return this;
		}
		
	*/
	return;
}

