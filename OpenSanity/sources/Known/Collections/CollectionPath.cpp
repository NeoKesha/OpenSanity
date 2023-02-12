#include "headers/Known/Collections/CollectionPath.h"

#include "headers/Known/GameData/Path/Path.h"
int CollectionPath::Add(Path* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall CollectionPath::Add(CollectionPath *this,Path *param_1){
		Path **ppPVar1;
		uint uVar2;
		int iVar3;
		if (this->cnt == this->capacity) {
		iVar3 = this->expansion + this->capacity;
		ppPVar1 = (Path **)VirtualPool::AllocateMemory(iVar3 * 4);
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

