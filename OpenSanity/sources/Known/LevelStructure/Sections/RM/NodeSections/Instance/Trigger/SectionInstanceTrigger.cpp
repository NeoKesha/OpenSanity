#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Instance/Trigger/SectionInstanceTrigger.h"

#include "headers/Known/Collections/CollectionTriggerWrapper.h"
#include "headers/Known/LevelStructure/Readers/Known/SectionReaderInstanceTrigger.h"
#include "headers/SortLater/InstanceSectionResources.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
int SectionInstanceTrigger::GetElementCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionInstanceTrigger::GetElementCount(SectionInstanceTrigger *this){
		return this->cnt;
		}
		
	*/
	return 0;
}

bool SectionInstanceTrigger::ReturnTrue() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked bool SectionInstanceTrigger::ReturnTrue(void){
		return true;
		}
		
	*/
	return false;
}

bool SectionInstanceTrigger::IsOne() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked bool SectionInstanceTrigger::IsOne(void){
		int in_stack_00000004;
		return in_stack_00000004 == 1;
		}
		
	*/
	return false;
}

void SectionInstanceTrigger::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionInstanceTrigger * __thiscall SectionInstanceTrigger::Dispose(SectionInstanceTrigger *this,byte param_1){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

SectionReaderInstanceTrigger* SectionInstanceTrigger::GetReader(uint param_1, uint param_2, int* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderInstanceTrigger * __thiscall SectionInstanceTrigger::GetReader(SectionInstanceTrigger *this,undefined4 param_1,undefined4 param_2,int *param_3){
		CollectionTriggerWrapper *pCVar1;
		InstanceSectionResources *pIVar2;
		SectionReaderInstanceTrigger *pSVar3;
		if (*param_3 != 0) {
		pSVar3 = (SectionReaderInstanceTrigger *)VirtualPool::AllocateMemory(0x10);
		if (pSVar3 != (SectionReaderInstanceTrigger *)0x0) {
		pCVar1 = this->collectionTrigger;
		pIVar2 = this->instanceResources;
		pSVar3->cnt = this->cnt;
		(pSVar3->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Instance_Trigger;
		pSVar3->instanceResources = pIVar2;
		pSVar3->collectionTrigger = pCVar1;
		return pSVar3;
		}
		}
		return (SectionReaderInstanceTrigger *)0x0;
		}
		
	*/
	return null;
}

void SectionInstanceTrigger::Stub1(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstanceTrigger::Stub1(SectionInstanceTrigger *this,int param_1){
		CollectionTriggerWrapper *pCVar1;
		CollectionTrigger *pCVar2;
		Trigger **ppTVar3;
		pCVar1 = this->collectionTrigger;
		this->cnt = param_1;
		if (param_1 != 0) {
		pCVar2 = (CollectionTrigger *)VirtualPool::AllocateMemory(0x10);
		if (pCVar2 != (CollectionTrigger *)0x0) {
		pCVar2->cnt = 0;
		pCVar2->capacity = param_1;
		pCVar2->expansion = param_1;
		ppTVar3 = (Trigger **)VirtualPool::AllocateMemory(param_1 * 4);
		pCVar2->list = ppTVar3;
		pCVar1->collectionPtr = pCVar2;
		return;
		}
		pCVar1->collectionPtr = (CollectionTrigger *)0x0;
		}
		return;
		}
		
	*/
	return;
}

bool SectionInstanceTrigger::Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionInstanceTrigger::Write(SectionInstanceTrigger *this,MemoryStream *stream,uint *indexOut1,uint *indexOut2){
		CollectionTrigger *pCVar1;
		Trigger *this_00;
		pCVar1 = this->collectionTrigger->collectionPtr;
		if (pCVar1 != (CollectionTrigger *)0x0) {
		if (*indexOut1 < (uint)pCVar1->cnt) {
		pCVar1 = this->collectionTrigger->collectionPtr;
		if (pCVar1 == (CollectionTrigger *)0x0) {
		this_00 = (Trigger *)0x0;
		}
		else {
		this_00 = pCVar1->list[*indexOut1];
		}
		(*((this_00->parent).vtable)->Write)(&this_00->parent,stream);
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

void SectionInstanceTrigger::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstanceTrigger::DisposeResources(SectionInstanceTrigger *this){
		FUN_001c0610(this->collectionTrigger,'\x01');
		return;
		}
		
	*/
	return;
}

void SectionInstanceTrigger::Construct(uint resources, CollectionTriggerWrapper* colllectionTrigger) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstanceTrigger::Construct(SectionInstanceTrigger *this,InstanceSectionResources *resources,CollectionTriggerWrapper *colllectionTrigger){
		this->instanceResources = resources;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Instance_Trigger;
		this->collectionTrigger = colllectionTrigger;
		if (colllectionTrigger->collectionPtr == (CollectionTrigger *)0x0) {
		this->cnt = 0;
		return;
		}
		this->cnt = colllectionTrigger->collectionPtr->cnt;
		return;
		}
		
	*/
	return;
}

