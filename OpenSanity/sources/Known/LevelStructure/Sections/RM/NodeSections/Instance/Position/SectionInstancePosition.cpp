#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Instance/Position/SectionInstancePosition.h"

#include "headers/Known/Collections/CollectionPositionWrapper.h"
#include "headers/Known/LevelStructure/Readers/Known/SectionReaderInstancePosition.h"
#include "headers/SortLater/InstanceSectionResources.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
int SectionInstancePosition::GetElementCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionInstancePosition::GetElementCount(SectionInstancePosition *this){
		return this->cnt;
		}
		
	*/
	return 0;
}

bool SectionInstancePosition::ReturnTrue() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked bool SectionInstancePosition::ReturnTrue(void){
		return true;
		}
		
	*/
	return false;
}

bool SectionInstancePosition::IsOne() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked bool SectionInstancePosition::IsOne(void){
		int in_stack_00000004;
		return in_stack_00000004 == 1;
		}
		
	*/
	return false;
}

void SectionInstancePosition::Stub1(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstancePosition::Stub1(SectionInstancePosition *this,int param_1){
		CollectionPositionWrapper *pCVar1;
		CollectionPosition *pCVar2;
		Position **ppPVar3;
		pCVar1 = this->collectionPosition;
		this->cnt = param_1;
		if (param_1 != 0) {
		pCVar2 = (CollectionPosition *)VirtualPool::AllocateMemory(0x10);
		if (pCVar2 != (CollectionPosition *)0x0) {
		pCVar2->cnt = 0;
		pCVar2->capacity = param_1;
		pCVar2->expansion = param_1;
		ppPVar3 = (Position **)VirtualPool::AllocateMemory(param_1 * 4);
		pCVar2->list = ppPVar3;
		pCVar1->collectionPtr = pCVar2;
		return;
		}
		pCVar1->collectionPtr = (CollectionPosition *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void SectionInstancePosition::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionInstancePosition * __thiscall SectionInstancePosition::Dispose(SectionInstancePosition *this,byte param_1){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

SectionReaderInstancePosition* SectionInstancePosition::GetReader(uint param_1, uint param_2, int* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderInstancePosition * __thiscall SectionInstancePosition::GetReader(SectionInstancePosition *this,undefined4 param_1,undefined4 param_2,int *param_3){
		CollectionPositionWrapper *pCVar1;
		InstanceSectionResources *pIVar2;
		SectionReaderInstancePosition *pSVar3;
		if (*param_3 != 0) {
		pSVar3 = (SectionReaderInstancePosition *)VirtualPool::AllocateMemory(0x10);
		if (pSVar3 != (SectionReaderInstancePosition *)0x0) {
		pCVar1 = this->collectionPosition;
		pIVar2 = this->instanceResources;
		pSVar3->cnt = this->cnt;
		(pSVar3->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Instance_Position;
		pSVar3->instanceResources = pIVar2;
		pSVar3->collection = pCVar1;
		return pSVar3;
		}
		}
		return (SectionReaderInstancePosition *)0x0;
		}
		
	*/
	return null;
}

bool SectionInstancePosition::Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionInstancePosition::Write(SectionInstancePosition *this,MemoryStream *stream,uint *indexOut1,uint *indexOut2){
		CollectionPosition *pCVar1;
		Position *this_00;
		pCVar1 = this->collectionPosition->collectionPtr;
		if (pCVar1 != (CollectionPosition *)0x0) {
		if (*indexOut1 < (uint)pCVar1->cnt) {
		pCVar1 = this->collectionPosition->collectionPtr;
		if (pCVar1 == (CollectionPosition *)0x0) {
		this_00 = (Position *)0x0;
		}
		else {
		this_00 = pCVar1->list[*indexOut1];
		}
		Position::Write(this_00,stream);
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

void SectionInstancePosition::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstancePosition::DisposeResources(SectionInstancePosition *this){
		FUN_001c04d0(this->collectionPosition,'\x01');
		return;
		}
		
	*/
	return;
}

void SectionInstancePosition::Construct(uint resources, CollectionPositionWrapper* collectionPosition) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstancePosition::Construct(SectionInstancePosition *this,InstanceSectionResources *resources,CollectionPositionWrapper *collectionPosition){
		this->instanceResources = resources;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Instance_Position;
		this->collectionPosition = collectionPosition;
		if (collectionPosition->collectionPtr == (CollectionPosition *)0x0) {
		this->cnt = 0;
		return;
		}
		this->cnt = collectionPosition->collectionPtr->cnt;
		return;
		}
		
	*/
	return;
}

