#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Instance/Camera/SectionInstanceCamera.h"

#include "headers/Known/Collections/CollectionCameraTriggerWrapper.h"
#include "headers/SortLater/InstanceSectionResources.h"
#include "headers/Known/LevelStructure/Readers/Known/SectionReaderInstanceCamera.h"
int SectionInstanceCamera::GetElementCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionInstanceCamera::GetElementCount(SectionInstanceCamera *this){
		return this->cnt;
		}
		
	*/
	return 0;
}

bool SectionInstanceCamera::ReturnTrue() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked bool SectionInstanceCamera::ReturnTrue(void){
		return true;
		}
		
	*/
	return false;
}

bool SectionInstanceCamera::IsOne() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked bool SectionInstanceCamera::IsOne(void){
		int in_stack_00000004;
		return in_stack_00000004 == 1;
		}
		
	*/
	return false;
}

void SectionInstanceCamera::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionInstanceCamera * __thiscall SectionInstanceCamera::Dispose(SectionInstanceCamera *this,byte param_1){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

SectionReaderInstanceCamera* SectionInstanceCamera::GetReader(uint param_1, uint param_2, int* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderInstanceCamera * __thiscall SectionInstanceCamera::GetReader(SectionInstanceCamera *this,undefined4 param_1,undefined4 param_2,int *param_3){
		CollectionCameraTriggerWrapper *pCVar1;
		InstanceSectionResources *pIVar2;
		SectionReaderInstanceCamera *pSVar3;
		if (*param_3 != 0) {
		pSVar3 = (SectionReaderInstanceCamera *)VirtualPool::AllocateMemory(0x10);
		if (pSVar3 != (SectionReaderInstanceCamera *)0x0) {
		pCVar1 = this->colectionCameraTrigger;
		pIVar2 = this->instanceResources;
		pSVar3->cnt = this->cnt;
		(pSVar3->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Instance_Camera;
		pSVar3->instanceResources = pIVar2;
		pSVar3->collection = pCVar1;
		return pSVar3;
		}
		}
		return (SectionReaderInstanceCamera *)0x0;
		}
		
	*/
	return null;
}

void SectionInstanceCamera::Stub1(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstanceCamera::Stub1(SectionInstanceCamera *this,int param_1){
		CollectionCameraTriggerWrapper *pCVar1;
		CollectionCameraTrigger *pCVar2;
		CameraTrigger **ppCVar3;
		pCVar1 = this->colectionCameraTrigger;
		this->cnt = param_1;
		if (param_1 != 0) {
		pCVar2 = (CollectionCameraTrigger *)VirtualPool::AllocateMemory(0x10);
		if (pCVar2 != (CollectionCameraTrigger *)0x0) {
		pCVar2->cnt = 0;
		pCVar2->capacity = param_1;
		pCVar2->expansion = param_1;
		ppCVar3 = (CameraTrigger **)VirtualPool::AllocateMemory(param_1 * 4);
		pCVar2->list = ppCVar3;
		pCVar1->collectionPtr = pCVar2;
		return;
		}
		pCVar1->collectionPtr = (CollectionCameraTrigger *)0x0;
		}
		return;
		}
		
	*/
	return;
}

bool SectionInstanceCamera::Write(uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionInstanceCamera::Write(SectionInstanceCamera *this,uint *indexOut1,uint *indexOut2){
		CollectionCameraTrigger *pCVar1;
		CameraTrigger *this_00;
		uint *in_stack_0000000c;
		pCVar1 = this->colectionCameraTrigger->collectionPtr;
		if (pCVar1 != (CollectionCameraTrigger *)0x0) {
		if (*indexOut2 < (uint)pCVar1->cnt) {
		pCVar1 = this->colectionCameraTrigger->collectionPtr;
		if (pCVar1 == (CollectionCameraTrigger *)0x0) {
		this_00 = (CameraTrigger *)0x0;
		}
		else {
		this_00 = pCVar1->list[*indexOut2];
		}
		(*((this_00->parent).vtable)->Write)(&this_00->parent,(MemoryStream *)indexOut1);
		*in_stack_0000000c = *indexOut2;
		*indexOut2 = *indexOut2 + 1;
		return true;
		}
		}
		return false;
		}
		
	*/
	return false;
}

void SectionInstanceCamera::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstanceCamera::DisposeResources(SectionInstanceCamera *this){
		FUN_001c06b0(this->colectionCameraTrigger,'\x01');
		return;
		}
		
	*/
	return;
}

void SectionInstanceCamera::Construct(uint resources, CollectionCameraTriggerWrapper* collectionCameraTrigger) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstanceCamera::Construct(SectionInstanceCamera *this,InstanceSectionResources *resources,CollectionCameraTriggerWrapper *collectionCameraTrigger){
		this->instanceResources = resources;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Instance_Camera;
		this->colectionCameraTrigger = collectionCameraTrigger;
		if (collectionCameraTrigger->collectionPtr == (CollectionCameraTrigger *)0x0) {
		this->cnt = 0;
		return;
		}
		this->cnt = collectionCameraTrigger->collectionPtr->cnt;
		return;
		}
		
	*/
	return;
}

