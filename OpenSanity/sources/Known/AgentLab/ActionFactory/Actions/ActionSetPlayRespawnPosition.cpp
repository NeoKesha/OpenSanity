#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetPlayRespawnPosition.h"

void ActionSetPlayRespawnPosition::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetPlayRespawnPosition::Dispose(ActionSetPlayRespawnPosition *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetPlayRespawnPosition::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetPlayRespawnPosition * __fastcall ActionSetPlayRespawnPosition::Construct(ActionSetPlayRespawnPosition *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetPlayRespawnPosition;
		*(undefined *)&this->unlabelled12 = 0;
		*(undefined *)((int)&this->unlabelled12 + 1) = 0;
		return this;
		}
		
	*/
	return;
}

int ActionSetPlayRespawnPosition::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetPlayRespawnPosition::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionSetPlayRespawnPosition::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetPlayRespawnPosition::UnkMethod(ActionSetPlayRespawnPosition *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x205) {
		*(bool *)&this->unlabelled12 = *(int *)(psVar2 + 2) == 0;
		}
		else if (*psVar2 == 0x23b) {
		*(bool *)((int)&this->unlabelled12 + 1) = *(int *)(psVar2 + 2) == 0;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

