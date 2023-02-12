#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Instance/Instance/SectionInstanceInstance.h"

#include "headers/SortLater/InstanceSectionResources.h"
#include "headers/Known/Collections/CollectionInstanceWrapper.h"
#include "headers/Known/LevelStructure/Readers/Known/SectionReaderInstanceInstance.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
int SectionInstanceInstance::GetElementCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionInstanceInstance::GetElementCount(SectionInstanceInstance *this){
		return this->cnt;
		}
		
	*/
	return 0;
}

bool SectionInstanceInstance::ReturnTrue() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked bool SectionInstanceInstance::ReturnTrue(void){
		return true;
		}
		
	*/
	return false;
}

bool SectionInstanceInstance::IsOne() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked bool SectionInstanceInstance::IsOne(void){
		int in_stack_00000004;
		return in_stack_00000004 == 1;
		}
		
	*/
	return false;
}

void SectionInstanceInstance::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionInstanceInstance * __thiscall SectionInstanceInstance::Dispose(SectionInstanceInstance *this,byte param_1){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

SectionReaderInstanceInstance* SectionInstanceInstance::GetReader(uint param_1, uint param_2, int* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderInstanceInstance * __thiscall SectionInstanceInstance::GetReader(SectionInstanceInstance *this,undefined4 param_1,undefined4 param_2,int *param_3){
		CollectionInstanceWrapper *pCVar1;
		InstanceSectionResources *pIVar2;
		SectionReaderInstanceInstance *reader;
		if (*param_3 != 0) {
		reader = (SectionReaderInstanceInstance *)VirtualPool::AllocateMemory(0x10);
		if (reader != (SectionReaderInstanceInstance *)0x0) {
		pCVar1 = this->instances;
		pIVar2 = this->instanceResources;
		reader->number = this->cnt;
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Instance_Instance;
		reader->instanceResources = pIVar2;
		reader->collectionInstance = pCVar1;
		return reader;
		}
		}
		return (SectionReaderInstanceInstance *)0x0;
		}
		
	*/
	return null;
}

void SectionInstanceInstance::Stub1(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstanceInstance::Stub1(SectionInstanceInstance *this,int param_1){
		CollectionInstanceWrapper *pCVar1;
		CollectionInstance *pCVar2;
		Instance **ppIVar3;
		pCVar1 = this->instances;
		this->cnt = param_1;
		if (param_1 != 0) {
		pCVar2 = (CollectionInstance *)VirtualPool::AllocateMemory(0x10);
		if (pCVar2 != (CollectionInstance *)0x0) {
		pCVar2->cnt = 0;
		pCVar2->capacity = param_1;
		pCVar2->expansion = param_1;
		ppIVar3 = (Instance **)VirtualPool::AllocateMemory(param_1 * 4);
		pCVar2->list = ppIVar3;
		pCVar1->collectionPtr = pCVar2;
		return;
		}
		pCVar1->collectionPtr = (CollectionInstance *)0x0;
		}
		return;
		}
		
	*/
	return;
}

bool SectionInstanceInstance::Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionInstanceInstance::Write(SectionInstanceInstance *this,MemoryStream *stream,uint *indexOut1,uint *indexOut2){
		CollectionInstance *pCVar1;
		Instance *this_00;
		pCVar1 = this->instances->collectionPtr;
		if (pCVar1 != (CollectionInstance *)0x0) {
		if (*indexOut1 < (uint)pCVar1->cnt) {
		pCVar1 = this->instances->collectionPtr;
		if (pCVar1 == (CollectionInstance *)0x0) {
		this_00 = (Instance *)0x0;
		}
		else {
		this_00 = pCVar1->list[*indexOut1];
		}
		Instance::Write(this_00,stream);
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

void SectionInstanceInstance::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstanceInstance::DisposeResources(SectionInstanceInstance *this){
		FUN_001c02f0(this->instances,'\x01');
		return;
		}
		
	*/
	return;
}

void SectionInstanceInstance::Construct(uint resources, CollectionInstanceWrapper* instances) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstanceInstance::Construct(SectionInstanceInstance *this,InstanceSectionResources *resources,CollectionInstanceWrapper *instances){
		this->instanceResources = resources;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Instance_Instance;
		this->instances = instances;
		if (instances->collectionPtr == (CollectionInstance *)0x0) {
		this->cnt = 0;
		return;
		}
		this->cnt = instances->collectionPtr->cnt;
		return;
		}
		
	*/
	return;
}

