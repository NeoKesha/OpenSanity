#include "headers/Known/LevelStructure/Readers/Unknown/SectionReaderUnknownO.h"

#include "headers/Known/LevelStructure/Sections/RM/NodeSections/RM/SectionRM.h"
void SectionReaderUnknownO::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownO * __thiscall SectionReaderUnknownO::Dispose(SectionReaderUnknownO *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderUnknownO::Read() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionReaderUnknownO::Read(SectionReaderUnknownO *this){
		SectionRM *this_00;
		this_00 = this->section;
		(*((this_00->parent).vtable)->InitPools)(&this_00->parent);
		SectionGraphics::InitPools(&this_00->graphicsSection);
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownO::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownO * __thiscall SectionReaderUnknownO::Construct(SectionReaderUnknownO *this,SectionRM *param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_O;
		this->section = param_1;
		return this;
		}
		
	*/
	return;
}

