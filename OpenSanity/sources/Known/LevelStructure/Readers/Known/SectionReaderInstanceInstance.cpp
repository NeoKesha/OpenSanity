#include "headers/Known/LevelStructure/Readers/Known/SectionReaderInstanceInstance.h"

#include "headers/SortLater/InstanceSectionResources.h"
#include "headers/Known/Collections/CollectionInstanceWrapper.h"
void SectionReaderInstanceInstance::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderInstanceInstance::Read(SectionReaderInstanceInstance *this,void *buffer,size_t size,size_t offset){
		Instance *element;
		CollectionInstance *collection;
		MemoryStream stream;
		MemoryStream::Construct(&stream,buffer,size,0,1);
		element = (Instance *)VirtualPool::AllocateMemory(0x60);
		if (element == (Instance *)0x0) {
		element = (Instance *)0x0;
		}
		else {
		element = Instance::Construct(element,&stream);
		}
		collection = this->collectionInstance->collectionPtr;
		if (collection != (CollectionInstance *)0x0) {
		collection = (CollectionInstance *)collection->cnt;
		}
		InstanceSectionResources::AddInstance(this->instanceResources,collection,this->number,element);
		CollectionInstanceWrapper::Add(this->collectionInstance,element);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

void SectionReaderInstanceInstance::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderInstanceInstance * __thiscall SectionReaderInstanceInstance::Dispose(SectionReaderInstanceInstance *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

