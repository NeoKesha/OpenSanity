#include "headers/Known/LevelStructure/Readers/Unknown/SectionReaderUnknownV.h"

void SectionReaderUnknownV::Read() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionReaderUnknownV::Read(SectionReaderUnknownV *this){
		(**(code **)(*(int *)this->field2_0x8 + 0x70))(this->field1_0x4);
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownV::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownV * __thiscall SectionReaderUnknownV::Dispose(SectionReaderUnknownV *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderUnknownV::Construct(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownV * __thiscall SectionReaderUnknownV::Construct(SectionReaderUnknownV *this,undefined *param_1,undefined *param_2){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_V;
		this->field1_0x4 = param_1;
		this->field2_0x8 = param_2;
		return this;
		}
		
	*/
	return;
}

