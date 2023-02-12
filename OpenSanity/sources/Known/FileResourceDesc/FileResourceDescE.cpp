#include "headers/Known/FileResourceDesc/FileResourceDescE.h"

#include "headers/Unknown/AutoClasses/FileReaderHelper.h"
void FileResourceDescE::Construct(void* element, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	FileResourceDescE * __thiscall FileResourceDescE::Construct(FileResourceDescE *this,void *element,undefined4 param_2,undefined4 param_3){
		this->element = element;
		(this->parent).reader = (SectionReaderAbstract *)0x0;
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_E;
		(this->fname).value = (char *)0x0;
		(this->fname).strLength = 0;
		(this->fname).strSize = 0;
		this->field4_0x1c = param_2;
		this->field5_0x20 = param_3;
		this->field6_0x24 = (FileReaderHelper *)0x0;
		this->field1_0x8 = 0;
		return this;
		}
		
	*/
	return;
}

bool FileResourceDescE::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall FileResourceDescE::IsA(FileResourceDescE *this){
		byte bVar1;
		uint uVar2;
		if (((this->field1_0x8 & 1) != 0) && ((this->field1_0x8 & 2) == 0)) {
		bVar1 = FileReaderHelper::FUN_002057a0(this->field6_0x24);
		uVar2 = this->field1_0x8 ^ ((uint)(bVar1 == 0) << 1 ^ this->field1_0x8) & 2;
		this->field1_0x8 = uVar2;
		return (bool)((byte)(uVar2 >> 1) & 1);
		}
		return true;
		}
		
	*/
	return false;
}

void FileResourceDescE::Method1(FileReaderHelper* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall FileResourceDescE::Method1(FileResourceDescE *this,FileReaderHelper *param_1){
		uint uVar1;
		bool bVar2;
		undefined4 uVar3;
		uVar1 = this->field1_0x8;
		this->field6_0x24 = param_1;
		if ((uVar1 & 4) == 0) {
		if ((*(char *)((int)&param_1->flags + 1) == '\0') && (param_1->fileHandle1 != -1)) {
		if ((this->fname).strLength != 0) {
		uVar3 = TwinString::FUN_00135e40(&this->fname,(param_1->fname).value);
		if ((char)uVar3 != '\0') {
		this->field1_0x8 = uVar1 & 1 ^ uVar1;
		goto LAB_002068ad;
		}
		}
		this->field1_0x8 = (uVar1 ^ 1) & 1 ^ uVar1;
		}
		else {
		bVar2 = FileReaderHelper::OpenFile(param_1,(this->fname).value);
		this->field1_0x8 = this->field1_0x8 ^ ((uint)bVar2 ^ this->field1_0x8) & 1;
		}
		}
		else {
		bVar2 = FileReaderHelper::OpenFile(param_1,(this->fname).value);
		this->field4_0x1c = 0;
		this->field1_0x8 = this->field1_0x8 ^ ((uint)bVar2 ^ this->field1_0x8) & 1;
		this->field5_0x20 = param_1->field10_0x30;
		}
		LAB_002068ad:if ((*(byte *)&this->field1_0x8 & 1) != 0) {
		param_1->flags = param_1->flags | 0x10000;
		}
		return;
		}
		
	*/
	return;
}

void FileResourceDescE::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	FileResourceDescE * __thiscall FileResourceDescE::Dispose(FileResourceDescE *this,byte param_1){
		TwinString::Dispose(&this->fname);
		FileResourceDescAbstract::Dispose(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void FileResourceDescE::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void FileResourceDescE::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void FileResourceDescE::Read() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall FileResourceDescE::Read(FileResourceDescE *this){
		uint *puVar1;
		puVar1 = (uint *)((int)this->element + 8);
		*puVar1 = *puVar1 | 1;
		if ((*(byte *)&this->field1_0x8 & 8) != 0) {
		FileReaderHelper::CloseFile(this->field6_0x24);
		}
		return;
		}
		
	*/
	return;
}

void FileResourceDescE::Construct_6(uint param_1, char* str) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	FileResourceDescE * __thiscall FileResourceDescE::Construct(FileResourceDescE *this,void *param_1,char *str){
		(this->parent).reader = (SectionReaderAbstract *)0x0;
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_E;
		this->element = param_1;
		TwinString::Set(&this->fname,str);
		this->field6_0x24 = (FileReaderHelper *)0x0;
		this->field1_0x8 = 0;
		this->field1_0x8 = this->field1_0x8 | 0xc;
		return this;
		}
		
	*/
	return;
}

void FileResourceDescE::Construct_7(uint param_1, char* str, uint param_3, uint param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	FileResourceDescE * __thiscall FileResourceDescE::Construct(FileResourceDescE *this,void *param_1,char *str,undefined4 param_3,undefined4 param_4){
		(this->parent).reader = (SectionReaderAbstract *)0x0;
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_E;
		this->element = param_1;
		TwinString::Set(&this->fname,str);
		this->field5_0x20 = param_4;
		this->field4_0x1c = param_3;
		this->field6_0x24 = (FileReaderHelper *)0x0;
		this->field1_0x8 = 0;
		this->field1_0x8 = this->field1_0x8 | 8;
		return this;
		}
		
	*/
	return;
}

