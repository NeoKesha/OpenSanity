#include "headers/Known/LevelStructure/Readers/Unknown/SectionReaderUnknownT.h"

void SectionReaderUnknownT::Read() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionReaderUnknownT::Read(SectionReaderUnknownT *this){
		if ((undefined4 *)this->field1_0x4 != (undefined4 *)0x0) {
		(***(code ***)this->field1_0x4)(1);
		}
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownT::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownT * __thiscall SectionReaderUnknownT::Dispose(SectionReaderUnknownT *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderUnknownT::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownT * __thiscall SectionReaderUnknownT::Construct(SectionReaderUnknownT *this,undefined *param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_T;
		this->field1_0x4 = param_1;
		return this;
		}
		
	*/
	return;
}

