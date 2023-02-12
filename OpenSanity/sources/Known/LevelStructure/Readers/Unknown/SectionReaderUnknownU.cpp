#include "headers/Known/LevelStructure/Readers/Unknown/SectionReaderUnknownU.h"

void SectionReaderUnknownU::Read() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionReaderUnknownU::Read(SectionReaderUnknownU *this){
		(**(code **)(*(int *)this->field1_0x4 + 4))(this->field_0x8,this->field_0x9);
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownU::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownU * __thiscall SectionReaderUnknownU::Dispose(SectionReaderUnknownU *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderUnknownU::Construct(byte param_1, byte param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownU * __thiscall SectionReaderUnknownU::Construct(SectionReaderUnknownU *this,undefined param_1,undefined param_2,undefined *param_3){
		this->field1_0x4 = param_3;
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_U;
		this->field_0x8 = param_1;
		this->field_0x9 = param_2;
		return this;
		}
		
	*/
	return;
}

