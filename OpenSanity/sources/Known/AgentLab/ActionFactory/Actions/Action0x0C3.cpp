#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0C3.h"

void Action0x0C3::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0C3::Dispose(Action0x0C3 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0C3::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0C3::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

int Action0x0C3::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0C3::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x0C3::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0C3::ExecuteFromCallContext(void){
		VideoController::FUN_001f5be0(VideoController);
		return;
		}
		
	*/
	return;
}

void Action0x0C3::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x0C3::Construct(Action0x0C3 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0C3;
		return;
		}
		
	*/
	return;
}

