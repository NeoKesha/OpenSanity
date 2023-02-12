#include "headers/Known/LevelStructure/Readers/Known/SectionReaderRigidModel2.h"

#include "headers/Known/Graphics/Assets/TwinsanityRigidModel2.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/RigidModel/SectionDataRigidModel.h"
void SectionReaderRigidModel2::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderRigidModel2::Read(SectionReaderRigidModel2 *this,void *buffer,size_t size,size_t offset){
		MemoryStream stream;
		MemoryStream::Construct(&stream,buffer,size,0,0x40);
		(*(code *)this->unkPointer->vtable[1])(&stream);
		buffer = this->unkPointer;
		SectionDataEntriesRigidModel2::Add(&this->data->entries,(TwinsanityRigidModel2 **)&buffer,*(uint *)((int)buffer + 8));
		MemoryStream::Dispose((MemoryStream *)&stack0xffffffe8);
		return;
		}
		
	*/
	return;
}

void SectionReaderRigidModel2::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderRigidModel2 * __thiscall SectionReaderRigidModel2::Dispose(SectionReaderRigidModel2 *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

