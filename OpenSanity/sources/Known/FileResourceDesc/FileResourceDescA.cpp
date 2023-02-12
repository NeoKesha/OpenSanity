#include "headers/Known/FileResourceDesc/FileResourceDescA.h"

#include "headers/Unknown/AutoClasses/FileReaderHelper.h"
void FileResourceDescA::Construct(uint reader) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall FileResourceDescA::Construct(FileResourceDescA *this,SectionReaderAbstract *reader){
		(this->parent).reader = reader;
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_A;
		return;
		}
		
	*/
	return;
}

void FileResourceDescA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	FileResourceDescA * __thiscall FileResourceDescA::Dispose(FileResourceDescA *this,byte param_1){
		FileResourceDescAbstract::Dispose(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

bool FileResourceDescA::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool FileResourceDescA::IsA(void){
		return true;
		}
		
	*/
	return false;
}

void FileResourceDescA::Read(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall FileResourceDescA::Read(FileResourceDescA *this,undefined4 param_1){
		SectionReaderAbstract *this_00;
		this_00 = (this->parent).reader;
		if (this_00 != (SectionReaderAbstract *)0x0) {
		(*this_00->vtable->Read)(this_00,(void *)0x0,0xffffffff);
		}
		return;
		}
		
	*/
	return;
}

void FileResourceDescA::Method1(FileReaderHelper* helper) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall FileResourceDescA::Method1(FileResourceDescA *this,FileReaderHelper *helper){
		FileReaderHelper::CloseFile(helper);
		return;
		}
		
	*/
	return;
}

void FileResourceDescA::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void FileResourceDescA::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

