#include "headers/Known/AgentLab/ActionFactory/Actions/ActionPlayCredits.h"

void ActionPlayCredits::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionPlayCredits::Dispose(ActionPlayCredits *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionPlayCredits::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionPlayCredits::Construct(ActionPlayCredits *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_PlayCredits;
		return;
		}
		
	*/
	return;
}

int ActionPlayCredits::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionPlayCredits::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionPlayCredits::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionPlayCredits::ExecuteFromCallContext(ActionPlayCredits *this){
		GameController::PlayCredits(GameController1);
		return;
		}
		
	*/
	return;
}

