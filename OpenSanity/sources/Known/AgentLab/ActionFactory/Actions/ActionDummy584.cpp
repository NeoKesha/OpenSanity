#include "headers/Known/AgentLab/ActionFactory/Actions/ActionDummy584.h"

void ActionDummy584::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionDummy584::Dispose(ActionDummy584 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

int ActionDummy584::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionDummy584::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionDummy584::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDummy584::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void ActionDummy584::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionDummy584::Construct(ActionDummy584 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_Dummy584;
		return;
		}
		
	*/
	return;
}

