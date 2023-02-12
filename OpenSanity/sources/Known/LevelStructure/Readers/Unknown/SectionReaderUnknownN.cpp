#include "headers/Known/LevelStructure/Readers/Unknown/SectionReaderUnknownN.h"

#include "headers/Known/LevelStructure/Sections/RM/NodeSections/RM/SectionRM.h"
void SectionReaderUnknownN::Read(void* param_1, size_t param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderUnknownN::Read(SectionReaderUnknownN *this,void *param_1,size_t param_2){
		MemoryStream stream;
		MemoryStream::Construct(&stream,param_1,param_2,0,0x40);
		SectionRM::FUN_001b89a0(this->section,(char)this->field1_0x4,&stream);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownN::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownN * __thiscall SectionReaderUnknownN::Dispose(SectionReaderUnknownN *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderUnknownN::Construct(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownN * __thiscall SectionReaderUnknownN::Construct(SectionReaderUnknownN *this,Sfx *param_1,SectionRM *param_2){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_N;
		this->field1_0x4 = param_1;
		this->section = param_2;
		return this;
		}
		
	*/
	return;
}

