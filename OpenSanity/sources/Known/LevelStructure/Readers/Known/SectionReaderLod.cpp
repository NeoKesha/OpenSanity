#include "headers/Known/LevelStructure/Readers/Known/SectionReaderLod.h"

#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Lod/TwinsanityLod.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Lod/SectionDataLod.h"
void SectionReaderLod::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderLod::Read(SectionReaderLod *this,void *buffer,size_t size,size_t offset){
		MemoryStream stream;
		MemoryStream::Construct(&stream,buffer,size,0,0x40);
		TwinsanityLod::Read(this->lod,&stream);
		size = (size_t)this->lod;
		SectionDataEntriesLod::Add(&this->data->entries,(TwinsanityLod **)&size,*(uint *)(size + 4));
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

void SectionReaderLod::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderLod * __thiscall SectionReaderLod::Dispose(SectionReaderLod *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

