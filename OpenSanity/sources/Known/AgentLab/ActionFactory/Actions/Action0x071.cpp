#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x071.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x071::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x071::Dispose(Action0x071 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x071::UnkMethod(int* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x071::UnkMethod(int this,int *param_2){
		short sVar1;
		char cVar2;
		short *psVar3;
		uint uVar4;
		IteratorE2 local_10;
		*(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfffffff8;
		IteratorE2::Construct(&local_10,param_2);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar2 != '\0') {
		return;
		}
		psVar3 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		sVar1 = *psVar3;
		if (sVar1 == 3) {
		*(float *)(this + 0x10) = *(float *)(psVar3 + 2) * DAT_004962ac;
		uVar4 = *(uint *)(this + 0xc) | 1;
		LAB_001939e7:*(uint *)(this + 0xc) = uVar4;
		}
		else {
		if (sVar1 == 4) {
		*(float *)(this + 0x14) = *(float *)(psVar3 + 2) * DAT_004962ac;
		uVar4 = *(uint *)(this + 0xc) | 2;
		goto LAB_001939e7;
		}
		if (sVar1 == 5) {
		*(float *)(this + 0x18) = *(float *)(psVar3 + 2) * DAT_004962ac;
		uVar4 = *(uint *)(this + 0xc) | 4;
		goto LAB_001939e7;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void Action0x071::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x071::Construct(Action0x071 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x071;
		return;
		}
		
	*/
	return;
}

int Action0x071::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x071::GetSize(void){
		return 0x1c;
		}
		
	*/
	return 0;
}

void Action0x071::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x071::ExecuteFromCallContext(Action0x071 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		pIVar1 = (((ctx->parent).ctx)->parent).ctx;
		if ((*(byte *)&this->unlabelled12 & 1) != 0) {
		FUN_00172840(pIVar1,this->unlabelled16);
		}
		if ((*(byte *)&this->unlabelled12 & 2) != 0) {
		FUN_001728f0(pIVar1,this->unlabelled20);
		}
		if ((*(byte *)&this->unlabelled12 & 4) != 0) {
		FUN_001729a0(pIVar1,this->unlabelled24);
		}
		return;
		}
		
	*/
	return;
}

