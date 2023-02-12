#include "headers/Known/LevelStructure/Readers/Known/SectionReaderBlendSkin.h"

#include "headers/Known/LevelStructure/Data/GraphicsSectionData/BlendSkin/SectionDataBlendSkin.h"
#include "headers/Known/Graphics/Assets/TwinsanityBlendSkin.h"
void SectionReaderBlendSkin::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderBlendSkin::Read(SectionReaderBlendSkin *this,void *buffer,size_t size,size_t offset){
		MemoryStream stream;
		MemoryStream::Construct(&stream,buffer,size,0,0x40);
		(*((this->blendSkin->parent).vtable)->Read)(&this->blendSkin->parent,&stream);
		size = (size_t)this->blendSkin;
		SectionDataEntriesBlendSkin::Add(&this->data->entries,(TwinsanityBlendSkin **)&size,((TwinsanityGraphicsBase *)size)->id);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

void SectionReaderBlendSkin::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderBlendSkin * __thiscall SectionReaderBlendSkin::Dispose(SectionReaderBlendSkin *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

