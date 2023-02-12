#include "headers/Known/LevelStructure/Readers/Unknown/SectionReaderUnknownJ.h"

#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/SectionGraphics.h"
void SectionReaderUnknownJ::Read(SectionReaderUnknownJ* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionReaderUnknownJ::Read(SectionReaderUnknownJ *param_1){
		SectionGraphics *this;
		this = param_1->section;
		if (this != (SectionGraphics *)0x0) {
		SectionGraphics::DisposeData(this);
		VirtualPool::FreeMemory(this);
		}
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownJ::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownJ * __thiscall SectionReaderUnknownJ::Dispose(SectionReaderUnknownJ *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderUnknownJ::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownJ * __thiscall SectionReaderUnknownJ::Construct(SectionReaderUnknownJ *this,SectionGraphics *param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_J;
		this->section = param_1;
		return this;
		}
		
	*/
	return;
}

