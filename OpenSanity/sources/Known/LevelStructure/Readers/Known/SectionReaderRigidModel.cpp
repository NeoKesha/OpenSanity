#include "headers/Known/LevelStructure/Readers/Known/SectionReaderRigidModel.h"

#include "headers/Known/Graphics/Assets/TwinsanityRigidModel.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/RigidModel/SectionDataRigidModel.h"
void SectionReaderRigidModel::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderRigidModel::Read(SectionReaderRigidModel *this,void *buffer,size_t size,size_t offset){
		MemoryStream stream;
		MemoryStream::Construct(&stream,buffer,size,0,0x40);
		(*(code *)this->rigidModel->vtable[1])(&stream);
		buffer = this->rigidModel;
		SectionDataEntriesRigidModel::Add((SectionDataEntriesRigidModel *)&this->data->entries,(TwinsanityRigidModel **)&buffer,*(uint *)((int)buffer + 8));
		MemoryStream::Dispose((MemoryStream *)&stack0xffffffe8);
		return;
		}
		
	*/
	return;
}

void SectionReaderRigidModel::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderRigidModel * __thiscall SectionReaderRigidModel::Dispose(SectionReaderRigidModel *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

