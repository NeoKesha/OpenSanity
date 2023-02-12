#include "headers/Known/AgentLab/ActionFactory/Actions/ActionShowBottomText.h"

void ActionShowBottomText::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionShowBottomText::Dispose(ActionShowBottomText *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionShowBottomText::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionShowBottomText * __fastcall ActionShowBottomText::Construct(ActionShowBottomText *this){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_BottomTextShow;
		this->unlabelled12 = fVar1;
		return this;
		}
		
	*/
	return;
}

int ActionShowBottomText::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionShowBottomText::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionShowBottomText::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionShowBottomText::ExecuteFromCallContext(ActionShowBottomText *this){
		GameController::BottomTextShow(GameController1,(float)(int)(this->unlabelled12 * TicksPerTime));
		return;
		}
		
	*/
	return;
}

