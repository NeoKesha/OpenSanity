#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0B5.h"

void Action0x0B5::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0B5::Dispose(Action0x0B5 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0B5::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0B5::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void Action0x0B5::ExecuteFromCallContext(int time_clock) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0B5::ExecuteFromCallContext(Action0x0B5 *this,int time_clock){
		VideoController::FUN_001f5000(VideoController,time_clock);
		return;
		}
		
	*/
	return;
}

int Action0x0B5::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0B5::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x0B5::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x0B5::Construct(Action0x0B5 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0B5;
		return;
		}
		
	*/
	return;
}

