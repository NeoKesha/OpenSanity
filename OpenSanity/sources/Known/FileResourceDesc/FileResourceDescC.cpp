#include "headers/Known/FileResourceDesc/FileResourceDescC.h"

#include "headers/Unknown/AutoClasses/FileReaderHelper.h"
void FileResourceDescC::Method1(FileReaderHelper* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall FileResourceDescC::Method1(FileResourceDescC *this,FileReaderHelper *param_1){
		FileReaderHelper *pFVar1;
		bool result;
		pFVar1 = param_1;
		if (((this->field_0x20 != '\0') && (*(char *)((int)&param_1->flags + 1) == '\0')) &&(param_1->fileHandle1 != -1)) {
		if (*(int **)(DAT_004a7a84 + 0xc) == (int *)0x0) {
		return;
		}
		this->offset = this->offset + **(int **)(DAT_004a7a84 + 0xc);
		}
		result = FileReaderHelper::ReadFileToBuffer(param_1,this->offset,this->size,this->buffer,0,&param_1);
		if (result == false) {
		this->field12_0x1c = pFVar1;
		return;
		}
		this->field_0x18 = 1;
		return;
		}
		
	*/
	return;
}

void FileResourceDescC::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall FileResourceDescC::Dispose(FileResourceDescC *this,byte param_1){
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_C;
		FileResourceDescAbstract::Dispose(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void FileResourceDescC::Read(uint offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall FileResourceDescC::Read(FileResourceDescC *this,uint offset){
		SectionReaderAbstract *this_00;
		this_00 = (this->parent).reader;
		if (this_00 != (SectionReaderAbstract *)0x0) {
		(*this_00->vtable->Read)(this_00,this->buffer,this->size);
		}
		return;
		}
		
	*/
	return;
}

void FileResourceDescC::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined __fastcall FileResourceDescC::IsA(FileResourceDescC *this){
		byte bVar1;
		if (this->field_0x18 == '\0') {
		bVar1 = FileReaderHelper::FUN_002057a0(this->field12_0x1c);
		if (bVar1 != 0) {
		return 0;
		}
		}
		return 1;
		}
		
	*/
	return;
}

void FileResourceDescC::Construct(uint param_1, uint param_2, uint param_3, uint reader, byte param_5) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall FileResourceDescC::Construct(FileResourceDescC *this,int param_1,uint param_2,byte *param_3,SectionReaderAbstract *reader,undefined param_5){
		(this->parent).reader = reader;
		this->size = param_2;
		this->offset = param_1;
		this->field_0x18 = 0;
		this->field12_0x1c = (FileReaderHelper *)0x0;
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_C;
		this->buffer = param_3;
		this->field_0x20 = param_5;
		return;
		}
		
	*/
	return;
}

