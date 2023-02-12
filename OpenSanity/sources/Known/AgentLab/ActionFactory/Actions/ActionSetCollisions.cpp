#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetCollisions.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetCollisions::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetCollisions::Dispose(ActionSetCollisions *this,byte param_1){
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

void ActionSetCollisions::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall ActionSetCollisions::ExecuteFromCallContext(ActionSetCollisions *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		float *pfVar1;
		InstanceNodeInstanceD *this_00;
		InstanceContext *pIVar2;
		int iVar3;
		InstanceNodeAbstract *this_01;
		void *pvVar4;
		uint uVar5;
		InstanceNodeAbstract_VTable *pIVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		this_00 = (InstanceNodeInstanceD *)(ctx->parent).ctx;
		this_01 = (InstanceNodeAbstract *)(this_00->body).field71_0x128;
		if ((this->unlabelled32 & 0x400U) != 0) {
		(this_00->body).field30_0xf0 = (float)this->unlabelled36;
		}
		if ((this->unlabelled32 & 0x8000000U) == 0) {
		if ((this->unlabelled32 & 0x10000000U) != 0) {
		pIVar2 = (this_00->body).parent.parent.parent.ctx;
		fVar9 = (*(float *)((int)&(pIVar2->parent).field14_0x20.matrix2 + 0x18) -*(float *)((int)&(pIVar2->parent).field14_0x20.matrix2 + 8)) * FLOAT_00386ab4;
		fVar7 = (*(float *)((int)&(pIVar2->parent).field14_0x20.matrix2 + 0x10) -(pIVar2->parent).field14_0x20.matrix2.m11) * FLOAT_00386ab4;
		fVar8 = (*(float *)((int)&(pIVar2->parent).field14_0x20.matrix2 + 0x14) -*(float *)((int)&(pIVar2->parent).field14_0x20.matrix2 + 4)) * FLOAT_00386ab4;
		(this_00->body).field30_0xf0 = fVar8;
		if (fVar7 <= fVar9) {
		fVar7 = fVar9;
		}
		this->unlabelled64 = (int)(fVar7 / fVar8);
		}
		}
		else {
		pIVar2 = (this_00->body).parent.parent.parent.ctx;
		fVar7 = *(float *)((int)&(pIVar2->parent).field14_0x20.matrix2 + 0x10) -(pIVar2->parent).field14_0x20.matrix2.m11;
		fVar8 = *(float *)((int)&(pIVar2->parent).field14_0x20.matrix2 + 0x14) -*(float *)((int)&(pIVar2->parent).field14_0x20.matrix2 + 4);
		fVar9 = *(float *)((int)&(pIVar2->parent).field14_0x20.matrix2 + 0x18) -*(float *)((int)&(pIVar2->parent).field14_0x20.matrix2 + 8);
		if (fVar7 < fVar8) {
		fVar7 = fVar8;
		}
		if (fVar7 < fVar9) {
		fVar7 = fVar9;
		}
		(this_00->body).field30_0xf0 = fVar7 * FLOAT_00386ab4;
		}
		if ((this->unlabelled32 & 0x100U) != 0) {
		if ((this->unlabelled32 & 0xfU) == 0) {
		if (this_01 != (InstanceNodeAbstract *)0x0) {
		FUN_001688e0((int)this_01,0);
		}
		}
		else if (this_01 == (InstanceNodeAbstract *)0x0) {
		this_01 = (InstanceNodeAbstract *)VirtualPool::AllocateMemory(0xe0);
		if (this_01 == (InstanceNodeAbstract *)0x0) {
		this_01 = (InstanceNodeAbstract *)0x0;
		}
		else {
		InstanceNodeAbstract::FUN_0015dab0(this_01,(InstanceContext *)this_00);
		}
		FUN_001688e0((int)this_01,this->unlabelled32 & 0xf);
		InstanceNodeInstanceD::FUN_00175120(this_00);
		(this_00->body).field71_0x128 = (undefined *)this_01;
		}
		}
		if ((this->unlabelled32 & 0x200U) != 0) {
		if ((this->unlabelled32 & 0xf0U) == 0) {
		if (this_01 == (InstanceNodeAbstract *)0x0) {
		return;
		}
		FUN_00163120((int)this_01);
		if (((byte)this_01[5].field6_0x14 & 0xf) < 9) {
		FUN_00163190((int)this_01);
		}
		}
		else {
		if (this_01 == (InstanceNodeAbstract *)0x0) {
		this_01 = (InstanceNodeAbstract *)VirtualPool::AllocateMemory(0xe0);
		if (this_01 == (InstanceNodeAbstract *)0x0) {
		this_01 = (InstanceNodeAbstract *)0x0;
		}
		else {
		InstanceNodeAbstract::FUN_0015dab0(this_01,(InstanceContext *)this_00);
		}
		InstanceNodeInstanceD::FUN_00175120(this_00);
		(this_00->body).field71_0x128 = (undefined *)this_01;
		}
		FUN_00168a00((int)this_01,(uint)this->unlabelled32 >> 4 & 0xf);
		}
		}
		if (this_01 == (InstanceNodeAbstract *)0x0) {
		return;
		}
		if (this->unlabelled32 < 0) {
		this_01[6].vtable = (InstanceNodeAbstract_VTable *)((uint)this_01[6].vtable | 0x800000);
		}
		if ((this->unlabelled32 & 0x800U) == 0) {
		pIVar2 = this_01[6].ctx;
		this_01[5].field6_0x14 = this_01[5].field6_0x14 & 0xfffdffff;
		pfVar1 = &(pIVar2->parent).field14_0x20.matrix2.m43;
		*pfVar1 = (float)((uint)*pfVar1 & 0xfffffffb);
		}
		else {
		iVar3 = (this_00->body).parent.parent.field56_0x94;
		if (iVar3 == 0) {
		pvVar4 = (void *)(this_00->body).parent.parent.field48_0x7c;
		}
		else {
		pvVar4 = (void *)FUN_00017ba8(iVar3);
		}
		fVar7 = FUN_00180490(&this->unlabelled72,pvVar4);
		InstanceNodeAbstract::FUN_0015dc10(this_01,fVar7);
		}
		if ((this->unlabelled32 & 0x1000U) == 0) {
		uVar5 = this_01[5].field6_0x14 & 0xff7fffff;
		}
		else {
		uVar5 = this_01[5].field6_0x14 | 0x800000;
		}
		this_01[5].field6_0x14 = uVar5;
		if ((this->unlabelled32 & 0x100000U) != 0) {
		this_01[5].field6_0x14 = this_01[5].field6_0x14 | 0x8000000;
		}
		if ((this->unlabelled32 & 0x2000000U) == 0) {
		pIVar6 = (InstanceNodeAbstract_VTable *)((uint)this_01[6].vtable & 0xfffffffb);
		}
		else {
		pIVar6 = (InstanceNodeAbstract_VTable *)((uint)this_01[6].vtable | 4);
		}
		this_01[6].vtable = pIVar6;
		if ((this->unlabelled32 & 0x4000000U) == 0) {
		pIVar6 = (InstanceNodeAbstract_VTable *)((uint)this_01[6].vtable & 0xfffffff7);
		}
		else {
		pIVar6 = (InstanceNodeAbstract_VTable *)((uint)this_01[6].vtable | 8);
		}
		this_01[6].vtable = pIVar6;
		this_01[6].field5_0x10 = (InstanceNodeAbstract *)this->unlabelled64;
		this_01[7].field6_0x14 = this->unlabelled68;
		if ((this->unlabelled32 & 0x20000000U) == 0) {
		if ((this->unlabelled32 & 0x40000000U) == 0) goto LAB_00169dd7;
		pIVar6 = (InstanceNodeAbstract_VTable *)((uint)this_01[6].vtable | 0x400000);
		}
		else {
		pIVar6 = (InstanceNodeAbstract_VTable *)((uint)this_01[6].vtable | 0x200000);
		}
		this_01[6].vtable = pIVar6;
		LAB_00169dd7:if ((char)this_01[5].field6_0x14 != '\0') {
		if ((this->unlabelled32 & 0x2000U) != 0) {
		pIVar6 = (InstanceNodeAbstract_VTable *)this->unlabelled40;
		this_01[5].field6_0x14 = this_01[5].field6_0x14 | 0x2000;
		uVar5 = this_01[8].field6_0x14;
		this_01[7].vtable = pIVar6;
		if (uVar5 != 0) {
		*(InstanceNodeAbstract_VTable **)(uVar5 + 0x31c) = pIVar6;
		}
		}
		if ((*(byte *)((int)&this->unlabelled32 + 3) & 1) == 0) {
		if ((float)this->unlabelled44 <= 0.0 && (float)this->unlabelled44 != 0.0) {
		this_01[6].vtable = (InstanceNodeAbstract_VTable *)((uint)this_01[6].vtable | 0x2000000);
		}
		}
		else {
		FUN_0015dd10((int)this_01,this->unlabelled44);
		}
		if ((this->unlabelled32 & 0x4000U) != 0) {
		FUN_0015dd50((int)this_01,this->unlabelled48);
		}
		if ((char)((uint)this->unlabelled32 >> 8) < '\0') {
		FUN_0015dc90((int)this_01,this->unlabelled52);
		}
		else if ((this->unlabelled32 & 0x400000U) != 0) {
		this_01[7].time = this->unlabelled52;
		this_01[5].field6_0x14 = this_01[5].field6_0x14 | 0x20000000;
		}
		if ((this->unlabelled32 & 0x10000U) == 0) {
		if ((this->unlabelled32 & 0x200000U) != 0) {
		uVar5 = this_01[5].field6_0x14;
		this_01[7].field5_0x10 = (InstanceNodeAbstract *)this->unlabelled56;
		this_01[5].field6_0x14 = uVar5 | 0x10000000;
		}
		}
		else {
		FUN_0015ddb0((int)this_01,(float)this->unlabelled56);
		}
		if ((this->unlabelled32 & 0x800000U) != 0) {
		if (this_01[8].field6_0x14 != 0) {
		FUN_001dbce0(this_01[8].field6_0x14,this->unlabelled60,this->unlabelled60);
		}
		}
		if (((this->unlabelled32 & 0x80000U) != 0) && ((int *)this_01[8].field6_0x14 != (int *)0x0)) {
		(**(code **)(*(int *)this_01[8].field6_0x14 + 0x40))(&this->unlabelled16);
		}
		if (this_01[8].field6_0x14 == 0) {
		this_01[5].field6_0x14 =this_01[5].field6_0x14 ^ ((uint)this->unlabelled32 >> 9 ^ this_01[5].field6_0x14) & 0x300;
		}
		pIVar6 = this_01[6].vtable;
		this_01[5].field6_0x14 = this_01[5].field6_0x14 & 0xfdffffff;
		this_01[6].vtable = (InstanceNodeAbstract_VTable *)((uint)pIVar6 | 0x7800);
		return;
		}
		InstanceNodeInstanceD::FUN_00175120(this_00);
		return;
		}
		
	*/
	return;
}

void ActionSetCollisions::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetCollisions * __fastcall ActionSetCollisions::Construct(ActionSetCollisions *this){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetCollisions;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		this->unlabelled28 = (int)fVar1;
		this->unlabelled32 = this->unlabelled32 & 0x800000;
		this->unlabelled36 = (int)fVar1;
		this->unlabelled40 = 0;
		this->unlabelled44 = 0;
		this->unlabelled48 = 0;
		this->unlabelled52 = 0;
		this->unlabelled56 = 0;
		this->unlabelled60 = 0;
		this->unlabelled64 = (int)fVar1;
		this->unlabelled68 = (int)fVar1;
		FUN_00180380(&this->unlabelled72,0xbf800000);
		return this;
		}
		
	*/
	return;
}

int ActionSetCollisions::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetCollisions::GetSize(void){
		return 0x50;
		}
		
	*/
	return 0;
}

void ActionSetCollisions::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetCollisions::UnkMethod(ActionSetCollisions *this,int *param_1){
		ushort uVar1;
		char cVar2;
		ushort *this_00;
		float fVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar2 != '\0') {
		return;
		}
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *this_00;
		if (uVar1 < 0x85) {
		switch(uVar1) {
		case 0x3f:this->unlabelled40 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 | 0x2000;
		break;
		case 0x40:case 0x41:case 0x42:case 0x43:case 0x44:case 0x45:case 0x46:case 0x47:case 0x48:case 0x49:case 0x4a:case 0x4b:case 0x4c:case 0x4d:case 0x4e:case 0x4f:case 0x50:case 0x51:case 0x52:case 0x53:case 0x54:case 0x55:case 0x56:case 0x57:case 0x58:case 0x59:case 0x5a:case 0x5b:case 0x5c:case 0x5d:case 0x5e:case 0x5f:case 0x60:case 0x61:case 0x62:case 99:case 100:case 0x65:case 0x69:case 0x6b:case 0x6c:case 0x6d:case 0x6e:case 0x6f:case 0x70:case 0x71:case 0x72:case 0x75:case 0x76:case 0x77:case 0x78:case 0x7a:case 0x7b:case 0x7c:case 0x7d:case 0x7e:case 0x7f:case 0x80:case 0x81:break;
		case 0x66:switch(*(undefined4 *)(this_00 + 2)) {
		case 1:this->unlabelled32 = this->unlabelled32 & 0xfffffff0U | 0x100;
		break;
		case 0x30:this->unlabelled32 = this->unlabelled32 & 0xfffffff1U | 0x101;
		break;
		case 0x31:this->unlabelled32 = this->unlabelled32 & 0xfffffff9U | 0x109;
		break;
		case 0x32:this->unlabelled32 = this->unlabelled32 & 0xfffffffaU | 0x10a;
		break;
		case 0x33:this->unlabelled32 = this->unlabelled32 & 0xfffffffbU | 0x10b;
		break;
		case 0x3b:this->unlabelled32 = this->unlabelled32 & 0xfffffff8U | 0x108;
		break;
		case 0x8a:this->unlabelled32 = this->unlabelled32 & 0xfffffff5U | 0x105;
		break;
		case 0x8d:this->unlabelled32 = this->unlabelled32 & 0xfffffff6U | 0x106;
		}
		break;
		case 0x67:switch(*(undefined4 *)(this_00 + 2)) {
		case 1:this->unlabelled32 = this->unlabelled32 & 0xffffff0fU | 0x200;
		break;
		case 0x30:this->unlabelled32 = this->unlabelled32 & 0xffffff1fU | 0x210;
		break;
		case 0x31:this->unlabelled32 = this->unlabelled32 & 0xffffff9fU | 0x290;
		break;
		case 0x32:this->unlabelled32 = this->unlabelled32 & 0xffffffafU | 0x2a0;
		break;
		case 0x33:this->unlabelled32 = this->unlabelled32 & 0xffffffbfU | 0x2b0;
		break;
		case 0x8a:this->unlabelled32 = this->unlabelled32 & 0xffffff5fU | 0x250;
		break;
		case 0x8d:this->unlabelled32 = this->unlabelled32 & 0xffffff6fU | 0x260;
		}
		break;
		case 0x68:this->unlabelled36 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 | 0x400;
		break;
		case 0x6a:FUN_00180840(this_00,(US002 *)&this->unlabelled72);
		this->unlabelled32 = this->unlabelled32 | 0x800;
		break;
		case 0x73:switchD_00167e67_caseD_73:this->unlabelled48 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 | 0x4000;
		break;
		case 0x74:this->unlabelled52 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 | 0x8000;
		break;
		case 0x79:this->unlabelled56 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 | 0x10000;
		break;
		case 0x82:this->unlabelled16 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 | 0x80000;
		break;
		case 0x83:this->unlabelled20 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 | 0x80000;
		break;
		default:this->unlabelled24 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 | 0x80000;
		}
		}
		else if (uVar1 < 0x95) {
		if (uVar1 == 0x94) goto switchD_00167e67_caseD_73;
		switch(uVar1) {
		case 0x87:param_1 = (int *)(int)(*(float *)(this_00 + 2) * FLOAT_003863a4);
		fVar3 = FUN_000e2310(&param_1);
		this->unlabelled56 = (int)fVar3;
		this->unlabelled32 = this->unlabelled32 | 0x200000;
		break;
		case 0x88:this->unlabelled52 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 | 0x400000;
		break;
		case 0x8b:this->unlabelled60 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 | 0x800000;
		break;
		case 0x8f:this->unlabelled44 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 | 0x1000000;
		break;
		case 0x90:this->unlabelled64 = *(int *)(this_00 + 2);
		}
		}
		else if (uVar1 < 0xf1) {
		if (uVar1 == 0xf0) {
		this->unlabelled68 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 | 0x40000000;
		}
		else if (uVar1 == 0xce) {
		this->unlabelled68 = *(int *)(this_00 + 2);
		}
		else if (uVar1 == 0xef) {
		this->unlabelled68 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 | 0x20000000;
		}
		}
		else if ((uVar1 == 0xffff) && (*(char *)(this_00 + 1) == '\x04')) {
		switch(*(undefined4 *)(this_00 + 2)) {
		case 0x17:this->unlabelled32 = this->unlabelled32 | 0x4000000;
		break;
		case 0x34:this->unlabelled32 = this->unlabelled32 | 0x8000000;
		break;
		case 0x3a:this->unlabelled32 = this->unlabelled32 | 0x1000;
		break;
		case 0x3f:this->unlabelled32 = this->unlabelled32 & 0xfffbffffU | 0x20000;
		break;
		case 0x40:this->unlabelled32 = this->unlabelled32 & 0xfffdffffU | 0x40000;
		break;
		case 0x41:this->unlabelled32 = this->unlabelled32 & 0xfff9ffff;
		break;
		case 0x43:this->unlabelled32 = this->unlabelled32 | 0x100000;
		break;
		case 0x8e:this->unlabelled32 = this->unlabelled32 | 0x2000000;
		break;
		case 199:this->unlabelled32 = this->unlabelled32 | 0x10000000;
		break;
		case 0xd1:this->unlabelled32 = this->unlabelled32 | 0x80000000;
		default:this->unlabelled44 = (int)FLOAT_003869d8;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

