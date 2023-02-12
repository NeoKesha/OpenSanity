#include "headers/Known/Collections/CollectionCameraTrigger.h"

#include "headers/Known/GameData/Trigger/Camera.h"
#include "headers/Known/GameData/Trigger/CameraTrigger.h"
int CollectionCameraTrigger::Add(Camera* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall CollectionCameraTrigger::Add(CollectionCameraTrigger *this,Camera *param_1){
		CameraTrigger **ppCVar1;
		uint uVar2;
		int iVar3;
		if (this->cnt == this->capacity) {
		iVar3 = this->expansion + this->capacity;
		ppCVar1 = (CameraTrigger **)VirtualPool::AllocateMemory(iVar3 * 4);
		uVar2 = 0;
		if (this->cnt != 0) {
		do {
		ppCVar1[uVar2] = this->list[uVar2];
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < (uint)this->cnt);
		}
		VirtualPool::FreeMemory(this->list);
		this->capacity = iVar3;
		this->list = ppCVar1;
		}
		this->list[this->cnt] = (CameraTrigger *)param_1;
		iVar3 = this->cnt;
		this->cnt = iVar3 + 1;
		return iVar3;
		}
		
	*/
	return 0;
}

