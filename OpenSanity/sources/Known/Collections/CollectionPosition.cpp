#include "headers/Known/Collections/CollectionPosition.h"

#include "headers/Known/GameData/Position/Position.h"
int CollectionPosition::Add(Position* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall CollectionPosition::Add(CollectionPosition *this,Position *param_1){
		Position **ppPVar1;
		uint uVar2;
		int iVar3;
		if (this->cnt == this->capacity) {
		iVar3 = this->expansion + this->capacity;
		ppPVar1 = (Position **)VirtualPool::AllocateMemory(iVar3 * 4);
		uVar2 = 0;
		if (this->cnt != 0) {
		do {
		ppPVar1[uVar2] = this->list[uVar2];
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < (uint)this->cnt);
		}
		VirtualPool::FreeMemory(this->list);
		this->capacity = iVar3;
		this->list = ppPVar1;
		}
		this->list[this->cnt] = param_1;
		iVar3 = this->cnt;
		this->cnt = iVar3 + 1;
		return iVar3;
		}
		
	*/
	return 0;
}

