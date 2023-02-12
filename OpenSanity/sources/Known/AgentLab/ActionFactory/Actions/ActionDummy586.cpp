#include "headers/Known/AgentLab/ActionFactory/Actions/ActionDummy586.h"

void ActionDummy586::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionDummy586::Dispose(ActionDummy586 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionDummy586::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionDummy586::Construct(ActionDummy586 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_Dummy586;
		*(undefined2 *)&this->unlabelled12 = 0;
		return;
		}
		
	*/
	return;
}

int ActionDummy586::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionDummy586::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionDummy586::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDummy586::UnkMethod(ActionDummy586 *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0xe9) {
		*(short *)&this->unlabelled12 = psVar2[2];
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionDummy586::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDummy586::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

