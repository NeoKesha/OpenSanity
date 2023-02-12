#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0B9.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0B9::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0B9::Dispose(Action0x0B9 *this,byte param_1){
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

void Action0x0B9::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0B9 * __fastcall Action0x0B9::Construct(Action0x0B9 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0B9;
		this->unlabelled12 = 0;
		this->unlabelled16 = this->unlabelled16 | 1;
		return this;
		}
		
	*/
	return;
}

int Action0x0B9::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0B9::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

void Action0x0B9::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0B9::UnkMethod(Action0x0B9 *this,int *param_1){
		char cVar1;
		short *this_00;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		this_00 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*this_00 == 0x9a) {
		this->unlabelled12 = this->unlabelled12 & 0xfffffff9;
		FUN_00180840(this_00,(US002 *)&this->unlabelled12);
		}
		else if (((*this_00 == -1) && (*(char *)(this_00 + 1) == '\x04')) &&(*(int *)(this_00 + 2) == 0x111)) {
		this->unlabelled16 = this->unlabelled16 & 0xfffffffe;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x0B9::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0B9::ExecuteFromCallContext(Action0x0B9 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		int iVar2;
		void *pvVar3;
		uint uVar4;
		pIVar1 = (ctx->parent).ctx;
		iVar2 = (pIVar1->parent).field14_0x20.field27_0x78;
		if (iVar2 == 0) {
		pvVar3 = (void *)(pIVar1->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar3 = (void *)FUN_00017ba8(iVar2);
		}
		uVar4 = FUN_001804d0(&this->unlabelled12,pvVar3);
		VideoController::FUN_001f2a70(VideoController,uVar4,time_clock,*(byte *)&this->unlabelled16 & 1);
		return;
		}
		
	*/
	return;
}

