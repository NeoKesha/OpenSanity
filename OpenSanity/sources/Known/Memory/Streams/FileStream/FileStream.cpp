#include "headers/Known/Memory/Streams/FileStream/FileStream.h"
#include "headers/Known/TwinString.h"
#include "headers/Global.h"

FileStream::FileStream() {
	this->handle = INVALID_HANDLE_VALUE;
}

FileStream::~FileStream() {
	if (handle != INVALID_HANDLE_VALUE) {
		CloseHandle(handle);
	}
}

void FileStream::OpenFile(const char* fname, int fmode) {
	Global* GLOBAL = Global::Get();
	char cVar1;
	char* pcVar2;
	uint fnameLength;
	int iVar4;
	char* pcVar5;
	uint uVar6;
	char* pcVar7;
	uint access;
	void* puVar9;
	int mode;
	TwinString root;
	char totalPath[1028];
	access = 0;
	mode = 0;
	switch (fmode) {
	case 0: 
		access = GENERIC_WRITE;
		mode = CREATE_ALWAYS;
		break;
	case 1: 
		access = GENERIC_READ;
		mode = OPEN_EXISTING;
		break;
	case 2:
		access = GENERIC_WRITE;
		mode = TRUNCATE_EXISTING;
		break;
	case 3:
		access = GENERIC_READ | GENERIC_WRITE;
		mode = OPEN_EXISTING;
		break;
	}
	root.Copy(GLOBAL->CDROM_VOLUME.value);
	if (root.value == null) {
		root.value = (char*)"";
	}
	//add root
	const char* srcPtr = root.value;
	char* dstPtr = totalPath;
	while (*srcPtr != '\0') {
		*dstPtr = *srcPtr;
		++dstPtr;
		++srcPtr;
	}
	//add fname
	srcPtr = fname;
	while (*srcPtr != '\0') {
		*dstPtr = *srcPtr;
		++dstPtr;
		++srcPtr;
	}
	*dstPtr = '\0';

	this->handle = CreateFileA(totalPath, access, 0, 0, mode, 0, null);
	this->errorNumber = GetLastError();
	return;
}

int FileStream::IsInvalid() {
	return this->handle == INVALID_HANDLE_VALUE || this->errorNumber != 0;
}

FileStream* FileStream::ReOpenFile2(const char* fname, int param_2) {
	this->handle = INVALID_HANDLE_VALUE;
	OpenFile(fname,param_2);
	return this;
}

void FileStream::CloseFile() {
	if (this->handle != INVALID_HANDLE_VALUE) {
		CloseHandle(this->handle);
	}
	this->handle = INVALID_HANDLE_VALUE;
	return;
}

bool FileStream::EndOfStream() {
	uint position = GetPosition();
	uint endPosition = GetLength();
	return position == endPosition;
}

int FileStream::ReadLineByLine(size_t length, char* buffer, char** outStrings) {
	int strings = 1;
	char* currentPositionIn;
	char* currentPositionOut;
	char currentChar;
	bool loopCondition = true;

	if (length == 0) {
		return 0;
	}

	currentPositionIn = buffer;
	char* bufferPtr = buffer;
	char* ptr = bufferPtr;
	while (length != 0) {
		if (*ptr == '\n' || *ptr == '\r' || *ptr == '\t' || *ptr == ' ') {
			if (!loopCondition) {
				*ptr = '\0';
				outStrings[strings] = bufferPtr;
				++strings;
			}
			bufferPtr = ptr + 1;
			loopCondition = true;
		}
		else {
			loopCondition = false;
		}
		++ptr;
		--length;
	}
	if (!loopCondition) {
		outStrings[strings] = bufferPtr;
		++strings;
	}
	return strings;
}

int FileStream::Read(byte* buffer, size_t size) {
	unsigned long bytesRead;
	bool result = ReadFile(this->handle, buffer, size, &bytesRead, null);
	this->errorNumber = GetLastError();
	return bytesRead;
}

size_t FileStream::GetLength() {
	return GetFileSize(this->handle, null);
}

uint FileStream::Write(byte* buffer, size_t size) {
	unsigned long bytesWritten;
	bool result = WriteFile(this->handle, buffer, size, &bytesWritten, null);
	this->errorNumber = GetLastError();
	return bytesWritten;
}

unsigned int  FileStream::GetPosition() {
	unsigned int position = SetFilePointer(this->handle, 0, null, SEEK_CUR);
	this->errorNumber = GetLastError();
	return position;
}

unsigned int  FileStream::Rewind() {
	unsigned int position = SetFilePointer(this->handle, 0, null, SEEK_SET);
	this->errorNumber = GetLastError();
	return position;
}

unsigned int  FileStream::SeekEnd() {
	unsigned int position = SetFilePointer(this->handle, 0, null, SEEK_END);
	this->errorNumber = GetLastError();
	return position;
}

unsigned int  FileStream::SeekForward(long length) {
	unsigned int position = SetFilePointer(this->handle, length, null, SEEK_CUR);
	this->errorNumber = GetLastError();
	return position;
}

unsigned int  FileStream::SeekFromStart(long length) {
	unsigned int position = SetFilePointer(this->handle, length, null, SEEK_SET);
	this->errorNumber = GetLastError();
	return position;
}

void FileStream::ReadLong(byte* buffer) {
	Read(buffer, 8);
	return;
}

void FileStream::ReadFloat(byte* buffer) {
	Read(buffer, 4);
	return;
}

void FileStream::ReadByte(byte* buffer) {
	Read(buffer, 1);
	return;
}

void FileStream::ReadInt2(byte* buffer) {
	Read(buffer, 4);
	return;
}

void FileStream::ReadInt3(byte* buffer) {
	Read(buffer, 4);
	return;
}

void FileStream::ReadShort(byte* buffer) {
	Read(buffer, 2);
	return;
}

void FileStream::ReadByte2(byte* buffer) {
	Read(buffer, 1);
	return;
}

void FileStream::ReadUInt(byte* buffer) {
	Read(buffer, 4);
	return;
}

void FileStream::ReadInt5(byte* buffer) {
	Read(buffer, 4);
	return;
}

void FileStream::ReadShort2(byte* buffer) {
	Read(buffer, 2);
	return;
}

void FileStream::ReadByte3(byte* buffer) {
	Read(buffer, 1);
	return;
}

void FileStream::WriteLong(long value) {
	Write((byte*)&value, 8);
	return;
}

void FileStream::WriteFloat(float value) {
	Write((byte*)&value, 4);
	return;
}

void FileStream::WriteByte(byte value) {
	Write((byte*)&value, 1);
	return;
}

void FileStream::WriteInt3(int value) {
	Write((byte*)&value, 4);
	return;
}

void FileStream::WriteInt2(int value) {
	Write((byte*)&value, 4);
	return;
}

void FileStream::WriteShort(short value) {
	Write((byte*)&value, 2);
	return;
}

void FileStream::WriteByte2(byte value) {
	Write((byte*)&value, 1);
	return;
}

void FileStream::WriteInt5(int value) {
	Write((byte*)&value, 4);
	return;
}

void FileStream::WriteUInt(uint value) {
	Write((byte*)&value, 4);
	return;
}

void FileStream::WriteShort2(short value) {
	Write((byte*)&value, 2);
	return;
}

void FileStream::WriteByte3(byte value) {
	Write((byte*)&value, 1);
	return;
}

int FileStream::ReadCheck(byte* buffer, uint size, bool check) {
	unsigned long bytesRead;
	ReadFile(this->handle, buffer, size, &bytesRead, null);
	this->errorNumber = GetLastError();
	if (check && bytesRead == 0 && size > 0) {
		return -1;
	}
	return bytesRead;
}

