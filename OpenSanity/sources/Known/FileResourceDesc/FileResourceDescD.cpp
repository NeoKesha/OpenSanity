#include "headers/Known/FileResourceDesc/FileResourceDescD.h"

#include "headers/Unknown/AutoClasses/FileReaderHelper.h"
void FileResourceDescD::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	FileResourceDescD * __thiscall FileResourceDescD::Dispose(FileResourceDescD *this,byte param_1){
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_D;
		FileResourceDescAbstract::Dispose(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

bool FileResourceDescD::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool FileResourceDescD::IsA(void){
		return true;
		}
		
	*/
	return false;
}

void FileResourceDescD::Read(uint offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall FileResourceDescD::Read(FileResourceDescD *this,uint offset){
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

void FileResourceDescD::Method1(FileReaderHelper* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall FileResourceDescD::Method1(FileResourceDescD *this,FileReaderHelper *param_1){
		FileReaderHelper::ReadFileToBuffer(param_1,*(int *)&this->field_0x8,this->size,(byte *)this->buffer,1,&param_1);
		return;
		}
		
	*/
	return;
}

void FileResourceDescD::Construct(uint param_1, uint param_2, uint param_3, uint param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall FileResourceDescD::Construct(FileResourceDescD *this,undefined4 param_1,uint param_2,void *param_3,SectionReaderAbstract *param_4){
		(this->parent).reader = param_4;
		*(undefined4 *)&this->field_0x8 = param_1;
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_D;
		this->size = param_2;
		this->buffer = param_3;
		return;
		}
		
	*/
	return;
}

