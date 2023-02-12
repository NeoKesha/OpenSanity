#include "headers/Known/Collections/CollectionAiPosition.h"

#include "headers/Known/GameData/AiPosition/AiPosition.h"
int CollectionAiPosition::Add(AiPosition* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall CollectionAiPosition::Add(CollectionAiPosition *this,AiPosition *element){
		AiPosition **ppAVar1;
		uint uVar2;
		int iVar3;
		if (this->cnt == this->capacity) {
		iVar3 = this->expansion + this->capacity;
		ppAVar1 = (AiPosition **)VirtualPool::AllocateMemory(iVar3 * 4);
		uVar2 = 0;
		if (this->cnt != 0) {
		do {
		ppAVar1[uVar2] = this->list[uVar2];
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < (uint)this->cnt);
		}
		VirtualPool::FreeMemory(this->list);
		this->capacity = iVar3;
		this->list = ppAVar1;
		}
		this->list[this->cnt] = element;
		iVar3 = this->cnt;
		this->cnt = iVar3 + 1;
		return iVar3;
		}
		
	*/
	return 0;
}

