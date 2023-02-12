#include "headers/Known/AgentLab/ActionFactory/Actions/ActionRestartDefaultBehaviour.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionRestartDefaultBehaviour::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionRestartDefaultBehaviour::Dispose(ActionRestartDefaultBehaviour *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionRestartDefaultBehaviour::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionRestartDefaultBehaviour::Construct(ActionRestartDefaultBehaviour *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_RestartDefaultBehaviour;
		return;
		}
		
	*/
	return;
}

int ActionRestartDefaultBehaviour::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionRestartDefaultBehaviour::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionRestartDefaultBehaviour::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionRestartDefaultBehaviour::ExecuteFromCallContext(ActionRestartDefaultBehaviour *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx,int param_3){
		InstanceContext *this_00;
		float fVar1;
		this_00 = (ctx->parent).ctx;
		fVar1 = (this_00->parent).field14_0x20.matrix2.m42;
		*(byte *)(param_3 + 0x1d) = *(byte *)(param_3 + 0x1d) | 1;
		(*(this_00->parent).vtable[8].Method1)(this_00);
		FUN_001ac9e0((int)fVar1);
		return;
		}
		
	*/
	return;
}

