#include "headers/Known/Collections/CollectionAiPathWrapper.h"

#include "headers/Known/GameData/AiPath/AiPath.h"
#include "headers/Known/Collections/CollectionAiPath.h"
void CollectionAiPathWrapper::CreateCollection(int cnt) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionAiPathWrapper::CreateCollection(CollectionAiPathWrapper *this,int cnt){
		CollectionAiPath *pCVar1;
		AiPath **ppAVar2;
		if (cnt != 0) {
		pCVar1 = (CollectionAiPath *)VirtualPool::AllocateMemory(0x10);
		if (pCVar1 != (CollectionAiPath *)0x0) {
		pCVar1->cnt = 0;
		pCVar1->capacity = cnt;
		pCVar1->expansion = cnt;
		ppAVar2 = (AiPath **)VirtualPool::AllocateMemory(cnt * 4);
		pCVar1->list = ppAVar2;
		this->collectionPtr = pCVar1;
		return;
		}
		this->collectionPtr = (CollectionAiPath *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void CollectionAiPathWrapper::Add(AiPath* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionAiPathWrapper::Add(CollectionAiPathWrapper *this,AiPath *param_1){
		CollectionAiPath *pCVar1;
		AiPath **ppAVar2;
		if (this->collectionPtr == (CollectionAiPath *)0x0) {
		pCVar1 = (CollectionAiPath *)VirtualPool::AllocateMemory(0x10);
		if (pCVar1 != (CollectionAiPath *)0x0) {
		pCVar1->cnt = 0;
		pCVar1->capacity = (int)&DAT_0000000a;
		pCVar1->expansion = (int)&DAT_0000000a;
		ppAVar2 = (AiPath **)VirtualPool::AllocateMemory(0x28);
		pCVar1->list = ppAVar2;
		this->collectionPtr = pCVar1;
		CollectionAiPath::Add(this->collectionPtr,param_1);
		return;
		}
		this->collectionPtr = (CollectionAiPath *)0x0;
		}
		CollectionAiPath::Add(this->collectionPtr,param_1);
		return;
		}
		
	*/
	return;
}

