#include "headers/Known/LevelStructure/Readers/Unknown/SectionReaderUnknownB.h"

void SectionReaderUnknownB::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderAbstract * __thiscall SectionReaderUnknownB::Dispose(SectionReaderUnknownB *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void SectionReaderUnknownB::Read() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionReaderUnknownB::Read(SectionReaderUnknownB *this){
		(**(code **)(*(int *)this->field1_0x4 + 0x1c))(this->field3_0xc,this->field2_0x8,this->field4_0x10);
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownB::Construct(uint param_1, uint param_2, uint param_3, uint param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderUnknownB::Construct(SectionReaderUnknownB *this,undefined *param_1,int param_2,int param_3,int param_4){
		this->field1_0x4 = param_1;
		this->field2_0x8 = param_3;
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_B;
		this->field3_0xc = param_2;
		this->field4_0x10 = param_4;
		return;
		}
		
	*/
	return;
}

