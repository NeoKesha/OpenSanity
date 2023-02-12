#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetShadow.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetShadow::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetShadow * __fastcall ActionSetShadow::Construct(ActionSetShadow *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetShadow;
		FUN_00180380(&this->unlabelled16,0);
		FUN_00180380(&this->unlabelled20,0);
		FUN_00180380(&this->unlabelled24,0);
		this->unlabelled12 = 0;
		return this;
		}
		
	*/
	return;
}

void ActionSetShadow::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetShadow::Dispose(ActionSetShadow *this,byte param_1){
		thunk_FUN_00056200(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

int ActionSetShadow::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetShadow::GetSize(void){
		return 0x1c;
		}
		
	*/
	return 0;
}

void ActionSetShadow::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetShadow::UnkMethod(ActionSetShadow *this,int *param_1){
		char cVar1;
		undefined2 *this_00;
		US002 *other;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar1 != '\0') {
		return;
		}
		this_00 = (undefined2 *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		switch(*this_00) {
		case 0x122:*(undefined *)&this->unlabelled12 = *(undefined *)(this_00 + 2);
		goto switchD_00197f1a_caseD_4;
		case 0x123:other = (US002 *)&this->unlabelled16;
		break;
		case 0x124:other = (US002 *)&this->unlabelled20;
		break;
		case 0x125:other = (US002 *)&this->unlabelled24;
		break;
		default:goto switchD_00197f1a_caseD_4;
		}
		FUN_00180840(this_00,other);
		switchD_00197f1a_caseD_4:IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void ActionSetShadow::Execute(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetShadow::Execute(ActionSetShadow *this,InstanceContext *ctx){
		int iVar1;
		InstanceContext *this_00;
		void *pvVar2;
		InstanceNodeShadow *actionContext;
		InstanceNodeShadow *this_01;
		void *this_02;
		undefined4 *puVar3;
		UNV005 *pUVar4;
		float fVar5;
		float fVar6;
		iVar1 = (ctx->parent).field14_0x20.field27_0x78;
		if (iVar1 == 0) {
		pvVar2 = (void *)(ctx->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar2 = (void *)FUN_00017ba8(iVar1);
		}
		this_00 = (ctx->parent).ctx;
		actionContext = (InstanceNodeShadow *)InstanceDataList::GetNode(&this_00->nodes,Shadow);
		if (actionContext == (InstanceNodeShadow *)0x0) {
		this_01 = (InstanceNodeShadow *)VirtualPool::AllocateMemory(0x2c);
		if (this_01 == (InstanceNodeShadow *)0x0) {
		actionContext = (InstanceNodeShadow *)0x0;
		}
		else {
		actionContext = InstanceNodeShadow::Construct(this_01);
		}
		InstanceContext::SetNode(this_00,true,&actionContext->parent);
		}
		this_02 = VirtualPool::AllocateMemory(0x20);
		if (this_02 == (void *)0x0) {
		puVar3 = (undefined4 *)0x0;
		}
		else {
		fVar5 = FUN_00180490(&this->unlabelled24,pvVar2);
		fVar6 = FUN_00180490(&this->unlabelled16,pvVar2);
		puVar3 = FUN_00100460(this_02,fVar6,fVar5);
		}
		pUVar4 = (UNV005 *)VirtualPool::AllocateMemory(0xc);
		if (pUVar4 == (UNV005 *)0x0) {
		pUVar4 = (UNV005 *)0x0;
		}
		else {
		fVar5 = FUN_00180490(&this->unlabelled20,pvVar2);
		pUVar4 = UNV005::Construct(pUVar4,fVar5,(int)puVar3);
		}
		InstanceNodeShadow::ReplaceElement(actionContext,this->unlabelled12 & 0xff,pUVar4);
		return;
		}
		
	*/
	return;
}

void ActionSetShadow::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetShadow::ExecuteFromCallContext(ActionSetShadow *this,undefined4 time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

