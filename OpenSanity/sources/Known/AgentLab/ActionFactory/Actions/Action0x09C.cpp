#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x09C.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x09C::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x09C::Dispose(Action0x09C *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x09C::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x09C * __fastcall Action0x09C::Construct(Action0x09C *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x09C;
		this->unlabelled12 = uVar1 | 0x1ffff;
		return this;
		}
		
	*/
	return;
}

int Action0x09C::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x09C::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void Action0x09C::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x09C::UnkMethod(Action0x09C *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x6d) {
		*(short *)&this->unlabelled12 = psVar2[2];
		}
		else if ((*psVar2 == -1) && (*(char *)(psVar2 + 1) == '\x04')) {
		if (*(int *)(psVar2 + 2) == 0) {
		this->unlabelled12 = this->unlabelled12 | 0x10000;
		}
		else if (*(int *)(psVar2 + 2) == 1) {
		this->unlabelled12 = this->unlabelled12 & 0xfffeffff;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x09C::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x09C::ExecuteFromCallContext(Action0x09C *this,undefined4 time_clock,InstanceContext *ctx){
		uint uVar1;
		InstanceContext *pIVar2;
		uVar1 = this->unlabelled12;
		pIVar2 = (ctx->parent).ctx;
		if ((uVar1 & 0xffff) != 0xffff) {
		this->unlabelled12 = uVar1 | 0x10000;
		pIVar2->field33_0x158 = (uVar1 & 0xffff) << 2 | pIVar2->field33_0x158 & 0xfffc0003U;
		}
		pIVar2->field33_0x158 =pIVar2->field33_0x158 ^((uint)((*(byte *)((int)&this->unlabelled12 + 2) & 1) == 1) ^ pIVar2->field33_0x158) & 1;
		return;
		}
		
	*/
	return;
}

