#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Instance/Template/SectionInstanceTemplate.h"

#include "headers/Known/LevelStructure/Readers/Known/SectionReaderInstanceTemplate.h"
#include "headers/Known/Collections/CollectionInstanceTemplateWrapper.h"
#include "headers/SortLater/InstanceSectionResources.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void SectionInstanceTemplate::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstanceTemplate::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

int SectionInstanceTemplate::GetElementCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionInstanceTemplate::GetElementCount(SectionInstanceTemplate *this){
		return this->cnt;
		}
		
	*/
	return 0;
}

bool SectionInstanceTemplate::ReturnTrue() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked bool SectionInstanceTemplate::ReturnTrue(void){
		return true;
		}
		
	*/
	return false;
}

bool SectionInstanceTemplate::IsOne() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked bool SectionInstanceTemplate::IsOne(void){
		int in_stack_00000004;
		return in_stack_00000004 == 1;
		}
		
	*/
	return false;
}

void SectionInstanceTemplate::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionInstanceTemplate * __thiscall SectionInstanceTemplate::Dispose(SectionInstanceTemplate *this,byte param_1){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

SectionReaderInstanceTemplate* SectionInstanceTemplate::GetReader(uint param_1, uint param_2, int* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderInstanceTemplate * __thiscall SectionInstanceTemplate::GetReader(SectionInstanceTemplate *this,undefined4 param_1,undefined4 param_2,int *param_3){
		SectionReaderInstanceTemplate *pSVar1;
		CollectionInstanceTemplateWrapper *collection;
		InstanceSectionResources *resources;
		if (*param_3 != 0) {
		pSVar1 = (SectionReaderInstanceTemplate *)VirtualPool::AllocateMemory(0x10);
		if (pSVar1 != (SectionReaderInstanceTemplate *)0x0) {
		collection = this->instanceTemplates;
		resources = this->instanceResources;
		pSVar1->cnt = this->cnt;
		(pSVar1->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Instance_Template;
		pSVar1->instanceResources = resources;
		pSVar1->collectionInstanceTemplate = collection;
		return pSVar1;
		}
		}
		return (SectionReaderInstanceTemplate *)0x0;
		}
		
	*/
	return null;
}

bool SectionInstanceTemplate::Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionInstanceTemplate::Write(SectionInstanceTemplate *this,MemoryStream *stream,uint *indexOut1,uint *indexOut2){
		CollectionInstanceTemplate *pCVar1;
		InstanceTemplate *this_00;
		pCVar1 = this->instanceTemplates->collectionPtr;
		if (pCVar1 != (CollectionInstanceTemplate *)0x0) {
		if (*indexOut1 < (uint)pCVar1->cnt) {
		pCVar1 = this->instanceTemplates->collectionPtr;
		if (pCVar1 == (CollectionInstanceTemplate *)0x0) {
		this_00 = (InstanceTemplate *)0x0;
		}
		else {
		this_00 = pCVar1->list[*indexOut1];
		}
		InstanceTemplate::Write(this_00,stream);
		*indexOut2 = *indexOut1;
		*indexOut1 = *indexOut1 + 1;
		return true;
		}
		}
		return false;
		}
		
	*/
	return false;
}

void SectionInstanceTemplate::Stub1(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstanceTemplate::Stub1(SectionInstanceTemplate *this,int param_1){
		CollectionInstanceTemplateWrapper *pCVar1;
		CollectionInstanceTemplate *pCVar2;
		InstanceTemplate **ppIVar3;
		pCVar1 = this->instanceTemplates;
		this->cnt = param_1;
		if (param_1 != 0) {
		pCVar2 = (CollectionInstanceTemplate *)VirtualPool::AllocateMemory(0x10);
		if (pCVar2 != (CollectionInstanceTemplate *)0x0) {
		pCVar2->cnt = 0;
		pCVar2->capacity = param_1;
		pCVar2->expansion = param_1;
		ppIVar3 = (InstanceTemplate **)VirtualPool::AllocateMemory(param_1 * 4);
		pCVar2->list = ppIVar3;
		pCVar1->collectionPtr = pCVar2;
		return;
		}
		pCVar1->collectionPtr = (CollectionInstanceTemplate *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void SectionInstanceTemplate::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstanceTemplate::DisposeResources(SectionInstanceTemplate *this){
		FUN_001c0230(this->instanceTemplates,'\x01');
		return;
		}
		
	*/
	return;
}

void SectionInstanceTemplate::Construct(uint resources, CollectionInstanceTemplateWrapper* instanceTemplates) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstanceTemplate::Construct(SectionInstanceTemplate *this,InstanceSectionResources *resources,CollectionInstanceTemplateWrapper *instanceTemplates){
		this->instanceResources = resources;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Instance_Template;
		this->instanceTemplates = instanceTemplates;
		if (instanceTemplates->collectionPtr == (CollectionInstanceTemplate *)0x0) {
		this->cnt = 0;
		return;
		}
		this->cnt = instanceTemplates->collectionPtr->cnt;
		return;
		}
		
	*/
	return;
}

