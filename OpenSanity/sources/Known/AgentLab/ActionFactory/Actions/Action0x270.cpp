#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x270.h"

void Action0x270::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x270::Dispose(Action0x270 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x270::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x270::Construct(Action0x270 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x270;
		return;
		}
		
	*/
	return;
}

int Action0x270::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x270::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x270::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall Action0x270::ExecuteFromCallContext(Action0x270 *this){
		_DAT_003cff84 = 1;
		return;
		}
		
	*/
	return;
}

