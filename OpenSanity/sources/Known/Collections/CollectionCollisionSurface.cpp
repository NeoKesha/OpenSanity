#include "headers/Known/Collections/CollectionCollisionSurface.h"

#include "headers/Known/GameData/CollisionSurface/CollisionSurface.h"
void* CollectionCollisionSurface::Add(CollisionSurface* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void * __thiscall CollectionCollisionSurface::Add(CollectionCollisionSurface *this,CollisionSurface *element){
		void *pvVar1;
		CollisionSurface **ppCVar2;
		uint uVar3;
		int iVar4;
		if (this->cnt == this->capacity) {
		iVar4 = this->expansion + this->capacity;
		ppCVar2 = (CollisionSurface **)VirtualPool::AllocateMemory(iVar4 * 4);
		uVar3 = 0;
		if (this->cnt != 0) {
		do {
		ppCVar2[uVar3] = this->list[uVar3];
		uVar3 = uVar3 + 1;
		}
		 while (uVar3 < (uint)this->cnt);
		}
		VirtualPool::FreeMemory(this->list);
		this->capacity = iVar4;
		this->list = ppCVar2;
		}
		this->list[this->cnt] = element;
		pvVar1 = (void *)this->cnt;
		this->cnt = (int)pvVar1 + 1;
		return pvVar1;
		}
		
	*/
	return null;
}

