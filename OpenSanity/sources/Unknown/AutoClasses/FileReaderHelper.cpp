#include "headers/Unknown/AutoClasses/FileReaderHelper.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/LevelStructure/Trash/SomeSection/UnkRMRelated.h"
#include "headers/Unknown/GameReaderStorage.h"
#include "headers/Known/Game/BH/BHTable.h"

FileReaderHelper::FileReaderHelper() {

}

FileReaderHelper::FileReaderHelper(UnkRMRelated* section) {
	this->section = section;
	this->streamSize = 0;
	this->field3_0xc = 0;
	this->data = (int*)0x0;
	this->stream = (MemoryStream*)0x0;
	this->length = 0;
	this->fname.Set("Initialising");
	this->fileHandle1 = INVALID_HANDLE_VALUE;
	this->field9_0x2c = 0;
	this->field10_0x30 = 0;
	this->str2.Set("Initialising");
	this->unkClass = null;
	this->fileHandle2 = INVALID_HANDLE_VALUE;
	this->flags = 0;
	*(char*)((int)&this->flags + 1) = 0;
	this->overlapped = 0;
	this->field12_0x38 = 0;
	this->field13_0x3c = 0;
	this->field14_0x40 = 0;
	this->field15_0x44 = 0;
	return;
}

void FileReaderHelper::AllocateStream(size_t size) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall FileReaderHelper::AllocateStream(FileReaderHelper *this,size_t size){
		VirtualPool *pool;
		void *memptr;
		MemoryStream *stream;
		int alignment;
		alignment = 0x40;
		this->streamSize = size;
		pool = VirtualPool::GetPool();
		memptr = VirtualPool::AllocateMemoryAligned(pool,size,alignment);
		stream = (MemoryStream *)VirtualPool::AllocateMemory(0x14);
		if (stream == (MemoryStream *)0x0) {
		stream = (MemoryStream *)0x0;
		}
		else {
		stream = MemoryStream::Construct(stream,memptr,this->streamSize,1,0x40);
		}
		this->stream = stream;
		(*stream->vtable->Rewind)(stream);
		this->flags = this->flags & 0xfffbffff;
		return;
		}
		
	*/
	return;
}

void FileReaderHelper::FUN_002043d0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall FileReaderHelper::FUN_002043d0(FileReaderHelper *this){
		MemoryStream *stream;
		stream = this->stream;
		if (stream != (MemoryStream *)0x0) {
		(*stream->vtable->SeekEnd)(stream);
		this->flags = this->flags & 0xfffbffff;
		this->overlapped = 0;
		this->field12_0x38 = 0;
		this->field13_0x3c = 0;
		this->field14_0x40 = 0;
		this->field15_0x44 = 0;
		}
		return;
		}
		
	*/
	return;
}

bool FileReaderHelper::FUN_002047d0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __cdecl FileReaderHelper::FUN_002047d0(FileReaderHelper *this){
		int iVar1;
		uint uVar2;
		undefined4 *overlapped;
		overlapped = &this->overlapped;
		iVar1 = _GetOverlappedResult@16(this->fileHandle1,overlapped,(int *)&this,0);
		if (iVar1 == 0) {
		uVar2 = XAPILIB::GetLastError();
		if ((uVar2 != 0x26) && ((uVar2 < 0x3e4 || (0x3e5 < uVar2)))) {
		ROOT_SECTION->field7_0x14 = 2;
		return true;
		}
		}
		return *overlapped == 0x103;
		}
		
	*/
	return false;
}

void FileReaderHelper::CloseFile() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall FileReaderHelper::CloseFile(FileReaderHelper *this){
		char cVar1;
		MemoryStream *stream;
		cVar1 = *(char *)((int)&this->flags + 1);
		if (cVar1 == '\x04') {
		_CloseHandle@4(this->fileHandle2);
		this->fileHandle2 = 0xffffffff;
		TwinString::Copy(&this->str2,"Nothing");
		return;
		}
		if (cVar1 != '\x03') {
		_CloseHandle@4(this->fileHandle1);
		this->fileHandle1 = 0xffffffff;
		}
		this->flags = this->flags & 0xfffeffff;
		TwinString::Copy(&this->fname,"Nothing");
		stream = this->stream;
		if (stream != (MemoryStream *)0x0) {
		(*stream->vtable->Rewind)(stream);
		this->flags = this->flags & 0xfffbffff;
		this->field3_0xc = 0;
		}
		return;
		}
		
	*/
	return;
}

byte FileReaderHelper::FUN_002057a0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte __fastcall FileReaderHelper::FUN_002057a0(FileReaderHelper *this){
		bool bVar1;
		if ((*(byte *)((int)&this->flags + 2) & 1) != 0) {
		bVar1 = FUN_002047d0(this);
		if (bVar1 == false) {
		if (this->data != (int *)0x0) {
		(*this->stream->vtable->Read)(this->stream,this->data,this->length,1);
		this->data = (int *)0x0;
		}
		this->flags = this->flags & 0xfffeffff;
		}
		}
		return *(byte *)((int)&this->flags + 2) & 1;
		}
		
	*/
	return 0;
}

void FileReaderHelper::Read() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall FileReaderHelper::Read(FileReaderHelper *this){
		int iVar1;
		uint uVar2;
		int local_8;
		int local_4;
		while( true ) {
		if ((*(byte *)((int)&this->flags + 2) & 1) == 0) {
		return;
		}
		iVar1 = _GetOverlappedResult@16(this->fileHandle1,&this->overlapped,&local_8,0);
		if (((iVar1 == 0) && (uVar2 = XAPILIB::GetLastError(), uVar2 != 0x26)) &&((uVar2 < 0x3e4 || (0x3e5 < uVar2)))) {
		ROOT_SECTION->field7_0x14 = 2;
		}
		else if (this->overlapped != 0x103) {
		if (this->data != (int *)0x0) {
		(*this->stream->vtable->Read)(this->stream,this->data,this->length,1);
		this->data = (int *)0x0;
		}
		this->flags = this->flags & 0xfffeffff;
		}
		if ((*(byte *)((int)&this->flags + 2) & 1) == 0) break;
		iVar1 = this->overlapped;
		while (iVar1 == 0x103) {
		_GetOverlappedResult@16(this->fileHandle1,&this->overlapped,&local_4,0);
		iVar1 = this->overlapped;
		}
		}
		return;
		}
		
	*/
	return;
}

bool FileReaderHelper::OpenFile(char* fname) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall FileReaderHelper::OpenFile(FileReaderHelper *this,char *fname){
		char cVar1;
		undefined4 uVar2;
		undefined4 *puVar3;
		int fileHandle;
		undefined4 local_34 [9];
		undefined4 local_10;
		if (*(char *)((int)&this->flags + 1) == '\x03') {
		if ((fname == (char *)0x0) || (*fname == '\0')) {
		return true;
		}
		puVar3 = (undefined4 *)FileResourceSupport::FUN_002104e0((FileResourceSupport *)this->unkClass,fname);
		if (puVar3 != (undefined4 *)0x0) {
		TwinString::Copy(&this->fname,fname);
		this->field9_0x2c = *puVar3;
		this->field10_0x30 = puVar3[1];
		return true;
		}
		}
		else {
		if (this->fileHandle1 == -1) {
		fileHandle = ::OpenFile(fname);
		this->fileHandle1 = fileHandle;
		if (fileHandle != -1) {
		this->flags = this->flags | 0x10000;
		TwinString::Copy(&this->fname,fname);
		}
		if (this->fileHandle1 == -1) {
		local_10 = 0;
		}
		else {
		_GetFileInformationByHandle@8(this->fileHandle1,local_34);
		}
		this->field10_0x30 = local_10;
		this->field9_0x2c = 0;
		}
		if (this->field10_0x30 != 0) {
		cVar1 = *(char *)((int)&this->flags + 1);
		if (cVar1 == '\x01') {
		*(undefined *)((int)&this->flags + 1) = 2;
		return true;
		}
		if (cVar1 != '\x02') {
		return true;
		}
		uVar2 = this->fileHandle1;
		*(undefined *)((int)&this->flags + 1) = 3;
		this->fileHandle2 = uVar2;
		CloseFile(this);
		return true;
		}
		TwinString::Copy(&this->fname,"Nothing");
		}
		return false;
		}
		
	*/
	return false;
}

bool FileReaderHelper::ReadFileToBuffer(int offset, uint size, byte* buffer, uint param_4, void* unused) {
	uint uVar1;
	byte* pbVar2;
	size_t streamPosition;
	uint uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	uint length;
	int iVar8;
	size_t sVar9;
	bool result;
	MemoryStream* _stream;
	MemoryStream* stream;
	iVar5 = this->field9_0x2c;
	iVar8 = this->field10_0x30;
	length = this->field3_0xc;
	uVar1 = iVar5 + offset;
	iVar8 = iVar8 + iVar5;
	result = false;
	streamPosition = this->stream->GetPosition();
	uVar4 = streamPosition + length;
	if (uVar4 < uVar1) {
		stream = this->stream;
		streamPosition = stream->GetPosition();
		_stream = this->stream;
		if ((int)(uVar1 - uVar4) < (int)(stream->length - streamPosition)) {
			_stream->SeekForward(uVar1 - uVar4);
			goto LAB_002063e5;
		}
		_stream->Rewind();
	}
	else {
		if (uVar4 <= uVar1) goto LAB_002063e5;
		stream = this->stream;
		if (length <= uVar1) {
			stream->SeekForward(uVar1 - uVar4);
			goto LAB_002063e5;
		}
		stream->Rewind();
	}
	this->flags = this->flags & 0xfffbffff;
LAB_002063e5:stream = this->stream;
	streamPosition = stream->GetPosition();
	length = stream->length - streamPosition;
	FILE_STORAGE_INFO storageInfo;
	GetFileInformationByHandleEx(fileHandle1, FILE_INFO_BY_HANDLE_CLASS::FileAlignmentInfo,&storageInfo,sizeof(storageInfo)); //TODO: or handle2?
	if ((this->flags & 0x40000U) == 0) {
		this->stream->Rewind();
		iVar5 = storageInfo.ByteOffsetForSectorAlignment;
		length = ~(iVar5 - 1U) & uVar1;
		this->field3_0xc = length;
		this->stream->SeekForward(uVar1 - length);
		iVar5 = this->field3_0xc;
		iVar6 = storageInfo.ByteOffsetForSectorAlignment;
		iVar7 = storageInfo.ByteOffsetForSectorAlignment;
		sVar9 = iVar7 + -1 + (iVar8 - iVar5) & ~(iVar6 - 1U);
		streamPosition = this->stream->GetLength();
		if (streamPosition <= sVar9) {
			sVar9 = this->stream->GetLength();
		}
		pbVar2 = this->stream->startPtr;
		this->flags = this->flags | 0x10000;
		//FUN_00204720(iVar5, sVar9, pbVar2); //member of this
		if ((char)param_4 == '\0') {
			this->length = size;
			this->data = (int*)buffer;
		}
		else {
			Read();
			this->stream->Read((int*)buffer, size, 1);
		}
		result = (char)param_4 != '\0';
		this->flags = this->flags | 0x40000;
	}
	else if (length < size) {
		iVar5 = storageInfo.ByteOffsetForSectorAlignment;
		iVar6 = storageInfo.ByteOffsetForSectorAlignment;
		sVar9 = iVar6 + -1 + ((iVar8 - length) - uVar1) & ~(iVar5 - 1U);
		this->stream->Read((int*)buffer, length, 1);
		streamPosition = this->stream->GetLength();
		if (streamPosition <= sVar9) {
			sVar9 = this->stream->GetLength();
		}
		this->stream->Rewind();
		this->field3_0xc = length + uVar1;
		pbVar2 = this->stream->startPtr;
		this->flags = this->flags | 0x10000;
		//FUN_00204720(length + uVar1, sVar9, pbVar2); //member of this
		if ((char)param_4 == '\0') {
			this->length = size - length;
			this->data = (int*)(buffer + length);
		}
		else {
			Read();
			this->stream->Read((int*)(buffer + length), size - length, 1);
			result = true;
		}
	}
	else {
		this->stream->Read((int*)buffer, size, 1);
		result = true;
	}
	stream = this->stream;
	if ((stream != (MemoryStream*)0x0) && (streamPosition =stream->GetPosition(), stream->length == streamPosition)) {
		this->flags = this->flags & 0xfffbffff;
	}
	return result;
}

FileReaderHelper* FileReaderHelper::Create(UnkRMRelated* src) {
	FileReaderHelper* instance;
	instance = new FileReaderHelper(src);
	src->AddReader(&instance);
	return instance;
}

void FileReaderHelper::InitBatch(char* packageName, bool read, GameReaderStorage* readerStorage) {
	BHTable* bhTable;
	if (!inited) {
		inited = true;
		str2.Copy(packageName);
		bhTable = new BHTable();
		bhTable->collection = (BHRecord*)0x0;
		bhTable->cnt = 0;
		bhTable->field2_0x6 = 0;
		bhTable->step = 0x40;
		bhTable->field6_0xc = 0;
		bhTable->stringCollection = StringCollection(10);
		(bhTable->packageName).value = (char*)0x0;
		(bhTable->packageName).strLength = 0;
		(bhTable->packageName).strSize = 0;
		this->unkClass = bhTable;
		bhTable->Init(packageName, read, readerStorage);
	}
	return;
}

