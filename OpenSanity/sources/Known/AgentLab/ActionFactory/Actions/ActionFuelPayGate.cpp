#include "headers/Known/AgentLab/ActionFactory/Actions/ActionFuelPayGate.h"

void ActionFuelPayGate::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionFuelPayGate::Dispose(ActionFuelPayGate *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionFuelPayGate::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionFuelPayGate::Construct(ActionFuelPayGate *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_FuelPayGate;
		return;
		}
		
	*/
	return;
}

int ActionFuelPayGate::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionFuelPayGate::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionFuelPayGate::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionFuelPayGate::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void ActionFuelPayGate::EmptyFunction_4() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionFuelPayGate::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

