#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetHitPoints.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetHitPoints::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetHitPoints::Dispose(ActionSetHitPoints *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetHitPoints::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetHitPoints::ExecuteFromCallContext(ActionSetHitPoints *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceDataList *this_00;
		NodeRelated2C *pNVar1;
		uint uVar2;
		InstanceNodeCharacter *nodeC;
		InstanceNodeCreature *nodeE;
		NodeRelated1C *pNVar3;
		NodeRelated1E *pNVar2;
		this_00 = &((((ctx->parent).ctx)->parent).ctx)->nodes;
		nodeC = (InstanceNodeCharacter *)InstanceDataList::GetNode(this_00,Character);
		if (nodeC == (InstanceNodeCharacter *)0x0) {
		nodeE = (InstanceNodeCreature *)InstanceDataList::GetNode(this_00,Creature);
		if (nodeE != (InstanceNodeCreature *)0x0) {
		pNVar2 = (NodeRelated1E *)(nodeE->field1_0x18->parent).related;
		pNVar2->field1_0x14 =pNVar2->field1_0x14 ^ (this->unlabelled12 << 6 ^ pNVar2->field1_0x14) & 0x3fc0U;
		}
		}
		else {
		pNVar1 = nodeC->field1_0x18;
		pNVar3 = (NodeRelated1C *)(pNVar1->parent).parent.related;
		uVar2 = (pNVar3->parent).field1_0x14;
		(pNVar3->parent).field1_0x14 = uVar2 ^ (this->unlabelled12 << 6 ^ uVar2) & 0x3fc0;
		if (0 < this->unlabelled12) {
		pNVar1->field1_0x70 = pNVar1->field1_0x70 & 0xffffbfff;
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

int ActionSetHitPoints::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetHitPoints::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionSetHitPoints::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionSetHitPoints::Construct(ActionSetHitPoints *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetHitPoints;
		this->unlabelled12 = 0;
		return;
		}
		
	*/
	return;
}

