#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Physics/InstanceNodePhysicsAB.h"

#include "headers/Known/Math/Vector4.h"
void InstanceNodePhysicsAB::PhysicsMethod0(float param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall InstanceNodePhysicsAB::PhysicsMethod0(InstanceNodePhysicsAB *this,float param_1){
		float fVar1;
		InstanceContext *pIVar2;
		InstanceTransform *transform;
		int iVar3;
		float *pfVar4;
		float local_a0;
		float local_9c;
		undefined4 local_98;
		float local_94;
		float local_90 [35];
		pIVar2 = (this->body).parent.parent.parent.ctx;
		transform = (pIVar2->parent).transform;
		InstanceTransform::FillMatrix(transform);
		FUN_00148470((void *)((int)&(pIVar2->parent).field14_0x20.matrix2 + 0x20),(undefined (*) [16])local_90,(float *)transform);
		pfVar4 = local_90;
		iVar3 = 8;
		do {
		fVar1 = pfVar4[1];
		if (FLOAT_00386608 < param_1 - fVar1) {
		InstanceNodePhysics::FUN_001df330((InstanceNodePhysics *)this);
		local_9c = (this->body).parent.field39_0x320 * (this->body).parent.parent.field2_0x18 *(param_1 - fVar1) -((this->body).parent.parent.field37_0x14c.y +((this->body).parent.parent.field36_0x13c.x *(pfVar4[2] - (this->body).parent.parent.matrix1.m43) -(this->body).parent.parent.field36_0x13c.z *(*pfVar4 - (this->body).parent.parent.matrix1.m41))) * FLOAT_0038bc04;
		local_a0 = 0.0;
		local_98 = 0;
		local_94 = FLOAT_0038639c;
		FUN_001e0660((int)this,&local_a0,pfVar4);
		}
		pfVar4 = pfVar4 + 4;
		iVar3 = iVar3 + -1;
		}
		 while (iVar3 != 0);
		return;
		}
		
	*/
	return;
}

bool InstanceNodePhysicsAB::PhysicsMethod1(InstanceNodePhysicsAB* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling  WARNING: Could not reconcile some variable overlaps  WARNING: Globals starting with '_' overlap smaller symbols at the same address bool __fastcall InstanceNodePhysicsAB::PhysicsMethod1(InstanceNodePhysicsAB *param_1){
		float *pfVar1;
		Matrix4 *pMVar2;
		ushort uVar3;
		UNV007 *this;
		uint uVar4;
		code *pcVar5;
		bool bVar6;
		UNV007 *puVar6;
		undefined4 uVar7;
		int iVar8;
		undefined2 *puVar9;
		float fVar10;
		float *pfVar11;
		float local_d8;
		int local_d4;
		float local_d0;
		float local_cc;
		float local_c8;
		undefined4 local_c4;
		float local_c0;
		float local_bc;
		float local_b8;
		undefined4 local_b4;
		int local_b0;
		ushort *local_ac;
		int local_a8;
		InstanceNodeInstance *local_a4;
		undefined local_a0 [28];
		float local_84;
		float local_80;
		float local_7c;
		float local_78;
		UNV007 *local_74;
		float local_70 [4];
		float local_60;
		float local_5c;
		float local_58;
		undefined4 local_54;
		BoundingBox local_50;
		undefined local_30 [44];
		if ((*(byte *)&(param_1->body).parent.field13_0x2dc & 2) != 0) {
		return false;
		}
		local_a4 = (InstanceNodeInstance *)InstanceDataList::GetNode(&((param_1->body).parent.parent.parent.ctx)->nodes,Instance);
		local_a8 = (int)&(((param_1->body).parent.parent.parent.ctx)->parent).field14_0x20.matrix2;
		bVar6 = false;
		local_d8 = 0.0;
		local_b0 = 0;
		if (0 < *(int *)&(param_1->body).field_0x380) {
		local_d4 = 0;
		do {
		if ((param_1->body).parent.field27_0x2fc == (UNV007 *)0x0) {
		puVar6 = (UNV007 *)VirtualPool::AllocateMemory(0x50);
		fVar10 = FLOAT_0038639c;
		if (puVar6 == (UNV007 *)0x0) {
		puVar6 = (UNV007 *)0x0;
		}
		else {
		puVar6->field0_0x0 = (param_1->body).parent.field14_0x2e0;
		puVar6->field14_0x30 = fVar10;
		puVar6->field15_0x34 = 0x50;
		puVar6->field16_0x38 = 0;
		puVar6->field17_0x3a = -1;
		puVar6->field18_0x3c = 0;
		puVar6->field19_0x40 = 0;
		(puVar6->bb).v1.x = Vector4_0039ef70.x;
		(puVar6->bb).v1.y = Vector4_0039ef70.y;
		(puVar6->bb).v1.z = Vector4_0039ef70.z;
		(puVar6->bb).v1.w = Vector4_0039ef70.w;
		(puVar6->bb).v2.x = Vector4_0039ef70.x;
		(puVar6->bb).v2.y = Vector4_0039ef70.y;
		(puVar6->bb).v2.z = Vector4_0039ef70.z;
		(puVar6->bb).v2.w = Vector4_0039ef70.w;
		}
		(param_1->body).parent.field27_0x2fc = puVar6;
		}
		this = (param_1->body).parent.field27_0x2fc;
		local_ac = (ushort *)(*(int *)&(param_1->body).field_0x37c + local_d4);
		local_74 = this;
		FUN_0014a090(local_ac,&(param_1->body).parent.parent.matrix1,&local_50);
		InstanceNodePhysics::FUN_001df330((InstanceNodePhysics *)param_1);
		UNV007::FUN_001e2d20(this,&local_50);
		if (this->field16_0x38 != 0) {
		this->field17_0x3a = 0;
		this->field18_0x3c = this->field19_0x40;
		pfVar1 = (float *)(this->field19_0x40 + 0x10);
		while (pfVar1 != (float *)0x0) {
		FUN_00147450(local_30,pfVar1,pfVar1 + 4,pfVar1 + 8);
		uVar7 = FUN_001476a0(local_30,(float *)&local_50);
		if ((char)uVar7 != '\0') {
		FUN_000da0b0(local_70,pfVar1,pfVar1 + 4,pfVar1 + 8);
		pMVar2 = &(param_1->body).parent.parent.matrix1;
		iVar8 = FUN_0014af00(local_ac,&pMVar2->m11,local_70);
		if ((iVar8 == 0) &&(uVar7 = FUN_001ef570(pfVar1,local_ac,&pMVar2->m11,&local_c0,(float *)local_a0),(char)uVar7 != '\0')) {
		puVar9 = FUN_001e78e0((int)pfVar1);
		if ((*(uint *)(puVar9 + 4) >> 6 & 1) == 0) {
		bVar6 = true;
		FUN_00177240((int)local_a4,pfVar1,(float *)local_a0);
		if ((param_1->body).parent.field39_0x320 <= FLOAT_00386394) goto LAB_001e5301;
		fVar10 = local_a0._4_4_ - *(float *)(local_a8 + 4);
		if (local_d8 < fVar10) {
		(param_1->body).parent.parent.field46_0x20c = local_a0._4_4_;
		local_d8 = fVar10;
		}
		uVar4 = (param_1->body).parent.parent.field1_0x14;
		}
		else {
		local_c4 = local_b4;
		fVar10 = local_b8 * local_b8 + local_bc * local_bc + local_c0 * local_c0;
		if (fVar10 <= _DAT_0049d370) {
		local_c8 = 0.0;
		}
		else {
		local_78 = SQRT(fVar10);
		local_c8 = FLOAT_0038639c / local_78;
		local_7c = fVar10;
		}
		local_d0 = local_c0 * local_c8;
		local_cc = local_bc * local_c8;
		local_c8 = local_b8 * local_c8;
		local_54 = local_b4;
		local_58 = local_b8 * FLOAT_00386ab4;
		local_60 = local_c0 * FLOAT_00386ab4;
		local_5c = local_bc * FLOAT_00386ab4;
		(param_1->body).parent.field58_0x34c.x =local_60 + (param_1->body).parent.field58_0x34c.x;
		(param_1->body).parent.field58_0x34c.y =(param_1->body).parent.field58_0x34c.y + local_5c;
		(param_1->body).parent.field58_0x34c.z =(param_1->body).parent.field58_0x34c.z + local_58;
		local_84 = local_58 * local_58 + local_5c * local_5c + local_60 * local_60;
		local_80 = SQRT(local_84);
		(param_1->body).parent.field59_0x35c =(float)(param_1->body).parent.field59_0x35c + local_80;
		InstanceNodePhysicsA::FUN_001db180((InstanceNodePhysicsA *)param_1,&local_60);
		(param_1->body).parent.field13_0x2dc = (param_1->body).parent.field13_0x2dc | 4;
		pfVar11 = (float *)0x0;
		local_a0._0_16_ =CONCAT412(local_a0._0_4_ * (param_1->body).parent.parent.matrix2.m14 +local_a0._4_4_ * (param_1->body).parent.parent.matrix2.m24 +(param_1->body).parent.parent.matrix2.m34 * 0.0 +(param_1->body).parent.parent.matrix2.m44,CONCAT48(local_a0._0_4_ * (param_1->body).parent.parent.matrix2.m13 +local_a0._4_4_ * (param_1->body).parent.parent.matrix2.m23 +(param_1->body).parent.parent.matrix2.m33 * 0.0 +(param_1->body).parent.parent.matrix2.m43,CONCAT44(local_a0._0_4_ *(param_1->body).parent.parent.matrix2.m12 +local_a0._4_4_ *(param_1->body).parent.parent.matrix2.m22 +(param_1->body).parent.parent.matrix2.m32 * 0.0 +(param_1->body).parent.parent.matrix2.m42,local_a0._0_4_ *(param_1->body).parent.parent.matrix2.m11 +local_a0._4_4_ *(param_1->body).parent.parent.matrix2.m21 +(param_1->body).parent.parent.matrix2.m31 * 0.0 +(param_1->body).parent.parent.matrix2.m41)));
		puVar9 = FUN_001e78e0((int)pfVar1);
		FUN_001e33e0(param_1,(undefined (*) [12])local_a0,&local_d0,(int)puVar9,pfVar11);
		FUN_001db670((int)param_1,(param_1->body).parent.field38_0x31c,1.0);
		uVar4 = (param_1->body).parent.parent.field1_0x14;
		}
		pcVar5 = (code *)(param_1->body).parent.field60_0x360;
		(param_1->body).parent.parent.field1_0x14 = uVar4 | 4;
		if (pcVar5 != (code *)0x0) {
		(*pcVar5)(pfVar1,*(undefined4 *)&(param_1->body).parent.field_0x364);
		}
		}
		}
		LAB_001e5301:local_74->field17_0x3a = local_74->field17_0x3a + 1;
		uVar3 = local_74->field17_0x3a;
		if (uVar3 == local_74->field16_0x38) break;
		if ((uVar3 & 7) == 0) {
		local_74->field18_0x3c = *(undefined4 *)local_74->field18_0x3c;
		}
		pfVar1 = (float *)((uVar3 & 7) * 0x40 + 0x10 + local_74->field18_0x3c);
		}
		}
		local_b0 = local_b0 + 1;
		local_d4 = local_d4 + 0x20;
		}
		 while (local_b0 < *(int *)&(param_1->body).field_0x380);
		if (bVar6) {
		if (local_d8 <= FLOAT_00386394) {
		return (bool)1;
		}
		(*param_1->vtable->PhysicsMethod0)((InstanceNodePhysics *)param_1,(param_1->body).parent.parent.field46_0x20c);
		return (bool)1;
		}
		}
		local_a4[1].body.field41_0x3c.chunkName.value = (char *)0xffffffff;
		if ((FLOAT_00386394 < (param_1->body).parent.field39_0x320) &&(fVar10 = (param_1->body).parent.parent.field46_0x20c,*(float *)(local_a8 + 0x14) <= fVar10 && fVar10 != *(float *)(local_a8 + 0x14))) {
		(*param_1->vtable->PhysicsMethod0)((InstanceNodePhysics *)param_1,(param_1->body).parent.parent.field46_0x20c);
		return true;
		}
		return true;
		}
		
	*/
	return false;
}

void InstanceNodePhysicsAB::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodePhysicsAB * __fastcall InstanceNodePhysicsAB::Construct(InstanceNodePhysicsAB *this){
		InstanceNodePhysicsA::Construct((InstanceNodePhysicsA *)this);
		*(undefined4 *)&(this->body).field_0x37c = 0;
		*(undefined4 *)&(this->body).field_0x380 = 0;
		this->vtable = (InstanceNodePhysics_VTable *)&InstanceNode_VT_Physics_AB;
		return this;
		}
		
	*/
	return;
}

void InstanceNodePhysicsAB::Construct_3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodePhysicsAB * __fastcall InstanceNodePhysicsAB::Construct(InstanceNodePhysicsAB *this){
		InstanceNodePhysicsA::Construct((InstanceNodePhysicsA *)this);
		*(undefined4 *)&(this->body).field_0x37c = 0;
		*(undefined4 *)&(this->body).field_0x380 = 0;
		this->vtable = (InstanceNodePhysics_VTable *)&InstanceNode_VT_Physics_AB;
		return this;
		}
		
	*/
	return;
}

void InstanceNodePhysicsAB::Dispose(InstanceNodePhysicsAB* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodePhysicsAB::Dispose(InstanceNodePhysicsAB *param_1){
		param_1->vtable = (InstanceNodePhysics_VTable *)&InstanceNode_VT_Physics_AB;
		FUN_001debc0((int)param_1);
		InstanceNodePhysicsA::Dispose((InstanceNodeAbstract *)param_1);
		return;
		}
		
	*/
	return;
}

void InstanceNodePhysicsAB::PhysicsMethod2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodePhysicsAB::PhysicsMethod2(InstanceNodePhysicsAB *this){
		ChunkData *this_00;
		InstanceNodePhysics *pIVar1;
		undefined2 *puVar1;
		int iVar2;
		int iVar3;
		undefined *local_c4;
		ushort local_c0;
		undefined2 local_be;
		float local_bc;
		uint local_b8;
		undefined4 local_b4;
		undefined4 local_b0;
		undefined4 local_ac;
		undefined4 local_a8;
		undefined4 local_a4;
		BoundingBox local_a0;
		undefined local_80 [124];
		InstanceContext *iVar5;
		if (*(int *)&(this->body).field_0x37c == 0) {
		FUN_001dec10((int)this,(int *)((this->body).parent.field14_0x2e0 + 0x20));
		}
		iVar3 = 1;
		if (0 < *(int *)&(this->body).field_0x380) {
		FUN_0014a090(*(void **)&(this->body).field_0x37c,&(this->body).parent.parent.matrix1,&local_a0);
		if (1 < *(int *)&(this->body).field_0x380) {
		iVar2 = 0x20;
		do {
		FUN_0014a090((void *)(*(int *)&(this->body).field_0x37c + iVar2),&(this->body).parent.parent.matrix1,(BoundingBox *)local_80);
		BoundingBox::FUN_00147330(&local_a0,(Matrix4 *)local_80);
		iVar3 = iVar3 + 1;
		iVar2 = iVar2 + 0x20;
		}
		 while (iVar3 < *(int *)&(this->body).field_0x380);
		}
		iVar2 = 0;
		iVar3 = (this->body).parent.field14_0x2e0;
		local_c4 = local_80 + 0x20;
		local_b8 = local_b8 & 0xfffffffe | 2;
		local_c0 = 0;
		local_be = 0x14;
		local_bc = FLOAT_003959c0;
		local_b4 = 0;
		local_b0 = 1;
		local_ac = 0;
		local_a4 = 0;
		local_a8 = 0;
		this_00 = *(ChunkData **)(iVar3 + 0xb0);
		FUN_00137280((int)&local_c4,iVar3);
		ChunkData::FUN_0013e2c0(this_00,(undefined4 *)&local_a0,(this->body).parent.field44_0x32c,&local_c4);
		(this->body).parent.parent.field20_0x9c = 0;
		if (local_c0 != 0) {
		do {
		iVar5 = *(InstanceContext **)(local_c4 + iVar2 * 4);
		iVar3 = (this->body).parent.field14_0x2e0;
		if ((iVar3 == 0) ||((iVar5->field27_0xe0 != iVar3 && ((iVar5->parent).field14_0x20.field6_0x18 != iVar3)))){
		if (((uint)(iVar5->nodes).cnt >> 5 & 1) == 0) {
		if ((*(byte *)&(iVar5->parent).flags & 0x10) == 0) {
		if (((FLOAT_00386394 < (this->body).parent.field39_0x320) &&(puVar1 = FUN_001374c0(&(iVar5->parent).field14_0x20,0),puVar1 != (undefined2 *)0x0)) && ((*(uint *)(puVar1 + 4) >> 6 & 1) == 0)) {
		(*this->vtable->PhysicsMethod0)((InstanceNodePhysics *)this,(iVar5->parent).field14_0x20.matrix2.m22);
		}
		}
		else {
		FUN_001e5430(this,(int)iVar5);
		}
		}
		else {
		pIVar1 = (InstanceNodePhysics *)InstanceDataList::GetNode(&iVar5->nodes,Physics);
		(*this->vtable->PhysicsMethod3)((InstanceNodePhysics *)this,pIVar1);
		}
		}
		iVar2 = iVar2 + 1;
		}
		 while (iVar2 < (int)(uint)local_c0);
		}
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodePhysicsAB::Dispose_6(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodePhysicsAB::Dispose(InstanceNodePhysicsAB *this,byte param_1){
		this->vtable = (InstanceNodePhysics_VTable *)&InstanceNode_VT_Physics_AB;
		FUN_001debc0((int)this);
		InstanceNodePhysicsA::Dispose((InstanceNodeAbstract *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (InstanceNodeAbstract *)this;
		}
		
	*/
	return;
}

void InstanceNodePhysicsAB::PhysicsMethod5(float* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodePhysicsAB::PhysicsMethod5(InstanceNodePhysicsAB *this,float *param_1){
		FUN_001476a0((void *)((this->body).parent.field14_0x2e0 + 0x50),param_1);
		return;
		}
		
	*/
	return;
}

void InstanceNodePhysicsAB::PhysicsMethod6(Vector4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodePhysicsAB::PhysicsMethod6(InstanceNodePhysicsAB *this,Vector4 *param_1){
		InstanceNodePhysicsA::PhysicsMethod6((InstanceNodePhysicsA *)this,param_1);
		FUN_001dec10((int)this,(int *)((this->body).parent.field14_0x2e0 + 0x20));
		return;
		}
		
	*/
	return;
}

bool InstanceNodePhysicsAB::PhysicsMethod3(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodePhysicsAB::PhysicsMethod3(InstanceNodePhysicsAB *this,int *param_1){
		char cVar1;
		bool bVar2;
		undefined4 uVar3;
		cVar1 = (**(code **)(*param_1 + 0x38))();
		if (cVar1 == '\0') {
		if ((((uint)param_1[6] >> 3 & 1) != 0) || (this <= param_1)) {
		uVar3 = FUN_001e24e0((int)this,(int)param_1);
		return SUB41(uVar3,0);
		}
		}
		else if ((((uint)param_1[6] >> 3 & 1) != 0) || (this <= param_1)) {
		bVar2 = InstanceNodePhysicsAA::FUN_001e21a0((InstanceNodePhysicsAA *)param_1,(int)this);
		return bVar2;
		}
		return false;
		}
		
	*/
	return false;
}

bool InstanceNodePhysicsAB::IsB() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodePhysicsAB::IsB(void){
		return false;
		}
		
	*/
	return false;
}

