#include "headers/Known/AgentLab/ActionFactory/Actions/ActionPickUpExtraLife.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionPickUpExtraLife::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionPickUpExtraLife::Dispose(ActionPickUpExtraLife *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

int ActionPickUpExtraLife::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionPickUpExtraLife::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionPickUpExtraLife::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionPickUpExtraLife::UnkMethod(ActionPickUpExtraLife *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x22f) {
		this->unlabelled12 = *(int *)(psVar2 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionPickUpExtraLife::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionPickUpExtraLife::ExecuteFromCallContext(ActionPickUpExtraLife *this,undefined4 time_clock,InstanceContext *ctx){
		uint uVar1;
		InstanceContext *pIVar2;
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
		if ((0 < this->unlabelled12) || ((((ctx->parent).ctx)->parent).ctx == pIVar2)) {
		Oleg::GrantALife(&GameController1->oleg,this->unlabelled12,'\0');
		}
		return;
		}
		
	*/
	return;
}

void ActionPickUpExtraLife::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionPickUpExtraLife::Construct(ActionPickUpExtraLife *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_PickUpExtraLife;
		this->unlabelled12 = 0;
		return;
		}
		
	*/
	return;
}

