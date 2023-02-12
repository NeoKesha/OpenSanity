#include "headers/Known/AgentLab/ActionFactory/Actions/ActionClearBottomText.h"

void ActionClearBottomText::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionClearBottomText::Dispose(ActionClearBottomText *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionClearBottomText::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionClearBottomText::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

int ActionClearBottomText::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionClearBottomText::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionClearBottomText::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionClearBottomText::ExecuteFromCallContext(ActionClearBottomText *this){
		TwinString::Copy(&(GameController1->oleg).screenMessage.message,"");
		return;
		}
		
	*/
	return;
}

void ActionClearBottomText::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionClearBottomText::Construct(ActionClearBottomText *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_BottomTextClear;
		return;
		}
		
	*/
	return;
}

