#include "headers/Known/LevelStructure/Readers/Known/SectionReaderInstanceAiPath.h"

#include "headers/Known/Collections/CollectionAiPathWrapper.h"
#include "headers/SortLater/InstanceSectionResources.h"
void SectionReaderInstanceAiPath::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderInstanceAiPath::Read(SectionReaderInstanceAiPath *this,void *buffer,size_t size,size_t offset){
		AiPath *element;
		CollectionAiPath *collection;
		MemoryStream local_14;
		MemoryStream::Construct(&local_14,buffer,size,0,1);
		element = (AiPath *)VirtualPool::AllocateMemory(10);
		if (element == (AiPath *)0x0) {
		element = (AiPath *)0x0;
		}
		else {
		AiPath::Construct(element,&local_14);
		}
		collection = this->collectionAiPath->collectionPtr;
		if (collection != (CollectionAiPath *)0x0) {
		collection = (CollectionAiPath *)collection->cnt;
		}
		InstanceSectionResources::AddAiPath(this->instanceResources,collection,(ushort)this->cnt,element);
		CollectionAiPathWrapper::Add(this->collectionAiPath,element);
		MemoryStream::Dispose(&local_14);
		return;
		}
		
	*/
	return;
}

void SectionReaderInstanceAiPath::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderInstanceAiPath * __thiscall SectionReaderInstanceAiPath::Dispose(SectionReaderInstanceAiPath *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

