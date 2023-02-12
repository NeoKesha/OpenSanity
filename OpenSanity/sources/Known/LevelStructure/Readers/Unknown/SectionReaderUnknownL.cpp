#include "headers/Known/LevelStructure/Readers/Unknown/SectionReaderUnknownL.h"

#include "headers/Known/LevelStructure/Sections/RM/NodeSections/RM/SectionRM.h"
void SectionReaderUnknownL::Read(byte param_2, uint param_3, uint param_4, uint param_5) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionReaderUnknownL::Read(SectionReaderUnknownL *this,undefined param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5){
		(*((this->section->parent).vtable)->UnkMethod3)(&this->section->parent);
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownL::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownL * __thiscall SectionReaderUnknownL::Dispose(SectionReaderUnknownL *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderUnknownL::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownL * __thiscall SectionReaderUnknownL::Construct(SectionReaderUnknownL *this,SectionRM *param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_L;
		this->section = param_1;
		return this;
		}
		
	*/
	return;
}

