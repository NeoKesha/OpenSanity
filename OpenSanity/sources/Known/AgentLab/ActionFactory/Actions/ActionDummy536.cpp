#include "headers/Known/AgentLab/ActionFactory/Actions/ActionDummy536.h"

void ActionDummy536::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionDummy536::Dispose(ActionDummy536 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionDummy536::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionDummy536 * __fastcall ActionDummy536::Construct(ActionDummy536 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		*(undefined2 *)&this->unlabelled12 = 0;
		*(undefined2 *)((int)&this->unlabelled12 + 2) = 0;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_Dummy536;
		return this;
		}
		
	*/
	return;
}

int ActionDummy536::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionDummy536::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionDummy536::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDummy536::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void ActionDummy536::EmptyFunction_4() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDummy536::EmptyFunction(ActionDummy536 *this){
		return;
		}
		
	*/
	return;
}

