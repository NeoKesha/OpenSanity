#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetRayTests.h"

void ActionSetRayTests::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetRayTests::Dispose(ActionSetRayTests *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetRayTests::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetRayTests * __fastcall ActionSetRayTests::Construct(ActionSetRayTests *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetRayTests;
		this->unlabelled16 = 0;
		this->unlabelled12 = 0;
		this->unlabelled24 = 0;
		this->unlabelled20 = 0;
		this->unlabelled28 = 0;
		return this;
		}
		
	*/
	return;
}

void ActionSetRayTests::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetRayTests::UnkMethod(ActionSetRayTests *this,int *param_1){
		int iVar1;
		ushort uVar2;
		char cVar3;
		ushort *puVar4;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		while (cVar3 == '\0') {
		puVar4 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		iVar1 = *(int *)(puVar4 + 2);
		uVar2 = *puVar4;
		if (uVar2 < 0x213) {
		if (uVar2 == 0x212) {
		this->unlabelled16 = iVar1;
		}
		else if (uVar2 == 0x57) {
		this->unlabelled28 = iVar1;
		}
		else if (uVar2 == 0x211) {
		this->unlabelled12 = iVar1;
		}
		}
		else if (uVar2 == 0x213) {
		this->unlabelled20 = iVar1;
		}
		else if (uVar2 == 0x214) {
		this->unlabelled24 = iVar1;
		}
		IteratorE2::Iterate(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionSetRayTests::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetRayTests::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

int ActionSetRayTests::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetRayTests::GetSize(void){
		return 0x20;
		}
		
	*/
	return 0;
}

