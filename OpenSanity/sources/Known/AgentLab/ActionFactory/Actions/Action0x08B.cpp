#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x08B.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x08B::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x08B::Dispose(Action0x08B *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x08B::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x08B * __fastcall Action0x08B::Construct(Action0x08B *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x08B;
		this->param = 0.0;
		return this;
		}
		
	*/
	return;
}

int Action0x08B::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x08B::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void Action0x08B::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x08B::UnkMethod(Action0x08B *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0xd5) {
		this->param = *(float *)(psVar2 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x08B::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x08B::ExecuteFromCallContext(Action0x08B *this,undefined4 time_clock,InstanceContext *ctx){
		int iVar1;
		float fVar2;
		iVar1 = *(int *)((int)(((ctx->parent).ctx)->parent).field14_0x20.matrix2.m42 + 0x20);
		fVar2 = Math::ClampFloat(this->param,-1.0,1.0);
		*(float *)(iVar1 + 0xc) = fVar2;
		return;
		}
		
	*/
	return;
}

