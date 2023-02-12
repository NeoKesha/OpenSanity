#include "headers/Known/LevelStructure/Readers/Known/SectionReaderSfx.h"

#include "headers/Known/LevelStructure/Data/CodeSectionData/Sfx/SfxData/SectionDataSfx.h"
void SectionReaderSfx::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderSfx * __thiscall SectionReaderSfx::Dispose(SectionReaderSfx *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderSfx::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderSfx::Read(SectionReaderSfx *this,void *buffer,size_t size,size_t offset){
		ushort uVar1;
		Sfx *memptr;
		Sfx *element;
		Sfx *this_00;
		MemoryStream stream;
		uint cnt;
		MemoryStream::Construct(&stream,buffer,size,0,0x40);
		uVar1 = *(ushort *)&this->cnt;
		if ((*(byte *)&this->cnt & 1) == 0) {
		memptr = (Sfx *)VirtualPool::AllocateMemory(100);
		if (memptr != (Sfx *)0x0) {
		element = (Sfx *)Sfx::Construct(memptr,&stream);
		goto LAB_000c4f10;
		}
		}
		else {
		this_00 = (Sfx *)VirtualPool::AllocateMemory(100);
		if (this_00 != (Sfx *)0x0) {
		element = (Sfx *)Sfx::Construct(this_00,&stream);
		goto LAB_000c4f10;
		}
		}
		element = (Sfx *)0x0;
		LAB_000c4f10:cnt = this->cnt;
		element->index = cnt;
		SectionDataSfx::Add(this->sounds,(int)this->field2_0x8,cnt & 0xffff0000 | (uint)uVar1,element,this->ptr);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

