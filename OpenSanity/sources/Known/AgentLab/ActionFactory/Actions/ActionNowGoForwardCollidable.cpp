#include "headers/Known/AgentLab/ActionFactory/Actions/ActionNowGoForwardCollidable.h"

void ActionNowGoForwardCollidable::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionNowGoForwardCollidable::Dispose(ActionNowGoForwardCollidable *this,byte param_1){
		::EmptyFunction();
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionNowGoForwardCollidable::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionNowGoForwardCollidable::Construct(ActionNowGoForwardCollidable *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_NowGoForwardCollidable;
		this->unlabelled12 = 0;
		return;
		}
		
	*/
	return;
}

int ActionNowGoForwardCollidable::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionNowGoForwardCollidable::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionNowGoForwardCollidable::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionNowGoForwardCollidable::UnkMethod(ActionNowGoForwardCollidable *this,int *param_1){
		FUN_00181a50(param_1,(uint *)&this->unlabelled12);
		return;
		}
		
	*/
	return;
}

void ActionNowGoForwardCollidable::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionNowGoForwardCollidable::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

