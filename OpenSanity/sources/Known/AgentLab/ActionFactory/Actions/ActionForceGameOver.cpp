#include "headers/Known/AgentLab/ActionFactory/Actions/ActionForceGameOver.h"

void ActionForceGameOver::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionForceGameOver::Dispose(ActionForceGameOver *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionForceGameOver::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionForceGameOver::Construct(ActionForceGameOver *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ForceGameOver;
		return;
		}
		
	*/
	return;
}

int ActionForceGameOver::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionForceGameOver::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionForceGameOver::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionForceGameOver::ExecuteFromCallContext(ActionForceGameOver *this){
		GameController::ForceGameOver(GameController1);
		return;
		}
		
	*/
	return;
}

