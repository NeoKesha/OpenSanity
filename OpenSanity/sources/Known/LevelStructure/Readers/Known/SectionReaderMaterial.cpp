#include "headers/Known/LevelStructure/Readers/Known/SectionReaderMaterial.h"

#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Material/SectionDataMaterial.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Material/TwinsanityMaterial.h"
void SectionReaderMaterial::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderMaterial::Read(SectionReaderMaterial *this,void *buffer,size_t size,size_t offset){
		MemoryStream stream;
		MemoryStream::Construct(&stream,buffer,size,0,0x40);
		TwinsanityMaterial::LoadFromStream(this->material,&stream);
		size = (size_t)this->material;
		SectionDataEntriesMaterial::Add(&this->data->entries,(TwinsanityMaterial **)&size,*(uint *)(size + 4));
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

void SectionReaderMaterial::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderMaterial * __thiscall SectionReaderMaterial::Dispose(SectionReaderMaterial *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

