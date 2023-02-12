#include "headers/Known/LevelStructure/Readers/Known/SectionReaderRM.h"

#include "headers/Known/LevelStructure/Sections/RM/NodeSections/RM/SectionRM.h"
void SectionReaderRM::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderRM::Read(SectionReaderRM *this,void *buffer,size_t size,size_t offset){
		MemoryStream stream;
		MemoryStream::Construct(&stream,buffer,size,0,0x40);
		SectionRM::ReadRM(this->data,this->sectionId,this->unkPointer,&stream);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

void SectionReaderRM::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderRM * __thiscall SectionReaderRM::Dispose(SectionReaderRM *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

