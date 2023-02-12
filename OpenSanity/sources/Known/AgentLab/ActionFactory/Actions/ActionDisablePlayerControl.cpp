#include "headers/Known/AgentLab/ActionFactory/Actions/ActionDisablePlayerControl.h"

void ActionDisablePlayerControl::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionDisablePlayerControl::Dispose(ActionDisablePlayerControl *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionDisablePlayerControl::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDisablePlayerControl::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

int ActionDisablePlayerControl::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionDisablePlayerControl::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionDisablePlayerControl::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDisablePlayerControl::ExecuteFromCallContext(ActionDisablePlayerControl *this){
		thunk_FUN_000bab50(GameController1,'\0');
		return;
		}
		
	*/
	return;
}

void ActionDisablePlayerControl::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionDisablePlayerControl::Construct(ActionDisablePlayerControl *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_DisablePlayerControl;
		return;
		}
		
	*/
	return;
}

