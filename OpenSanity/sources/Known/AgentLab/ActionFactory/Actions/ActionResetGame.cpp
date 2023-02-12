#include "headers/Known/AgentLab/ActionFactory/Actions/ActionResetGame.h"

void ActionResetGame::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionResetGame::Dispose(ActionResetGame *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionResetGame::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionResetGame::Construct(ActionResetGame *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ResetGame;
		return;
		}
		
	*/
	return;
}

int ActionResetGame::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionResetGame::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionResetGame::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionResetGame::ExecuteFromCallContext(ActionResetGame *this){
		GameController::ResetGame(GameController1);
		return;
		}
		
	*/
	return;
}

