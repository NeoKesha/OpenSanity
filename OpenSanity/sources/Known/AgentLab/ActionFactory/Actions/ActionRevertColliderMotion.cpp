#include "headers/Known/AgentLab/ActionFactory/Actions/ActionRevertColliderMotion.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionRevertColliderMotion::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionRevertColliderMotion::Dispose(ActionRevertColliderMotion *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionRevertColliderMotion::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionRevertColliderMotion::Construct(ActionRevertColliderMotion *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_RevertColliderMotion;
		return;
		}
		
	*/
	return;
}

int ActionRevertColliderMotion::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionRevertColliderMotion::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionRevertColliderMotion::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionRevertColliderMotion::ExecuteFromCallContext(ActionRevertColliderMotion *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		uint *puVar1;
		puVar1 = &(((ctx->parent).ctx)->nodes).array[0x11][5].field6_0x14;
		*puVar1 = *puVar1 & 0xfcffffff;
		return;
		}
		
	*/
	return;
}

