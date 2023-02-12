#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetCamera.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetCamera::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall ActionSetCamera::ExecuteFromCallContext(ActionSetCamera *this,undefined4 time_clock,InstanceContext *ctx){
		int iVar1;
		uint uVar2;
		InstanceContext *pIVar3;
		InstanceNodeAbstract *pIVar4;
		void *pvVar5;
		uVar2 = (GameController1->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar2 == 6) {
		pIVar3 = (InstanceContext *)0x0;
		}
		else {
		pIVar3 = (InstanceContext *)(GameController1->chunkDescriptor).playerInstanceContexts[uVar2];
		if (pIVar3 != (InstanceContext *)0x0) {
		pIVar3 = *(InstanceContext **)&pIVar3->parent;
		}
		}
		pIVar4 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar3->field27_0xe0 + 1),Camera);
		if ((*(byte *)&this->unlabelled12 & 2) != 0) {
		pIVar4[0x31].time = pIVar4[0x31].time | 1;
		pIVar4[0x32].vtable = (InstanceNodeAbstract_VTable *)this->unlabelled20;
		}
		if ((*(byte *)&this->unlabelled12 & 1) != 0) {
		pIVar3 = (ctx->parent).ctx;
		iVar1 = (pIVar3->parent).field14_0x20.field27_0x78;
		if (iVar1 == 0) {
		pvVar5 = (void *)(pIVar3->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar5 = (void *)FUN_00017ba8(iVar1);
		}
		FUN_001818b0(&this->unlabelled16,(int *)&ctx,pvVar5);
		pIVar4[0x27].time = pIVar4[0x27].time | 1;
		pIVar4[0x28].vtable = (InstanceNodeAbstract_VTable *)ctx;
		}
		return;
		}
		
	*/
	return;
}

void ActionSetCamera::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetCamera::Dispose(ActionSetCamera *this,byte param_1){
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

void ActionSetCamera::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetCamera * __fastcall ActionSetCamera::Construct(ActionSetCamera *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetCamera;
		this->unlabelled12 = uVar1 & 0xfffffffc;
		this->unlabelled16 = 0;
		return this;
		}
		
	*/
	return;
}

int ActionSetCamera::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetCamera::GetSize(void){
		return 0x18;
		}
		
	*/
	return 0;
}

void ActionSetCamera::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetCamera::UnkMethod(ActionSetCamera *this,int *param_1){
		char cVar1;
		short *this_00;
		uint uVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar1 != '\0') {
		return;
		}
		this_00 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*this_00 == 0x76) {
		this->unlabelled16 = this->unlabelled16 & 0xfffffffbU | 2;
		FUN_00180840(this_00,(US002 *)&this->unlabelled16);
		uVar2 = this->unlabelled12 | 1;
		LAB_00040790:this->unlabelled12 = uVar2;
		}
		else if (*this_00 == 0x77) {
		this->unlabelled20 = *(int *)(this_00 + 2);
		uVar2 = this->unlabelled12 | 2;
		goto LAB_00040790;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

