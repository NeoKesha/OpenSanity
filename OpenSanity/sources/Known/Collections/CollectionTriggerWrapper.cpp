#include "headers/Known/Collections/CollectionTriggerWrapper.h"

#include "headers/Known/Collections/CollectionTrigger.h"
#include "headers/Known/GameData/Trigger/Trigger.h"
void CollectionTriggerWrapper::CreateCollection(int cnt) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionTriggerWrapper::CreateCollection(CollectionTriggerWrapper *this,int cnt){
		CollectionTrigger *pCVar1;
		Trigger **ppTVar2;
		if (cnt != 0) {
		pCVar1 = (CollectionTrigger *)VirtualPool::AllocateMemory(0x10);
		if (pCVar1 != (CollectionTrigger *)0x0) {
		pCVar1->cnt = 0;
		pCVar1->capacity = cnt;
		pCVar1->expansion = cnt;
		ppTVar2 = (Trigger **)VirtualPool::AllocateMemory(cnt * 4);
		pCVar1->list = ppTVar2;
		this->collectionPtr = pCVar1;
		return;
		}
		this->collectionPtr = (CollectionTrigger *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void CollectionTriggerWrapper::Add(Trigger* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionTriggerWrapper::Add(CollectionTriggerWrapper *this,Trigger *element){
		CollectionTrigger *pCVar1;
		Trigger **ppTVar2;
		if (this->collectionPtr == (CollectionTrigger *)0x0) {
		pCVar1 = (CollectionTrigger *)VirtualPool::AllocateMemory(0x10);
		if (pCVar1 != (CollectionTrigger *)0x0) {
		pCVar1->cnt = 0;
		pCVar1->capacity = (int)&DAT_0000000a;
		pCVar1->expansion = (int)&DAT_0000000a;
		ppTVar2 = (Trigger **)VirtualPool::AllocateMemory(0x28);
		pCVar1->list = ppTVar2;
		this->collectionPtr = pCVar1;
		CollectionTrigger::Add(this->collectionPtr,element);
		return;
		}
		this->collectionPtr = (CollectionTrigger *)0x0;
		}
		CollectionTrigger::Add(this->collectionPtr,element);
		return;
		}
		
	*/
	return;
}

