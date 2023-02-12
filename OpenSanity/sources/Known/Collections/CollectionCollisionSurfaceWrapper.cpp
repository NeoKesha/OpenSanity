#include "headers/Known/Collections/CollectionCollisionSurfaceWrapper.h"

#include "headers/Known/GameData/CollisionSurface/CollisionSurface.h"
#include "headers/Known/Collections/CollectionCollisionSurface.h"
void CollectionCollisionSurfaceWrapper::CreateCollection(int cnt) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionCollisionSurfaceWrapper::CreateCollection(CollectionCollisionSurfaceWrapper *this,int cnt){
		CollectionCollisionSurface *pCVar1;
		CollisionSurface **ppCVar2;
		if (cnt != 0) {
		pCVar1 = (CollectionCollisionSurface *)VirtualPool::AllocateMemory(0x10);
		if (pCVar1 != (CollectionCollisionSurface *)0x0) {
		pCVar1->cnt = 0;
		pCVar1->capacity = cnt;
		pCVar1->expansion = cnt;
		ppCVar2 = (CollisionSurface **)VirtualPool::AllocateMemory(cnt * 4);
		pCVar1->list = ppCVar2;
		this->collectionPtr = pCVar1;
		return;
		}
		this->collectionPtr = (CollectionCollisionSurface *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void CollectionCollisionSurfaceWrapper::Add(CollisionSurface* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollectionCollisionSurfaceWrapper::Add(CollectionCollisionSurfaceWrapper *this,CollisionSurface *element){
		CollectionCollisionSurface *pCVar1;
		CollisionSurface **ppCVar2;
		if (this->collectionPtr == (CollectionCollisionSurface *)0x0) {
		pCVar1 = (CollectionCollisionSurface *)VirtualPool::AllocateMemory(0x10);
		if (pCVar1 != (CollectionCollisionSurface *)0x0) {
		pCVar1->cnt = 0;
		pCVar1->capacity = (int)&DAT_0000000a;
		pCVar1->expansion = (int)&DAT_0000000a;
		ppCVar2 = (CollisionSurface **)VirtualPool::AllocateMemory(0x28);
		pCVar1->list = ppCVar2;
		this->collectionPtr = pCVar1;
		CollectionCollisionSurface::Add(this->collectionPtr,element);
		return;
		}
		this->collectionPtr = (CollectionCollisionSurface *)0x0;
		}
		CollectionCollisionSurface::Add(this->collectionPtr,element);
		return;
		}
		
	*/
	return;
}

