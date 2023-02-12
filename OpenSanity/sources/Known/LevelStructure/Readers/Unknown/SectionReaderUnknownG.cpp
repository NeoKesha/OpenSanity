#include "headers/Known/LevelStructure/Readers/Unknown/SectionReaderUnknownG.h"

void SectionReaderUnknownG::Read(void* param_1, size_t param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderUnknownG::Read(SectionReaderUnknownG *this,void *param_1,size_t param_2){
		MemoryStream local_14;
		MemoryStream::Construct(&local_14,param_1,param_2,0,0x40);
		FUN_001fdda0((int)this->field1_0x4,(int)&local_14);
		MemoryStream::Dispose(&local_14);
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownG::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall SectionReaderUnknownG::Dispose(SectionReaderUnknownG *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void SectionReaderUnknownG::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownG * __thiscall SectionReaderUnknownG::Construct(SectionReaderUnknownG *this,undefined *param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_G;
		this->field1_0x4 = param_1;
		return this;
		}
		
	*/
	return;
}

