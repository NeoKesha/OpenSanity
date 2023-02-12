#include "headers/Known/LevelStructure/Readers/Known/SectionReaderModel.h"

#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Model/TwinsanityModel.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Model/SectionDataModel.h"
void SectionReaderModel::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderModel::Read(SectionReaderModel *this,void *buffer,size_t size,size_t offset){
		MemoryStream stream;
		MemoryStream::Construct(&stream,buffer,size,0,0x40);
		TwinsanityModel::ReadFromStream(this->model,&stream);
		size = (size_t)this->model;
		SectionDataEntriesModel::Add(&this->data->entries,(TwinsanityModel **)&size,*(uint *)(size + 4));
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

void SectionReaderModel::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderModel * __thiscall SectionReaderModel::Dispose(SectionReaderModel *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

