#include "headers/Known/LevelStructure/Readers/Known/SectionReaderInstancePath.h"

#include "headers/Known/Collections/CollectionPathWrapper.h"
#include "headers/SortLater/InstanceSectionResources.h"
void SectionReaderInstancePath::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderInstancePath * __thiscall SectionReaderInstancePath::Dispose(SectionReaderInstancePath *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderInstancePath::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderInstancePath::Read(SectionReaderInstancePath *this,void *buffer,size_t size,size_t offset){
		InstanceSectionResources *pIVar1;
		Path *element;
		CollectionPath *pCVar2;
		MemoryStream stream;
		MemoryStream::Construct(&stream,buffer,size,0,1);
		element = (Path *)VirtualPool::AllocateMemory(0x50);
		if (element == (Path *)0x0) {
		element = (Path *)0x0;
		}
		else {
		(element->parent).points = (Vector4 *)0x0;
		(element->parent).vtable = (PathBase_VTable *)&Path_VT;
		element->field58_0x48 = -1;
		Path::Read(element,&stream);
		}
		pIVar1 = this->instanceResources;
		if (pIVar1->collectionPath == (CollectionPath *)0x0) {
		pCVar2 = FUN_001bbc40((int)pIVar1->chunkMeta,(void *)this->cnt);
		pIVar1->collectionPath = pCVar2;
		}
		CollectionPath::Add(pIVar1->collectionPath,element);
		CollectionPathWrapper::Add(this->collection,element);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

