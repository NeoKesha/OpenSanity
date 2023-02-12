#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x05F.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x05F::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x05F::Dispose(Action0x05F *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x05F::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x05F * __fastcall Action0x05F::Construct(Action0x05F *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x05F;
		this->unlabelled12 = uVar1 & 0xfffeffff | 0xffff;
		return this;
		}
		
	*/
	return;
}

int Action0x05F::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x05F::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void Action0x05F::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x05F::UnkMethod(Action0x05F *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar1 != '\0') {
		return;
		}
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x6d) {
		LAB_0016624e:*(short *)&this->unlabelled12 = psVar2[2];
		}
		else if (*psVar2 == -1) {
		if ((*(char *)(psVar2 + 1) == '\x04') && (*(int *)(psVar2 + 2) == 0x4e)) {
		this->unlabelled12 = this->unlabelled12 | 0x10000;
		}
		goto LAB_0016624e;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void Action0x05F::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x05F::ExecuteFromCallContext(Action0x05F *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceContext *ctx_00;
		InstanceNodeAbstract *pIVar2;
		undefined uVar3;
		InstanceNodeObjectLink *this_00;
		UnkFamily5AB *this_01;
		UnkFamily5AA *pUVar4;
		InstanceContextSmartPtr extraout_ECX;
		InstanceContextSmartPtr IVar5;
		undefined4 uVar6;
		pIVar1 = (ctx->parent).ctx;
		ctx_00 = (pIVar1->parent).ctx;
		if (*(char *)&(ctx_00->parent).flags < '\0') {
		this_00 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&ctx_00->nodes,ObjectLink);
		pIVar2 = (pIVar1->nodes).array[0xd];
		if (((pIVar2 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar2->field6_0x14 & 1) != 0)) &&((~(byte)((uint)(pIVar1->parent).field14_0x20.matrix2.m43 >> 0x14) & 1) != 0)) {
		(pIVar1->nodes).array[0xd] = (InstanceNodeAbstract *)0x0;
		}
		pIVar1 = (InstanceContext *)(pIVar1->nodes).array[0xd];
		if (pIVar1 != (InstanceContext *)0x0) {
		InstanceNodeObjectLink::FUN_000fc0b0(this_00,(undefined4 *)pIVar1,0,'\x01','\0');
		if ((this->unlabelled12 & 0xffffU) != 0xffff) {
		this_01 = (UnkFamily5AB *)VirtualPool::AllocateMemory(0x14);
		if (this_01 == (UnkFamily5AB *)0x0) {
		pUVar4 = (UnkFamily5AA *)0x0;
		}
		else {
		uVar6 = 2;
		IVar5 = extraout_ECX;
		InstanceContextSmartPtr::SetCtx((InstanceContextSmartPtr *)&stack0xffffffe8,ctx_00);
		pUVar4 = (UnkFamily5AA *)UnkFamily5AB::Construct(this_01,*(undefined2 *)&this->unlabelled12,IVar5,uVar6);
		}
		if (pUVar4 == (UnkFamily5AA *)0x0) {
		InstanceContext::FUN_000fa200(pIVar1,0);
		return;
		}
		uVar3 = UnkFamily5SomeStruct::CreatePayload(&(pUVar4->parent).parent.someStruct,pUVar4,1);
		InstanceContext::FUN_000fa200(pIVar1,uVar3);
		}
		}
		}
		return;
		}
		
	*/
	return;
}

