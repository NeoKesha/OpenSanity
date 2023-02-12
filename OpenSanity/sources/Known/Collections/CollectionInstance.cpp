#include "headers/Known/Collections/CollectionInstance.h"

#include "headers/Known/GameData/Instance/Instance.h"
int CollectionInstance::Add(uint element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall CollectionInstance::Add(CollectionInstance *this,Instance *element){
		Instance **ppIVar1;
		uint uVar2;
		int cnt;
		if (this->cnt == this->capacity) {
		cnt = this->expansion + this->capacity;
		ppIVar1 = (Instance **)VirtualPool::AllocateMemory(cnt * 4);
		uVar2 = 0;
		if (this->cnt != 0) {
		do {
		ppIVar1[uVar2] = this->list[uVar2];
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < (uint)this->cnt);
		}
		VirtualPool::FreeMemory(this->list);
		this->capacity = cnt;
		this->list = ppIVar1;
		}
		this->list[this->cnt] = element;
		cnt = this->cnt;
		this->cnt = cnt + 1;
		return cnt;
		}
		
	*/
	return 0;
}

