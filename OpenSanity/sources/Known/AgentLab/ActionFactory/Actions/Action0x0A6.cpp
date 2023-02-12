#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0A6.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0A6::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0A6 * __fastcall Action0x0A6::Construct(Action0x0A6 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0A6;
		FUN_00180380(&this->unlabelled12,0);
		return this;
		}
		
	*/
	return;
}

void Action0x0A6::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0A6::Dispose(Action0x0A6 *this,byte param_1){
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

int Action0x0A6::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0A6::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void Action0x0A6::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0A6::UnkMethod(Action0x0A6 *this,int *param_1){
		char cVar1;
		short *this_00;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		this_00 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*this_00 == 0x65) {
		FUN_00180840(this_00,(US002 *)&this->unlabelled12);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x0A6::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0A6::ExecuteFromCallContext(Action0x0A6 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *this_00;
		int iVar1;
		void *pvVar2;
		float fVar3;
		this_00 = (ctx->parent).ctx;
		iVar1 = (this_00->parent).field14_0x20.field27_0x78;
		if (iVar1 == 0) {
		pvVar2 = (void *)(this_00->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar2 = (void *)FUN_00017ba8(iVar1);
		}
		fVar3 = FUN_00180490(&this->unlabelled12,pvVar2);
		InstanceNodeAbstract::FUN_00172f90((InstanceNodeAbstract *)this_00,fVar3);
		return;
		}
		
	*/
	return;
}

