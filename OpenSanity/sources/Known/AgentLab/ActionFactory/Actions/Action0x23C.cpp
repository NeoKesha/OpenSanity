#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x23C.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x23C::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x23C * __fastcall Action0x23C::Construct(Action0x23C *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x23C;
		AutoClass28::Construct((AutoClass28 *)&this->unlabelled12,'\0','\x01');
		return this;
		}
		
	*/
	return;
}

void Action0x23C::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x23C::Dispose(Action0x23C *this,byte param_1){
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

int Action0x23C::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x23C::GetSize(void){
		return 0x94;
		}
		
	*/
	return 0;
}

void Action0x23C::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x23C::UnkMethod(Action0x23C *this,int *param_1){
		ushort uVar1;
		char cVar2;
		ushort *puVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		puVar3 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *puVar3;
		if (uVar1 < 0xa9) {
		if (uVar1 == 0xa8) {
		this->unlabelled28 = *(int *)(puVar3 + 2);
		}
		else if (uVar1 == 0x65) {
		this->unlabelled16 = *(int *)(puVar3 + 2);
		}
		else if (uVar1 == 0xa6) {
		this->unlabelled16 = *(int *)(puVar3 + 2);
		}
		else if (uVar1 == 0xa7) {
		this->unlabelled24 = *(int *)(puVar3 + 2);
		}
		}
		else if (uVar1 == 0xae) {
		this->unlabelled20 = *(int *)(puVar3 + 2);
		}
		else if (((uVar1 == 0xffff) && (*(char *)(puVar3 + 1) == '\x04')) &&(*(int *)(puVar3 + 2) == 0x83)) {
		*(ushort *)&this->unlabelled12 = *(ushort *)&this->unlabelled12 & 0xffe1 | 1;
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x23C::ExecuteFromCallContext(int time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x23C::ExecuteFromCallContext(Action0x23C *this,int time_clock,InstanceContext *ctx){
		float *pfVar1;
		InstanceContext *this_00;
		this_00 = (ctx->parent).ctx;
		pfVar1 = &(this_00->parent).field14_0x20.matrix2.m43;
		*pfVar1 = (float)((uint)*pfVar1 & 0xfffc7fff);
		InstanceContext::FUN_0017afa0(this_00,(int)&this->unlabelled12,time_clock);
		return;
		}
		
	*/
	return;
}

