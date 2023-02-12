#include "headers/Known/LevelStructure/Readers/Known/SectionReaderInstanceTemplate.h"

#include "headers/Known/Collections/CollectionInstanceTemplateWrapper.h"
#include "headers/SortLater/InstanceSectionResources.h"
void SectionReaderInstanceTemplate::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderInstanceTemplate::Read(SectionReaderInstanceTemplate *this,void *buffer,size_t size,size_t offset){
		InstanceTemplate *element;
		MemoryStream stream;
		MemoryStream::Construct(&stream,buffer,size,0,1);
		element = (InstanceTemplate *)VirtualPool::AllocateMemory(0x48);
		if (element == (InstanceTemplate *)0x0) {
		element = (InstanceTemplate *)0x0;
		}
		else {
		element = InstanceTemplate::Construct(element,&stream);
		}
		CollectionInstanceTemplate::Add(&(ResourceManager->parent).collectionInstanceTemplate,element);
		CollectionInstanceTemplateWrapper::AddElement(this->collectionInstanceTemplate,element);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

void SectionReaderInstanceTemplate::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderInstanceTemplate * __thiscall SectionReaderInstanceTemplate::Dispose(SectionReaderInstanceTemplate *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

