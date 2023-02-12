#include "headers/Known/Collections/CollectionTrigger.h"

#include "headers/Known/GameData/Trigger/Trigger.h"
int CollectionTrigger::Add(Trigger* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall CollectionTrigger::Add(CollectionTrigger *this,Trigger *param_1){
		Trigger **ppTVar1;
		uint uVar2;
		int iVar3;
		if (this->cnt == this->capacity) {
		iVar3 = this->expansion + this->capacity;
		ppTVar1 = (Trigger **)VirtualPool::AllocateMemory(iVar3 * 4);
		uVar2 = 0;
		if (this->cnt != 0) {
		do {
		ppTVar1[uVar2] = this->list[uVar2];
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < (uint)this->cnt);
		}
		VirtualPool::FreeMemory(this->list);
		this->capacity = iVar3;
		this->list = ppTVar1;
		}
		this->list[this->cnt] = param_1;
		iVar3 = this->cnt;
		this->cnt = iVar3 + 1;
		return iVar3;
		}
		
	*/
	return 0;
}

