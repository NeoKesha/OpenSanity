#include "headers/Known/LevelStructure/Readers/Known/SectionReaderInstance.h"

#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Instance/SectionInstance.h"
void SectionReaderInstance::Read() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderInstance::Read(SectionReaderInstance *this){
		SectionInstance::ReadInternal(this->data,this->sectionId,this->sectionOffset);
		return;
		}
		
	*/
	return;
}

void SectionReaderInstance::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderInstance * __thiscall SectionReaderInstance::Dispose(SectionReaderInstance *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

