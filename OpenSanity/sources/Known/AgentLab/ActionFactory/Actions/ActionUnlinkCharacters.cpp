#include "headers/Known/AgentLab/ActionFactory/Actions/ActionUnlinkCharacters.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionUnlinkCharacters::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionUnlinkCharacters::Dispose(ActionUnlinkCharacters *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionUnlinkCharacters::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionUnlinkCharacters::Construct(ActionUnlinkCharacters *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_UnlinkCharacters;
		return;
		}
		
	*/
	return;
}

int ActionUnlinkCharacters::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionUnlinkCharacters::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionUnlinkCharacters::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionUnlinkCharacters::ExecuteFromCallContext(ActionUnlinkCharacters *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		pIVar1 = (((ctx->parent).ctx)->parent).ctx;
		if ((pIVar1 != (InstanceContext *)0x0) && (GameController1 != (GameController *)0x0)) {
		thunk_FUN_000af340((int)pIVar1);
		}
		return;
		}
		
	*/
	return;
}

