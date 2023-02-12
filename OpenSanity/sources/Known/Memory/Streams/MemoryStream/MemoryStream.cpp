#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"

void MemoryStream::ReadInt2(MemoryStream* stream, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void MemoryStream::ReadInt2(MemoryStream *stream,int *param_2){
		(*stream->vtable->ReadInt2)(stream,param_2);
		return;
		}
		
	*/
	return;
}

void MemoryStream::WriteInt(uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void MemoryStream::WriteInt(MemoryStream *this,int *param_2){
		(*this->vtable->WriteInt1)(this,*param_2);
		return;
		}
		
	*/
	return;
}

uint MemoryStream::FUN_0020d520(size_t param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall MemoryStream::FUN_0020d520(MemoryStream *this,size_t param_1){
		uint alignment;
		VirtualPool *this_00;
		byte *pbVar1;
		uint3 uVar2;
		size_t amount;
		alignment = this->flags & 0xffff;
		amount = param_1;
		this_00 = VirtualPool::GetPool();
		pbVar1 = (byte *)VirtualPool::AllocateMemoryAligned(this_00,amount,alignment);
		this->startPtr = pbVar1;
		this->currentPtr = pbVar1;
		this->flags = this->flags | 0x10000;
		uVar2 = (uint3)((uint)pbVar1 >> 8);
		if (pbVar1 == (byte *)0x0) {
		this->length = 0;
		return (uint)uVar2 << 8;
		}
		this->length = param_1;
		return CONCAT31(uVar2,1);
		}
		
	*/
	return 0;
}

MemoryStream* MemoryStream::Contruct2(uint param_1, byte param_2, ushort param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	MemoryStream * __thiscall MemoryStream::Contruct2(MemoryStream *this,uint param_1,byte param_2,undefined2 param_3){
		VirtualPool *this_00;
		byte *pbVar1;
		uint alignment;
		uint amount;
		this->startPtr = (byte *)0x0;
		this->currentPtr = (byte *)0x0;
		this->length = 0;
		this->vtable = (MemoryStream_VTable *)&Stream_VT_Memory;
		this->flags = 0;
		this->flags = ((uint)param_2 << 0x11 ^ this->flags) & 0x20000 ^ this->flags | 0x10000;
		*(undefined2 *)&this->flags = param_3;
		alignment = this->flags & 0xffff;
		amount = param_1;
		this_00 = VirtualPool::GetPool();
		pbVar1 = (byte *)VirtualPool::AllocateMemoryAligned(this_00,amount,alignment);
		this->startPtr = pbVar1;
		this->currentPtr = pbVar1;
		this->length = -(uint)(pbVar1 != (byte *)0x0) & param_1;
		this->flags = this->flags | 0x10000;
		return this;
		}
		
	*/
	return null;
}

void MemoryStream::Construct(void* memptr, size_t length, byte flag, short param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	MemoryStream * __thiscall MemoryStream::Construct(MemoryStream *this,void *memptr,size_t length,byte flag,short param_4){
		this->startPtr = (byte *)memptr;
		this->currentPtr = (byte *)memptr;
		this->length = length;
		this->vtable = (MemoryStream_VTable *)&Stream_VT_Memory;
		this->flags = 0;
		this->flags = (flag & 1) << 0x10 | this->flags & 0xfffcffff;
		*(short *)&this->flags = param_4;
		return this;
		}
		
	*/
	return;
}

void MemoryStream::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall MemoryStream::Dispose(MemoryStream *this){
		byte bVar1;
		VirtualPool *pool;
		byte *pbVar2;
		bVar1 = *(byte *)((int)&this->flags + 2);
		this->vtable = (MemoryStream_VTable *)&Stream_VT_Memory;
		if ((bVar1 & 1) != 0) {
		pbVar2 = this->startPtr;
		pool = VirtualPool::GetPool();
		VirtualPool::FreeMemory(pool,pbVar2);
		this->startPtr = (byte *)0x0;
		this->currentPtr = (byte *)0x0;
		this->length = 0;
		}
		this->vtable = (MemoryStream_VTable *)&Stream_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void MemoryStream::Write(byte* data, uint length) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall MemoryStream::Write(MemoryStream *this,byte *data,uint length){
		size_t offset;
		VirtualPool *pool;
		void *allocatedMem;
		uint i;
		uint remainingLength;
		void *ptr1;
		void *ptr2;
		undefined4 *puVar1;
		size_t amountToAllocate;
		byte *oldPtr;
		size_t size;
		offset = (*this->vtable->GetPosition)(this);
		remainingLength = this->length - offset;
		i = length;
		if ((remainingLength < length) && (i = remainingLength, (this->flags & 0x20000) != 0)) {
		amountToAllocate = this->length * 2;
		i = amountToAllocate - offset;
		while (i < length) {
		amountToAllocate = amountToAllocate * 2;
		i = amountToAllocate - offset;
		}
		i = this->flags & 0xffff;
		size = amountToAllocate;
		pool = VirtualPool::GetPool();
		allocatedMem = VirtualPool::AllocateMemoryAligned(pool,size,i);
		if (offset != 0) {
		ptr1 = this->startPtr;
		ptr2 = allocatedMem;
		 WARNING: Load size is inaccurate for (i = offset >> 2;
		 i != 0;
		 i = i - 1) {
		*(undefined4 *)ptr2 = *ptr1;
		ptr1 = (undefined4 *)((int)ptr1 + 4);
		ptr2 = (undefined4 *)((int)ptr2 + 4);
		}
		 WARNING: Load size is inaccurate for (i = offset & 3;
		 i != 0;
		 i = i - 1) {
		*(undefined *)ptr2 = *ptr1;
		ptr1 = (void *)((int)ptr1 + 1);
		ptr2 = (void *)((int)ptr2 + 1);
		}
		}
		oldPtr = this->startPtr;
		pool = VirtualPool::GetPool();
		VirtualPool::FreeMemory(pool,oldPtr);
		this->startPtr = (byte *)allocatedMem;
		this->currentPtr = (byte *)((int)allocatedMem + offset);
		this->length = amountToAllocate;
		i = length;
		}
		puVar1 = (undefined4 *)this->currentPtr;
		for (remainingLength = i >> 2;
		 remainingLength != 0;
		 remainingLength = remainingLength - 1) {
		*puVar1 = *(undefined4 *)data;
		data = (byte *)((int)data + 4);
		puVar1 = puVar1 + 1;
		}
		for (remainingLength = i & 3;
		 remainingLength != 0;
		 remainingLength = remainingLength - 1) {
		*(byte *)puVar1 = *data;
		data = (byte *)((int)data + 1);
		puVar1 = (undefined4 *)((int)puVar1 + 1);
		}
		this->currentPtr = this->currentPtr + i;
		if (this->length < offset + i) {
		this->length = offset + i;
		}
		return;
		}
		
	*/
	return;
}

uint MemoryStream::OpenFile(char* fname, char param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall MemoryStream::OpenFile(MemoryStream *this,char *fname,char param_2){
		FileReaderHelper *this_00;
		uint size;
		bool bVar1;
		uint3 extraout_var;
		VirtualPool *this_01;
		undefined4 uVar2;
		size_t sVar3;
		byte *pbVar4;
		this_00 = GAME_READER_STORAGE[1]->reader;
		bVar1 = FileReaderHelper::OpenFile(this_00,fname);
		if (bVar1 != false) {
		size = this_00->field10_0x30;
		sVar3 = size + 1;
		if (param_2 == '\0') {
		sVar3 = size;
		}
		if ((*(byte *)((int)&this->flags + 2) & 1) != 0) {
		pbVar4 = this->startPtr;
		this_01 = VirtualPool::GetPool();
		VirtualPool::FreeMemory(this_01,pbVar4);
		this->startPtr = (byte *)0x0;
		this->currentPtr = (byte *)0x0;
		this->length = 0;
		FUN_0020d520(this,sVar3);
		}
		FileReaderHelper::ReadFileToBuffer(this_00,0,size,this->startPtr,1,(FileReaderHelper **)&fname);
		FileReaderHelper::CloseFile(this_00);
		if (param_2 != '\0') {
		this->startPtr[size] = 0;
		}
		uVar2 = (*this->vtable->Rewind)(this);
		return CONCAT31((int3)((uint)uVar2 >> 8),1);
		}
		return (uint)extraout_var << 8;
		}
		
	*/
	return 0;
}

void MemoryStream::WriteStreamTo(uint len, MemoryStream* destination) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall MemoryStream::WriteStreamTo(MemoryStream *this,uint len,MemoryStream *destination){
		char isEof;
		size_t position;
		uint step;
		position = (*this->vtable->GetPosition)(this);
		(*this->vtable->Rewind)(this);
		isEof = (*this->vtable->EndOfStream)(this);
		for (;
		 (isEof == '\0' && (len != 0));
		 len = len - step) {
		step = len;
		if (0x7ff < len) {
		step = 0x800;
		}
		(*this->vtable->Read)(this,(int *)&COPY_BUFFER,step,1);
		(*destination->vtable->Write)(destination,&COPY_BUFFER,step);
		isEof = (*this->vtable->EndOfStream)(this);
		}
		(*this->vtable->SeekFromStart)(this,position);
		return;
		}
		
	*/
	return;
}

void MemoryStream::WriteStreamTo_9(MemoryStream* destination) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall MemoryStream::WriteStreamTo(MemoryStream *this,MemoryStream *destination){
		size_t length;
		length = (*this->vtable->GetLength)(this);
		WriteStreamTo(this,length,destination);
		return;
		}
		
	*/
	return;
}

MemoryStream* MemoryStream::ConstructFile(char* fname, char mode) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	MemoryStream * __thiscall MemoryStream::ConstructFile(MemoryStream *this,char *fname,char mode){
		this->startPtr = (byte *)0x0;
		this->currentPtr = (byte *)0x0;
		this->length = 0;
		this->vtable = (MemoryStream_VTable *)&Stream_VT_Memory;
		this->flags = 0;
		this->flags = 0x10000;
		*(undefined2 *)&this->flags = 0x40;
		OpenFile(this,fname,mode);
		return this;
		}
		
	*/
	return null;
}

void MemoryStream::FUN_0020fde0(char* fname) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall MemoryStream::FUN_0020fde0(MemoryStream *this,char *fname){
		char *pcVar1;
		uint uVar2;
		int iVar3;
		size_t sVar4;
		char *fnameChars;
		uint uVar5;
		char *localChars;
		undefined4 *puVar6;
		TwinString fullPath;
		undefined auStack1036 [4];
		char localStr [1028];
		int local_4;
		char charPtr;
		local_4 = SECURITY_COOKIE;
		fullPath.value = (char *)0x0;
		fullPath.strLength = 0;
		fullPath.strSize = 0;
		TwinString::Copy(&fullPath,CdRomVolume.value);
		fnameChars = fullPath.value;
		if (fullPath.value == (char *)0x0) {
		fnameChars = "";
		}
		localChars = localStr;
		do {
		charPtr = *fnameChars;
		fnameChars = fnameChars + 1;
		*localChars = charPtr;
		localChars = localChars + 1;
		pcVar1 = fname;
		}
		 while (charPtr != '\0');
		do {
		charPtr = *pcVar1;
		pcVar1 = pcVar1 + 1;
		}
		 while (charPtr != '\0');
		uVar2 = (int)pcVar1 - (int)fname;
		puVar6 = (undefined4 *)(auStack1036 + 3);
		do {
		fnameChars = (char *)((int)puVar6 + 1);
		puVar6 = (undefined4 *)((int)puVar6 + 1);
		}
		 while (*fnameChars != '\0');
		for (uVar5 = uVar2 >> 2;
		 uVar5 != 0;
		 uVar5 = uVar5 - 1) {
		*puVar6 = *(undefined4 *)fname;
		fname = (char *)((int)fname + 4);
		puVar6 = puVar6 + 1;
		}
		for (uVar2 = uVar2 & 3;
		 uVar2 != 0;
		 uVar2 = uVar2 - 1) {
		*(char *)puVar6 = *fname;
		fname = (char *)((int)fname + 1);
		puVar6 = (undefined4 *)((int)puVar6 + 1);
		}
		iVar3 = _CreateFileA@28(localStr,0x40000000,0,0,2,0);
		XAPILIB::GetLastError();
		TwinString::Dispose(&fullPath);
		if (iVar3 < 0) {
		if (iVar3 != -1) {
		_CloseHandle@4(iVar3);
		}
		@__security_check_cookie@4(local_4);
		return;
		}
		sVar4 = (*this->vtable->GetPosition)(this);
		auStack1036 = 0;
		_WriteFile@20(iVar3,this->startPtr,sVar4,(undefined4 *)auStack1036,(undefined4 *)0x0);
		XAPILIB::GetLastError();
		if (iVar3 != -1) {
		_CloseHandle@4(iVar3);
		}
		@__security_check_cookie@4(local_4);
		return;
		}
		
	*/
	return;
}

void MemoryStream::Read(int* outArray, uint length, uint var) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall MemoryStream::Read(MemoryStream *this,int *outArray,uint length,uint var){
		uint i;
		int *currentPtr;
		currentPtr = (int *)this->currentPtr;
		for (i = length >> 2;
		 i != 0;
		 i = i - 1) {
		*outArray = *currentPtr;
		currentPtr = currentPtr + 1;
		outArray = outArray + 1;
		}
		for (i = length & 3;
		 i != 0;
		 i = i - 1) {
		*(undefined *)outArray = *(undefined *)currentPtr;
		currentPtr = (int *)((int)currentPtr + 1);
		outArray = (int *)((int)outArray + 1);
		}
		this->currentPtr = this->currentPtr + length;
		return;
		}
		
	*/
	return;
}

bool MemoryStream::EndOfStream() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall MemoryStream::EndOfStream(MemoryStream *this){
		size_t position;
		position = (*this->vtable->GetPosition)(this);
		return (bool)('\x01' - (position < this->length));
		}
		
	*/
	return false;
}

void MemoryStream::Dispose_14(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	MemoryStream * __thiscall MemoryStream::Dispose(MemoryStream *this,byte param_1){
		byte bVar1;
		VirtualPool *pool;
		byte *pbVar2;
		bVar1 = *(byte *)((int)&this->flags + 2);
		this->vtable = (MemoryStream_VTable *)&Stream_VT_Memory;
		if ((bVar1 & 1) != 0) {
		pbVar2 = this->startPtr;
		pool = VirtualPool::GetPool();
		VirtualPool::FreeMemory(pool,pbVar2);
		this->startPtr = (byte *)0x0;
		this->currentPtr = (byte *)0x0;
		this->length = 0;
		}
		this->vtable = (MemoryStream_VTable *)&Stream_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void MemoryStream::ReadUInt(uint* out) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall MemoryStream::ReadUInt(MemoryStream *this,uint *out){
		*out = *(uint *)this->currentPtr;
		this->currentPtr = this->currentPtr + 4;
		return;
		}
		
	*/
	return;
}

size_t MemoryStream::GetPosition() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	size_t __thiscall MemoryStream::GetPosition(MemoryStream *this){
		return (int)this->currentPtr - (int)this->startPtr;
		}
		
	*/
	return 0;
}

void MemoryStream::SeekBackwards(uint unused, int amount) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall MemoryStream::SeekBackwards(MemoryStream *this,uint unused,int amount){
		this->currentPtr = this->currentPtr + -amount;
		return;
		}
		
	*/
	return;
}

void MemoryStream::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void MemoryStream::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

bool MemoryStream::IsInvalid() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool MemoryStream::IsInvalid(void){
		return false;
		}
		
	*/
	return false;
}

size_t MemoryStream::GetLength() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	size_t __fastcall MemoryStream::GetLength(MemoryStream *this){
		return this->length;
		}
		
	*/
	return 0;
}

void MemoryStream::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall MemoryStream::Rewind(MemoryStream *this){
		this->currentPtr = this->startPtr;
		return;
		}
		
	*/
	return;
}

void MemoryStream::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall MemoryStream::SeekEnd(MemoryStream *this){
		this->currentPtr = this->startPtr + this->length;
		return;
		}
		
	*/
	return;
}

void MemoryStream::SeekForward(int amount) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall MemoryStream::SeekForward(MemoryStream *this,int amount){
		this->currentPtr = this->currentPtr + amount;
		return;
		}
		
	*/
	return;
}

void MemoryStream::SeekFromStart(int amount) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall MemoryStream::SeekFromStart(MemoryStream *this,int amount){
		this->currentPtr = this->startPtr + amount;
		return;
		}
		
	*/
	return;
}

void MemoryStream::ReadLong(int* outArray) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall MemoryStream::ReadLong(MemoryStream *this,int *outArray){
		int *piVar1;
		piVar1 = (int *)this->currentPtr;
		*outArray = *piVar1;
		outArray[1] = piVar1[1];
		this->currentPtr = this->currentPtr + 8;
		return;
		}
		
	*/
	return;
}

void MemoryStream::ReadFloat(float outArray) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall MemoryStream::ReadFloat(MemoryStream *this,float outArray){
		*(undefined4 *)outArray = *(undefined4 *)this->currentPtr;
		this->currentPtr = this->currentPtr + 4;
		return;
		}
		
	*/
	return;
}

void MemoryStream::ReadByte(byte* outArray) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall MemoryStream::ReadByte(MemoryStream *this,byte *outArray){
		*outArray = *this->currentPtr;
		this->currentPtr = this->currentPtr + 1;
		return;
		}
		
	*/
	return;
}

void MemoryStream::ReadInt2_28(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall MemoryStream::ReadInt2(MemoryStream *this,int *param_1){
		*param_1 = *(int *)this->currentPtr;
		this->currentPtr = this->currentPtr + 4;
		return;
		}
		
	*/
	return;
}

void MemoryStream::ReadInt3(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall MemoryStream::ReadInt3(MemoryStream *this,int *param_1){
		*param_1 = *(int *)this->currentPtr;
		this->currentPtr = this->currentPtr + 4;
		return;
		}
		
	*/
	return;
}

void MemoryStream::ReadShort(short* outArray) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall MemoryStream::ReadShort(MemoryStream *this,short *outArray){
		*outArray = *(short *)this->currentPtr;
		this->currentPtr = this->currentPtr + 2;
		return;
		}
		
	*/
	return;
}

void MemoryStream::ReadByte2(byte* outArray) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall MemoryStream::ReadByte2(MemoryStream *this,byte *outArray){
		*outArray = *this->currentPtr;
		this->currentPtr = this->currentPtr + 1;
		return;
		}
		
	*/
	return;
}

void MemoryStream::ReadInt5(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall MemoryStream::ReadInt5(MemoryStream *this,int *param_1){
		*param_1 = *(int *)this->currentPtr;
		this->currentPtr = this->currentPtr + 4;
		return;
		}
		
	*/
	return;
}

void MemoryStream::ReadShort2(short* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall MemoryStream::ReadShort2(MemoryStream *this,short *param_1){
		*param_1 = *(short *)this->currentPtr;
		this->currentPtr = this->currentPtr + 2;
		return;
		}
		
	*/
	return;
}

void MemoryStream::ReadByte3(byte* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall MemoryStream::ReadByte3(MemoryStream *this,byte *param_1){
		*param_1 = *this->currentPtr;
		this->currentPtr = this->currentPtr + 1;
		return;
		}
		
	*/
	return;
}

void MemoryStream::WriteLong(long* value) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall MemoryStream::WriteLong(MemoryStream *this,long *value){
		(*this->vtable->Write)(this,(byte *)&value,8);
		return;
		}
		
	*/
	return;
}

void MemoryStream::WriteFloat(float param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall MemoryStream::WriteFloat(MemoryStream *this,float param_2){
		(*this->vtable->Write)(this,(byte *)&param_2,4);
		return;
		}
		
	*/
	return;
}

void MemoryStream::WriteByte(byte value) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall MemoryStream::WriteByte(MemoryStream *this,byte value){
		(*this->vtable->Write)(this,&value,1);
		return;
		}
		
	*/
	return;
}

void MemoryStream::WriteInt_38(int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall MemoryStream::WriteInt(MemoryStream *this,int param_2){
		(*this->vtable->Write)(this,(byte *)&param_2,4);
		return;
		}
		
	*/
	return;
}

void MemoryStream::WriteInt_39(int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall MemoryStream::WriteInt(MemoryStream *this,int param_2){
		(*this->vtable->Write)(this,(byte *)&param_2,4);
		return;
		}
		
	*/
	return;
}

void MemoryStream::WriteShort(short value) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall MemoryStream::WriteShort(MemoryStream *this,short value){
		(*this->vtable->Write)(this,(byte *)&value,2);
		return;
		}
		
	*/
	return;
}

void MemoryStream::WriteByte2(byte value) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall MemoryStream::WriteByte2(MemoryStream *this,byte value){
		(*this->vtable->Write)(this,&value,1);
		return;
		}
		
	*/
	return;
}

void MemoryStream::WriteInt_42(short value) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall MemoryStream::WriteInt(MemoryStream *this,short value){
		(*this->vtable->Write)(this,(byte *)&value,4);
		return;
		}
		
	*/
	return;
}

void MemoryStream::WriteInt_43(short value) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall MemoryStream::WriteInt(MemoryStream *this,short value){
		(*this->vtable->Write)(this,(byte *)&value,4);
		return;
		}
		
	*/
	return;
}

void MemoryStream::WriteShort_44(short param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall MemoryStream::WriteShort(MemoryStream *this,short param_2){
		(*this->vtable->Write)(this,(byte *)&param_2,2);
		return;
		}
		
	*/
	return;
}

void MemoryStream::WriteByte3(byte param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall MemoryStream::WriteByte3(MemoryStream *this,byte param_2){
		(*this->vtable->Write)(this,&param_2,1);
		return;
		}
		
	*/
	return;
}

int* MemoryStream::FUN_0020d740(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall MemoryStream::FUN_0020d740(MemoryStream *this,int *param_1){
		MemoryStream_VTable *pMVar1;
		VirtualPool *this_00;
		int amount;
		uint uVar2;
		uint uVar3;
		undefined4 *puVar4;
		undefined4 *puVar5;
		byte *pbVar6;
		if ((((this->flags & 0x10000) != 0) && ((this->flags & 0x20000) != 0)) &&(this->length != param_1[4])) {
		pbVar6 = this->startPtr;
		this_00 = VirtualPool::GetPool();
		VirtualPool::FreeMemory(this_00,pbVar6);
		this->startPtr = (byte *)0x0;
		this->currentPtr = (byte *)0x0;
		this->length = 0;
		FUN_0020d520(this,param_1[4]);
		}
		if ((undefined4 *)this->startPtr != (undefined4 *)0x0) {
		uVar3 = this->length;
		puVar4 = (undefined4 *)param_1[2];
		puVar5 = (undefined4 *)this->startPtr;
		for (uVar2 = uVar3 >> 2;
		 uVar2 != 0;
		 uVar2 = uVar2 - 1) {
		*puVar5 = *puVar4;
		puVar4 = puVar4 + 1;
		puVar5 = puVar5 + 1;
		}
		for (uVar3 = uVar3 & 3;
		 uVar3 != 0;
		 uVar3 = uVar3 - 1) {
		*(undefined *)puVar5 = *(undefined *)puVar4;
		puVar4 = (undefined4 *)((int)puVar4 + 1);
		puVar5 = (undefined4 *)((int)puVar5 + 1);
		}
		pMVar1 = this->vtable;
		amount = (**(code **)(*param_1 + 0x1c))();
		(*pMVar1->SeekFromStart)(this,amount);
		}
		return param_1;
		}
		
	*/
	return null;
}

