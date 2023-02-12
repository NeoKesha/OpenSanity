#include "headers/Known/LevelStructure/Readers/Unknown/SectionReaderUnknownQ.h"

#include "headers/Known/LevelStructure/Sections/RM/SectionSM.h"
void SectionReaderUnknownQ::Read(byte param_2, uint param_3, uint param_4, uint param_5) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionReaderUnknownQ::Read(SectionReaderUnknownQ *this,undefined param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5){
		(*((this->section->parent).vtable)->UnkMethod3)(&this->section->parent);
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownQ::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownQ * __thiscall SectionReaderUnknownQ::Dispose(SectionReaderUnknownQ *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderUnknownQ::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownQ * __thiscall SectionReaderUnknownQ::Construct(SectionReaderUnknownQ *this,SectionSM *param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_Q;
		this->section = param_1;
		return this;
		}
		
	*/
	return;
}

