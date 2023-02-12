#include "headers/Known/AgentLab/ActionFactory/Actions/ActionPickUpWumpa.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionPickUpWumpa::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionPickUpWumpa::Dispose(ActionPickUpWumpa *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionPickUpWumpa::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionPickUpWumpa::ExecuteFromCallContext(ActionPickUpWumpa *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

int ActionPickUpWumpa::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int ActionPickUpWumpa::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionPickUpWumpa::Execute(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionPickUpWumpa::Execute(ActionPickUpWumpa *this,InstanceContext *ctx){
		uint uVar1;
		InstanceNodeI *nodeProjectile;
		InstanceNodeCrate *nodeCrate;
		uint uVar2;
		int iVar3;
		NodeRelated1D *pNVar1;
		GameController *gameController;
		InstanceDataList *nodeList;
		nodeList = &((ctx->parent).ctx)->nodes;
		nodeProjectile = (InstanceNodeI *)InstanceDataList::GetNode(nodeList,Projectile);
		gameController = GameController1;
		if (nodeProjectile == (InstanceNodeI *)0x0) {
		nodeCrate = (InstanceNodeCrate *)InstanceDataList::GetNode(nodeList,Crate);
		if (nodeCrate != (InstanceNodeCrate *)0x0) {
		pNVar1 = (NodeRelated1D *)(nodeCrate->field1_0x18->parent).related;
		uVar1 = pNVar1->wumpaRelated;
		uVar2 = uVar1 >> 2 & 0xff;
		if (uVar2 < (uint)this->wumpaAmount) {
		iVar3 = 0;
		}
		else {
		iVar3 = uVar2 - this->wumpaAmount;
		}
		pNVar1->wumpaRelated = (iVar3 * 4 ^ uVar1) & 0x3fc ^ uVar1;
		}
		}
		*(char *)((int)&(gameController->oleg).field1_0x310 + 1) =*(char *)((int)&(gameController->oleg).field1_0x310 + 1) + *(char *)&this->wumpaAmount;
		return;
		}
		
	*/
	return;
}

void ActionPickUpWumpa::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionPickUpWumpa::UnkMethod(ActionPickUpWumpa *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x200) {
		this->wumpaAmount = *(int *)(psVar2 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

ActionPickUpWumpa* ActionPickUpWumpa::Contrust() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionPickUpWumpa * __fastcall ActionPickUpWumpa::Contrust(ActionPickUpWumpa *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_PickUpWumpa;
		this->wumpaAmount = 1;
		return this;
		}
		
	*/
	return null;
}

