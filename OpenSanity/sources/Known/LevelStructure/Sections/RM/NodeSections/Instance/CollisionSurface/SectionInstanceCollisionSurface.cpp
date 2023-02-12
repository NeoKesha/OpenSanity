#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Instance/CollisionSurface/SectionInstanceCollisionSurface.h"

#include "headers/Known/Collections/CollectionCollisionSurfaceWrapper.h"
#include "headers/SortLater/InstanceSectionResources.h"
#include "headers/Known/LevelStructure/Readers/Known/SectionReaderInstanceCollisionSurface.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
int SectionInstanceCollisionSurface::GetElementCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionInstanceCollisionSurface::GetElementCount(SectionInstanceCollisionSurface *this){
		return this->cnt;
		}
		
	*/
	return 0;
}

bool SectionInstanceCollisionSurface::ReturnTrue() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked bool SectionInstanceCollisionSurface::ReturnTrue(void){
		return true;
		}
		
	*/
	return false;
}

bool SectionInstanceCollisionSurface::IsOne() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked bool SectionInstanceCollisionSurface::IsOne(void){
		int in_stack_00000004;
		return in_stack_00000004 == 1;
		}
		
	*/
	return false;
}

void SectionInstanceCollisionSurface::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionInstanceCollisionSurface * __thiscall SectionInstanceCollisionSurface::Dispose(SectionInstanceCollisionSurface *this,byte param_1){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

SectionReaderInstanceCollisionSurface* SectionInstanceCollisionSurface::GetReader(uint param_1, uint param_2, int* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderInstanceCollisionSurface * __thiscall SectionInstanceCollisionSurface::GetReader(SectionInstanceCollisionSurface *this,undefined4 param_1,undefined4 param_2,int *param_3){
		CollectionCollisionSurfaceWrapper *pCVar1;
		InstanceSectionResources *pIVar2;
		SectionReaderInstanceCollisionSurface *pSVar3;
		if (*param_3 != 0) {
		pSVar3 = (SectionReaderInstanceCollisionSurface *)VirtualPool::AllocateMemory(0x10);
		if (pSVar3 != (SectionReaderInstanceCollisionSurface *)0x0) {
		pCVar1 = this->collectionCollisionSurface;
		pIVar2 = this->instanceResources;
		pSVar3->cnt = this->cnt;
		(pSVar3->parent).vtable =(SectionReaderAbstract_VTable *)&SectionReader_VT_Instance_CollisionSurface;
		pSVar3->instanceResources = pIVar2;
		pSVar3->collection = pCVar1;
		return pSVar3;
		}
		}
		return (SectionReaderInstanceCollisionSurface *)0x0;
		}
		
	*/
	return null;
}

void SectionInstanceCollisionSurface::Stub1(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstanceCollisionSurface::Stub1(SectionInstanceCollisionSurface *this,int param_1){
		CollectionCollisionSurfaceWrapper *pCVar1;
		CollectionCollisionSurface *pCVar2;
		CollisionSurface **ppCVar3;
		pCVar1 = this->collectionCollisionSurface;
		this->cnt = param_1;
		if (param_1 != 0) {
		pCVar2 = (CollectionCollisionSurface *)VirtualPool::AllocateMemory(0x10);
		if (pCVar2 != (CollectionCollisionSurface *)0x0) {
		pCVar2->cnt = 0;
		pCVar2->capacity = param_1;
		pCVar2->expansion = param_1;
		ppCVar3 = (CollisionSurface **)VirtualPool::AllocateMemory(param_1 * 4);
		pCVar2->list = ppCVar3;
		pCVar1->collectionPtr = pCVar2;
		return;
		}
		pCVar1->collectionPtr = (CollectionCollisionSurface *)0x0;
		}
		return;
		}
		
	*/
	return;
}

bool SectionInstanceCollisionSurface::Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionInstanceCollisionSurface::Write(SectionInstanceCollisionSurface *this,MemoryStream *stream,uint *indexOut1,uint *indexOut2){
		CollectionCollisionSurface *pCVar1;
		CollisionSurface *this_00;
		pCVar1 = this->collectionCollisionSurface->collectionPtr;
		if (pCVar1 != (CollectionCollisionSurface *)0x0) {
		if (*indexOut1 < (uint)pCVar1->cnt) {
		pCVar1 = this->collectionCollisionSurface->collectionPtr;
		if (pCVar1 == (CollectionCollisionSurface *)0x0) {
		this_00 = (CollisionSurface *)0x0;
		}
		else {
		this_00 = pCVar1->list[*indexOut1];
		}
		CollisionSurface::Write(this_00,stream);
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

void SectionInstanceCollisionSurface::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstanceCollisionSurface::DisposeResources(SectionInstanceCollisionSurface *this){
		FUN_001c0750(this->collectionCollisionSurface,'\x01');
		return;
		}
		
	*/
	return;
}

void SectionInstanceCollisionSurface::Construct(uint resources, CollectionCollisionSurfaceWrapper* collectionCollisionSurface) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionInstanceCollisionSurface::Construct(SectionInstanceCollisionSurface *this,InstanceSectionResources *resources,CollectionCollisionSurfaceWrapper *collectionCollisionSurface){
		this->instanceResources = resources;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Instance_CollisionSurface;
		this->collectionCollisionSurface = collectionCollisionSurface;
		if (collectionCollisionSurface->collectionPtr == (CollectionCollisionSurface *)0x0) {
		this->cnt = 0;
		return;
		}
		this->cnt = collectionCollisionSurface->collectionPtr->cnt;
		return;
		}
		
	*/
	return;
}

