#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetCrate.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetCrate::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetCrate::Dispose(ActionSetCrate *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetCrate::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetCrate * __fastcall ActionSetCrate::Construct(ActionSetCrate *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		*(undefined2 *)&this->unlabelled12 = 0;
		*(undefined2 *)((int)&this->unlabelled12 + 2) = 0;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetCrate;
		this->unlabelled16 = -1;
		return this;
		}
		
	*/
	return;
}

int ActionSetCrate::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetCrate::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

void ActionSetCrate::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetCrate::UnkMethod(ActionSetCrate *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x20e) {
		this->unlabelled16 = *(int *)(psVar2 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionSetCrate::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetCrate::ExecuteFromCallContext(ActionSetCrate *this,undefined4 time_clock,InstanceContext *ctx){
		Method8 *pMVar1;
		uint uVar2;
		InstanceNodeAbstract *pIVar3;
		if (-1 < this->unlabelled16) {
		pIVar3 = InstanceDataList::GetNode(&((((ctx->parent).ctx)->parent).ctx)->nodes,Crate);
		if (pIVar3 != (InstanceNodeAbstract *)0x0) {
		pMVar1 = (pIVar3[1].vtable)->Method8;
		uVar2 = *(uint *)(pMVar1 + 0x14);
		*(uint *)(pMVar1 + 0x14) = uVar2 ^ (this->unlabelled16 << 2 ^ uVar2) & 0x3fc;
		}
		}
		return;
		}
		
	*/
	return;
}

