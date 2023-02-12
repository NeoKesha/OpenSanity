#include "headers/Known/AgentLab/ActionFactory/Actions/ActionRestartPrevious.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionRestartPrevious::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionRestartPrevious::Dispose(ActionRestartPrevious *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionRestartPrevious::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionRestartPrevious::Construct(ActionRestartPrevious *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_RestartPrevious;
		return;
		}
		
	*/
	return;
}

int ActionRestartPrevious::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionRestartPrevious::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionRestartPrevious::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionRestartPrevious::ExecuteFromCallContext(ActionRestartPrevious *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx,int param_3){
		short sVar1;
		InstanceContext *ctx_00;
		undefined uVar2;
		UnkFamily5AA *pUVar3;
		InstanceContext *pIVar4;
		InstanceContext *pIVar5;
		int iVar6;
		pIVar4 = (ctx->parent).ctx;
		ctx_00 = (pIVar4->parent).ctx;
		sVar1 = *(short *)&(ctx->parent).field14_0x20.field1_0x4;
		*(byte *)(param_3 + 0x1d) = *(byte *)(param_3 + 0x1d) | 1;
		(*(pIVar4->parent).vtable[8].Method1)(pIVar4);
		if (sVar1 != -1) {
		pUVar3 = (UnkFamily5AA *)VirtualPool::AllocateMemory(0x20);
		if (pUVar3 == (UnkFamily5AA *)0x0) {
		pUVar3 = (UnkFamily5AA *)0x0;
		}
		else {
		iVar6 = 2;
		pIVar4 = ctx_00;
		pIVar5 = ctx_00;
		if (ctx_00 != (InstanceContext *)0x0) {
		pIVar4 = (InstanceContext *)InstanceContextSmartPtr::CreateRef(&ctx_00->smartPtr,ctx_00,0);
		}
		pUVar3 = UnkFamily5AA::Construct(pUVar3,sVar1,(bool)((byte)((uint)(ctx->parent).vtable >> 6) & 7),true,(InstanceContextRefCounter *)pIVar4,pIVar5,iVar6);
		}
		if (pUVar3 == (UnkFamily5AA *)0x0) {
		InstanceContext::FUN_000fa200(ctx_00,0);
		return;
		}
		uVar2 = UnkFamily5SomeStruct::CreatePayload(&(pUVar3->parent).parent.someStruct,pUVar3,1);
		InstanceContext::FUN_000fa200(ctx_00,uVar2);
		}
		return;
		}
		
	*/
	return;
}

