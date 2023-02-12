#include "headers/Known/LevelStructure/Readers/Unknown/SectionReaderUnknownM.h"

void SectionReaderUnknownM::Read() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionReaderUnknownM::Read(SectionReaderUnknownM *this){
		FUN_001b7e20((int)this->field2_0x8,(int)this->field1_0x4);
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownM::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownM * __thiscall SectionReaderUnknownM::Dispose(SectionReaderUnknownM *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderUnknownM::Construct(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownM * __thiscall SectionReaderUnknownM::Construct(SectionReaderUnknownM *this,undefined *param_1,undefined *param_2){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_M;
		this->field1_0x4 = param_1;
		this->field2_0x8 = param_2;
		return this;
		}
		
	*/
	return;
}

