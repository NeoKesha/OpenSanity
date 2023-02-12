#include "headers/Known/LevelStructure/Readers/Known/SectionReaderInstanceTrigger.h"

#include "headers/Known/Collections/CollectionTriggerWrapper.h"
#include "headers/SortLater/InstanceSectionResources.h"
void SectionReaderInstanceTrigger::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderInstanceTrigger * __thiscall SectionReaderInstanceTrigger::Dispose(SectionReaderInstanceTrigger *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderInstanceTrigger::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderInstanceTrigger::Read(SectionReaderInstanceTrigger *this,void *buffer,size_t size,size_t offset){
		Trigger *element;
		CollectionTrigger *collection;
		MemoryStream stream;
		MemoryStream::Construct(&stream,buffer,size,0,1);
		element = (Trigger *)VirtualPool::AllocateMemory(0x70);
		if (element == (Trigger *)0x0) {
		element = (Trigger *)0x0;
		}
		else {
		TriggerAbstract::Construct(element);
		(element->parent).vtable = (TriggerAbstract_VTable *)&Trigger_VT;
		Trigger::Read(element,&stream);
		}
		collection = this->collectionTrigger->collectionPtr;
		if (collection != (CollectionTrigger *)0x0) {
		collection = (CollectionTrigger *)collection->cnt;
		}
		InstanceSectionResources::AddTriggger(this->instanceResources,collection,this->cnt,element);
		CollectionTriggerWrapper::Add(this->collectionTrigger,element);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

