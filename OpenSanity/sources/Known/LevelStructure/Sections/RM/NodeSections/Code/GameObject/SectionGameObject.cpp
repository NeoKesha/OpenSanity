#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Code/GameObject/SectionGameObject.h"

#include "headers/Unknown/IndexToIdList.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/GameObject/SectionDataGameObjectBase.h"
#include "headers/Known/LevelStructure/Readers/Known/SectionReaderGameObject.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
SectionReaderGameObject* SectionGameObject::GetReader(uint id, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderGameObject * __thiscall SectionGameObject::GetReader(SectionGameObject *this,int id,int param_2){
		SectionDataGameObjectBase *pSVar1;
		uint uVar2;
		GameObject *pGVar3;
		SectionReaderGameObject *pSVar4;
		IndexToIdList *uVar3;
		pSVar1 = this->collection;
		if (pSVar1 == (SectionDataGameObjectBase *)0x0) {
		return (SectionReaderGameObject *)pSVar1;
		}
		uVar2 = *(uint *)(param_2 + 8);
		if (((short)uVar2 == -1) ||(pGVar3 = pSVar1->elements[uVar2 & 0x7fff], pGVar3 == (GameObject *)0x0)) {
		pSVar4 = (SectionReaderGameObject *)VirtualPool::AllocateMemory(0x14);
		if (pSVar4 != (SectionReaderGameObject *)0x0) {
		uVar3 = this->indexToIdList;
		pSVar1 = this->collection;
		pSVar4->cnt = uVar2;
		pSVar4->collection = pSVar1;
		(pSVar4->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_GameObject;
		pSVar4->cnt_ = id;
		pSVar4->indexList = uVar3;
		return pSVar4;
		}
		}
		else if (((uint)pGVar3->field0_0x0 & 0x20000) == 0) {
		pGVar3->field0_0x0 = (int *)((uint)pGVar3->field0_0x0 | 0x20000);
		}
		return (SectionReaderGameObject *)0x0;
		}
		
	*/
	return null;
}

byte SectionGameObject::ReturnNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte SectionGameObject::ReturnNum(void){
		return 1;
		}
		
	*/
	return 0;
}

bool SectionGameObject::IsOne(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SectionGameObject::IsOne(int param_1){
		return param_1 == 1;
		}
		
	*/
	return false;
}

void SectionGameObject::Stub1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionGameObject::Stub1(SectionGameObject *this){
		if (this->collection != (SectionDataGameObjectBase *)0x0) {
		 WARNING: Could not recover jumptable at 0x001b9b9b. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->Stub1)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionGameObject::UnkMethod3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionGameObject::UnkMethod3(SectionGameObject *this){
		if (this->collection != (SectionDataGameObjectBase *)0x0) {
		 WARNING: Could not recover jumptable at 0x001b9bbb. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->Stub2)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionGameObject::Stub2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionGameObject::Stub2(SectionGameObject *this){
		if (this->collection != (SectionDataGameObjectBase *)0x0) {
		 WARNING: Could not recover jumptable at 0x001b9bdb. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->Stub3)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionGameObject::Stub3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionGameObject::Stub3(SectionGameObject *this){
		if (this->collection != (SectionDataGameObjectBase *)0x0) {
		 WARNING: Could not recover jumptable at 0x001b9bfb. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->Stub4)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionGameObject::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionGameObject::DisposeResources(SectionGameObject *this){
		 WARNING: Could not recover jumptable at 0x001b9c15. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->CleanUp)();
		return;
		}
		
	*/
	return;
}

void SectionGameObject::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionGameObject * __thiscall SectionGameObject::Dispose(SectionGameObject *this,byte param_1){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

int SectionGameObject::GetElementCount(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionGameObject::GetElementCount(SectionGameObject *this,int param_1){
		SectionDataGameObjectBase *pSVar1;
		int iVar2;
		GameObject **ppGVar3;
		uint uVar4;
		pSVar1 = this->collection;
		if (pSVar1 == (SectionDataGameObjectBase *)0x0) {
		return 0;
		}
		iVar2 = 0;
		uVar4 = pSVar1->elementsCount & 0x3fff;
		if (uVar4 != 0) {
		ppGVar3 = pSVar1->elements;
		do {
		if (*ppGVar3 != (GameObject *)0x0) {
		iVar2 = iVar2 + 1;
		}
		ppGVar3 = ppGVar3 + 1;
		uVar4 = uVar4 - 1;
		}
		 while (uVar4 != 0);
		}
		return iVar2;
		}
		
	*/
	return 0;
}

bool SectionGameObject::Write(MemoryStream* stream, uint* indexOut1, int* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionGameObject::Write(SectionGameObject *this,MemoryStream *stream,uint *indexOut1,int *indexOut2){
		uint uVar1;
		GameObject *this_00;
		uint uVar2;
		if (this->collection != (SectionDataGameObjectBase *)0x0) {
		uVar1 = this->collection->elementsCount;
		uVar2 = *indexOut1;
		while (uVar2 < (uVar1 & 0x3fff)) {
		if ((*(ushort *)indexOut1 != 0xffff) &&(this_00 = this->collection->elements[*(ushort *)indexOut1 & 0x7fff],this_00 != (GameObject *)0x0)) {
		GameObject::Write(this_00,stream);
		*indexOut2 = this_00->index;
		*indexOut1 = *indexOut1 + 1;
		return true;
		}
		uVar2 = *indexOut1 + 1;
		*indexOut1 = uVar2;
		}
		}
		return false;
		}
		
	*/
	return false;
}

void SectionGameObject::Construct(uint collection, uint indexToIdList) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionGameObject::Construct(SectionGameObject *this,SectionDataGameObjectBase *collection,IndexToIdList *indexToIdList){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_GameObject;
		this->collection = collection;
		this->indexToIdList = indexToIdList;
		return;
		}
		
	*/
	return;
}

