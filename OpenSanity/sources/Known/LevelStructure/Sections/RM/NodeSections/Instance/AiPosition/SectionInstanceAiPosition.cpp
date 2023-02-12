#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Instance/AiPosition/SectionInstanceAiPosition.h"

#include "headers/Known/LevelStructure/Readers/Known/SectionReaderInstanceAiPosition.h"
#include "headers/SortLater/InstanceSectionResources.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/Collections/CollectionAiPositionWrapper.h"
int SectionInstanceAiPosition::GetElementCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionInstanceAiPosition::GetElementCount(SectionInstanceAiPosition *this){
		return this->cnt;
		}
		
	*/
	return 0;
}

bool SectionInstanceAiPosition::ReturnTrue() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked bool SectionInstanceAiPosition::ReturnTrue(void){
		return true;
		}
		
	*/
	return false;
}

bool SectionInstanceAiPosition::IsOne() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked bool SectionInstanceAiPosition::IsOne(void){
		int in_stack_00000004;
		return in_stack_00000004 == 1;
		}
		
	*/
	return false;
}

void SectionInstanceAiPosition::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionInstanceAiPosition * __thiscall SectionInstanceAiPosition::Dispose(SectionInstanceAiPosition *this,byte param_1){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

SectionReaderInstanceAiPosition* SectionInstanceAiPosition::GetReader(uint param_1, uint param_2, int* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderInstanceAiPosition * __thiscall SectionInstanceAiPosition::GetReader(SectionInstanceAiPosition *this,undefined4 param_1,undefined4 param_2,int *param_3){
		CollectionAiPositionWrapper *pCVar1;
		InstanceSectionResources *pIVar2;
		SectionReaderInstanceAiPosition *pSVar3;
		if (*param_3 != 0) {
		pSVar3 = (SectionReaderInstanceAiPosition *)VirtualPool::AllocateMemory(0x10);
		if (pSVar3 != (SectionReaderInstanceAiPosition *)0x0) {
		pCVar1 = this->aiPositions;
		pIVar2 = this->instanceResources;
		pSVar3->cnt = this->cnt;
		(pSVar3->parent).vtable =(SectionReaderAbstract_VTable *)&SectionReader_VT_Instance_AiPosition;
		pSVar3->instanceResources = pIVar2;
		pSVar3->collectionAiPosition = pCVar1;
		return pSVar3;
		}
		}
		return (SectionReaderInstanceAiPosition *)0x0;
		}
		
	*/
	return null;
}

void SectionInstanceAiPosition::Stub1(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstanceAiPosition::Stub1(SectionInstanceAiPosition *this,int param_1){
		CollectionAiPositionWrapper *pCVar1;
		CollectionAiPosition *pCVar2;
		AiPosition **ppAVar3;
		pCVar1 = this->aiPositions;
		this->cnt = param_1;
		if (param_1 != 0) {
		pCVar2 = (CollectionAiPosition *)VirtualPool::AllocateMemory(0x10);
		if (pCVar2 != (CollectionAiPosition *)0x0) {
		pCVar2->cnt = 0;
		pCVar2->capacity = param_1;
		pCVar2->expansion = param_1;
		ppAVar3 = (AiPosition **)VirtualPool::AllocateMemory(param_1 * 4);
		pCVar2->list = ppAVar3;
		pCVar1->collectionPtr = pCVar2;
		return;
		}
		pCVar1->collectionPtr = (CollectionAiPosition *)0x0;
		}
		return;
		}
		
	*/
	return;
}

bool SectionInstanceAiPosition::Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionInstanceAiPosition::Write(SectionInstanceAiPosition *this,MemoryStream *stream,uint *indexOut1,uint *indexOut2){
		CollectionAiPosition *pCVar1;
		AiPosition *this_00;
		pCVar1 = this->aiPositions->collectionPtr;
		if (pCVar1 != (CollectionAiPosition *)0x0) {
		if (*indexOut1 < (uint)pCVar1->cnt) {
		pCVar1 = this->aiPositions->collectionPtr;
		if (pCVar1 == (CollectionAiPosition *)0x0) {
		this_00 = (AiPosition *)0x0;
		}
		else {
		this_00 = pCVar1->list[*indexOut1];
		}
		AiPosition::Write(this_00,stream);
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

void SectionInstanceAiPosition::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstanceAiPosition::DisposeResources(SectionInstanceAiPosition *this){
		FUN_001c0390(this->aiPositions,'\x01');
		return;
		}
		
	*/
	return;
}

void SectionInstanceAiPosition::Construct(uint resources, CollectionAiPositionWrapper* aiPositions) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstanceAiPosition::Construct(SectionInstanceAiPosition *this,InstanceSectionResources *resources,CollectionAiPositionWrapper *aiPositions){
		this->instanceResources = resources;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Instance_AiPosition;
		this->aiPositions = aiPositions;
		if (aiPositions->collectionPtr == (CollectionAiPosition *)0x0) {
		this->cnt = 0;
		return;
		}
		this->cnt = aiPositions->collectionPtr->cnt;
		return;
		}
		
	*/
	return;
}

