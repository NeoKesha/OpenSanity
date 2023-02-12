#include "headers/Known/Collections/CollectionCameraTriggerWrapper.h"

#include "headers/Known/Collections/CollectionCameraTrigger.h"
#include "headers/Known/GameData/Trigger/CameraTrigger.h"
void CollectionCameraTriggerWrapper::CreateCollection(int cnt) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionCameraTriggerWrapper::CreateCollection(CollectionCameraTriggerWrapper *this,int cnt){
		CollectionCameraTrigger *pCVar1;
		CameraTrigger **ppCVar2;
		if (cnt != 0) {
		pCVar1 = (CollectionCameraTrigger *)VirtualPool::AllocateMemory(0x10);
		if (pCVar1 != (CollectionCameraTrigger *)0x0) {
		pCVar1->cnt = 0;
		pCVar1->capacity = cnt;
		pCVar1->expansion = cnt;
		ppCVar2 = (CameraTrigger **)VirtualPool::AllocateMemory(cnt * 4);
		pCVar1->list = ppCVar2;
		this->collectionPtr = pCVar1;
		return;
		}
		this->collectionPtr = (CollectionCameraTrigger *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void CollectionCameraTriggerWrapper::Add(CameraTrigger* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionCameraTriggerWrapper::Add(CollectionCameraTriggerWrapper *this,CameraTrigger *element){
		CollectionCameraTrigger *pCVar1;
		CameraTrigger **ppCVar2;
		if (this->collectionPtr == (CollectionCameraTrigger *)0x0) {
		pCVar1 = (CollectionCameraTrigger *)VirtualPool::AllocateMemory(0x10);
		if (pCVar1 != (CollectionCameraTrigger *)0x0) {
		pCVar1->cnt = 0;
		pCVar1->capacity = (int)&DAT_0000000a;
		pCVar1->expansion = (int)&DAT_0000000a;
		ppCVar2 = (CameraTrigger **)VirtualPool::AllocateMemory(0x28);
		pCVar1->list = ppCVar2;
		this->collectionPtr = pCVar1;
		CollectionCameraTrigger::Add(this->collectionPtr,(Camera *)element);
		return;
		}
		this->collectionPtr = (CollectionCameraTrigger *)0x0;
		}
		CollectionCameraTrigger::Add(this->collectionPtr,(Camera *)element);
		return;
		}
		
	*/
	return;
}

