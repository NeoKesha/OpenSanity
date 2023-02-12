#include "headers/Known/Builders/UnkBuilder7/SceneryFactory.h"

void SceneryFactory::Dispose(byte flag) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SceneryFactory * __thiscall SceneryFactory::Dispose(SceneryFactory *this,byte flag){
		this->vtable = (SceneryFactory_VTable *)&Builder_VT_Abstract;
		if ((flag & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void* SceneryFactory::BUILD(uint id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * SceneryFactory::BUILD(int id){
		UnkFamily33BA *pUVar1;
		AutoClass1 *pAVar2;
		ChunkList *chunkList;
		UnkFamily33BAA *pUVar3;
		UnkFamily33A *pUVar4;
		AutoClass40 *pAVar5;
		void *pvVar6;
		int *piVar7;
		char *str;
		switch(id) {
		case 0x1600:pUVar1 = (UnkFamily33BA *)VirtualPool::AllocateMemory(0x90);
		if (pUVar1 != (UnkFamily33BA *)0x0) {
		pUVar1 = UnkFamily33BA::Construct(pUVar1);
		return (int *)pUVar1;
		}
		break;
		case 0x1605:case 0x1612:pUVar4 = (UnkFamily33A *)VirtualPool::AllocateMemory(0x60);
		if (pUVar4 != (UnkFamily33A *)0x0) {
		pUVar4 = UnkFamily33A::Construct(pUVar4);
		return (int *)pUVar4;
		}
		break;
		case 0x160a:pUVar3 = (UnkFamily33BAA *)VirtualPool::AllocateMemory(0xa0);
		if (pUVar3 != (UnkFamily33BAA *)0x0) {
		pUVar3 = UnkFamily33BAA::Dispose(pUVar3);
		return (int *)pUVar3;
		}
		break;
		case 0x160f:pvVar6 = VirtualPool::AllocateMemory(0x90);
		if (pvVar6 != (void *)0x0) {
		piVar7 = (int *)::Passthrough(pvVar6);
		return piVar7;
		}
		break;
		case 0x1611:pAVar2 = (AutoClass1 *)VirtualPool::AllocateMemory(0x1f0);
		if (pAVar2 != (AutoClass1 *)0x0) {
		str = (char *)0x0;
		chunkList = ChunkList::GetInstance();
		pAVar2 = AutoClass1::Construct(pAVar2,chunkList,str);
		return (int *)pAVar2;
		}
		return (int *)0x0;
		case 0x1616:pAVar5 = (AutoClass40 *)VirtualPool::AllocateMemory(0x20);
		if (pAVar5 != (AutoClass40 *)0x0) {
		pAVar5 = AutoClass40::Construct(pAVar5);
		return (int *)pAVar5;
		}
		}
		return (int *)0x0;
		}
		
	*/
	return null;
}

void SceneryFactory::Construct(SceneryFactory* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SceneryFactory::Construct(SceneryFactory *param_1){
		param_1->vtable = (SceneryFactory_VTable *)&Builder_VT_Scenery;
		return;
		}
		
	*/
	return;
}

