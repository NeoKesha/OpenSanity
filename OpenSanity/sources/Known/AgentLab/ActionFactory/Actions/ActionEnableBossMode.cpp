#include "headers/Known/AgentLab/ActionFactory/Actions/ActionEnableBossMode.h"

void ActionEnableBossMode::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionEnableBossMode * __fastcall ActionEnableBossMode::Construct(ActionEnableBossMode *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_BossModeEnable;
		this->unlabelled12 = -1;
		FUN_001803a0(&this->unlabelled16,0);
		this->unlabelled20 = (int)FLOAT_0038639c;
		return this;
		}
		
	*/
	return;
}

void ActionEnableBossMode::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionEnableBossMode::Dispose(ActionEnableBossMode *this,byte param_1){
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

int ActionEnableBossMode::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionEnableBossMode::GetSize(void){
		return 0x18;
		}
		
	*/
	return 0;
}

void ActionEnableBossMode::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionEnableBossMode::UnkMethod(ActionEnableBossMode *this,int *param_1){
		short sVar1;
		char cVar2;
		short *this_00;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		this_00 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		sVar1 = *this_00;
		if (sVar1 == 0x11) {
		this->unlabelled12 = *(int *)(this_00 + 2);
		}
		else if (sVar1 == 0xe6) {
		this->unlabelled20 = *(int *)(this_00 + 2);
		}
		else if (sVar1 == 0x204) {
		FUN_00180840(this_00,(US002 *)&this->unlabelled16);
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

