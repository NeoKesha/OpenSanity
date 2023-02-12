#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x269.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x269::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x269::ExecuteFromCallContext(Action0x269 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceContext *this_00;
		uint uVar2;
		bool bVar3;
		uint uVar4;
		UnkFamily5AB *this_01;
		InstanceContextSmartPtr ctx_00;
		UnkFamily5Base *pUVar5;
		UnkFamily5Ptr *pUVar6;
		InstanceNodeAbstract *pIVar7;
		undefined4 uVar8;
		undefined *local_100;
		int local_fc;
		int local_f4;
		InstanceContext **local_e8;
		ushort local_e4;
		undefined2 local_e2;
		float local_e0;
		uint local_dc;
		undefined4 local_d8;
		undefined4 local_d4;
		undefined4 local_d0;
		undefined4 local_cc;
		undefined4 local_c8;
		void *local_c4;
		float local_c0;
		float local_bc;
		float local_b8;
		float local_b4;
		int local_b0;
		undefined local_ac;
		Matrix4 local_a0;
		InstanceContext *local_60 [23];
		pIVar1 = (((ctx->parent).ctx)->parent).ctx;
		uVar4 = AutoClass2::FUN_001373f0(&(pIVar1->parent).field14_0x20);
		local_e8 = local_60;
		local_e4 = 0;
		local_d0 = 0;
		local_c8 = 0;
		local_cc = 0;
		local_dc = local_dc & 0xfffffffe | 2;
		local_e2 = 0x14;
		local_e0 = FLOAT_00386648;
		local_d8 = 8;
		local_d4 = 1;
		if ((this->unlabelled12 & 2U) == 0) {
		local_100 = &DAT_0001a000;
		if ((this->unlabelled12 & 1U) == 0) {
		local_100 = &DAT_0001b000;
		}
		}
		else {
		local_100 = (undefined *)0x1000;
		}
		local_b0 = this->unlabelled16;
		local_c0 = Vector4_0039ef70.x;
		local_bc = Vector4_0039ef70.y;
		local_b8 = Vector4_0039ef70.z;
		local_b4 = Vector4_0039ef70.w;
		local_ac = 1;
		ctx_00 = (InstanceContextSmartPtr)(((ctx->parent).ctx)->parent).ctx;
		this_01 = (UnkFamily5AB *)VirtualPool::AllocateMemory(0x14);
		if (this_01 == (UnkFamily5AB *)0x0) {
		pUVar5 = (UnkFamily5Base *)0x0;
		}
		else {
		uVar8 = 2;
		if (ctx_00 != (InstanceContextSmartPtr)0x0) {
		ctx_00 = (InstanceContextSmartPtr)InstanceContextSmartPtr::CreateRef((InstanceContextSmartPtr *)((int)ctx_00 + 0xc0),(InstanceContext *)ctx_00,0);
		}
		pUVar5 = (UnkFamily5Base *)UnkFamily5AB::Construct(this_01,*(undefined2 *)&this->unlabelled20,ctx_00,uVar8);
		}
		bVar3 = false;
		local_f4 = 0;
		if (0 < (int)uVar4) {
		do {
		FUN_0013a730(&(pIVar1->parent).field14_0x20,local_f4,(int *)&local_c4,&local_a0);
		FUN_0013e350((int)(pIVar1->parent).chunkData,local_c4,&local_a0.m11,(uint)local_100,&local_e8,'\0');
		local_fc = 0;
		if (local_e4 != 0) {
		do {
		this_00 = local_60[local_fc];
		if ((*(byte *)&this->unlabelled12 & 4) == 0) {
		pIVar7 = InstanceDataList::GetNode(&this_00->nodes,Instance);
		(**(code **)(*(int *)pIVar7[5].time + 0x20))(&local_c0,pIVar1,1);
		}
		else if (pUVar5 == (UnkFamily5Base *)0x0) {
		InstanceContext::FUN_000fa200(this_00,0);
		bVar3 = true;
		}
		else {
		if ((((UnkFamily5A *)&pUVar5->vtable)->parent).someStruct.ptr == (UnkFamily5Ptr *)0x0) {
		pUVar6 = (UnkFamily5Ptr *)VirtualPool::AllocateMemory(8);
		if (pUVar6 == (UnkFamily5Ptr *)0x0) {
		pUVar6 = (UnkFamily5Ptr *)0x0;
		}
		else {
		pUVar6->ptr = pUVar5;
		pUVar6->unk = pUVar6->unk & 0xff000000 | 0x1000000;
		}
		(((UnkFamily5A *)&pUVar5->vtable)->parent).someStruct.ptr = pUVar6;
		}
		pUVar6 = ((UnkFamily5SomeStruct *)(&pUVar5->vtable + 1))->ptr;
		uVar2 = pUVar6->unk;
		pUVar6->unk = (uVar2 + 1 ^ uVar2) & 0xffffff ^ uVar2;
		InstanceContext::FUN_000fa200(this_00,(char)((UnkFamily5SomeStruct *)(&pUVar5->vtable + 1))->ptr);
		bVar3 = true;
		}
		local_fc = local_fc + 1;
		}
		 while (local_fc < (int)(uint)local_e4);
		}
		local_e0 = FLOAT_00386648;
		local_dc = local_dc & 0xfffffffe;
		local_e4 = 0;
		local_c8 = 0;
		local_f4 = local_f4 + 1;
		}
		 while (local_f4 < (int)uVar4);
		if (bVar3) {
		return;
		}
		}
		if (pUVar5 != (UnkFamily5Base *)0x0) {
		(*(code *)*pUVar5->vtable)(1);
		}
		return;
		}
		
	*/
	return;
}

void Action0x269::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x269::Dispose(Action0x269 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x269::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x269 * __fastcall Action0x269::Construct(Action0x269 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x269;
		this->unlabelled12 = 0;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		return this;
		}
		
	*/
	return;
}

int Action0x269::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x269::GetSize(void){
		return 0x18;
		}
		
	*/
	return 0;
}

