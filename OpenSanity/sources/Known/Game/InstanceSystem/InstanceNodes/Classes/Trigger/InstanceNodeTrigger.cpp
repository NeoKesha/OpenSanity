#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Trigger/InstanceNodeTrigger.h"

int* InstanceNodeTrigger::FUN_00182db0(ushort param_1, void** param_2, int* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall InstanceNodeTrigger::FUN_00182db0(InstanceNodeTrigger *this,short param_1,void **param_2,int *param_3){
		InstanceContext *ctx;
		void **ctx_00;
		uint uVar1;
		UnkFamily5AB *this_02;
		InstanceContextSmartPtr IVar2;
		int *piVar3;
		UnkFamily5AB *this_01;
		UnkFamily5SomeStruct UVar4;
		UnkFamily5Ptr *pUVar5;
		UnkFamily5SomeStruct local_c;
		uint local_8;
		uint local_4;
		ctx_00 = param_2;
		uVar1 = (this->body).parent.field3_0x1c | 2;
		local_4 = uVar1;
		if (param_3 == (int *)0x0) {
		this_02 = (UnkFamily5AB *)VirtualPool::AllocateMemory(0x14);
		if (this_02 == (UnkFamily5AB *)0x0) {
		param_3 = (int *)0x0;
		}
		else {
		ctx = (this->body).parent.parent.ctx;
		if (ctx == (InstanceContext *)0x0) {
		param_3 = (int *)UnkFamily5AB::Construct(this_02,param_1,(InstanceContextSmartPtr)0x0,uVar1);
		}
		else {
		IVar2 = (InstanceContextSmartPtr)InstanceContextSmartPtr::CreateRef(&ctx->smartPtr,ctx,0);
		param_3 = (int *)UnkFamily5AB::Construct(this_02,param_1,IVar2,uVar1);
		}
		}
		}
		piVar3 = param_3;
		if (param_3 != (int *)0x0) {
		piVar3 = (int *)UnkFamily5SomeStruct::CreatePayload((UnkFamily5SomeStruct *)(param_3 + 1),(UnkFamily5AA *)param_3,1);
		}
		InstanceContext::FUN_000fa200((InstanceContext *)param_2,(char)piVar3);
		local_8 = 0;
		if (*(char *)((int)&(this->body).parent.field1_0x14 + 1) != '\0') {
		param_2 = (void **)&(this->body).field_0xe0;
		UVar4 = (UnkFamily5SomeStruct)0x0;
		do {
		this_01 = (UnkFamily5AB *)UVar4;
		if (UVar4 == (UnkFamily5SomeStruct)0x0) {
		this_01 = (UnkFamily5AB *)VirtualPool::AllocateMemory(0x14);
		if (this_01 == (UnkFamily5AB *)0x0) {
		this_01 = (UnkFamily5AB *)0x0;
		}
		else {
		if (ctx_00 != (void **)0x0) {
		UVar4 = (UnkFamily5SomeStruct)InstanceContextSmartPtr::CreateRef((InstanceContextSmartPtr *)(ctx_00 + 0x30),(InstanceContext *)ctx_00,0);
		}
		if (UVar4 != (UnkFamily5SomeStruct)0x0) {
		pUVar5 = ((UnkFamily5SomeStruct *)((int)UVar4 + 4))->ptr;
		((UnkFamily5SomeStruct *)((int)UVar4 + 4))->ptr =(UnkFamily5Ptr *)(((uint)((int)&pUVar5->ptr + 1U) ^ (uint)pUVar5) & 0xffffff ^ (uint)pUVar5);
		}
		local_c = (UnkFamily5Ptr *)UVar4;
		UnkFamily5A::Construct((UnkFamily5A *)this_01,0x103,(InstanceContextRefCounter *)UVar4,local_4);
		(this_01->parent).parent.vtable = &UnkFamily5_VT_AB;
		(this_01->parent).parent.field3_0xa = param_1;
		if (UVar4 != (UnkFamily5SomeStruct)0x0) {
		pUVar5 = ((UnkFamily5SomeStruct *)((int)UVar4 + 4))->ptr;
		pUVar5 = (UnkFamily5Ptr *)(((uint)((int)&pUVar5[-1].unk + 3U) ^ (uint)pUVar5) & 0xffffff ^ (uint)pUVar5);
		((UnkFamily5SomeStruct *)((int)UVar4 + 4))->ptr = pUVar5;
		if ((((uint)pUVar5 & 0xffffff) == 0) && (((uint)pUVar5 & 0x1000000) != 0)) {
		if (*(undefined4 **)UVar4 != (undefined4 *)0x0) {
		(**(code **)**(undefined4 **)UVar4)(1);
		}
		*(undefined4 *)UVar4 = 0;
		}
		if (((uint)((UnkFamily5SomeStruct *)((int)UVar4 + 4))->ptr & 0xffffff) == 0) {
		InstanceContextSmartPtr::FreeCtx((InstanceContextSmartPtr *)&local_c,*(InstanceContext **)UVar4);
		}
		}
		}
		}
		UVar4 = (UnkFamily5SomeStruct)this_01;
		if ((UnkFamily5SomeStruct)this_01 != (UnkFamily5SomeStruct)0x0) {
		if (((UnkFamily5SomeStruct *)((int)this_01 + 4))->ptr == (UnkFamily5Ptr *)0x0) {
		pUVar5 = (UnkFamily5Ptr *)VirtualPool::AllocateMemory(8);
		if (pUVar5 == (UnkFamily5Ptr *)0x0) {
		pUVar5 = (UnkFamily5Ptr *)0x0;
		}
		else {
		pUVar5->ptr = (UnkFamily5Base *)this_01;
		pUVar5->unk = pUVar5->unk & 0xff000000 | 0x1000000;
		}
		((UnkFamily5SomeStruct *)((int)this_01 + 4))->ptr = pUVar5;
		}
		pUVar5 = ((UnkFamily5SomeStruct *)((int)this_01 + 4))->ptr;
		uVar1 = pUVar5->unk;
		pUVar5->unk = (uVar1 + 1 ^ uVar1) & 0xffffff ^ uVar1;
		UVar4 = (UnkFamily5SomeStruct)((UnkFamily5SomeStruct *)((int)this_01 + 4))->ptr;
		}
		InstanceContext::FUN_000fa200((InstanceContext *)*param_2,SUB41(UVar4,0));
		param_2 = param_2 + 1;
		local_8 = local_8 + 1;
		UVar4 = (UnkFamily5SomeStruct)this_01;
		}
		 while (local_8 < *(byte *)((int)&(this->body).parent.field1_0x14 + 1));
		}
		return param_3;
		}
		
	*/
	return null;
}

void InstanceNodeTrigger::TriggerMethod1(void** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeTrigger::TriggerMethod1(InstanceNodeTrigger *this,void **param_1){
		int *piVar1;
		piVar1 = FUN_00182db0(this,*(undefined2 *)&(this->body).field_0x17e,param_1,(int *)(this->body).field154_0x188.x);
		(this->body).field154_0x188.x = (float)piVar1;
		return;
		}
		
	*/
	return;
}

void InstanceNodeTrigger::TriggerMethod2(void** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeTrigger::TriggerMethod2(InstanceNodeTrigger *this,void **param_1){
		int *piVar1;
		piVar1 = FUN_00182db0(this,*(undefined2 *)&(this->body).field_0x180,param_1,(int *)(this->body).field154_0x188.y);
		(this->body).field154_0x188.y = (float)piVar1;
		return;
		}
		
	*/
	return;
}

void InstanceNodeTrigger::TriggerMethod3(void* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeTrigger::TriggerMethod3(InstanceNodeTrigger *this,void *param_1){
		short sVar1;
		InstanceContext **ppIVar2;
		uint uVar3;
		UnkFamily5AB *pUVar4;
		InstanceContextSmartPtr ctx;
		UnkFamily5AA *pUVar5;
		UnkFamily5AB *this_01;
		UnkFamily5SomeStruct UVar6;
		UnkFamily5Ptr *pUVar7;
		UnkFamily5SomeStruct local_10;
		uint local_c;
		InstanceContext **local_8;
		uint local_4;
		uVar3 = (this->body).parent.field3_0x1c | 2;
		local_4 = uVar3;
		if ((this->body).field154_0x188.z == 0.0) {
		pUVar4 = (UnkFamily5AB *)VirtualPool::AllocateMemory(0x14);
		if (pUVar4 == (UnkFamily5AB *)0x0) {
		pUVar4 = (UnkFamily5AB *)0x0;
		}
		else {
		ctx = (InstanceContextSmartPtr)(this->body).parent.parent.ctx;
		if (ctx != (InstanceContextSmartPtr)0x0) {
		ctx = (InstanceContextSmartPtr)InstanceContextSmartPtr::CreateRef((InstanceContextSmartPtr *)((int)ctx + 0xc0),(InstanceContext *)ctx,0);
		}
		pUVar4 = UnkFamily5AB::Construct(pUVar4,*(undefined2 *)&(this->body).field_0x182,ctx,uVar3);
		}
		(this->body).field154_0x188.z = (float)pUVar4;
		}
		pUVar5 = (UnkFamily5AA *)(this->body).field154_0x188.z;
		if (pUVar5 != (UnkFamily5AA *)0x0) {
		pUVar5 = (UnkFamily5AA *)UnkFamily5SomeStruct::CreatePayload(&(pUVar5->parent).parent.someStruct,pUVar5,1);
		}
		InstanceContext::FUN_000fa200((InstanceContext *)param_1,(char)pUVar5);
		local_c = 0;
		if (*(char *)((int)&(this->body).parent.field1_0x14 + 1) != '\0') {
		local_8 = (InstanceContext **)&(this->body).field_0xe0;
		UVar6 = (UnkFamily5SomeStruct)0x0;
		do {
		this_01 = (UnkFamily5AB *)UVar6;
		if (UVar6 == (UnkFamily5SomeStruct)0x0) {
		this_01 = (UnkFamily5AB *)VirtualPool::AllocateMemory(0x14);
		if (this_01 == (UnkFamily5AB *)0x0) {
		this_01 = (UnkFamily5AB *)0x0;
		}
		else {
		if (param_1 != (void *)0x0) {
		UVar6 = (UnkFamily5SomeStruct)InstanceContextSmartPtr::CreateRef((InstanceContextSmartPtr *)((int)param_1 + 0xc0),(InstanceContext *)param_1,0);
		}
		sVar1 = *(short *)&(this->body).field_0x182;
		if (UVar6 != (UnkFamily5SomeStruct)0x0) {
		pUVar7 = ((UnkFamily5SomeStruct *)((int)UVar6 + 4))->ptr;
		((UnkFamily5SomeStruct *)((int)UVar6 + 4))->ptr =(UnkFamily5Ptr *)(((uint)((int)&pUVar7->ptr + 1U) ^ (uint)pUVar7) & 0xffffff ^ (uint)pUVar7);
		}
		local_10 = (UnkFamily5Ptr *)UVar6;
		UnkFamily5A::Construct((UnkFamily5A *)this_01,0x103,(InstanceContextRefCounter *)UVar6,local_4);
		(this_01->parent).parent.vtable = &UnkFamily5_VT_AB;
		(this_01->parent).parent.field3_0xa = sVar1;
		if (UVar6 != (UnkFamily5SomeStruct)0x0) {
		pUVar7 = ((UnkFamily5SomeStruct *)((int)UVar6 + 4))->ptr;
		pUVar7 = (UnkFamily5Ptr *)(((uint)((int)&pUVar7[-1].unk + 3U) ^ (uint)pUVar7) & 0xffffff ^ (uint)pUVar7);
		((UnkFamily5SomeStruct *)((int)UVar6 + 4))->ptr = pUVar7;
		if ((((uint)pUVar7 & 0xffffff) == 0) && (((uint)pUVar7 & 0x1000000) != 0)) {
		if (*(undefined4 **)UVar6 != (undefined4 *)0x0) {
		(**(code **)**(undefined4 **)UVar6)(1);
		}
		*(undefined4 *)UVar6 = 0;
		}
		if (((uint)((UnkFamily5SomeStruct *)((int)UVar6 + 4))->ptr & 0xffffff) == 0) {
		InstanceContextSmartPtr::FreeCtx((InstanceContextSmartPtr *)&local_10,*(InstanceContext **)UVar6);
		}
		}
		}
		}
		UVar6 = (UnkFamily5SomeStruct)this_01;
		if ((UnkFamily5SomeStruct)this_01 != (UnkFamily5SomeStruct)0x0) {
		if (((UnkFamily5SomeStruct *)((int)this_01 + 4))->ptr == (UnkFamily5Ptr *)0x0) {
		pUVar7 = (UnkFamily5Ptr *)VirtualPool::AllocateMemory(8);
		if (pUVar7 == (UnkFamily5Ptr *)0x0) {
		pUVar7 = (UnkFamily5Ptr *)0x0;
		}
		else {
		pUVar7->ptr = (UnkFamily5Base *)this_01;
		pUVar7->unk = pUVar7->unk & 0xff000000 | 0x1000000;
		}
		((UnkFamily5SomeStruct *)((int)this_01 + 4))->ptr = pUVar7;
		}
		pUVar7 = ((UnkFamily5SomeStruct *)((int)this_01 + 4))->ptr;
		uVar3 = pUVar7->unk;
		pUVar7->unk = (uVar3 + 1 ^ uVar3) & 0xffffff ^ uVar3;
		UVar6 = (UnkFamily5SomeStruct)((UnkFamily5SomeStruct *)((int)this_01 + 4))->ptr;
		}
		ppIVar2 = local_8;
		InstanceContext::FUN_000fa200(*local_8,SUB41(UVar6,0));
		local_c = local_c + 1;
		local_8 = ppIVar2 + 1;
		UVar6 = (UnkFamily5SomeStruct)this_01;
		}
		 while (local_c < *(byte *)((int)&(this->body).parent.field1_0x14 + 1));
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeTrigger::TriggerMethod4(void* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeTrigger::TriggerMethod4(InstanceNodeTrigger *this,void *param_1){
		short sVar1;
		InstanceContext **ppIVar2;
		uint uVar3;
		UnkFamily5AB *pUVar4;
		InstanceContextSmartPtr ctx;
		UnkFamily5AA *pUVar5;
		UnkFamily5AB *this_01;
		UnkFamily5SomeStruct UVar6;
		UnkFamily5Ptr *pUVar7;
		UnkFamily5SomeStruct local_10;
		uint local_c;
		InstanceContext **local_8;
		uint local_4;
		uVar3 = (this->body).parent.field3_0x1c | 2;
		local_4 = uVar3;
		if ((this->body).field154_0x188.w == 0.0) {
		pUVar4 = (UnkFamily5AB *)VirtualPool::AllocateMemory(0x14);
		if (pUVar4 == (UnkFamily5AB *)0x0) {
		pUVar4 = (UnkFamily5AB *)0x0;
		}
		else {
		ctx = (InstanceContextSmartPtr)(this->body).parent.parent.ctx;
		if (ctx != (InstanceContextSmartPtr)0x0) {
		ctx = (InstanceContextSmartPtr)InstanceContextSmartPtr::CreateRef((InstanceContextSmartPtr *)((int)ctx + 0xc0),(InstanceContext *)ctx,0);
		}
		pUVar4 = UnkFamily5AB::Construct(pUVar4,*(undefined2 *)&(this->body).field_0x184,ctx,uVar3);
		}
		(this->body).field154_0x188.w = (float)pUVar4;
		}
		pUVar5 = (UnkFamily5AA *)(this->body).field154_0x188.w;
		if (pUVar5 != (UnkFamily5AA *)0x0) {
		pUVar5 = (UnkFamily5AA *)UnkFamily5SomeStruct::CreatePayload(&(pUVar5->parent).parent.someStruct,pUVar5,1);
		}
		InstanceContext::FUN_000fa200((InstanceContext *)param_1,(char)pUVar5);
		local_c = 0;
		if (*(char *)((int)&(this->body).parent.field1_0x14 + 1) != '\0') {
		local_8 = (InstanceContext **)&(this->body).field_0xe0;
		UVar6 = (UnkFamily5SomeStruct)0x0;
		do {
		this_01 = (UnkFamily5AB *)UVar6;
		if (UVar6 == (UnkFamily5SomeStruct)0x0) {
		this_01 = (UnkFamily5AB *)VirtualPool::AllocateMemory(0x14);
		if (this_01 == (UnkFamily5AB *)0x0) {
		this_01 = (UnkFamily5AB *)0x0;
		}
		else {
		if (param_1 != (void *)0x0) {
		UVar6 = (UnkFamily5SomeStruct)InstanceContextSmartPtr::CreateRef((InstanceContextSmartPtr *)((int)param_1 + 0xc0),(InstanceContext *)param_1,0);
		}
		sVar1 = *(short *)&(this->body).field_0x184;
		if (UVar6 != (UnkFamily5SomeStruct)0x0) {
		pUVar7 = ((UnkFamily5SomeStruct *)((int)UVar6 + 4))->ptr;
		((UnkFamily5SomeStruct *)((int)UVar6 + 4))->ptr =(UnkFamily5Ptr *)(((uint)((int)&pUVar7->ptr + 1U) ^ (uint)pUVar7) & 0xffffff ^ (uint)pUVar7);
		}
		local_10 = (UnkFamily5Ptr *)UVar6;
		UnkFamily5A::Construct((UnkFamily5A *)this_01,0x103,(InstanceContextRefCounter *)UVar6,local_4);
		(this_01->parent).parent.vtable = &UnkFamily5_VT_AB;
		(this_01->parent).parent.field3_0xa = sVar1;
		if (UVar6 != (UnkFamily5SomeStruct)0x0) {
		pUVar7 = ((UnkFamily5SomeStruct *)((int)UVar6 + 4))->ptr;
		pUVar7 = (UnkFamily5Ptr *)(((uint)((int)&pUVar7[-1].unk + 3U) ^ (uint)pUVar7) & 0xffffff ^ (uint)pUVar7);
		((UnkFamily5SomeStruct *)((int)UVar6 + 4))->ptr = pUVar7;
		if ((((uint)pUVar7 & 0xffffff) == 0) && (((uint)pUVar7 & 0x1000000) != 0)) {
		if (*(undefined4 **)UVar6 != (undefined4 *)0x0) {
		(**(code **)**(undefined4 **)UVar6)(1);
		}
		*(undefined4 *)UVar6 = 0;
		}
		if (((uint)((UnkFamily5SomeStruct *)((int)UVar6 + 4))->ptr & 0xffffff) == 0) {
		InstanceContextSmartPtr::FreeCtx((InstanceContextSmartPtr *)&local_10,*(InstanceContext **)UVar6);
		}
		}
		}
		}
		UVar6 = (UnkFamily5SomeStruct)this_01;
		if ((UnkFamily5SomeStruct)this_01 != (UnkFamily5SomeStruct)0x0) {
		if (((UnkFamily5SomeStruct *)((int)this_01 + 4))->ptr == (UnkFamily5Ptr *)0x0) {
		pUVar7 = (UnkFamily5Ptr *)VirtualPool::AllocateMemory(8);
		if (pUVar7 == (UnkFamily5Ptr *)0x0) {
		pUVar7 = (UnkFamily5Ptr *)0x0;
		}
		else {
		pUVar7->ptr = (UnkFamily5Base *)this_01;
		pUVar7->unk = pUVar7->unk & 0xff000000 | 0x1000000;
		}
		((UnkFamily5SomeStruct *)((int)this_01 + 4))->ptr = pUVar7;
		}
		pUVar7 = ((UnkFamily5SomeStruct *)((int)this_01 + 4))->ptr;
		uVar3 = pUVar7->unk;
		pUVar7->unk = (uVar3 + 1 ^ uVar3) & 0xffffff ^ uVar3;
		UVar6 = (UnkFamily5SomeStruct)((UnkFamily5SomeStruct *)((int)this_01 + 4))->ptr;
		}
		ppIVar2 = local_8;
		InstanceContext::FUN_000fa200(*local_8,SUB41(UVar6,0));
		local_c = local_c + 1;
		local_8 = ppIVar2 + 1;
		UVar6 = (UnkFamily5SomeStruct)this_01;
		}
		 while (local_c < *(byte *)((int)&(this->body).parent.field1_0x14 + 1));
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeTrigger::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodeTrigger::Dispose(InstanceNodeTrigger *this,byte param_1){
		this->vtable = (InstanceNodeTrigger_VTable *)&InstanceNode_VT_Trigger;
		InstanceNodeTriggerAbstract::CleanUp((InstanceNodeTriggerAbstract *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (InstanceNodeAbstract *)this;
		}
		
	*/
	return;
}

void InstanceNodeTrigger::Construct(void* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeTrigger * __thiscall InstanceNodeTrigger::Construct(InstanceNodeTrigger *this,undefined *param_1,int param_2){
		int *piVar1;
		undefined *puVar2;
		uint uVar3;
		InstanceNodeTriggerAbstract::Construct((InstanceNodeTriggerAbstract *)this,param_1,param_2);
		this->vtable = (InstanceNodeTrigger_VTable *)&InstanceNode_VT_Trigger;
		(this->body).field141_0x16c.x = 0.0;
		(this->body).field141_0x16c.y = 0.0;
		(this->body).field141_0x16c.z = 0.0;
		(this->body).field141_0x16c.w = FLOAT_0038639c;
		puVar2 = &(this->body).field_0x17c;
		*puVar2 = *puVar2 & 0xfc;
		if ((*(uint *)(param_2 + 0x10) >> 0xb & 1) != 0) {
		uVar3 = (this->body).parent.field1_0x14;
		*(undefined2 *)&(this->body).field_0x17e = *(undefined2 *)(param_2 + 0x60);
		(this->body).parent.field1_0x14 = uVar3 | 0x10000;
		}
		if ((*(uint *)(param_2 + 0x10) >> 8 & 1) != 0) {
		uVar3 = (this->body).parent.field1_0x14;
		*(undefined2 *)&(this->body).field_0x180 = *(undefined2 *)(param_2 + 0x62);
		(this->body).parent.field1_0x14 = uVar3 | 0x20000;
		}
		if ((*(uint *)(param_2 + 0x10) >> 9 & 1) != 0) {
		*(undefined2 *)&(this->body).field_0x182 = *(undefined2 *)(param_2 + 100);
		piVar1 = &(this->body).parent.field1_0x14;
		*piVar1 = *piVar1 | 0x40000;
		}
		if ((*(uint *)(param_2 + 0x10) >> 10 & 1) != 0) {
		uVar3 = (this->body).parent.field1_0x14;
		*(undefined2 *)&(this->body).field_0x184 = *(undefined2 *)(param_2 + 0x66);
		(this->body).parent.field1_0x14 = uVar3 | 0x80000;
		}
		return this;
		}
		
	*/
	return;
}

void InstanceNodeTrigger::Reset() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeTrigger::Reset(InstanceNodeTrigger *this){
		(this->body).field154_0x188.x = 0.0;
		(this->body).field154_0x188.y = 0.0;
		(this->body).field154_0x188.z = 0.0;
		(this->body).field154_0x188.w = 0.0;
		return;
		}
		
	*/
	return;
}

void InstanceNodeTrigger::UpdateTime(byte param_2, uint param_3, uint param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeTrigger::UpdateTime(InstanceNodeTrigger *this,undefined param_2,undefined4 param_3,undefined4 param_4){
		InstanceNodeTriggerAbstract::UpdateTime((InstanceNodeTriggerAbstract *)this);
		(this->body).field_0x17c = (this->body).field_0x17c & 0xfe;
		(this->body).field141_0x16c.x = 0.0;
		(this->body).field141_0x16c.y = 0.0;
		(this->body).field141_0x16c.z = 0.0;
		(this->body).field141_0x16c.w = FLOAT_0038639c;
		return;
		}
		
	*/
	return;
}

byte InstanceNodeTrigger::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte InstanceNodeTrigger::GetIndex(void){
		return 7;
		}
		
	*/
	return 0;
}

uint InstanceNodeTrigger::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodeTrigger::GetBuilderIndex(void){
		return 0x1814;
		}
		
	*/
	return 0;
}

