#include "headers/Known/AgentLab/ActionFactory/Actions/ActionReduceHitPoints.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionReduceHitPoints::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionReduceHitPoints::Dispose(ActionReduceHitPoints *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionReduceHitPoints::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionReduceHitPoints::ExecuteFromCallContext(ActionReduceHitPoints *this,undefined4 time_clock,InstanceContext *ctx){
		uint uVar1;
		InstanceNodeCreature *pIVar3;
		int iVar2;
		NodeRelated1E *pNVar1;
		pIVar3 = (InstanceNodeCreature *)InstanceDataList::GetNode(&((((ctx->parent).ctx)->parent).ctx)->nodes,Creature);
		pNVar1 = (NodeRelated1E *)(pIVar3->field1_0x18->parent).related;
		uVar1 = pNVar1->field1_0x14;
		iVar2 = (uVar1 >> 6 & 0xff) - this->unlabelled12;
		if (iVar2 < 0) {
		iVar2 = 0;
		}
		pNVar1->field1_0x14 = (iVar2 << 6 ^ uVar1) & 0x3fc0 ^ uVar1;
		return;
		}
		
	*/
	return;
}

int ActionReduceHitPoints::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionReduceHitPoints::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionReduceHitPoints::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionReduceHitPoints::Construct(ActionReduceHitPoints *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ReduceHitPoints;
		this->unlabelled12 = 0;
		return;
		}
		
	*/
	return;
}

