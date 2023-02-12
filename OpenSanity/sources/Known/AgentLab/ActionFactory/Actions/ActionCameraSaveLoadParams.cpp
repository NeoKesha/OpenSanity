#include "headers/Known/AgentLab/ActionFactory/Actions/ActionCameraSaveLoadParams.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionCameraSaveLoadParams::ExecuteFromCallContext(int time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall ActionCameraSaveLoadParams::ExecuteFromCallContext(ActionCameraSaveLoadParams *this,int time_clock,InstanceContext *ctx){
		InstanceNodeAbstract *this_00;
		uint uVar1;
		InstanceContext *pIVar2;
		InstanceNodeAbstract *pIVar3;
		InstanceNodeAbstract_VTable *pIVar4;
		int iVar5;
		uVar1 = (GameController1->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar1 == 6) {
		pIVar2 = (InstanceContext *)0x0;
		}
		else {
		pIVar2 = (InstanceContext *)(GameController1->chunkDescriptor).playerInstanceContexts[uVar1];
		if (pIVar2 != (InstanceContext *)0x0) {
		pIVar2 = *(InstanceContext **)&pIVar2->parent;
		}
		}
		pIVar3 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar2->field27_0xe0 + 1),Camera);
		this_00 = pIVar3 + 2;
		if (*(int **)&pIVar3[1].field2_0x8 == (int *)0x0) {
		iVar5 = 0;
		}
		else {
		iVar5 = **(int **)&pIVar3[1].field2_0x8;
		}
		uVar1 = this->unlabelled12 & 7;
		if (uVar1 == 0) {
		DAT_003cfebc = *(byte *)&this_00->vtable & 1;
		DAT_003cfec8 = (byte)((uint)this_00->vtable >> 1) & 1;
		DAT_003cff3c = (byte)((uint)this_00->vtable >> 2) & 1;
		DAT_003cfeec = (byte)((uint)this_00->vtable >> 5) & 1;
		DAT_003cfea5 = (byte)((uint)this_00->vtable >> 4) & 1;
		DAT_003cff14 = *(undefined4 *)&pIVar3[0x4f].field2_0x8;
		}
		else if (uVar1 == 1) {
		*(undefined4 *)&pIVar3[0x4f].field2_0x8 = DAT_003cff14;
		thunk_FUN_0007cfb0(this_00,(uint)DAT_003cfebc);
		thunk_FUN_0007cfd0(this_00,DAT_003cfec8);
		thunk_FUN_0007d010(this_00,(uint)DAT_003cff3c);
		pIVar4 = (InstanceNodeAbstract_VTable *)((uint)this_00->vtable ^ ((uint)DAT_003cfeec << 5 ^ (uint)this_00->vtable) & 0x20);
		this_00->vtable = pIVar4;
		this_00->vtable =(InstanceNodeAbstract_VTable *)(((uint)DAT_003cfea5 << 4 ^ (uint)pIVar4) & 0x10 ^ (uint)pIVar4);
		thunk_FUN_0007cf80(this_00,iVar5);
		return;
		}
		return;
		}
		
	*/
	return;
}

void ActionCameraSaveLoadParams::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionCameraSaveLoadParams::Dispose(ActionCameraSaveLoadParams *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionCameraSaveLoadParams::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionCameraSaveLoadParams * __thiscall ActionCameraSaveLoadParams::Construct(ActionCameraSaveLoadParams *this,uint param_1){
		uint uVar1;
		uint uVar2;
		uVar1 = this->unlabelled12;
		uVar2 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_CameraSaveLoadParams;
		this->unlabelled12 = uVar2 ^ (uVar1 ^ param_1) & 7;
		return this;
		}
		
	*/
	return;
}

void ActionCameraSaveLoadParams::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionCameraSaveLoadParams::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

int ActionCameraSaveLoadParams::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionCameraSaveLoadParams::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

