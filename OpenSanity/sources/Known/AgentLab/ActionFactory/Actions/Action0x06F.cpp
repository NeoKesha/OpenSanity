#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x06F.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x06F::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x06F::Dispose(Action0x06F *this,byte param_1){
		ActionAbstract::CleanUp(&this->field0_0x0);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->field0_0x0;
		}
		
	*/
	return;
}

void Action0x06F::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x06F::Construct(Action0x06F *this){
		(this->field0_0x0).nextAction = (ActionAbstract *)0x0;
		(this->field0_0x0).field1_0x4 = 0xffffff;
		(this->field0_0x0).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x06F;
		return;
		}
		
	*/
	return;
}

int Action0x06F::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x06F::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x06F::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x06F::ExecuteFromCallContext(Action0x06F *this,undefined4 time_clock,InstanceContext *ctx){
		float *pfVar1;
		InstanceContext *pIVar2;
		InstanceNodeObjectLink *pIVar5;
		InstanceNodeAbstract *pIVar6;
		InstanceNodeInstance *pIVar4;
		InstanceContext *unaff_ESI;
		InstanceNodeCrate *pIVar3;
		pIVar2 = (ctx->parent).ctx;
		if ((pIVar2->nodes).array[0xd] == (InstanceNodeAbstract *)0x0) {
		pIVar5 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&((pIVar2->parent).ctx)->nodes,ObjectLink);
		pIVar6 = (InstanceNodeAbstract *)FUN_000f6de0((int)pIVar5,'\x01');
		(pIVar2->nodes).array[0xd] = pIVar6;
		pfVar1 = &(pIVar2->parent).field14_0x20.matrix2.m43;
		*pfVar1 = (float)((uint)*pfVar1 | 0x100000);
		}
		pIVar6 = (pIVar2->nodes).array[0xd];
		if (pIVar6 != (InstanceNodeAbstract *)0x0) {
		if (((*(byte *)&pIVar6->field6_0x14 & 1) != 0) &&((~(byte)((uint)(pIVar2->parent).field14_0x20.matrix2.m43 >> 0x14) & 1) != 0)) {
		(pIVar2->nodes).array[0xd] = (InstanceNodeAbstract *)0x0;
		}
		pIVar3 = (InstanceNodeCrate *)(pIVar2->nodes).array[0xd];
		pIVar4 = (InstanceNodeInstance *)InstanceDataList::GetNode((InstanceDataList *)&pIVar3[8].parent.ctx,Instance);
		(*pIVar4->vtable->InstanceMethod0)(pIVar4);
		(*((pIVar3->parent).vtable)->SetCtx)((InstanceNodeAbstract *)pIVar3,unaff_ESI);
		}
		return;
		}
		
	*/
	return;
}

