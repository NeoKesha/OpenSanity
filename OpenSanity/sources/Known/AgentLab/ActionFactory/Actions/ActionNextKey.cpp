#include "headers/Known/AgentLab/ActionFactory/Actions/ActionNextKey.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionNextKey::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionNextKey::Dispose(ActionNextKey *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionNextKey::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionNextKey::Construct(ActionNextKey *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_NextKey;
		return;
		}
		
	*/
	return;
}

int ActionNextKey::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionNextKey::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionNextKey::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionNextKey::ExecuteFromCallContext(ActionNextKey *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		int iVar2;
		pIVar1 = (ctx->parent).ctx;
		iVar2 = (pIVar1->parent).field14_0x20.field27_0x78;
		if (iVar2 != 0) {
		FUN_00186480(*(int *)(iVar2 + 0x124));
		return;
		}
		FUN_00186480((int)(pIVar1->nodes).array[0xf]);
		return;
		}
		
	*/
	return;
}

