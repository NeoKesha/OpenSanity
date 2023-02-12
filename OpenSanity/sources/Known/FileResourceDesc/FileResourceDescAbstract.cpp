#include "headers/Known/FileResourceDesc/FileResourceDescAbstract.h"

#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"
void FileResourceDescAbstract::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall FileResourceDescAbstract::Dispose(FileResourceDescAbstract *this){
		SectionReaderAbstract *this_00;
		this->vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_Abstract;
		this_00 = this->reader;
		if (this_00 != (SectionReaderAbstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		}
		return;
		}
		
	*/
	return;
}

void FileResourceDescAbstract::Dispose_1(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	FileResourceDescAbstract * __thiscall FileResourceDescAbstract::Dispose(FileResourceDescAbstract *this,byte param_1){
		SectionReaderAbstract *this_00;
		this_00 = this->reader;
		this->vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_Abstract;
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

void FileResourceDescAbstract::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void FileResourceDescAbstract::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void FileResourceDescAbstract::Construct(uint reader) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall FileResourceDescAbstract::Construct(FileResourceDescAbstract *this,SectionReaderAbstract *reader){
		this->vtable = (FileResourceDescAbstract_VTable *)&FileResourceDesc_VT_Abstract;
		this->reader = reader;
		return;
		}
		
	*/
	return;
}

