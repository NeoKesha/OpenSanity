#include "headers/Known/Collections/CollectionInstanceWrapper.h"

#include "headers/Known/GameData/Instance/Instance.h"
#include "headers/Known/Collections/CollectionInstance.h"
void CollectionInstanceWrapper::CreateCollection(int cnt) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionInstanceWrapper::CreateCollection(CollectionInstanceWrapper *this,int cnt){
		CollectionInstance *pCVar1;
		Instance **ppIVar1;
		if (cnt != 0) {
		pCVar1 = (CollectionInstance *)VirtualPool::AllocateMemory(0x10);
		if (pCVar1 != (CollectionInstance *)0x0) {
		pCVar1->cnt = 0;
		pCVar1->capacity = cnt;
		pCVar1->expansion = cnt;
		ppIVar1 = (Instance **)VirtualPool::AllocateMemory(cnt * 4);
		pCVar1->list = ppIVar1;
		this->collectionPtr = pCVar1;
		return;
		}
		this->collectionPtr = (CollectionInstance *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void CollectionInstanceWrapper::Add(Instance* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionInstanceWrapper::Add(CollectionInstanceWrapper *this,Instance *element){
		CollectionInstance *collection;
		Instance **initialList;
		if (this->collectionPtr == (CollectionInstance *)0x0) {
		collection = (CollectionInstance *)VirtualPool::AllocateMemory(0x10);
		if (collection != (CollectionInstance *)0x0) {
		collection->cnt = 0;
		collection->capacity = 10;
		collection->expansion = 10;
		initialList = (Instance **)VirtualPool::AllocateMemory(0x28);
		collection->list = initialList;
		this->collectionPtr = collection;
		CollectionInstance::Add(this->collectionPtr,element);
		return;
		}
		this->collectionPtr = (CollectionInstance *)0x0;
		}
		CollectionInstance::Add(this->collectionPtr,element);
		return;
		}
		
	*/
	return;
}

