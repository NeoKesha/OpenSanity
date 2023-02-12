#include "headers/Known/LevelStructure/Readers/Known/SectionReaderTexture.h"

#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Texture/TwinsanityTexture.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Texture/SectionDataTexture.h"
void SectionReaderTexture::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderTexture::Read(SectionReaderTexture *this,void *buffer,size_t size,size_t offset){
		MemoryStream stream;
		MemoryStream::Construct(&stream,buffer,size,0,0x40);
		TwinsanityTexture::ReadFromStream(this->texture,&stream);
		size = (size_t)this->texture;
		SectionDataEntriesTexture::Add(&this->data->entries,(TwinsanityTexture **)&size,*(uint *)(size + 4));
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

void SectionReaderTexture::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderTexture * __thiscall SectionReaderTexture::Dispose(SectionReaderTexture *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

