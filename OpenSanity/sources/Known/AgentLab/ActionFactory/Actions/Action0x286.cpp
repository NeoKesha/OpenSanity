#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x286.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x286::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x286::Dispose(Action0x286 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x286::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x286 * __fastcall Action0x286::Construct(Action0x286 *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x286;
		this->unlabelled12 = uVar1 | 0xff;
		return this;
		}
		
	*/
	return;
}

int Action0x286::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x286::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void Action0x286::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x286::UnkMethod(Action0x286 *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x11) {
		*(undefined *)&this->unlabelled12 = *(undefined *)(psVar2 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x286::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x286::ExecuteFromCallContext(Action0x286 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		int iVar2;
		GameObject *this_00;
		pIVar1 = (ctx->parent).ctx;
		iVar2 = (pIVar1->parent).field14_0x20.field27_0x78;
		if (iVar2 == 0) {
		this_00 = (GameObject *)(pIVar1->parent).field14_0x20.matrix2.m33;
		}
		else {
		this_00 = (GameObject *)FUN_00015286(iVar2);
		}
		GameObject::GetOGIId(this_00,(ushort *)&ctx,this->unlabelled12 & 0xff);
		if ((short)ctx != -1) {
		Oleg::thunk_FUN_000b5270(&GameController1->oleg,2,ctx);
		}
		return;
		}
		
	*/
	return;
}

