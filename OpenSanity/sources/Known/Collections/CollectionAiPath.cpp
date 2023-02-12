#include "headers/Known/Collections/CollectionAiPath.h"

#include "headers/Known/GameData/AiPath/AiPath.h"
int CollectionAiPath::Add(AiPath* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall CollectionAiPath::Add(CollectionAiPath *this,AiPath *param_1){
		AiPath **ppAVar1;
		uint uVar2;
		int iVar3;
		if (this->cnt == this->capacity) {
		iVar3 = this->expansion + this->capacity;
		ppAVar1 = (AiPath **)VirtualPool::AllocateMemory(iVar3 * 4);
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
		this->list[this->cnt] = param_1;
		iVar3 = this->cnt;
		this->cnt = iVar3 + 1;
		return iVar3;
		}
		
	*/
	return 0;
}

