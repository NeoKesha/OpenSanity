#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetFocusToPlayer.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetFocusToPlayer::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetFocusToPlayer::Dispose(ActionSetFocusToPlayer *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetFocusToPlayer::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionSetFocusToPlayer::Construct(ActionSetFocusToPlayer *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetFocusToPlayer;
		return;
		}
		
	*/
	return;
}

int ActionSetFocusToPlayer::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetFocusToPlayer::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionSetFocusToPlayer::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetFocusToPlayer::ExecuteFromCallContext(ActionSetFocusToPlayer *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		float fVar2;
		uint uVar3;
		InstanceContext *pIVar4;
		uVar3 = (GameController1->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar3 == 6) {
		pIVar4 = (InstanceContext *)0x0;
		}
		else {
		pIVar4 = (InstanceContext *)(GameController1->chunkDescriptor).playerInstanceContexts[uVar3];
		if (pIVar4 != (InstanceContext *)0x0) {
		pIVar4 = *(InstanceContext **)&pIVar4->parent;
		}
		}
		if (pIVar4 != (InstanceContext *)0x0) {
		pIVar1 = (ctx->parent).ctx;
		fVar2 = (pIVar1->parent).field14_0x20.matrix2.m43;
		(pIVar1->parent).field14_0x20.field4_0x10 = pIVar4;
		(pIVar1->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar2 & 0xfffffffd | 1);
		}
		return;
		}
		
	*/
	return;
}

