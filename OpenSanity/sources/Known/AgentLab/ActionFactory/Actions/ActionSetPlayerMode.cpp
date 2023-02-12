#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetPlayerMode.h"

void ActionSetPlayerMode::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetPlayerMode::Dispose(ActionSetPlayerMode *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetPlayerMode::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetPlayerMode * __fastcall ActionSetPlayerMode::Construct(ActionSetPlayerMode *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		this->unlabelled12 = 0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetPlayerMode;
		this->unlabelled16 = 6;
		this->unlabelled20 = 6;
		return this;
		}
		
	*/
	return;
}

int ActionSetPlayerMode::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetPlayerMode::GetSize(void){
		return 0x18;
		}
		
	*/
	return 0;
}

void ActionSetPlayerMode::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetPlayerMode::ExecuteFromCallContext(ActionSetPlayerMode *this){
		uint *puVar1;
		uint uVar2;
		puVar1 = &(GameController1->chunkDescriptor).flags;
		uVar2 = *puVar1 ^ (this->unlabelled12 << 4 ^ *puVar1) & 0xf0;
		*puVar1 = uVar2;
		uVar2 = (this->unlabelled16 << 8 ^ uVar2) & 0xf00 ^ uVar2;
		*puVar1 = uVar2;
		*puVar1 = (this->unlabelled20 << 0xc ^ uVar2) & 0xf000 ^ uVar2;
		return;
		}
		
	*/
	return;
}

