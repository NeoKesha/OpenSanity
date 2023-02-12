#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x290.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x290::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x290::Dispose(Action0x290 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x290::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x290::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

int Action0x290::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x290::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x290::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x290::ExecuteFromCallContext(Action0x290 *this,undefined4 time_clock,InstanceContext *ctx){
		int iVar1;
		uint uVar2;
		InstanceNodeInput *pIVar1;
		pIVar1 = (InstanceNodeInput *)(((ctx->parent).ctx)->nodes).array[0xb];
		if ((pIVar1 != (InstanceNodeInput *)0x0) && (*(char *)&(pIVar1->parent).ctx == '\x01')) {
		(**(code **)(**(int **)&(pIVar1->parent).field2_0x8 + 0x5c))();
		iVar1 = *(int *)(*(int *)&(pIVar1->parent).field2_0x8 + 4);
		uVar2 = *(uint *)(iVar1 + 0x14);
		*(uint *)(iVar1 + 0x14) = uVar2 & 0xfffffff7;
		*(uint *)(iVar1 + 0x14) = uVar2 & 0xfffffbf7;
		(**(code **)(**(int **)&(pIVar1->parent).field2_0x8 + 0x5c))();
		*(undefined *)&(pIVar1->parent).time = 0;
		}
		return;
		}
		
	*/
	return;
}

void Action0x290::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x290::Construct(Action0x290 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x290;
		return;
		}
		
	*/
	return;
}

