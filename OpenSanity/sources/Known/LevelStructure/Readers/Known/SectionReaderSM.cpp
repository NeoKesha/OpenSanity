#include "headers/Known/LevelStructure/Readers/Known/SectionReaderSM.h"

#include "headers/Known/LevelStructure/Sections/RM/SectionAbstract/SectionAbstract.h"
void SectionReaderSM::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderSM * __thiscall SectionReaderSM::Dispose(SectionReaderSM *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderSM::Read(void* buffer, size_t size) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderSM::Read(SectionReaderSM *this,void *buffer,size_t size){
		FUN_0020ecc0(buffer,this->section);
		return;
		}
		
	*/
	return;
}

void SectionReaderSM::Construct(byte param_1, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderSM::Construct(SectionReaderSM *this,bool param_1,int param_2,SectionAbstract *param_3){
		this->section = param_3;
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_SM;
		this->size = param_2;
		this->flag = param_1;
		return;
		}
		
	*/
	return;
}

