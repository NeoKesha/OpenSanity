#include "headers/Known/LevelStructure/Readers/Known/SectionReaderCode.h"

#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Code/SectionCode.h"
void SectionReaderCode::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderCode::Read(SectionReaderCode *this,void *buffer,size_t size,size_t offset){
		SectionCode::ReadInternal(this->section,this->sectionId,this->unkPointer);
		return;
		}
		
	*/
	return;
}

void SectionReaderCode::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderCode * __thiscall SectionReaderCode::Dispose(SectionReaderCode *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderCode::Construct(uint param_1, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderCode::Construct(SectionReaderCode *this,int param_1,undefined *param_2,SectionCode *param_3){
		this->sectionId = param_1;
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Code;
		this->unkPointer = param_2;
		this->section = param_3;
		return;
		}
		
	*/
	return;
}

