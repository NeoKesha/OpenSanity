#include "headers/Known/LevelStructure/Readers/Known/SectionReaderSkin.h"

#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Skin/SectionDataSkin.h"
#include "headers/Known/Graphics/Assets/TwinsanitySkin.h"
void SectionReaderSkin::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderSkin::Read(SectionReaderSkin *this,void *buffer,size_t size,size_t offset){
		MemoryStream stream;
		MemoryStream::Construct(&stream,buffer,size,0,0x40);
		(*(code *)this->skin->vtable[1])(&stream);
		buffer = this->skin;
		SectionDataEntriesSkin::Add(&this->data->entries,(TwinsanitySkin **)&buffer,*(uint *)((int)buffer + 8));
		MemoryStream::Dispose((MemoryStream *)&stack0xffffffe8);
		return;
		}
		
	*/
	return;
}

void SectionReaderSkin::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderSkin * __thiscall SectionReaderSkin::Dispose(SectionReaderSkin *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

