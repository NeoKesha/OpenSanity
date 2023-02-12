#include "headers/Known/AgentLab/ActionFactory/Actions/ActionControllerRumble.h"

void ActionControllerRumble::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionControllerRumble::Dispose(ActionControllerRumble *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionControllerRumble::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionControllerRumble * __fastcall ActionControllerRumble::Construct(ActionControllerRumble *this){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ControllerRumble;
		this->unlabelled12 = fVar1;
		return this;
		}
		
	*/
	return;
}

void ActionControllerRumble::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionControllerRumble::UnkMethod(ActionControllerRumble *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x137) {
		this->unlabelled12 = *(float *)(psVar2 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionControllerRumble::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionControllerRumble::ExecuteFromCallContext(ActionControllerRumble *this){
		FUN_001c72a0(this->unlabelled12);
		return;
		}
		
	*/
	return;
}

int ActionControllerRumble::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionControllerRumble::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

