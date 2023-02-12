#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Instance/Path/SectionInstancePath.h"

#include "headers/Known/LevelStructure/Readers/Known/SectionReaderInstancePath.h"
#include "headers/Known/Collections/CollectionPathWrapper.h"
#include "headers/SortLater/InstanceSectionResources.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
int SectionInstancePath::GetElementCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionInstancePath::GetElementCount(SectionInstancePath *this){
		return this->cnt;
		}
		
	*/
	return 0;
}

bool SectionInstancePath::ReturnTrue() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked bool SectionInstancePath::ReturnTrue(void){
		return true;
		}
		
	*/
	return false;
}

bool SectionInstancePath::IsOne() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked bool SectionInstancePath::IsOne(void){
		int in_stack_00000004;
		return in_stack_00000004 == 1;
		}
		
	*/
	return false;
}

void SectionInstancePath::Stub1(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstancePath::Stub1(SectionInstancePath *this,int param_1){
		CollectionPathWrapper *pCVar1;
		CollectionPath *pCVar2;
		Path **ppPVar3;
		pCVar1 = this->collectionPath;
		this->cnt = param_1;
		if (param_1 != 0) {
		pCVar2 = (CollectionPath *)VirtualPool::AllocateMemory(0x10);
		if (pCVar2 != (CollectionPath *)0x0) {
		pCVar2->cnt = 0;
		pCVar2->capacity = param_1;
		pCVar2->expansion = param_1;
		ppPVar3 = (Path **)VirtualPool::AllocateMemory(param_1 * 4);
		pCVar2->list = ppPVar3;
		pCVar1->collectionPtr = pCVar2;
		return;
		}
		pCVar1->collectionPtr = (CollectionPath *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void SectionInstancePath::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionInstancePath * __thiscall SectionInstancePath::Dispose(SectionInstancePath *this,byte param_1){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

SectionReaderInstancePath* SectionInstancePath::GetReader(uint param_1, uint param_2, int* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderInstancePath * __thiscall SectionInstancePath::GetReader(SectionInstancePath *this,undefined4 param_1,undefined4 param_2,int *param_3){
		CollectionPathWrapper *pCVar1;
		InstanceSectionResources *pIVar2;
		SectionReaderInstancePath *pSVar3;
		if (*param_3 != 0) {
		pSVar3 = (SectionReaderInstancePath *)VirtualPool::AllocateMemory(0x10);
		if (pSVar3 != (SectionReaderInstancePath *)0x0) {
		pCVar1 = this->collectionPath;
		pIVar2 = this->instanceResources;
		pSVar3->cnt = this->cnt;
		(pSVar3->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Instance_Path;
		pSVar3->instanceResources = pIVar2;
		pSVar3->collection = pCVar1;
		return pSVar3;
		}
		}
		return (SectionReaderInstancePath *)0x0;
		}
		
	*/
	return null;
}

bool SectionInstancePath::Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionInstancePath::Write(SectionInstancePath *this,MemoryStream *stream,uint *indexOut1,uint *indexOut2){
		CollectionPath *pCVar1;
		Path *this_00;
		pCVar1 = this->collectionPath->collectionPtr;
		if (pCVar1 != (CollectionPath *)0x0) {
		if (*indexOut1 < (uint)pCVar1->cnt) {
		pCVar1 = this->collectionPath->collectionPtr;
		if (pCVar1 == (CollectionPath *)0x0) {
		this_00 = (Path *)0x0;
		}
		else {
		this_00 = pCVar1->list[*indexOut1];
		}
		(*((this_00->parent).vtable)->Write)(&this_00->parent,(int *)stream);
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

void SectionInstancePath::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstancePath::DisposeResources(SectionInstancePath *this){
		FUN_001c0570(this->collectionPath,'\x01');
		return;
		}
		
	*/
	return;
}

void SectionInstancePath::Construct(uint resources, CollectionPathWrapper* collectionPath) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstancePath::Construct(SectionInstancePath *this,InstanceSectionResources *resources,CollectionPathWrapper *collectionPath){
		this->instanceResources = resources;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Instance_Path;
		this->collectionPath = collectionPath;
		if (collectionPath->collectionPtr == (CollectionPath *)0x0) {
		this->cnt = 0;
		return;
		}
		this->cnt = collectionPath->collectionPtr->cnt;
		return;
		}
		
	*/
	return;
}

