#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetVehicleWrestleCreature.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetVehicleWrestleCreature::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetVehicleWrestleCreature::Dispose(ActionSetVehicleWrestleCreature *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetVehicleWrestleCreature::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionSetVehicleWrestleCreature::Construct(ActionSetVehicleWrestleCreature *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetVehicleWrestleCreature;
		return;
		}
		
	*/
	return;
}

void ActionSetVehicleWrestleCreature::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetVehicleWrestleCreature::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

int ActionSetVehicleWrestleCreature::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetVehicleWrestleCreature::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionSetVehicleWrestleCreature::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetVehicleWrestleCreature::ExecuteFromCallContext(ActionSetVehicleWrestleCreature *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		float fVar2;
		InstanceContext *pIVar3;
		NodeRelated2C *this_00;
		InstanceNodeAbstract *pIVar4;
		pIVar1 = (ctx->parent).ctx;
		fVar2 = (pIVar1->parent).field14_0x20.matrix2.m43;
		if ((((uint)fVar2 & 1) != 0) &&(pIVar3 = (pIVar1->parent).field14_0x20.field4_0x10, pIVar3 != (InstanceContext *)0x0)) {
		if ((*(byte *)&(pIVar3->parent).flags & 1) != 0) {
		(pIVar1->parent).field14_0x20.field4_0x10 = (InstanceContext *)0x0;
		(pIVar1->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar2 & 0xfffffffc);
		return;
		}
		pIVar4 = InstanceDataList::GetNode(&((pIVar1->parent).ctx)->nodes,Character);
		if (pIVar4 != (InstanceNodeAbstract *)0x0) {
		this_00 = (NodeRelated2C *)pIVar4[1].vtable;
		pIVar4 = InstanceDataList::GetNode(&pIVar3->nodes,Creature);
		if (pIVar4 != (InstanceNodeAbstract *)0x0) {
		NodeRelated2C::thunk_FUN_00074060(this_00,6,(int)pIVar4[1].vtable,0);
		}
		}
		}
		return;
		}
		
	*/
	return;
}

