#include "headers/Known/LevelStructure/Readers/Known/SectionReaderSkydome.h"

#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Skydome/SectionDataSkydome.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Skydome/TwinsanitySkydome.h"
void SectionReaderSkydome::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderSkydome::Read(SectionReaderSkydome *this,void *buffer,size_t size,size_t offset){
		MemoryStream stream;
		MemoryStream::Construct(&stream,buffer,size,0,0x40);
		TwinsanitySkydome::Read(this->skydome,&stream);
		size = (size_t)this->skydome;
		SectionDataEntriesSkydome::Add(&this->data->entries,(TwinsanitySkydome **)&size,*(uint *)(size + 4));
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

void SectionReaderSkydome::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderSkydome * __thiscall SectionReaderSkydome::Dispose(SectionReaderSkydome *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

