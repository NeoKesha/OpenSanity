#include "headers/Known/LevelStructure/Readers/Known/SectionReaderBH.h"

#include "headers/Known/Game/BH/BHTable.h"
void SectionReaderBH::Read(byte* buffer, size_t length) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderBH::Read(SectionReaderBH *this,byte *buffer,size_t length){
		uint __n;
		byte *position;
		int iVar1;
		VirtualPool *pool;
		uint i;
		uint j;
		MemoryStream_VTable *unaff_EBX;
		char *src;
		int pcVar2;
		char *dst;
		char *pcVar1;
		MemoryStream stream;
		TwinString fname;
		uint header;
		undefined strLen [4];
		BHRecord record;
		int iStack16;
		stream.startPtr = buffer;
		stream.currentPtr = buffer;
		stream.length = length;
		stream.vtable = (MemoryStream_VTable *)&Stream_VT_Memory;
		stream.flags = (int)XBE_FILE_HEADER_00010000.Signature + 0x3c;
		header = 0;
		(*(code *)PTR_ReadUInt_00396748)();
		position = (byte *)(*unaff_EBX->GetPosition)((MemoryStream *)&stack0xfffffbb8);
		if (position < stream.currentPtr) {
		do {
		(*unaff_EBX->ReadUInt)((MemoryStream *)&stack0xfffffbb8,&header);
		__n = header;
		dst = (char *)&record;
		src = (char *)stream.startPtr;
		for (i = header >> 2;
		 dst = (char *)((int)dst + 4), i != 0;
		 i = i - 1) {
		*(uint *)dst = *(uint *)src;
		src = (char *)((int)src + 4);
		}
		for (j = header & 3;
		 j != 0;
		 j = j - 1) {
		*dst = *src;
		src = src + 1;
		dst = dst + 1;
		}
		stream.startPtr = stream.startPtr + header;
		stream.length = 0;
		TwinString::FUN_001572d0((TwinString *)&stream.length,header);
		_strncpy((char *)stream.length,(char *)&record.length,__n);
		*(undefined *)(__n + stream.length) = 0;
		pcVar2 = 0;
		if (0 < (int)__n) {
		do {
		iVar1 = _toupper((int)*(char *)(pcVar2 + stream.length));
		*(char *)(pcVar2 + stream.length) = (char)iVar1;
		pcVar2 = pcVar2 + 1;
		}
		 while (pcVar2 < (int)__n);
		}
		(*unaff_EBX->ReadUInt)((MemoryStream *)&stack0xfffffbb8,(uint *)strLen);
		(*unaff_EBX->ReadUInt)((MemoryStream *)&stack0xfffffbb8,&record.offset);
		pcVar1 = (char *)0x0;
		TwinString::Copy((TwinString *)&stack0xfffffba0,(char *)stream.length);
		BHTable::AddFile(*(BHTable **)(fname.strSize + 4),(BHRecord *)strLen,pcVar1);
		TwinString::Dispose((TwinString *)&stream.length);
		position = (byte *)(*unaff_EBX->GetPosition)((MemoryStream *)&stack0xfffffbb8);
		this = (SectionReaderBH *)fname.strSize;
		}
		 while (position < stream.currentPtr);
		}
		TwinString::Copy(&this->bhTable->packageName,(this->packageName).value);
		if (((uint)stream.vtable & 0x10000) != 0) {
		position = (byte *)stream.flags;
		pool = VirtualPool::GetPool();
		VirtualPool::FreeMemory(pool,position);
		}
		@__security_check_cookie@4(iStack16);
		return;
		}
		
	*/
	return;
}

void SectionReaderBH::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderBH * __thiscall SectionReaderBH::Dispose(SectionReaderBH *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_BH;
		TwinString::Dispose(&this->packageName);
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderBH::Construct(uint param_1, char** param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderBH * __thiscall SectionReaderBH::Construct(SectionReaderBH *this,BHTable *param_1,char **param_2){
		this->bhTable = param_1;
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_BH;
		(this->packageName).value = (char *)0x0;
		(this->packageName).strLength = 0;
		(this->packageName).strSize = 0;
		TwinString::Copy(&this->packageName,*param_2);
		return this;
		}
		
	*/
	return;
}

