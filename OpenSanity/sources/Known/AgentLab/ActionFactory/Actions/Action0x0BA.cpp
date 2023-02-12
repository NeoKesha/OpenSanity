#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0BA.h"

void Action0x0BA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0BA::Dispose(Action0x0BA *this,byte param_1){
		ActionAbstract::CleanUp(&this->field0_0x0);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->field0_0x0;
		}
		
	*/
	return;
}

void Action0x0BA::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0BA::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

int Action0x0BA::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0BA::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x0BA::ExecuteFromCallContext(int time_clock) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0BA::ExecuteFromCallContext(Action0x0BA *this,int time_clock){
		VideoController::FUN_001f2b40(VideoController,time_clock);
		return;
		}
		
	*/
	return;
}

void Action0x0BA::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x0BA::Construct(Action0x0BA *this){
		(this->field0_0x0).nextAction = (ActionAbstract *)0x0;
		(this->field0_0x0).field1_0x4 = 0xffffff;
		(this->field0_0x0).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0BA;
		return;
		}
		
	*/
	return;
}

