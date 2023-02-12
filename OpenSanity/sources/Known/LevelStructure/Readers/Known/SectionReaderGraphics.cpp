#include "headers/Known/LevelStructure/Readers/Known/SectionReaderGraphics.h"

#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/SectionGraphics.h"
void SectionReaderGraphics::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderGraphics::Read(SectionReaderGraphics *this,void *buffer,size_t size,size_t offset){
		SectionGraphics::ReadInternal(this->section,this->sectionId,this->size);
		return;
		}
		
	*/
	return;
}

void SectionReaderGraphics::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderGraphics * __thiscall SectionReaderGraphics::Dispose(SectionReaderGraphics *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

