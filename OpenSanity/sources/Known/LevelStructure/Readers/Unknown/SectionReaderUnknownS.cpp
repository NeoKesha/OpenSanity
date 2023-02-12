#include "headers/Known/LevelStructure/Readers/Unknown/SectionReaderUnknownS.h"

#include "headers/Known/LevelStructure/Sections/RM/SectionSM.h"
void SectionReaderUnknownS::Read() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionReaderUnknownS::Read(SectionReaderUnknownS *this){
		SectionSM *this_00;
		this_00 = this->section;
		(*((this_00->parent).vtable)->InitPools)(&this_00->parent);
		SectionGraphics::InitPools(&this_00->graphicsSection);
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownS::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownS * __thiscall SectionReaderUnknownS::Dispose(SectionReaderUnknownS *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderUnknownS::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownS * __thiscall SectionReaderUnknownS::Construct(SectionReaderUnknownS *this,SectionSM *param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_S;
		this->section = param_1;
		return this;
		}
		
	*/
	return;
}

