#include "headers/Known/AgentLab/ActionFactory/Actions/ActionEndWhackaworm.h"

void ActionEndWhackaworm::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionEndWhackaworm::Dispose(ActionEndWhackaworm *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionEndWhackaworm::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionEndWhackaworm::ExecuteFromCallContext(ActionEndWhackaworm *this){
		GameController::WhackawormEnd(GameController1);
		return;
		}
		
	*/
	return;
}

void ActionEndWhackaworm::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionEndWhackaworm::Construct(ActionEndWhackaworm *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_WhackawormEnd;
		return;
		}
		
	*/
	return;
}

int ActionEndWhackaworm::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionEndWhackaworm::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

