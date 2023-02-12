#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0AF.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0AF::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0AF::Dispose(Action0x0AF *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0AF::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x0AF::Construct(Action0x0AF *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0AF;
		return;
		}
		
	*/
	return;
}

int Action0x0AF::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0AF::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x0AF::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0AF::ExecuteFromCallContext(Action0x0AF *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		int iVar2;
		pIVar1 = (ctx->parent).ctx;
		iVar2 = (pIVar1->parent).field14_0x20.field27_0x78;
		if (iVar2 != 0) {
		(pIVar1->nodes).array[0xc] = *(InstanceNodeAbstract **)(iVar2 + 4);
		}
		return;
		}
		
	*/
	return;
}

