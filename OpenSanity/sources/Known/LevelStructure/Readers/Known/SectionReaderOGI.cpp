#include "headers/Known/LevelStructure/Readers/Known/SectionReaderOGI.h"

#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Code/OGI/SectionOGI.h"
void SectionReaderOGI::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderOGI * __thiscall SectionReaderOGI::Dispose(SectionReaderOGI *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderOGI::Read(void* param_1, size_t param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderOGI::Read(SectionReaderOGI *this,void *param_1,size_t param_2){
		uint uVar1;
		OGI *element;
		MemoryStream stream;
		ushort index;
		MemoryStream::Construct(&stream,param_1,param_2,0,0x40);
		index = *(ushort *)&this->cnt;
		if ((*(byte *)&this->cnt & 1) == 0) {
		element = (OGI *)VirtualPool::AllocateMemory(0x90);
		if (element != (OGI *)0x0) {
		element = OGI::Construct(element,&stream);
		goto LAB_001bfb73;
		}
		}
		else {
		element = (OGI *)VirtualPool::AllocateMemory(0x90);
		if (element != (OGI *)0x0) {
		element = OGI::Construct(element,&stream);
		goto LAB_001bfb73;
		}
		}
		element = (OGI *)0x0;
		LAB_001bfb73:uVar1 = this->cnt;
		element->index = uVar1;
		FUN_001bfbe0(this->field3_0xc,(int)this->field2_0x8,uVar1 & 0xffff0000 | (uint)index,element,(int *)this->data);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

