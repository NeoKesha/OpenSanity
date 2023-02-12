#include "headers/Known/LevelStructure/Readers/Known/SectionReaderInstanceAiPosition.h"

#include "headers/SortLater/InstanceSectionResources.h"
#include "headers/Known/Collections/CollectionAiPositionWrapper.h"
void SectionReaderInstanceAiPosition::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderInstanceAiPosition::Read(SectionReaderInstanceAiPosition *this,void *buffer,size_t size,size_t offset){
		AiPosition *element;
		CollectionAiPosition *pCVar1;
		MemoryStream stream;
		MemoryStream::Construct(&stream,buffer,size,0,1);
		element = (AiPosition *)VirtualPool::AllocateMemory(0x20);
		if (element == (AiPosition *)0x0) {
		element = (AiPosition *)0x0;
		}
		else {
		AiPosition::Construct(element,&stream);
		}
		pCVar1 = this->collectionAiPosition->collectionPtr;
		if (pCVar1 != (CollectionAiPosition *)0x0) {
		pCVar1 = (CollectionAiPosition *)pCVar1->cnt;
		}
		InstanceSectionResources::Add(this->instanceResources,(ushort)pCVar1,(ushort)this->cnt,element);
		CollectionAiPositionWrapper::Add(this->collectionAiPosition,element);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

void SectionReaderInstanceAiPosition::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderInstanceAiPosition * __thiscall SectionReaderInstanceAiPosition::Dispose(SectionReaderInstanceAiPosition *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

