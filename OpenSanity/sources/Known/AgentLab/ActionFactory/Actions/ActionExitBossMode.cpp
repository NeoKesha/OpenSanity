#include "headers/Known/AgentLab/ActionFactory/Actions/ActionExitBossMode.h"

void ActionExitBossMode::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionExitBossMode::Dispose(ActionExitBossMode *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionExitBossMode::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionExitBossMode::Construct(ActionExitBossMode *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_BossModeEnd;
		return;
		}
		
	*/
	return;
}

int ActionExitBossMode::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionExitBossMode::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionExitBossMode::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionExitBossMode::ExecuteFromCallContext(ActionExitBossMode *this){
		GameController::BossModeEnd(GameController1);
		return;
		}
		
	*/
	return;
}

