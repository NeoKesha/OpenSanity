#include "headers/Known/LevelStructure/Readers/Unknown/SectionReaderUnknownK.h"

void SectionReaderUnknownK::Read(void* param_1, size_t param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderUnknownK::Read(SectionReaderUnknownK *this,void *param_1,size_t param_2){
		MemoryStream stream;
		MemoryStream::Construct(&stream,param_1,param_2,0,1);
		FUN_001f4230(this->field4_0x10,&stream);
		FUN_001f50f0(this->field1_0x4,(SoundControllerUnkClass *)this->field4_0x10);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownK::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownK * __thiscall SectionReaderUnknownK::Dispose(SectionReaderUnknownK *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderUnknownK::Construct(uint param_1, uint param_2, uint param_3, uint param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderUnknownK::Construct(SectionReaderUnknownK *this,undefined *param_1,undefined *param_2,int param_3,int param_4){
		this->field1_0x4 = param_1;
		this->field2_0x8 = param_3;
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_K;
		this->field3_0xc = param_4;
		this->field4_0x10 = param_2;
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownK::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionReaderUnknownK::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

