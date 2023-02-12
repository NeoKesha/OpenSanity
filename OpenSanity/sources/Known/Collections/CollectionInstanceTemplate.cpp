#include "headers/Known/Collections/CollectionInstanceTemplate.h"

#include "headers/Known/GameData/InstranceTemplate/InstanceTemplate.h"
int CollectionInstanceTemplate::Add(InstanceTemplate* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall CollectionInstanceTemplate::Add(CollectionInstanceTemplate *this,InstanceTemplate *element){
		InstanceTemplate **newList;
		uint uVar1;
		int newCapacity;
		if (this->cnt == this->capacity) {
		newCapacity = this->expansion + this->capacity;
		newList = (InstanceTemplate **)VirtualPool::AllocateMemory(newCapacity * 4);
		uVar1 = 0;
		if (this->cnt != 0) {
		do {
		newList[uVar1] = this->list[uVar1];
		uVar1 = uVar1 + 1;
		}
		 while (uVar1 < (uint)this->cnt);
		}
		VirtualPool::FreeMemory(this->list);
		this->capacity = newCapacity;
		this->list = newList;
		}
		this->list[this->cnt] = element;
		newCapacity = this->cnt;
		this->cnt = newCapacity + 1;
		return newCapacity;
		}
		
	*/
	return 0;
}

