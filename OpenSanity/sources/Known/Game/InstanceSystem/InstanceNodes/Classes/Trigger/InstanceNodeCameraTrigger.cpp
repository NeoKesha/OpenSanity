#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Trigger/InstanceNodeCameraTrigger.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void InstanceNodeCameraTrigger::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeCameraTrigger::Dispose(InstanceNodeCameraTrigger *this){
		void *ptr;
		ptr = *(void **)&(this->body).field_0x16c;
		this->vtable = (InstanceNodeTrigger_VTable *)&InstanceNode_VT_CameraTrigger;
		if (ptr != (void *)0x0) {
		if (*(undefined4 **)((int)ptr + 8) != (undefined4 *)0x0) {
		(**(code **)**(undefined4 **)((int)ptr + 8))(1);
		}
		if (*(undefined4 **)((int)ptr + 0xc) != (undefined4 *)0x0) {
		(**(code **)**(undefined4 **)((int)ptr + 0xc))(1);
		}
		VirtualPool::FreeMemory(ptr);
		}
		InstanceNodeTriggerAbstract::CleanUp((InstanceNodeTriggerAbstract *)this);
		return;
		}
		
	*/
	return;
}

void InstanceNodeCameraTrigger::FUN_001d7d10(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall InstanceNodeCameraTrigger::FUN_001d7d10(InstanceNodeCameraTrigger *this,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceContext *ctx_00;
		undefined uVar2;
		UnkFamily5CA *this_00;
		UnkFamily5Base *unkStruct;
		UnkFamily5Base *unkVar;
		UnkFamily5SomeStruct this_01;
		UnkFamily5SomeStruct UVar3;
		InstanceContext *pIVar4;
		int iVar5;
		InstanceNodeCameraTrigger *pIVar6;
		UnkFamily5SomeStruct local_8;
		uint local_4;
		ctx_00 = ctx;
		if ((this->body).field145_0x170 == (UnkFamily5Base *)0x0) {
		this_00 = (UnkFamily5CA *)VirtualPool::AllocateMemory(0x18);
		if (this_00 == (UnkFamily5CA *)0x0) {
		unkStruct = (UnkFamily5Base *)0x0;
		}
		else {
		iVar5 = (this->body).parent.field3_0x1c;
		pIVar4 = (this->body).parent.parent.ctx;
		if (pIVar4 == (InstanceContext *)0x0) {
		unkStruct = (UnkFamily5Base *)UnkFamily5CA::Construct(this_00,0,iVar5,this);
		}
		else {
		pIVar6 = this;
		uVar2 = InstanceContextSmartPtr::CreateRef(&pIVar4->smartPtr,pIVar4,0);
		unkStruct = (UnkFamily5Base *)UnkFamily5CA::Construct(this_00,uVar2,iVar5,pIVar6);
		}
		}
		(this->body).field145_0x170 = unkStruct;
		}
		unkVar = (this->body).field145_0x170;
		if ((UnkFamily5AA *)unkVar != (UnkFamily5AA *)0x0) {
		unkVar = (UnkFamily5Base *)UnkFamily5SomeStruct::CreatePayload(&(((UnkFamily5AA *)unkVar)->parent).parent.someStruct,(UnkFamily5AA *)unkVar,1);
		}
		InstanceContext::FUN_000fa200(ctx,(char)unkVar);
		local_4 = 0;
		if (*(char *)((int)&(this->body).parent.field1_0x14 + 1) != '\0') {
		ctx = (InstanceContext *)&(this->body).field_0xe0;
		UVar3 = (UnkFamily5SomeStruct)0x0;
		do {
		this_01 = UVar3;
		if (UVar3 == (UnkFamily5SomeStruct)0x0) {
		this_01 = (UnkFamily5SomeStruct)VirtualPool::AllocateMemory(0x18);
		if (this_01 == (UnkFamily5SomeStruct)0x0) {
		this_01 = (UnkFamily5SomeStruct)0x0;
		}
		else {
		if (ctx_00 != (InstanceContext *)0x0) {
		UVar3 = (UnkFamily5SomeStruct)InstanceContextSmartPtr::CreateRef(&ctx_00->smartPtr,ctx_00,0);
		}
		iVar5 = (this->body).parent.field3_0x1c;
		if (UVar3 != (UnkFamily5SomeStruct)0x0) {
		pIVar4 = *(InstanceContext **)((int)UVar3 + 4);
		*(InstanceContext **)((int)UVar3 + 4) =(InstanceContext *)(((uint)((int)&(pIVar4->parent).vtable + 1U) ^ (uint)pIVar4) & 0xffffff ^(uint)pIVar4);
		}
		local_8 = (UnkFamily5Ptr *)UVar3;
		UnkFamily5C::Construct((UnkFamily5C *)this_01,0x900,SUB41(UVar3,0),iVar5);
		*(undefined ***)this_01 = &UnkFamily5_VT_CA;
		*(InstanceNodeCameraTrigger **)((int)this_01 + 0x14) = this;
		if (UVar3 != (UnkFamily5SomeStruct)0x0) {
		pIVar4 = *(InstanceContext **)((int)UVar3 + 4);
		pIVar4 = (InstanceContext *)(((uint)&pIVar4[-1].field_0x16f ^ (uint)pIVar4) & 0xffffff ^ (uint)pIVar4);
		*(InstanceContext **)((int)UVar3 + 4) = pIVar4;
		if ((((uint)pIVar4 & 0xffffff) == 0) && (((uint)pIVar4 & 0x1000000) != 0)) {
		pIVar4 = *(InstanceContext **)UVar3;
		if (pIVar4 != (InstanceContext *)0x0) {
		(*((pIVar4->parent).vtable)->Dispose)(pIVar4,1);
		}
		*(InstanceContext **)UVar3 = (InstanceContext *)0x0;
		}
		if (((uint)*(InstanceContext **)((int)UVar3 + 4) & 0xffffff) == 0) {
		InstanceContextSmartPtr::FreeCtx((InstanceContextSmartPtr *)&local_8,*(InstanceContext **)UVar3);
		}
		}
		}
		}
		UVar3 = this_01;
		if (this_01 != (UnkFamily5SomeStruct)0x0) {
		if (*(InstanceContext **)((int)this_01 + 4) == (InstanceContext *)0x0) {
		pIVar4 = (InstanceContext *)VirtualPool::AllocateMemory(8);
		if (pIVar4 == (InstanceContext *)0x0) {
		pIVar4 = (InstanceContext *)0x0;
		}
		else {
		pIVar1 = *(InstanceContext **)((int)&pIVar4->parent + 4);
		*(UnkFamily5SomeStruct *)&pIVar4->parent = this_01;
		*(InstanceContext **)((int)&pIVar4->parent + 4) =(InstanceContext *)((uint)pIVar1 & 0xff000000 | 0x1000000);
		}
		*(InstanceContext **)((int)this_01 + 4) = pIVar4;
		}
		pIVar4 = *(InstanceContext **)((int)&(*(InstanceContext **)((int)this_01 + 4))->parent + 4);
		*(InstanceContext **)((int)&(*(InstanceContext **)((int)this_01 + 4))->parent + 4) =(InstanceContext *)(((uint)((int)&pIVar4->parent + 1U) ^ (uint)pIVar4) & 0xffffff ^ (uint)pIVar4);
		UVar3 = *(UnkFamily5SomeStruct *)((int)this_01 + 4);
		}
		InstanceContext::FUN_000fa200((InstanceContext *)(ctx->parent).vtable,SUB41(UVar3,0));
		ctx = (InstanceContext *)&(ctx->parent).ctx;
		local_4 = local_4 + 1;
		UVar3 = this_01;
		}
		 while (local_4 < *(byte *)((int)&(this->body).parent.field1_0x14 + 1));
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeCameraTrigger::Dispose_2(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodeCameraTrigger::Dispose(InstanceNodeCameraTrigger *this,byte param_1){
		void *ptr;
		ptr = *(void **)&(this->body).field_0x16c;
		this->vtable = (InstanceNodeTrigger_VTable *)&InstanceNode_VT_CameraTrigger;
		if (ptr != (void *)0x0) {
		if (*(undefined4 **)((int)ptr + 8) != (undefined4 *)0x0) {
		(**(code **)**(undefined4 **)((int)ptr + 8))(1);
		}
		if (*(undefined4 **)((int)ptr + 0xc) != (undefined4 *)0x0) {
		(**(code **)**(undefined4 **)((int)ptr + 0xc))(1);
		}
		VirtualPool::FreeMemory(ptr);
		}
		InstanceNodeTriggerAbstract::CleanUp((InstanceNodeTriggerAbstract *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (InstanceNodeAbstract *)this;
		}
		
	*/
	return;
}

void InstanceNodeCameraTrigger::Construct(void* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeCameraTrigger * __thiscall InstanceNodeCameraTrigger::Construct(InstanceNodeCameraTrigger *this,undefined *param_1,int param_2){
		uint uVar1;
		undefined4 uVar2;
		InstanceNodeTriggerAbstract::Construct((InstanceNodeTriggerAbstract *)this,param_1,param_2);
		uVar1 = (this->body).parent.field1_0x14;
		this->vtable = (InstanceNodeTrigger_VTable *)&InstanceNode_VT_CameraTrigger;
		uVar2 = *(undefined4 *)(param_2 + 0x60);
		(this->body).parent.field1_0x14 = uVar1 | 0x40000;
		*(undefined4 *)&(this->body).field_0x16c = uVar2;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeCameraTrigger::FUN_001caec0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeCameraTrigger::FUN_001caec0(InstanceNodeCameraTrigger *this){
		(this->body).field145_0x170 = (UnkFamily5Base *)0x0;
		return;
		}
		
	*/
	return;
}

void InstanceNodeCameraTrigger::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeCameraTrigger::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void InstanceNodeCameraTrigger::EmptyFunction_6() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeCameraTrigger::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void InstanceNodeCameraTrigger::EmptyFunction_7() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeCameraTrigger::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

byte InstanceNodeCameraTrigger::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte InstanceNodeCameraTrigger::GetIndex(void){
		return 8;
		}
		
	*/
	return 0;
}

uint InstanceNodeCameraTrigger::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodeCameraTrigger::GetBuilderIndex(void){
		return 0x1c01;
		}
		
	*/
	return 0;
}

