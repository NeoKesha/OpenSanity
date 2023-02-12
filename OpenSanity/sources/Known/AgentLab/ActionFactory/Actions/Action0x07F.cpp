#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x07F.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x07F::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x07F::Dispose(Action0x07F *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x07F::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x07F * __fastcall Action0x07F::Construct(Action0x07F *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x07F;
		this->unlabelled12 = 0.0;
		return this;
		}
		
	*/
	return;
}

int Action0x07F::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x07F::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void Action0x07F::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x07F::UnkMethod(Action0x07F *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x6a) {
		this->unlabelled12 = *(float *)(psVar2 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x07F::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x07F::ExecuteFromCallContext(Action0x07F *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *this_00;
		InstanceNodeAbstract *this_01;
		char cVar1;
		this_00 = (ctx->parent).ctx;
		cVar1 = (*(this_00->parent).vtable[2].Method4)(this_00);
		if ((cVar1 != '\0') &&(this_01 = (this_00->nodes).array[0x11], this_01 != (InstanceNodeAbstract *)0x0)) {
		InstanceNodeAbstract::FUN_0015dc10(this_01,this->unlabelled12);
		}
		return;
		}
		
	*/
	return;
}

