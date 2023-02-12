#include "headers/Known/LevelStructure/Readers/Unknown/SectionReaderUnknownD.h"

void SectionReaderUnknownD::Read() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionReaderUnknownD::Read(void){
		FileResourceSupport *this;
		this = DAT_004a7a84;
		FileResourceSupport::Dispose(DAT_004a7a84);
		FileResourceSupport::WriteRequestedFiles(this);
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownD::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownD * __thiscall SectionReaderUnknownD::Dispose(SectionReaderUnknownD *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderUnknownD::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionReaderUnknownD::Construct(SectionReaderUnknownD *this){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_D;
		return;
		}
		
	*/
	return;
}

