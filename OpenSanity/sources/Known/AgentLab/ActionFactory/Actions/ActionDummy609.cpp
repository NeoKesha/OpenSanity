#include "headers/Known/AgentLab/ActionFactory/Actions/ActionDummy609.h"

void ActionDummy609::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionDummy609::Dispose(ActionDummy609 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionDummy609::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionDummy609::Construct(ActionDummy609 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_Dummy609;
		return;
		}
		
	*/
	return;
}

int ActionDummy609::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionDummy609::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionDummy609::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDummy609::EmptyFunction(ActionDummy609 *this){
		return;
		}
		
	*/
	return;
}

