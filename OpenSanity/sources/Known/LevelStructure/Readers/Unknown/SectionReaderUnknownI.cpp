#include "headers/Known/LevelStructure/Readers/Unknown/SectionReaderUnknownI.h"

void SectionReaderUnknownI::Reader(void* param_1, size_t param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderUnknownI::Reader(SectionReaderUnknownI *this,void *param_1,size_t param_2){
		MemoryStream stream;
		MemoryStream::Construct(&stream,param_1,param_2,0,0x40);
		OGI::Read(this->field1_0x4,&stream);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownI::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownI * __thiscall SectionReaderUnknownI::Dispose(SectionReaderUnknownI *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderUnknownI::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownI * __thiscall SectionReaderUnknownI::Construct(SectionReaderUnknownI *this,OGI *param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_I;
		this->field1_0x4 = param_1;
		return this;
		}
		
	*/
	return;
}

