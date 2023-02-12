#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x287.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x287::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x287::Dispose(Action0x287 *this,byte param_1){
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

void Action0x287::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x287 * __fastcall Action0x287::Construct(Action0x287 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x287;
		this->unlabelled12 = -1;
		this->unlabelled16 = 0;
		return this;
		}
		
	*/
	return;
}

int Action0x287::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x287::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

void Action0x287::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x287::ExecuteFromCallContext(Action0x287 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		uint uVar2;
		GameController *pGVar3;
		void *pvVar4;
		int iVar5;
		pGVar3 = GameController1;
		iVar5 = this->unlabelled12;
		if (iVar5 == -1) {
		pIVar1 = (ctx->parent).ctx;
		iVar5 = (pIVar1->parent).field14_0x20.field27_0x78;
		if (iVar5 == 0) {
		pvVar4 = (void *)(pIVar1->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar4 = (void *)FUN_00017ba8(iVar5);
		}
		iVar5 = FUN_001804d0(&this->unlabelled16,pvVar4);
		}
		uVar2 = (pGVar3->chunkDescriptor).flags;
		if ((int)(uVar2 >> 0x15 & 0x1f) < iVar5) {
		(pGVar3->chunkDescriptor).flags = (iVar5 << 0x15 ^ uVar2) & 0x3e00000 ^ uVar2;
		}
		return;
		}
		
	*/
	return;
}

