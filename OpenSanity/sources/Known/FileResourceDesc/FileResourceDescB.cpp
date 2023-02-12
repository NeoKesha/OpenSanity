#include "headers/Known/FileResourceDesc/FileResourceDescB.h"

#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"
void FileResourceDescB::Construct(SectionReaderAbstract* reader, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	FileResourceDescB * __thiscall FileResourceDescB::Construct(FileResourceDescB *this,SectionReaderAbstract *reader,undefined4 param_2,undefined4 param_3){
		(this->parent).reader = reader;
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_B;
		this->buffer = param_2;
		this->size = param_3;
		return this;
		}
		
	*/
	return;
}

void FileResourceDescB::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	FileResourceDescB * __thiscall FileResourceDescB::Dispose(FileResourceDescB *this,byte param_1){
		(this->parent).vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_B;
		FileResourceDescAbstract::Dispose(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void FileResourceDescB::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void FileResourceDescB::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

bool FileResourceDescB::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool FileResourceDescB::IsA(void){
		return true;
		}
		
	*/
	return false;
}

void FileResourceDescB::Read(uint offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall FileResourceDescB::Read(FileResourceDescB *this,undefined4 offset){
		SectionReaderAbstract *this_00;
		this_00 = (this->parent).reader;
		(*this_00->vtable->Read)(this_00,(void *)this->buffer,this->size);
		return;
		}
		
	*/
	return;
}

void FileResourceDescB::EmptyFunction_5() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void FileResourceDescB::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

