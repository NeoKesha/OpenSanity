#include "headers/Known/Collections/CollectionPositionWrapper.h"

#include "headers/Known/GameData/Position/Position.h"
#include "headers/Known/Collections/CollectionPosition.h"
void CollectionPositionWrapper::CreateCollection(int cnt) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionPositionWrapper::CreateCollection(CollectionPositionWrapper *this,int cnt){
		CollectionGeneric *collection;
		void *pvVar1;
		if (cnt != 0) {
		collection = (CollectionGeneric *)VirtualPool::AllocateMemory(0x10);
		if (collection != (CollectionGeneric *)0x0) {
		collection->field1_0x4 = 0;
		collection->cnt1 = cnt;
		collection->cnt2 = cnt;
		pvVar1 = VirtualPool::AllocateMemory(cnt * 4);
		collection->array = pvVar1;
		this->collectionPtr = (CollectionPosition *)collection;
		return;
		}
		this->collectionPtr = (CollectionPosition *)0x0;
		}
		return;
		}
		
	*/
	return;
}

int CollectionPositionWrapper::Add(Position* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall CollectionPositionWrapper::Add(CollectionPositionWrapper *this,Position *element){
		CollectionPosition *pCVar1;
		Position **ppPVar2;
		int iVar3;
		if (this->collectionPtr == (CollectionPosition *)0x0) {
		pCVar1 = (CollectionPosition *)VirtualPool::AllocateMemory(0x10);
		if (pCVar1 != (CollectionPosition *)0x0) {
		pCVar1->cnt = 0;
		pCVar1->capacity = (int)&DAT_0000000a;
		pCVar1->expansion = (int)&DAT_0000000a;
		ppPVar2 = (Position **)VirtualPool::AllocateMemory(0x28);
		pCVar1->list = ppPVar2;
		this->collectionPtr = pCVar1;
		iVar3 = CollectionPosition::Add(this->collectionPtr,element);
		return iVar3;
		}
		this->collectionPtr = (CollectionPosition *)0x0;
		}
		iVar3 = CollectionPosition::Add(this->collectionPtr,element);
		return iVar3;
		}
		
	*/
	return 0;
}

