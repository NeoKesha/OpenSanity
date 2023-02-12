#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x26D.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x26D::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x26D::Dispose(Action0x26D *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x26D::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x26D::Construct(Action0x26D *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x26D;
		return;
		}
		
	*/
	return;
}

int Action0x26D::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x26D::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x26D::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall Action0x26D::ExecuteFromCallContext(Action0x26D *this,undefined4 time_clock,InstanceContext *ctx){
		float *pfVar1;
		InstanceContext *pIVar2;
		uint uVar3;
		InstanceContext *pIVar4;
		InstanceNodeAbstract *pIVar5;
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
		pIVar5 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar4->field27_0xe0 + 1),Camera);
		if (*(InstanceContext ***)&pIVar5[1].field2_0x8 == (InstanceContext **)0x0) {
		pIVar4 = (InstanceContext *)0x0;
		}
		else {
		pIVar4 = **(InstanceContext ***)&pIVar5[1].field2_0x8;
		}
		pIVar2 = (ctx->parent).ctx;
		(pIVar2->parent).field14_0x20.field4_0x10 = pIVar4;
		if (pIVar4 != (InstanceContext *)0x0) {
		pfVar1 = &(pIVar2->parent).field14_0x20.matrix2.m43;
		*pfVar1 = (float)((uint)*pfVar1 | 1);
		}
		pfVar1 = &(pIVar2->parent).field14_0x20.matrix2.m43;
		*pfVar1 = (float)((uint)*pfVar1 & 0xfffffffd);
		return;
		}
		
	*/
	return;
}

