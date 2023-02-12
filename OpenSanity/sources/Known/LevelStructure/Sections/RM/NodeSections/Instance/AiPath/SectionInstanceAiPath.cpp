#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Instance/AiPath/SectionInstanceAiPath.h"

#include "headers/Known/Collections/CollectionAiPathWrapper.h"
#include "headers/SortLater/InstanceSectionResources.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/LevelStructure/Readers/Known/SectionReaderInstanceAiPath.h"
int SectionInstanceAiPath::GetElementCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionInstanceAiPath::GetElementCount(SectionInstanceAiPath *this){
		return this->cnt;
		}
		
	*/
	return 0;
}

bool SectionInstanceAiPath::ReturnTrue() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked bool SectionInstanceAiPath::ReturnTrue(void){
		return true;
		}
		
	*/
	return false;
}

bool SectionInstanceAiPath::IsOne() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked bool SectionInstanceAiPath::IsOne(void){
		int in_stack_00000004;
		return in_stack_00000004 == 1;
		}
		
	*/
	return false;
}

void SectionInstanceAiPath::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionInstanceAiPath * __thiscall SectionInstanceAiPath::Dispose(SectionInstanceAiPath *this,byte param_1){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

SectionReaderInstanceAiPath* SectionInstanceAiPath::GetReader(uint param_1, uint param_2, int* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderInstanceAiPath * __thiscall SectionInstanceAiPath::GetReader(SectionInstanceAiPath *this,undefined4 param_1,undefined4 param_2,int *param_3){
		CollectionAiPathWrapper *pCVar1;
		InstanceSectionResources *pIVar2;
		SectionReaderInstanceAiPath *pSVar3;
		if (*param_3 != 0) {
		pSVar3 = (SectionReaderInstanceAiPath *)VirtualPool::AllocateMemory(0x10);
		if (pSVar3 != (SectionReaderInstanceAiPath *)0x0) {
		pCVar1 = this->aiPaths;
		pIVar2 = this->instanceResources;
		pSVar3->cnt = this->cnt;
		(pSVar3->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Instance_AiPath;
		pSVar3->instanceResources = pIVar2;
		pSVar3->collectionAiPath = pCVar1;
		return pSVar3;
		}
		}
		return (SectionReaderInstanceAiPath *)0x0;
		}
		
	*/
	return null;
}

void SectionInstanceAiPath::Stub1(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstanceAiPath::Stub1(SectionInstanceAiPath *this,int param_1){
		CollectionAiPathWrapper *pCVar1;
		CollectionAiPath *pCVar2;
		AiPath **ppAVar3;
		pCVar1 = this->aiPaths;
		this->cnt = param_1;
		if (param_1 != 0) {
		pCVar2 = (CollectionAiPath *)VirtualPool::AllocateMemory(0x10);
		if (pCVar2 != (CollectionAiPath *)0x0) {
		pCVar2->cnt = 0;
		pCVar2->capacity = param_1;
		pCVar2->expansion = param_1;
		ppAVar3 = (AiPath **)VirtualPool::AllocateMemory(param_1 * 4);
		pCVar2->list = ppAVar3;
		pCVar1->collectionPtr = pCVar2;
		return;
		}
		pCVar1->collectionPtr = (CollectionAiPath *)0x0;
		}
		return;
		}
		
	*/
	return;
}

bool SectionInstanceAiPath::Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionInstanceAiPath::Write(SectionInstanceAiPath *this,MemoryStream *stream,uint *indexOut1,uint *indexOut2){
		CollectionAiPath *pCVar1;
		AiPath *this_00;
		pCVar1 = this->aiPaths->collectionPtr;
		if (pCVar1 != (CollectionAiPath *)0x0) {
		if (*indexOut1 < (uint)pCVar1->cnt) {
		pCVar1 = this->aiPaths->collectionPtr;
		if (pCVar1 == (CollectionAiPath *)0x0) {
		this_00 = (AiPath *)0x0;
		}
		else {
		this_00 = pCVar1->list[*indexOut1];
		}
		AiPath::Write(this_00,stream);
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

void SectionInstanceAiPath::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstanceAiPath::DisposeResources(SectionInstanceAiPath *this){
		FUN_001c0430(this->aiPaths,'\x01');
		return;
		}
		
	*/
	return;
}

void SectionInstanceAiPath::Construct(uint resources, CollectionAiPathWrapper* aiPaths) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstanceAiPath::Construct(SectionInstanceAiPath *this,InstanceSectionResources *resources,CollectionAiPathWrapper *aiPaths){
		this->instanceResources = resources;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Instance_AiPath;
		this->aiPaths = aiPaths;
		if (aiPaths->collectionPtr == (CollectionAiPath *)0x0) {
		this->cnt = 0;
		return;
		}
		this->cnt = aiPaths->collectionPtr->cnt;
		return;
		}
		
	*/
	return;
}

