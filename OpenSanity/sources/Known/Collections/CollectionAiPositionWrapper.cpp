#include "headers/Known/Collections/CollectionAiPositionWrapper.h"

#include "headers/Known/Collections/CollectionAiPosition.h"
#include "headers/Known/GameData/AiPosition/AiPosition.h"
void CollectionAiPositionWrapper::CreateCollection(int cnt) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionAiPositionWrapper::CreateCollection(CollectionAiPositionWrapper *this,int cnt){
		CollectionAiPosition *pCVar1;
		AiPosition **ppAVar1;
		if (cnt != 0) {
		pCVar1 = (CollectionAiPosition *)VirtualPool::AllocateMemory(0x10);
		if (pCVar1 != (CollectionAiPosition *)0x0) {
		pCVar1->cnt = 0;
		pCVar1->capacity = cnt;
		pCVar1->expansion = cnt;
		ppAVar1 = (AiPosition **)VirtualPool::AllocateMemory(cnt * 4);
		pCVar1->list = ppAVar1;
		this->collectionPtr = pCVar1;
		return;
		}
		this->collectionPtr = (CollectionAiPosition *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void CollectionAiPositionWrapper::Add(AiPosition* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionAiPositionWrapper::Add(CollectionAiPositionWrapper *this,AiPosition *element){
		CollectionAiPosition *pCVar1;
		AiPosition **ppAVar2;
		if (this->collectionPtr == (CollectionAiPosition *)0x0) {
		pCVar1 = (CollectionAiPosition *)VirtualPool::AllocateMemory(0x10);
		if (pCVar1 != (CollectionAiPosition *)0x0) {
		pCVar1->cnt = 0;
		pCVar1->capacity = (int)&DAT_0000000a;
		pCVar1->expansion = (int)&DAT_0000000a;
		ppAVar2 = (AiPosition **)VirtualPool::AllocateMemory(0x28);
		pCVar1->list = ppAVar2;
		this->collectionPtr = pCVar1;
		CollectionAiPosition::Add(this->collectionPtr,element);
		return;
		}
		this->collectionPtr = (CollectionAiPosition *)0x0;
		}
		CollectionAiPosition::Add(this->collectionPtr,element);
		return;
		}
		
	*/
	return;
}

