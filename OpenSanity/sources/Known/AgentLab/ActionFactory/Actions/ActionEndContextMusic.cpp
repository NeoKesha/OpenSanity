#include "headers/Known/AgentLab/ActionFactory/Actions/ActionEndContextMusic.h"

void ActionEndContextMusic::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionEndContextMusic::Dispose(ActionEndContextMusic *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionEndContextMusic::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionEndContextMusic * __fastcall ActionEndContextMusic::Construct(ActionEndContextMusic *this){
		float fVar1;
		fVar1 = FLOAT_003865d0;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_EndContextMusic;
		this->unlabelled12 = (int)fVar1;
		return this;
		}
		
	*/
	return;
}

int ActionEndContextMusic::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionEndContextMusic::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionEndContextMusic::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionEndContextMusic::UnkMethod(ActionEndContextMusic *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x14) {
		this->unlabelled12 = *(int *)(psVar2 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionEndContextMusic::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionEndContextMusic::ExecuteFromCallContext(ActionEndContextMusic *this){
		FUN_001307f0(1,(float)this->unlabelled12);
		return;
		}
		
	*/
	return;
}

