#include "headers/Known/FileResourceDesc/FileResourceDescG.h"

#include "headers/Unknown/AutoClasses/FileReaderHelper.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"
void FileResourceDescG::Construct(char* fname, SectionReaderAbstract* reader, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	FileResourceDescG * __thiscall FileResourceDescG::Construct(FileResourceDescG *this,char *fname,SectionReaderAbstract *reader,uint param_3){
		uint uVar1;
		int iVar2;
		uint uVar3;
		(this->parent).reader = reader;
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_G;
		TwinString::Set(&this->fname,fname);
		this->buffer = (byte *)0x0;
		this->size = 0;
		this->offset = 0;
		uVar3 = param_3 & 8;
		uVar1 = (param_3 & 3) << 4;
		this->field6_0x24 = 0xffffffff;
		this->field1_0x8 = uVar1 | uVar3 | 4;
		if (((param_3 & 4) == 0) || ((param_3 & 2) != 0)) {
		iVar2 = 0;
		}
		else {
		iVar2 = 1;
		}
		this->field1_0x8 = (iVar2 << 2 | uVar3) << 4 | uVar1 | uVar3 | 4;
		this->field7_0x28 = (float)(-(uint)(uVar3 != 0) & (uint)&this->field6_0x24);
		return this;
		}
		
	*/
	return;
}

void FileResourceDescG::Construct_1(char* fname, uint reader, uint param_3, uint offset, uint size) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	FileResourceDescG * __thiscall FileResourceDescG::Construct(FileResourceDescG *this,char *fname,SectionReaderAbstract *reader,uint param_3,int offset,uint size){
		uint uVar1;
		int iVar2;
		uint uVar3;
		(this->parent).reader = reader;
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_G;
		TwinString::Set(&this->fname,fname);
		this->offset = offset;
		this->size = size;
		uVar3 = param_3 & 8;
		uVar1 = (param_3 & 3) << 4;
		this->buffer = (byte *)0x0;
		this->field6_0x24 = 0xffffffff;
		this->field1_0x8 = uVar1 | uVar3;
		if (((param_3 & 4) == 0) || ((param_3 & 2) != 0)) {
		iVar2 = 0;
		}
		else {
		iVar2 = 1;
		}
		this->field1_0x8 = (iVar2 << 3 | param_3 & 0x20) << 3 | uVar1 | uVar3 | uVar3 << 4;
		this->field7_0x28 = (float)(-(uint)(uVar3 != 0) & (uint)&this->field6_0x24);
		return this;
		}
		
	*/
	return;
}

void FileResourceDescG::Construct_2(SectionReaderAbstract* reader, uint param_2, int offset, int size) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	FileResourceDescG * __thiscall FileResourceDescG::Construct(FileResourceDescG *this,SectionReaderAbstract *reader,uint param_2,int offset,int size){
		uint uVar1;
		int iVar2;
		uint uVar3;
		(this->parent).reader = reader;
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_G;
		(this->fname).value = (char *)0x0;
		(this->fname).strLength = 0;
		(this->fname).strSize = 0;
		this->buffer = (byte *)0x0;
		this->offset = offset;
		this->size = size;
		uVar3 = param_2 & 8;
		uVar1 = (param_2 & 3) << 4;
		this->field6_0x24 = 0xffffffff;
		this->field1_0x8 = uVar1 | uVar3;
		if (((param_2 & 4) == 0) || ((param_2 & 2) != 0)) {
		iVar2 = 0;
		}
		else {
		iVar2 = 1;
		}
		this->field1_0x8 = (iVar2 << 3 | param_2 & 0x20) << 3 | uVar1 | uVar3 | uVar3 << 4;
		this->field7_0x28 = (float)(-(uint)(uVar3 != 0) & (uint)&this->field6_0x24);
		return this;
		}
		
	*/
	return;
}

void FileResourceDescG::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall FileResourceDescG::Dispose(FileResourceDescG *this){
		SectionReaderAbstract *this_00;
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_G;
		TwinString::Dispose(&this->fname);
		this_00 = (this->parent).reader;
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_Abstract;
		if (this_00 != (SectionReaderAbstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		}
		return;
		}
		
	*/
	return;
}

void FileResourceDescG::Method4() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall FileResourceDescG::Method4(FileResourceDescG *this){
		PhysicalPool *this_00;
		VirtualPool *this_01;
		void *ptr;
		byte *pbVar1;
		if ((*(byte *)&this->field1_0x8 & 8) != 0) {
		ptr = (void *)this->field7_0x28;
		this_00 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(this_00,ptr);
		this->field7_0x28 = (float)&this->field6_0x24;
		this->field6_0x24 = 0xfffffffe;
		return;
		}
		pbVar1 = this->buffer;
		this_01 = VirtualPool::GetPool();
		VirtualPool::FreeMemory(this_01,pbVar1);
		this->buffer = (byte *)0x0;
		return;
		}
		
	*/
	return;
}

byte FileResourceDescG::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte __fastcall FileResourceDescG::IsA(FileResourceDescG *this){
		byte bVar1;
		uint uVar2;
		if (((this->field1_0x8 & 1) != 0) && ((this->field1_0x8 & 2) == 0)) {
		bVar1 = FileReaderHelper::FUN_002057a0(this->readerHelper);
		uVar2 = this->field1_0x8 ^ ((uint)(bVar1 == 0) << 1 ^ this->field1_0x8) & 2;
		this->field1_0x8 = uVar2;
		return (byte)(uVar2 >> 1) & 1;
		}
		return 1;
		}
		
	*/
	return 0;
}

void FileResourceDescG::Read(int offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall FileResourceDescG::Read(FileResourceDescG *this,int offset){
		SectionReaderAbstract *this_00;
		uint uVar1;
		PhysicalPool *pPVar2;
		VirtualPool *this_01;
		void *ptr;
		byte *pbVar3;
		uint *puVar4;
		if ((this->field1_0x8 & 0x200) != 0) {
		FileReaderHelper::CloseFile(this->readerHelper);
		return;
		}
		if ((this->field1_0x8 & 0x40) != 0) {
		FileReaderHelper::CloseFile(this->readerHelper);
		}
		this_00 = (this->parent).reader;
		if ((*(byte *)&this->field1_0x8 & 1) == 0) {
		if (this_00 != (SectionReaderAbstract *)0x0) {
		(*((this->parent).reader)->vtable->Stub)(this->buffer,this->size,offset);
		}
		}
		else {
		if (this_00 != (SectionReaderAbstract *)0x0) {
		(*this_00->vtable->Read)(this_00,this->buffer,this->size);
		}
		uVar1 = this->field1_0x8;
		if ((char)uVar1 < '\0') {
		if ((uVar1 & 8) != 0) {
		ptr = (void *)this->field7_0x28;
		pPVar2 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar2,ptr);
		return;
		}
		pbVar3 = this->buffer;
		this_01 = VirtualPool::GetPool();
		VirtualPool::FreeMemory(this_01,pbVar3);
		return;
		}
		if ((uVar1 & 8) != 0) {
		puVar4 = (uint *)this->field7_0x28;
		pPVar2 = PhysicalPool::GetPool();
		FUN_00159b20((int)pPVar2,puVar4);
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

void FileResourceDescG::Method1(FileReaderHelper* reader) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall FileResourceDescG::Method1(FileResourceDescG *this,FileReaderHelper *reader){
		bool bVar1;
		undefined4 uVar2;
		uint uVar3;
		PhysicalPool *pPVar4;
		byte *buffer;
		VirtualPool *pool;
		uint uVar5;
		int *piVar6;
		byte bVar7;
		FileReaderHelper **bufferOut;
		bool bVar8;
		uint *length;
		int alignment;
		FileReaderHelper *_reader;
		_reader = reader;
		uVar5 = this->field1_0x8;
		piVar6 = (int *)0x0;
		this->readerHelper = reader;
		if ((uVar5 & 0x20) == 0) {
		if ((uVar5 & 4) != 0) {
		bVar1 = FileReaderHelper::OpenFile(reader,(this->fname).value);
		this->offset = 0;
		this->field1_0x8 = this->field1_0x8 ^ ((uint)bVar1 ^ this->field1_0x8) & 1;
		this->size = _reader->field10_0x30;
		goto LAB_00206744;
		}
		if ((*(char *)((int)&reader->flags + 1) != '\0') || (reader->fileHandle1 == -1)) {
		bVar7 = FileReaderHelper::OpenFile(reader,(this->fname).value);
		goto LAB_00206735;
		}
		if ((this->fname).strLength != 0) {
		uVar2 = TwinString::FUN_00135e40(&this->fname,(reader->fname).value);
		if ((char)uVar2 != '\0') {
		uVar5 = uVar5 & 1 ^ uVar5;
		goto LAB_00206741;
		}
		}
		uVar5 = (uVar5 ^ 1) & 1 ^ uVar5;
		}
		else {
		if ((*(char *)((int)&reader->flags + 1) != '\0') || (reader->fileHandle1 == -1)) {
		this->field1_0x8 = uVar5 & 0xfffffffe;
		goto LAB_00206744;
		}
		piVar6 = (int *)FileResourceSupport::FUN_002104e0(DAT_004a7a84,(this->fname).value);
		bVar7 = piVar6 != (int *)0x0;
		LAB_00206735:uVar5 = this->field1_0x8 ^ ((uint)bVar7 ^ this->field1_0x8) & 1;
		}
		LAB_00206741:this->field1_0x8 = uVar5;
		LAB_00206744:uVar5 = this->field1_0x8;
		if (((uVar5 & 0x100) != 0) && (uVar3 = _reader->field10_0x30 - this->offset, uVar3 < this->size)){
		this->size = uVar3;
		}
		if ((uVar5 & 1) != 0) {
		if ((uVar5 & 0x200) != 0) {
		this->field1_0x8 = uVar5 | 2;
		return;
		}
		if ((uVar5 & 0x20) != 0) {
		this->offset = *piVar6;
		this->size = piVar6[1];
		}
		uVar3 = this->size;
		if ((uVar5 & 8) == 0) {
		alignment = 0x40;
		pool = VirtualPool::GetPool();
		buffer = (byte *)VirtualPool::AllocateMemoryAligned(pool,uVar3,alignment);
		}
		else {
		bVar8 = false;
		bVar1 = true;
		bufferOut = &reader;
		pPVar4 = PhysicalPool::GetPool();
		PhysicalPool::CreateBuffer(pPVar4,(int *)bufferOut,uVar3,bVar1,bVar8);
		*(void **)this->field7_0x28 = pPVar4->alignedStart;
		length = (uint *)this->field7_0x28;
		pPVar4 = PhysicalPool::GetPool();
		buffer = (byte *)PhysicalPool::Allocate(pPVar4,length);
		}
		this->buffer = buffer;
		bVar1 = FileReaderHelper::ReadFileToBuffer(_reader,this->offset,this->size,buffer,0,&reader);
		this->field1_0x8 = this->field1_0x8 ^ ((uint)bVar1 << 1 ^ this->field1_0x8) & 2;
		}
		return;
		}
		
	*/
	return;
}

void FileResourceDescG::Dispose_8(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	FileResourceDescG * __thiscall FileResourceDescG::Dispose(FileResourceDescG *this,byte param_1){
		SectionReaderAbstract *this_00;
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_G;
		TwinString::Dispose(&this->fname);
		this_00 = (this->parent).reader;
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_Abstract;
		if (this_00 != (SectionReaderAbstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		}
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void FileResourceDescG::Construct_9(uint param_1, uint param_2, int offset, int size) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	FileResourceDescG * __thiscall FileResourceDescG::Construct(FileResourceDescG *this,float param_1,uint param_2,int offset,int size){
		uint uVar1;
		int iVar2;
		iVar2 = 0;
		(this->parent).reader = (SectionReaderAbstract *)0x0;
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_G;
		(this->fname).value = (char *)0x0;
		(this->fname).strLength = 0;
		(this->fname).strSize = 0;
		this->size = size;
		this->offset = offset;
		this->buffer = (byte *)0x0;
		this->field6_0x24 = 0xffffffff;
		this->field7_0x28 = param_1;
		uVar1 = (param_2 & 3) << 4;
		this->field1_0x8 = uVar1 | 8;
		if (((param_2 & 4) != 0) && ((param_2 & 2) == 0)) {
		iVar2 = 1;
		}
		this->field1_0x8 = ((iVar2 << 2 | param_2 & 8) << 1 | param_2 & 0x20) << 3 | uVar1 | 8;
		return this;
		}
		
	*/
	return;
}

void FileResourceDescG::Construct_10(char* fname) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	FileResourceDescG * __thiscall FileResourceDescG::Construct(FileResourceDescG *this,char *fname){
		(this->parent).reader = (SectionReaderAbstract *)0x0;
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_G;
		TwinString::Set(&this->fname,fname);
		this->buffer = (byte *)0x0;
		this->size = 0;
		this->offset = 0;
		this->field6_0x24 = 0xffffffff;
		this->field7_0x28 = 0.0;
		this->field1_0x8 = 0x204;
		return this;
		}
		
	*/
	return;
}

void FileResourceDescG::Construct_11(uint reader, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	FileResourceDescG * __thiscall FileResourceDescG::Construct(FileResourceDescG *this,SectionReaderAbstract *reader,uint param_2){
		uint uVar1;
		int iVar2;
		uint uVar3;
		(this->parent).reader = reader;
		iVar2 = 0;
		uVar3 = param_2 & 8;
		uVar1 = (param_2 & 3) << 4;
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_G;
		(this->fname).value = (char *)0x0;
		(this->fname).strLength = 0;
		(this->fname).strSize = 0;
		this->buffer = (byte *)0x0;
		this->size = 0;
		this->offset = 0;
		this->field6_0x24 = 0xffffffff;
		this->field1_0x8 = uVar1 | uVar3 | 4;
		if (((param_2 & 4) != 0) && ((param_2 & 2) == 0)) {
		iVar2 = 1;
		}
		this->field1_0x8 = (iVar2 << 2 | uVar3) << 4 | uVar1 | uVar3 | 4;
		this->field7_0x28 = (float)(-(uint)(uVar3 != 0) & (uint)&this->field6_0x24);
		return this;
		}
		
	*/
	return;
}

void FileResourceDescG::Construct_12(char* fname, int offset, int size) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	FileResourceDescG * __thiscall FileResourceDescG::Construct(FileResourceDescG *this,char *fname,int offset,int size){
		(this->parent).reader = (SectionReaderAbstract *)0x0;
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_G;
		TwinString::Set(&this->fname,fname);
		this->buffer = (byte *)0x0;
		this->size = size;
		this->offset = offset;
		this->field6_0x24 = 0xffffffff;
		this->field7_0x28 = 0.0;
		this->field1_0x8 = 0x200;
		return this;
		}
		
	*/
	return;
}

