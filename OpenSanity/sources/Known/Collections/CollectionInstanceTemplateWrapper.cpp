#include "headers/Known/Collections/CollectionInstanceTemplateWrapper.h"

#include "headers/Known/Collections/CollectionInstanceTemplate.h"
#include "headers/Known/GameData/InstranceTemplate/InstanceTemplate.h"
void CollectionInstanceTemplateWrapper::CreateCollection(int cnt) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionInstanceTemplateWrapper::CreateCollection(CollectionInstanceTemplateWrapper *this,int cnt){
		CollectionInstanceTemplate *pCVar1;
		InstanceTemplate **ppIVar1;
		if (cnt != 0) {
		pCVar1 = (CollectionInstanceTemplate *)VirtualPool::AllocateMemory(0x10);
		if (pCVar1 != (CollectionInstanceTemplate *)0x0) {
		pCVar1->cnt = 0;
		pCVar1->capacity = cnt;
		pCVar1->expansion = cnt;
		ppIVar1 = (InstanceTemplate **)VirtualPool::AllocateMemory(cnt * 4);
		pCVar1->list = ppIVar1;
		this->collectionPtr = pCVar1;
		return;
		}
		this->collectionPtr = (CollectionInstanceTemplate *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void CollectionInstanceTemplateWrapper::AddElement(InstanceTemplate* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionInstanceTemplateWrapper::AddElement(CollectionInstanceTemplateWrapper *this,InstanceTemplate *element){
		CollectionInstanceTemplate *collection;
		InstanceTemplate **initialPool;
		if (this->collectionPtr == (CollectionInstanceTemplate *)0x0) {
		collection = (CollectionInstanceTemplate *)VirtualPool::AllocateMemory(0x10);
		if (collection != (CollectionInstanceTemplate *)0x0) {
		collection->cnt = 0;
		collection->capacity = 10;
		collection->expansion = 10;
		initialPool = (InstanceTemplate **)VirtualPool::AllocateMemory(0x28);
		collection->list = initialPool;
		this->collectionPtr = collection;
		CollectionInstanceTemplate::Add(this->collectionPtr,element);
		return;
		}
		this->collectionPtr = (CollectionInstanceTemplate *)0x0;
		}
		CollectionInstanceTemplate::Add(this->collectionPtr,element);
		return;
		}
		
	*/
	return;
}

