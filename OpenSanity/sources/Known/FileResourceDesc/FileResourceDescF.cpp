#include "headers/Known/FileResourceDesc/FileResourceDescF.h"

#include "headers/Known/TwinString.h"
#include "headers/Unknown/AutoClasses/FileReaderHelper.h"
void FileResourceDescF::Construct(TwinString* dataName, uint param_2, bool flag1, bool flag2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	FileResourceDescF * __thiscall FileResourceDescF::Construct(FileResourceDescF *this,TwinString *dataName,SectionReaderAbstract *param_2,bool flag1,bool flag2){
		(this->parent).reader = param_2;
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_F;
		(this->fname).value = (char *)0x0;
		(this->fname).strLength = 0;
		(this->fname).strSize = 0;
		TwinString::Copy(&this->fname,dataName->value);
		this->field_0x14 = 0;
		this->flag1 = flag1;
		this->flag2 = flag2;
		return this;
		}
		
	*/
	return;
}

void FileResourceDescF::Method1(FileReaderHelper* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall FileResourceDescF::Method1(FileResourceDescF *this,FileReaderHelper *param_1){
		bool bVar1;
		int iVar2;
		if (this->flag1 == false) {
		bVar1 = FileReaderHelper::OpenFile(param_1,(this->fname).value);
		this->field_0x14 = bVar1;
		}
		else if ((*(char *)((int)&param_1->flags + 1) == '\0') && (param_1->fileHandle1 != -1)) {
		iVar2 = FileResourceSupport::FUN_002104e0(DAT_004a7a84,(this->fname).value);
		this->field_0x14 = iVar2 != 0;
		return;
		}
		return;
		}
		
	*/
	return;
}

void FileResourceDescF::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	FileResourceDescF * __thiscall FileResourceDescF::Dispose(FileResourceDescF *this,byte param_1){
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_F;
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

bool FileResourceDescF::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool FileResourceDescF::IsA(void){
		return true;
		}
		
	*/
	return false;
}

void FileResourceDescF::Read(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall FileResourceDescF::Read(FileResourceDescF *this,undefined4 param_1){
		SectionReaderAbstract *this_00;
		SectionReaderAbstract_VTable *pSVar1;
		if ((this->parent).reader != (SectionReaderAbstract *)0x0) {
		this_00 = (this->parent).reader;
		pSVar1 = this_00->vtable;
		if (this->field_0x14 != '\0') {
		(*pSVar1->Read)(this_00,(void *)0x0,0);
		return;
		}
		(*pSVar1->Stub)(0,0,param_1);
		}
		return;
		}
		
	*/
	return;
}

void FileResourceDescF::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void FileResourceDescF::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

