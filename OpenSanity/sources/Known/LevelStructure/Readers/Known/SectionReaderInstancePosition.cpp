#include "headers/Known/LevelStructure/Readers/Known/SectionReaderInstancePosition.h"

#include "headers/Known/Collections/CollectionPositionWrapper.h"
#include "headers/SortLater/InstanceSectionResources.h"
void SectionReaderInstancePosition::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderInstancePosition::Read(SectionReaderInstancePosition *this,void *buffer,size_t size,size_t offset){
		int size_00;
		Position *element;
		CollectionPosition *pCVar1;
		MemoryStream stream;
		InstanceSectionResources *instanceResources;
		MemoryStream::Construct(&stream,buffer,size,0,1);
		element = (Position *)VirtualPool::AllocateMemory(0x10);
		if (element == (Position *)0x0) {
		element = (Position *)0x0;
		}
		else {
		Position::Construct(element,&stream);
		}
		instanceResources = this->instanceResources;
		size_00 = this->cnt;
		if (instanceResources->collectionPosition == (CollectionPosition *)0x0) {
		pCVar1 = (CollectionPosition *)Allocate(instanceResources->chunkMeta,size_00);
		instanceResources->collectionPosition = pCVar1;
		if ((*(byte *)&instanceResources->flags & 2) != 0) {
		*(int *)&instanceResources->chunkMeta->field_0x30 = size_00;
		}
		}
		CollectionPosition::Add(instanceResources->collectionPosition,element);
		CollectionPositionWrapper::Add(this->collection,element);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

void SectionReaderInstancePosition::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderInstancePosition * __thiscall SectionReaderInstancePosition::Dispose(SectionReaderInstancePosition *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

