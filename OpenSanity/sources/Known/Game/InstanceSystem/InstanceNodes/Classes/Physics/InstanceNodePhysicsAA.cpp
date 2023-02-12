#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Physics/InstanceNodePhysicsAA.h"

void InstanceNodePhysicsAA::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodePhysicsAA * __fastcall InstanceNodePhysicsAA::Construct(InstanceNodePhysicsAA *this){
		float fVar1;
		InstanceNodePhysicsA::Construct((InstanceNodePhysicsA *)this);
		this->vtable = (InstanceNodePhysics_VTable *)&InstanceNode_VT_Physics_AA;
		InstanceNodePhysics::InitStuff((InstanceNodePhysics *)this,1.0,1.3,1.3,1.3);
		(this->body).field17_0x37c.x = FLOAT_00386ab4;
		fVar1 = FLOAT_0038639c;
		(this->body).field_0x38c = 0;
		(this->body).field17_0x37c.w = fVar1;
		(this->body).field17_0x37c.z = fVar1;
		(this->body).field17_0x37c.y = fVar1;
		return this;
		}
		
	*/
	return;
}

uint InstanceNodePhysicsAA::FUN_001e1af0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address undefined4 __thiscall InstanceNodePhysicsAA::FUN_001e1af0(InstanceNodePhysicsAA *this,int param_1){
		undefined4 uVar1;
		uint in_EAX;
		code *pcVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float local_50;
		float local_4c;
		float local_48;
		float local_44;
		float local_40;
		float local_3c;
		float local_38;
		float local_34;
		float local_30;
		float local_2c;
		float local_28;
		float local_24;
		float local_20;
		float local_1c;
		float local_18;
		float local_14;
		fVar5 = (this->body).parent.parent.matrix1.m43 - *(float *)(param_1 + 0xe8);
		fVar4 = (this->body).parent.parent.matrix1.m42 - *(float *)(param_1 + 0xe4);
		fVar3 = (this->body).parent.parent.matrix1.m41 - *(float *)(param_1 + 0xe0);
		local_28 = (*(float *)(param_1 + 0x380) + (this->body).field17_0x37c.x) -SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
		if (0.0 < local_28) {
		fVar3 = (this->body).field17_0x37c.x;
		local_40 = (this->body).parent.parent.matrix1.m41 +(*(float *)(param_1 + 0xe0) - (this->body).parent.parent.matrix1.m41) * fVar3;
		local_3c = (this->body).parent.parent.matrix1.m42 +(*(float *)(param_1 + 0xe4) - (this->body).parent.parent.matrix1.m42) * fVar3;
		local_38 = (this->body).parent.parent.matrix1.m43 +(*(float *)(param_1 + 0xe8) - (this->body).parent.parent.matrix1.m43) * fVar3;
		local_4c = (this->body).parent.parent.matrix1.m42 - *(float *)(param_1 + 0xe4);
		local_48 = (this->body).parent.parent.matrix1.m43 - *(float *)(param_1 + 0xe8);
		fVar4 = (this->body).parent.parent.matrix1.m41 - *(float *)(param_1 + 0xe0);
		fVar3 = local_48 * local_48 + local_4c * local_4c + fVar4 * fVar4;
		local_34 = FLOAT_0038639c;
		local_44 = FLOAT_0038639c;
		if (fVar3 <= _DAT_0049d370) {
		local_50 = 0.0;
		}
		else {
		local_50 = FLOAT_0038639c / SQRT(fVar3);
		}
		local_4c = local_4c * local_50;
		local_48 = local_48 * local_50;
		local_50 = local_50 * fVar4;
		local_30 = local_50 * local_28;
		local_2c = local_4c * local_28;
		local_28 = local_48 * local_28;
		local_20 = 0.0 - local_30 * FLOAT_00395a44;
		local_1c = 0.0 - local_2c * FLOAT_00395a44;
		local_18 = 0.0 - local_28 * FLOAT_00395a44;
		local_24 = FLOAT_0038639c;
		local_14 = FLOAT_0038639c;
		FUN_001dd6a0((int)this,&local_30);
		FUN_001dd6a0(param_1,&local_20);
		FUN_001db670((int)this,(this->body).parent.field38_0x31c,1.0);
		FUN_001db670(param_1,*(float *)(param_1 + 800),1.0);
		local_50 = local_50 * FLOAT_003869d8;
		local_4c = local_4c * FLOAT_003869d8;
		local_48 = local_48 * FLOAT_003869d8;
		FUN_001e0f90((int)this,&local_40,&local_50,param_1);
		uVar1 = *(undefined4 *)(param_1 + 0x2e4);
		(this->body).parent.parent.field1_0x14 = (this->body).parent.parent.field1_0x14 | 0x10;
		pcVar2 = (code *)(this->body).parent.field65_0x368;
		if (pcVar2 != (code *)0x0) {
		(*pcVar2)(uVar1,0,*(undefined4 *)&(this->body).field_0x36c);
		}
		pcVar2 = *(code **)(param_1 + 0x36c);
		uVar1 = (this->body).parent.field14_0x2e0;
		*(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10;
		if (pcVar2 != (code *)0x0) {
		pcVar2 = (code *)(*pcVar2)(uVar1,0,*(undefined4 *)(param_1 + 0x370));
		}
		return CONCAT31((int3)((uint)pcVar2 >> 8),1);
		}
		return in_EAX & 0xffffff00;
		}
		
	*/
	return 0;
}

uint InstanceNodePhysicsAA::FUN_001e1e30(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address undefined4 __thiscall InstanceNodePhysicsAA::FUN_001e1e30(InstanceNodePhysicsAA *this,int param_1){
		undefined4 uVar1;
		uint uVar2;
		code *pcVar3;
		float fVar4;
		float local_1f0;
		float local_1ec;
		float local_1e8;
		float local_1e4;
		float local_1e0;
		float local_1dc;
		float local_1d8;
		float local_1d4;
		float local_1d0;
		float local_1cc;
		float local_1c8;
		float local_1c4;
		float local_1b8;
		float local_1b4;
		float local_1b0;
		float local_1ac;
		float local_1a8;
		float local_1a4;
		undefined local_1a0 [412];
		local_1f0 = (this->body).field17_0x37c.y * (this->body).field17_0x37c.x;
		local_1ec = (this->body).field17_0x37c.z * (this->body).field17_0x37c.x;
		local_1e8 = (this->body).field17_0x37c.w * (this->body).field17_0x37c.x;
		local_1e0 = *(float *)(param_1 + 900) * *(float *)(param_1 + 0x380);
		local_1dc = *(float *)(param_1 + 0x388) * *(float *)(param_1 + 0x380);
		local_1d8 = *(float *)(param_1 + 0x38c) * *(float *)(param_1 + 0x380);
		uVar2 = FUN_001def90(local_1a0,&local_1d0,&local_1b0,&(this->body).parent.parent.matrix1.m11,&local_1f0,(float *)(param_1 + 0xb0),&local_1e0);
		if ((char)uVar2 != '\0') {
		local_1e0 = (((this->body).parent.parent.matrix1.m41 + local_1d0) - *(float *)(param_1 + 0xe0))* FLOAT_003869d8;
		local_1dc = (((this->body).parent.parent.matrix1.m42 + local_1cc) - *(float *)(param_1 + 0xe4))* FLOAT_003869d8;
		local_1d8 = (((this->body).parent.parent.matrix1.m43 + local_1c8) - *(float *)(param_1 + 0xe8))* FLOAT_003869d8;
		local_1d4 = FLOAT_0038639c;
		local_1c4 = FLOAT_0038639c;
		local_1d0 = 0.0 - local_1e0 * FLOAT_00395a44;
		local_1cc = 0.0 - local_1dc * FLOAT_00395a44;
		local_1c8 = 0.0 - local_1d8 * FLOAT_00395a44;
		FUN_001dd6a0((int)this,&local_1e0);
		FUN_001dd6a0(param_1,&local_1d0);
		local_1b0 = ((this->body).parent.parent.matrix1.m41 + *(float *)(param_1 + 0xe0)) *FLOAT_00386ab4;
		local_1a8 = (*(float *)(param_1 + 0xe8) + (this->body).parent.parent.matrix1.m43) *FLOAT_00386ab4;
		local_1ac = (*(float *)(param_1 + 0xe4) + (this->body).parent.parent.matrix1.m42) *FLOAT_00386ab4;
		fVar4 = local_1d8 * local_1d8 + local_1dc * local_1dc + local_1e0 * local_1e0;
		local_1a4 = FLOAT_0038639c;
		local_1e4 = FLOAT_0038639c;
		if (fVar4 <= _DAT_0049d370) {
		local_1e8 = 0.0;
		}
		else {
		local_1b4 = SQRT(fVar4);
		local_1e8 = FLOAT_0038639c / local_1b4;
		local_1b8 = fVar4;
		}
		local_1f0 = local_1e0 * local_1e8;
		local_1ec = local_1dc * local_1e8;
		local_1e8 = local_1d8 * local_1e8;
		FUN_001db670((int)this,(this->body).parent.field38_0x31c,1.0);
		FUN_001db670(param_1,*(float *)(param_1 + 800),1.0);
		local_1f0 = local_1f0 * FLOAT_003869d8;
		local_1ec = local_1ec * FLOAT_003869d8;
		local_1e8 = local_1e8 * FLOAT_003869d8;
		FUN_001e0f90((int)this,&local_1b0,&local_1f0,param_1);
		uVar1 = *(undefined4 *)(param_1 + 0x2e4);
		(this->body).parent.parent.field1_0x14 = (this->body).parent.parent.field1_0x14 | 0x10;
		pcVar3 = (code *)(this->body).parent.field65_0x368;
		if (pcVar3 != (code *)0x0) {
		(*pcVar3)(uVar1,0,*(undefined4 *)&(this->body).field_0x36c);
		}
		pcVar3 = *(code **)(param_1 + 0x36c);
		uVar1 = (this->body).parent.field14_0x2e0;
		*(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10;
		if (pcVar3 != (code *)0x0) {
		pcVar3 = (code *)(*pcVar3)(uVar1,0,*(undefined4 *)(param_1 + 0x370));
		}
		return CONCAT31((int3)((uint)pcVar3 >> 8),1);
		}
		return uVar2 & 0xffffff00;
		}
		
	*/
	return 0;
}

bool InstanceNodePhysicsAA::FUN_001e21a0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps bool __thiscall InstanceNodePhysicsAA::FUN_001e21a0(InstanceNodePhysicsAA *this,int param_1){
		Matrix4 *pMVar1;
		code *pcVar2;
		uint uVar3;
		undefined4 uVar4;
		AutoClass2 *this_00;
		bool local_a1;
		int local_a0;
		void *local_94;
		float local_90;
		float local_8c;
		float local_88;
		float local_80;
		float local_7c;
		float local_78;
		undefined4 local_74;
		float local_70;
		float local_6c;
		float local_68;
		undefined4 local_64;
		undefined local_60 [16];
		Matrix4 local_50;
		this_00 = (AutoClass2 *)(*(int *)(param_1 + 0x2e4) + 0x20);
		uVar3 = AutoClass2::FUN_001373f0(this_00);
		local_a1 = false;
		local_a0 = 0;
		if (0 < (int)uVar3) {
		pMVar1 = &(this->body).parent.parent.matrix1;
		do {
		FUN_0013a730(this_00,local_a0,(int *)&local_94,&local_50);
		uVar4 = FUN_001dd9a0((int)this,&pMVar1->m11,(Matrix4 *)(param_1 + 0xb0),local_94,&local_80,(float *)local_60,&local_90);
		if ((char)uVar4 != '\0') {
		FUN_001db670((int)this,(this->body).parent.field38_0x31c,1.0);
		FUN_001db670(param_1,*(float *)(param_1 + 800),1.0);
		local_64 = local_74;
		local_70 = 0.0 - local_80 * FLOAT_00395a44;
		local_6c = 0.0 - local_7c * FLOAT_00395a44;
		local_68 = 0.0 - local_78 * FLOAT_00395a44;
		FUN_001dd6a0((int)this,&local_80);
		FUN_001dd6a0(param_1,&local_70);
		local_90 = 0.0 - local_90;
		local_8c = 0.0 - local_8c;
		local_88 = 0.0 - local_88;
		local_60 = CONCAT412(local_60._0_4_ * (this->body).parent.parent.matrix1.m14 +local_60._4_4_ * (this->body).parent.parent.matrix1.m24 +(this->body).parent.parent.matrix1.m34 * 0.0 +(this->body).parent.parent.matrix1.m44,CONCAT48(local_60._0_4_ * (this->body).parent.parent.matrix1.m13 +local_60._4_4_ * (this->body).parent.parent.matrix1.m23 +(this->body).parent.parent.matrix1.m33 * 0.0 +(this->body).parent.parent.matrix1.m43,CONCAT44(local_60._0_4_ *(this->body).parent.parent.matrix1.m12 +local_60._4_4_ *(this->body).parent.parent.matrix1.m22 +(this->body).parent.parent.matrix1.m32 * 0.0 +(this->body).parent.parent.matrix1.m42,local_60._0_4_ * pMVar1->m11 +local_60._4_4_ *(this->body).parent.parent.matrix1.m21 +(this->body).parent.parent.matrix1.m31 * 0.0 +(this->body).parent.parent.matrix1.m41)));
		FUN_001e0f90((int)this,(float *)local_60,&local_90,param_1);
		uVar4 = *(undefined4 *)(param_1 + 0x2e4);
		(this->body).parent.parent.field1_0x14 = (this->body).parent.parent.field1_0x14 | 0x10;
		pcVar2 = (code *)(this->body).parent.field65_0x368;
		if (pcVar2 != (code *)0x0) {
		(*pcVar2)(uVar4,local_a0,*(undefined4 *)&(this->body).field_0x36c);
		}
		uVar4 = (this->body).parent.field14_0x2e0;
		*(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x10;
		if (*(code **)(param_1 + 0x36c) != (code *)0x0) {
		(**(code **)(param_1 + 0x36c))(uVar4,0,*(undefined4 *)(param_1 + 0x370));
		}
		local_a1 = true;
		}
		local_a0 = local_a0 + 1;
		}
		 while (local_a0 < (int)uVar3);
		return local_a1;
		}
		return false;
		}
		
	*/
	return false;
}

uint InstanceNodePhysicsAA::PhysicsMethod1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address uint __fastcall InstanceNodePhysicsAA::PhysicsMethod1(InstanceNodePhysicsAA *this){
		ushort uVar1;
		code *pcVar2;
		bool bVar3;
		uint in_EAX;
		UNV007 *pUVar4;
		undefined4 uVar5;
		undefined2 *puVar6;
		uint uVar7;
		float *pfVar8;
		float fVar9;
		float fVar10;
		float *pfVar11;
		Vector4 local_180;
		Vector4 local_170;
		float local_160;
		float local_15c;
		float local_158;
		float local_154;
		float local_144;
		float fStack320;
		float fStack316;
		undefined4 uStack312;
		float fStack308;
		InstanceNodeInstance *local_128;
		UNV007 *local_124;
		BoundingBox local_120;
		float local_100;
		float local_fc;
		float local_f8;
		float local_f4;
		float local_f0;
		float local_ec;
		float local_e8;
		float local_e4;
		float local_d4;
		float local_d0;
		float local_cc;
		float local_c8;
		float local_c4;
		float local_c0;
		float local_bc;
		float local_b8;
		float local_b4;
		float local_b0;
		float local_ac;
		float local_a8;
		float local_a4;
		float local_a0;
		float local_9c;
		float local_98;
		float local_94;
		undefined2 local_90;
		undefined2 local_8e;
		float local_80;
		undefined4 local_7c;
		undefined4 local_78;
		float local_74;
		float local_70;
		float local_6c;
		float local_68;
		float local_64;
		float local_54;
		Matrix4 local_50;
		Matrix4 *matrix;
		if ((*(byte *)&(this->body).parent.field13_0x2dc & 2) != 0) {
		return in_EAX & 0xffffff00;
		}
		local_128 = (InstanceNodeInstance *)InstanceDataList::GetNode(&((this->body).parent.parent.parent.ctx)->nodes,Instance);
		bVar3 = false;
		if ((this->body).parent.field27_0x2fc == (UNV007 *)0x0) {
		pUVar4 = (UNV007 *)VirtualPool::AllocateMemory(0x50);
		if (pUVar4 == (UNV007 *)0x0) {
		pUVar4 = (UNV007 *)0x0;
		}
		else {
		pUVar4 = UNV007::Construct(pUVar4,(this->body).parent.field14_0x2e0,0x50);
		}
		(this->body).parent.field27_0x2fc = pUVar4;
		}
		pUVar4 = (this->body).parent.field27_0x2fc;
		local_124 = pUVar4;
		InstanceNodePhysics::FUN_001df330((InstanceNodePhysics *)this);
		local_120.v1.z = (this->body).field17_0x37c.x;
		local_120.v2.x = (this->body).parent.parent.matrix1.m41 + local_120.v1.z;
		local_120.v2.y = (this->body).parent.parent.matrix1.m42 + local_120.v1.z;
		local_120.v2.z = (this->body).parent.parent.matrix1.m43 + local_120.v1.z;
		local_120.v1.x = (this->body).parent.parent.matrix1.m41 - local_120.v1.z;
		local_120.v1.y = (this->body).parent.parent.matrix1.m42 - local_120.v1.z;
		local_120.v1.z = (this->body).parent.parent.matrix1.m43 - local_120.v1.z;
		local_120.v1.w = FLOAT_0038639c;
		local_120.v2.w = FLOAT_0038639c;
		BoundingBox::Expand(&local_120,0.01);
		UNV007::FUN_001e2d20(pUVar4,&local_120);
		local_144 = 0.0;
		if (pUVar4->field16_0x38 != 0) {
		pfVar8 = (float *)(pUVar4->field19_0x40 + 0x10);
		pUVar4->field17_0x3a = 0;
		pUVar4->field18_0x3c = pUVar4->field19_0x40;
		if (pfVar8 != (float *)0x0) {
		do {
		local_c0 = *pfVar8;
		local_90 = *(undefined2 *)(pfVar8 + 0xc);
		local_8e = *(undefined2 *)((int)pfVar8 + 0x32);
		local_bc = pfVar8[1];
		local_b8 = pfVar8[2];
		local_b4 = pfVar8[3];
		local_b0 = pfVar8[4];
		local_ac = pfVar8[5];
		local_a8 = pfVar8[6];
		local_a4 = pfVar8[7];
		local_a0 = pfVar8[8];
		local_9c = pfVar8[9];
		local_98 = pfVar8[10];
		local_94 = pfVar8[0xb];
		FUN_001e7dd0(&local_c0,&(this->body).parent.parent.matrix2.m11);
		if ((this->body).field_0x38c != '\0') {
		Matrix4::Construct1(&local_50);
		local_50.m11 = FLOAT_0038639c / (this->body).field17_0x37c.y;
		local_50.m22 = FLOAT_0038639c / (this->body).field17_0x37c.z;
		local_50.m33 = FLOAT_0038639c / (this->body).field17_0x37c.w;
		FUN_001e7dd0(&local_c0,&local_50.m11);
		}
		local_80 = 0.0;
		local_7c = 0;
		local_78 = 0;
		local_74 = FLOAT_0038639c;
		uVar5 = FUN_001e9f40(&local_c0,&local_80,(this->body).field17_0x37c.x,&local_180.x);
		if ((char)uVar5 != '\0') {
		puVar6 = FUN_001e78e0((int)&local_c0);
		if ((*(uint *)(puVar6 + 4) >> 6 & 1) == 0) {
		bVar3 = true;
		FUN_00177240((int)local_128,pfVar8,&(this->body).parent.parent.matrix1.m41);
		if (FLOAT_00386394 < (this->body).parent.field39_0x320) {
		fVar9 = local_180.x * local_180.x + local_180.z * local_180.z +local_180.y * local_180.y;
		if (_DAT_0049d370 < fVar9) {
		local_54 = SQRT(fVar9);
		local_d4 = fVar9;
		}
		if ((this->body).field_0x38c != '\0') {
		local_180.x = (this->body).field17_0x37c.y * local_180.x;
		local_180.y = (this->body).field17_0x37c.z * local_180.y;
		local_180.z = (this->body).field17_0x37c.w * local_180.z;
		}
		InstanceTransform::FUN_000d3ed0((InstanceTransform *)&(this->body).parent.parent.matrix1,&local_180);
		if (local_144 < local_180.y) {
		local_144 = local_180.y;
		}
		}
		pcVar2 = (code *)(this->body).parent.field60_0x360;
		(this->body).parent.parent.field1_0x14 = (this->body).parent.parent.field1_0x14 | 4;
		if (pcVar2 != (code *)0x0) {
		(*pcVar2)(pfVar8,*(undefined4 *)&(this->body).parent.field_0x364);
		}
		}
		else {
		local_154 = local_180.w;
		fVar9 = local_180.x * local_180.x + local_180.z * local_180.z +local_180.y * local_180.y;
		if (fVar9 <= _DAT_0049d370) {
		fVar10 = 0.0;
		}
		else {
		local_d0 = SQRT(fVar9);
		fVar10 = FLOAT_0038639c / local_d0;
		local_f4 = fVar9;
		}
		local_158 = 0.0 - (this->body).field17_0x37c.x;
		local_160 = local_158 * local_180.x * fVar10;
		local_15c = local_180.y * fVar10 * local_158;
		local_158 = local_180.z * fVar10 * local_158;
		if ((this->body).field_0x38c != '\0') {
		local_180.x = (this->body).field17_0x37c.y * local_180.x;
		local_180.y = (this->body).field17_0x37c.z * local_180.y;
		local_180.z = (this->body).field17_0x37c.w * local_180.z;
		}
		matrix = &(this->body).parent.parent.matrix1;
		local_e4 = local_180.w;
		local_f0 = local_180.x;
		local_ec = local_180.y;
		local_e8 = local_180.z;
		InstanceTransform::FUN_000d3ed0((InstanceTransform *)matrix,&local_180);
		local_6c = local_180.y * FLOAT_00386ab4;
		local_68 = local_180.z * FLOAT_00386ab4;
		local_64 = local_180.w;
		local_70 = local_180.x * FLOAT_00386ab4;
		(this->body).parent.field58_0x34c.x = local_70 + (this->body).parent.field58_0x34c.x;
		(this->body).parent.field58_0x34c.y = local_6c + (this->body).parent.field58_0x34c.y;
		(this->body).parent.field58_0x34c.z = local_68 + (this->body).parent.field58_0x34c.z;
		local_cc = local_70 * local_70 + local_68 * local_68 + local_6c * local_6c;
		local_fc = SQRT(local_cc);
		(this->body).parent.field59_0x35c = (float)(this->body).parent.field59_0x35c + local_fc;
		InstanceNodePhysicsA::FUN_001db180((InstanceNodePhysicsA *)this,&local_70);
		local_170.w = local_e4;
		fVar9 = local_f0 * local_f0 + local_e8 * local_e8 + local_ec * local_ec;
		if (fVar9 <= _DAT_0049d370) {
		local_170.z = 0.0;
		}
		else {
		local_c4 = SQRT(fVar9);
		local_170.z = FLOAT_0038639c / local_c4;
		local_f8 = fVar9;
		}
		local_170.x = local_170.z * local_f0;
		local_170.y = local_ec * local_170.z;
		local_170.z = local_e8 * local_170.z;
		if ((this->body).field_0x38c != '\0') {
		local_160 = local_160 * (this->body).field17_0x37c.y;
		local_170.x = local_170.x / (this->body).field17_0x37c.y;
		local_170.y = local_170.y / (this->body).field17_0x37c.z;
		local_170.z = local_170.z / (this->body).field17_0x37c.w;
		local_15c = local_15c * (this->body).field17_0x37c.z;
		local_158 = local_158 * (this->body).field17_0x37c.w;
		}
		InstanceTransform::FUN_000d3ed0((InstanceTransform *)matrix,&local_170);
		fVar9 = local_170.x * local_170.x + local_170.z * local_170.z +local_170.y * local_170.y;
		if (fVar9 <= _DAT_0049d370) {
		fVar10 = 0.0;
		}
		else {
		local_100 = SQRT(fVar9);
		fVar10 = FLOAT_0038639c / local_100;
		local_c8 = fVar9;
		}
		local_170.x = fVar10 * local_170.x;
		local_170.y = local_170.y * fVar10;
		local_170.z = local_170.z * fVar10;
		FUN_001db670((int)this,(this->body).parent.field38_0x31c,1.0);
		pfVar11 = (float *)0x0;
		(this->body).parent.field13_0x2dc = (this->body).parent.field13_0x2dc | 4;
		puVar6 = FUN_001e78e0((int)&local_c0);
		FUN_001e33e0(this,(undefined (*) [12])&local_160,&local_170.x,(int)puVar6,pfVar11);
		pcVar2 = (code *)(this->body).parent.field60_0x360;
		(this->body).parent.parent.field1_0x14 = (this->body).parent.parent.field1_0x14 | 4;
		pUVar4 = local_124;
		if (pcVar2 != (code *)0x0) {
		(*pcVar2)(pfVar8,*(undefined4 *)&(this->body).parent.field_0x364);
		pUVar4 = local_124;
		}
		}
		}
		pUVar4->field17_0x3a = pUVar4->field17_0x3a + 1;
		uVar1 = pUVar4->field17_0x3a;
		uVar7 = (uint)uVar1;
		if (uVar1 == pUVar4->field16_0x38) break;
		if ((uVar1 & 7) == 0) {
		pUVar4->field18_0x3c = *(undefined4 *)pUVar4->field18_0x3c;
		}
		uVar7 = (uVar1 & 7) * 0x40;
		pfVar8 = (float *)(uVar7 + 0x10 + pUVar4->field18_0x3c);
		}
		 while (pfVar8 != (float *)0x0);
		uVar7 = uVar7 & 0xffffff00;
		if (bVar3) {
		if (0.0 < local_144) {
		fStack320 = 0.0;
		uStack312 = 0;
		fStack316 = (this->body).parent.field39_0x320 * (this->body).parent.parent.field2_0x18 *local_144 - (this->body).parent.parent.field37_0x14c.y * FLOAT_0038bc04;
		fStack308 = FLOAT_0038639c;
		uVar7 = FUN_001e0660((int)this,&fStack320,&(this->body).parent.parent.matrix1.m41);
		}
		return CONCAT31((int3)(uVar7 >> 8),1);
		}
		}
		}
		local_128[1].body.field41_0x3c.chunkName.value = (char *)0xffffffff;
		return CONCAT31((int3)((uint)local_128 >> 8),1);
		}
		
	*/
	return 0;
}

void InstanceNodePhysicsAA::PhysicsMethod2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodePhysicsAA::PhysicsMethod2(InstanceNodePhysicsAA *this){
		ChunkData *this_00;
		int iVar1;
		InstanceNodePhysics *pIVar2;
		int iVar3;
		undefined *local_a4;
		ushort local_a0;
		undefined2 local_9e;
		float local_9c;
		uint local_98;
		undefined4 local_94;
		undefined4 local_90;
		undefined4 local_8c;
		undefined4 local_88;
		undefined4 local_84;
		BoundingBox local_80;
		undefined local_60 [92];
		InstanceContext *iVar2;
		local_80.v1.x = (this->body).parent.parent.matrix1.m41;
		local_80.v1.y = (this->body).parent.parent.matrix1.m42;
		local_80.v1.z = (this->body).parent.parent.matrix1.m43;
		local_80.v1.w = (this->body).parent.parent.matrix1.m44;
		local_80.v2.x = (this->body).parent.parent.matrix1.m41;
		local_80.v2.y = (this->body).parent.parent.matrix1.m42;
		local_80.v2.z = (this->body).parent.parent.matrix1.m43;
		local_80.v2.w = (this->body).parent.parent.matrix1.m44;
		BoundingBox::Expand(&local_80,(this->body).field17_0x37c.x);
		iVar3 = (this->body).parent.field14_0x2e0;
		local_a4 = local_60;
		local_98 = local_98 & 0xfffffffe | 2;
		local_a0 = 0;
		local_9e = 0x14;
		local_9c = FLOAT_003959c0;
		local_94 = 0x10;
		local_90 = 1;
		local_8c = 0;
		local_84 = 0;
		local_88 = 0;
		this_00 = *(ChunkData **)(iVar3 + 0xb0);
		FUN_00137280((int)&local_a4,iVar3);
		ChunkData::FUN_0013e2c0(this_00,(undefined4 *)&local_80,(this->body).parent.field44_0x32c,&local_a4);
		iVar3 = 0;
		(this->body).parent.parent.field20_0x9c = 0;
		if (local_a0 != 0) {
		do {
		iVar1 = (this->body).parent.field14_0x2e0;
		iVar2 = *(InstanceContext **)(local_a4 + iVar3 * 4);
		if ((iVar1 == 0) || (iVar2->field27_0xe0 != iVar1)) {
		if (((uint)(iVar2->nodes).cnt >> 5 & 1) == 0) {
		FUN_001e4c50(this,(int)iVar2);
		}
		else {
		pIVar2 = (InstanceNodePhysics *)InstanceDataList::GetNode(&iVar2->nodes,Physics);
		(*this->vtable->PhysicsMethod3)((InstanceNodePhysics *)this,pIVar2);
		}
		}
		iVar3 = iVar3 + 1;
		}
		 while (iVar3 < (int)(uint)local_a0);
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodePhysicsAA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodePhysicsAA::Dispose(InstanceNodePhysicsAA *this,byte param_1){
		this->vtable = (InstanceNodePhysics_VTable *)&InstanceNode_VT_Physics_AA;
		InstanceNodePhysicsA::Dispose((InstanceNodeAbstract *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (InstanceNodeAbstract *)this;
		}
		
	*/
	return;
}

uint InstanceNodePhysicsAA::PhysicsMethod3(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall InstanceNodePhysicsAA::PhysicsMethod3(InstanceNodePhysicsAA *this,int *param_1){
		bool bVar1;
		uint uVar2;
		undefined3 extraout_var;
		uVar2 = (**(code **)(*param_1 + 0x38))();
		if ((char)uVar2 == '\0') {
		if ((((uint)param_1[6] >> 3 & 1) != 0) || (this <= param_1)) {
		bVar1 = FUN_001e21a0(this,(int)param_1);
		return CONCAT31(extraout_var,bVar1);
		}
		}
		else if ((((uint)param_1[6] >> 3 & 1) != 0) || (this <= param_1)) {
		if (((this->body).field_0x38c == '\0') && (*(char *)(param_1 + 0xe4) == '\0')) {
		uVar2 = FUN_001e1af0(this,(int)param_1);
		return uVar2;
		}
		uVar2 = FUN_001e1e30(this,(int)param_1);
		return uVar2;
		}
		return uVar2 & 0xffffff00;
		}
		
	*/
	return 0;
}

bool InstanceNodePhysicsAA::IsB() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodePhysicsAA::IsB(void){
		return true;
		}
		
	*/
	return false;
}

void InstanceNodePhysicsAA::PhysicsMethod5() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined InstanceNodePhysicsAA::PhysicsMethod5(void){
		return 0;
		}
		
	*/
	return;
}

