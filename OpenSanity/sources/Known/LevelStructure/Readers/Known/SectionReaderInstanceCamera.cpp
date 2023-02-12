#include "headers/Known/LevelStructure/Readers/Known/SectionReaderInstanceCamera.h"

#include "headers/Known/Collections/CollectionCameraTriggerWrapper.h"
#include "headers/SortLater/InstanceSectionResources.h"
void SectionReaderInstanceCamera::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderInstanceCamera * __thiscall SectionReaderInstanceCamera::Dispose(SectionReaderInstanceCamera *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderInstanceCamera::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderInstanceCamera::Read(SectionReaderInstanceCamera *this,void *buffer,size_t size,size_t offset){
		CameraTrigger *element;
		CollectionCameraTrigger *pCVar1;
		MemoryStream stream;
		MemoryStream::Construct(&stream,buffer,size,0,1);
		element = (CameraTrigger *)VirtualPool::AllocateMemory(0x70);
		if (element == (CameraTrigger *)0x0) {
		element = (CameraTrigger *)0x0;
		}
		else {
		TriggerAbstract::Construct((Trigger *)element);
		(element->parent).vtable = (TriggerAbstract_VTable *)&Trigger_VT_Camera;
		CameraTrigger::Read(element,&stream);
		}
		pCVar1 = this->collection->collectionPtr;
		if (pCVar1 != (CollectionCameraTrigger *)0x0) {
		pCVar1 = (CollectionCameraTrigger *)pCVar1->cnt;
		}
		InstanceSectionResources::AddCameraTrigger(this->instanceResources,pCVar1,this->cnt,element);
		CollectionCameraTriggerWrapper::Add(this->collection,element);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

