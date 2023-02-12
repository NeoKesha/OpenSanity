#include "headers/Known/Collections/CollectionPathWrapper.h"

#include "headers/Known/GameData/Path/Path.h"
#include "headers/Known/Collections/CollectionPath.h"
void CollectionPathWrapper::CreateCollection(int cnt) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionPathWrapper::CreateCollection(CollectionPathWrapper *this,int cnt){
		CollectionPath *pCVar1;
		Path **ppPVar2;
		if (cnt != 0) {
		pCVar1 = (CollectionPath *)VirtualPool::AllocateMemory(0x10);
		if (pCVar1 != (CollectionPath *)0x0) {
		pCVar1->cnt = 0;
		pCVar1->capacity = cnt;
		pCVar1->expansion = cnt;
		ppPVar2 = (Path **)VirtualPool::AllocateMemory(cnt * 4);
		pCVar1->list = ppPVar2;
		this->collectionPtr = pCVar1;
		return;
		}
		this->collectionPtr = (CollectionPath *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void CollectionPathWrapper::Add(Path* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionPathWrapper::Add(CollectionPathWrapper *this,Path *param_1){
		CollectionPath *pCVar1;
		Path **ppPVar2;
		if (this->collectionPtr == (CollectionPath *)0x0) {
		pCVar1 = (CollectionPath *)VirtualPool::AllocateMemory(0x10);
		if (pCVar1 != (CollectionPath *)0x0) {
		pCVar1->cnt = 0;
		pCVar1->capacity = (int)&DAT_0000000a;
		pCVar1->expansion = (int)&DAT_0000000a;
		ppPVar2 = (Path **)VirtualPool::AllocateMemory(0x28);
		pCVar1->list = ppPVar2;
		this->collectionPtr = pCVar1;
		CollectionPath::Add(this->collectionPtr,param_1);
		return;
		}
		this->collectionPtr = (CollectionPath *)0x0;
		}
		CollectionPath::Add(this->collectionPtr,param_1);
		return;
		}
		
	*/
	return;
}

