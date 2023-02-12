#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeO.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void InstanceNodeO::FUN_00150670(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeO::FUN_00150670(InstanceNodeO *this,uint *param_1){
		int iVar1;
		InstanceContext *pIVar2;
		UNV014 *piVar3;
		UNV015 *pUVar3;
		undefined *puVar4;
		UNV015 *pvVar3;
		if (this->field5_0x28 != (UNV014 *)0x0) {
		VirtualPool::FreeMemory(this->field5_0x28);
		}
		pUVar3 = this->field6_0x2c;
		if (pUVar3 != (UNV015 *)0x0) {
		FUN_0013bd60((ushort *)pUVar3);
		VirtualPool::FreeMemory(pUVar3);
		}
		this->field1_0x18 = (int)param_1;
		piVar3 = (UNV014 *)VirtualPool::AllocateMemory(0x14);
		if (piVar3 == (UNV014 *)0x0) {
		piVar3 = (UNV014 *)0x0;
		}
		else {
		*(int *)piVar3 = this->field1_0x18 + 0x10;
		}
		this->field5_0x28 = piVar3;
		if (*(char *)(this->field1_0x18 + 0x1c) == '\0') {
		pvVar3 = (UNV015 *)VirtualPool::AllocateMemory(0x30);
		if (pvVar3 == (UNV015 *)0x0) {
		pUVar3 = (UNV015 *)0x0;
		}
		else {
		pUVar3 = UNV015::Construct(pvVar3,1,0);
		}
		this->field6_0x2c = pUVar3;
		param_1 = *(uint **)(this->field1_0x18 + 0x20);
		puVar4 = (*(ENV_CLASS_178_SECTION_RMODELS2.parent)->Create)(&ENV_CLASS_178_SECTION_RMODELS2.parent,(undefined *)&param_1,0);
		FUN_00136db0((int)this->field6_0x2c,puVar4,0);
		}
		else {
		pUVar3 = (UNV015 *)VirtualPool::AllocateMemory(0x30);
		if (pUVar3 == (UNV015 *)0x0) {
		pUVar3 = (UNV015 *)0x0;
		}
		else {
		pUVar3 = UNV015::Construct(pUVar3,0,1);
		}
		this->field6_0x2c = pUVar3;
		param_1 = *(uint **)(this->field1_0x18 + 0x20);
		puVar4 = (*(ENV_CLASS_177_SECTION_LODS.parent)->Create)(&ENV_CLASS_177_SECTION_LODS.parent,(undefined *)&param_1,0);
		UNV015::Set(this->field6_0x2c,puVar4,0);
		}
		UNV015::FUN_00136df0(this->field6_0x2c,(undefined4 *)(this->field1_0x18 + 0x30),0,0x3f800000);
		iVar1 = this->field1_0x18;
		pIVar2 = (this->parent).ctx;
		(pIVar2->parent).field14_0x20.matrix2.m31 = *(float *)(iVar1 + 0x30);
		(pIVar2->parent).field14_0x20.matrix2.m32 = *(float *)(iVar1 + 0x34);
		(pIVar2->parent).field14_0x20.matrix2.m33 = *(float *)(iVar1 + 0x38);
		(pIVar2->parent).field14_0x20.matrix2.m34 = *(float *)(iVar1 + 0x3c);
		(pIVar2->parent).field14_0x20.matrix2.m41 = *(float *)(iVar1 + 0x40);
		(pIVar2->parent).field14_0x20.matrix2.m42 = *(float *)(iVar1 + 0x44);
		(pIVar2->parent).field14_0x20.matrix2.m43 = *(float *)(iVar1 + 0x48);
		(pIVar2->parent).field14_0x20.matrix2.m44 = *(float *)(iVar1 + 0x4c);
		return;
		}
		
	*/
	return;
}

uint InstanceNodeO::FUN_001518a0(float param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall InstanceNodeO::FUN_001518a0(InstanceNodeO *this,float param_1){
		int *piVar1;
		int iVar2;
		UNV014 *pUVar3;
		InstanceContext *pIVar4;
		InstanceTransform *transform;
		float fVar5;
		bool bVar6;
		uint uVar7;
		uint uVar8;
		Matrix4 *pMVar9;
		float fVar10;
		float local_50;
		float local_4c;
		int local_48;
		float local_44;
		undefined2 local_40;
		short local_3e;
		int local_3c;
		int local_38;
		int local_34;
		Vector4 local_30;
		Vector4 local_20;
		fVar5 = ENV_FLOAT_244;
		iVar2 = *(int *)(this->field1_0x18 + 0xc);
		fVar10 = (float)this->field4_0x24 + param_1;
		local_4c = (float)iVar2;
		local_50 = fVar10 * ENV_FLOAT_244;
		this->field4_0x24 = (int)fVar10;
		if (iVar2 < 0) {
		local_4c = local_4c + FLOAT_00386458;
		}
		if (local_4c <= local_50) {
		do {
		fVar10 = fVar10 - local_4c / fVar5;
		local_50 = fVar10 * fVar5;
		}
		 while (local_4c <= local_50);
		this->field4_0x24 = (int)fVar10;
		}
		local_44 = (float)iVar2;
		uVar7 = __ftol2(local_50);
		local_50 = local_50 - (float)(uVar7 & 0xffff);
		uVar8 = uVar7 + 1;
		if (local_4c <= (float)(uVar8 & 0xffff)) {
		uVar8 = uVar8 - iVar2;
		}
		FUN_001525e0(this->field5_0x28,uVar7 & 0xffff,uVar8 & 0xffff);
		fVar5 = local_50;
		pUVar3 = this->field5_0x28;
		iVar2 = *(int *)&pUVar3->field_0x4;
		local_40 = *(undefined2 *)(iVar2 + 2);
		local_3e = (short)(1 << (*(byte *)(iVar2 + 1) & 0xf)) + -1;
		local_3c = *(int *)&pUVar3->field_0x8 + (uint)*(ushort *)(iVar2 + 4) * 4;
		local_34 = (uint)*(ushort *)(iVar2 + 6) * 4;
		local_38 = *(int *)&pUVar3->field_0xc + local_34;
		local_34 = *(int *)&pUVar3->field_0x10 + local_34;
		local_30.x = FUN_001520e0(&local_40,local_50);
		local_30.y = FUN_001520e0(&local_40,fVar5);
		local_30.z = FUN_001520e0(&local_40,fVar5);
		local_30.w = FLOAT_0038639c;
		FUN_00152330(&local_40,&local_48,fVar5);
		FUN_00152330(&local_40,(int *)&local_50,fVar5);
		FUN_00152330(&local_40,(int *)&local_4c,fVar5);
		local_44 = FUN_001520e0(&local_40,fVar5);
		Vector4::FromRotation(&local_20,local_48,(int)local_50,(int)local_4c);
		pIVar4 = (this->parent).ctx;
		bVar6 = InstanceTransform::SetupPosition((pIVar4->parent).transform,&local_30);
		if (bVar6 != false) {
		InstanceContext::RegisterCtxPtrToList(pIVar4);
		}
		pIVar4 = (this->parent).ctx;
		bVar6 = InstanceTransform::thunk_FUN_000269f0((pIVar4->parent).transform,&local_20);
		if (bVar6 != false) {
		InstanceContext::RegisterCtxPtrToList(pIVar4);
		}
		pIVar4 = (this->parent).ctx;
		bVar6 = ((pIVar4->parent).flags & 0x400U) == 0x400;
		if ((local_44 <= FLOAT_00386ab4) || (bVar6)) {
		if (local_44 < FLOAT_00386ab4) {
		if (bVar6) {
		piVar1 = &(pIVar4->parent).flags;
		*piVar1 = *piVar1 & 0xfffffbff;
		}
		goto LAB_00151ad8;
		}
		if (!bVar6) goto LAB_00151ad8;
		}
		else {
		piVar1 = &(pIVar4->parent).flags;
		*piVar1 = *piVar1 | 0x400;
		}
		transform = (((this->parent).ctx)->parent).transform;
		InstanceTransform::FillMatrix(transform);
		FUN_00138720((int)this->field6_0x2c,(undefined4 *)transform,0);
		LAB_00151ad8:pMVar9 = &(((this->parent).ctx)->parent).field14_0x20.matrix2;
		UNV015::FUN_00136df0(this->field6_0x2c,&pMVar9->m11,0,0);
		return CONCAT31((int3)((uint)pMVar9 >> 8),1);
		}
		
	*/
	return 0;
}

void InstanceNodeO::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeO * __fastcall InstanceNodeO::Construct(InstanceNodeO *this){
		InstanceNodeAbstract::Contruct(&this->parent);
		this->field1_0x18 = 0;
		this->field2_0x1c = 0;
		this->field3_0x20 = 0;
		this->field5_0x28 = (UNV014 *)0x0;
		this->field6_0x2c = (UNV015 *)0x0;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_O;
		this->field4_0x24 = 0;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeO::Dispose(InstanceNodeO* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeO::Dispose(InstanceNodeO *param_1){
		UNV014 *ptr;
		UNV015 *ptr_00;
		ptr = param_1->field5_0x28;
		(param_1->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_O;
		if (ptr != (UNV014 *)0x0) {
		VirtualPool::FreeMemory(ptr);
		}
		ptr_00 = param_1->field6_0x2c;
		if (ptr_00 != (UNV015 *)0x0) {
		FUN_0013bd60((ushort *)ptr_00);
		VirtualPool::FreeMemory(ptr_00);
		}
		InstanceNodeAbstract::UnrollVtable(&param_1->parent);
		return;
		}
		
	*/
	return;
}

void InstanceNodeO::Dispose_4(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodeO::Dispose(InstanceNodeO *this,byte param_1){
		UNV014 *ptr;
		UNV015 *ptr_00;
		ptr = this->field5_0x28;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_O;
		if (ptr != (UNV014 *)0x0) {
		VirtualPool::FreeMemory(ptr);
		}
		ptr_00 = this->field6_0x2c;
		if (ptr_00 != (UNV015 *)0x0) {
		FUN_0013bd60((ushort *)ptr_00);
		VirtualPool::FreeMemory(ptr_00);
		}
		InstanceNodeAbstract::UnrollVtable(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void InstanceNodeO::SetCtx(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeO::SetCtx(InstanceNodeO *this,InstanceContext *ctx){
		int *piVar1;
		piVar1 = &(ctx->parent).flags;
		*piVar1 = *piVar1 | 0x40000;
		InstanceNodeAbstract::SetCtx(&this->parent,ctx);
		return;
		}
		
	*/
	return;
}

bool InstanceNodeO::Step(byte* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeO::Step(InstanceNodeO *this,byte *param_1){
		if ((*param_1 & 1) != 0) {
		FUN_001518a0(this,(float)*(int *)(param_1 + 8) * TimePerTick1);
		}
		return true;
		}
		
	*/
	return false;
}

byte InstanceNodeO::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte InstanceNodeO::GetIndex(void){
		return 4;
		}
		
	*/
	return 0;
}

uint InstanceNodeO::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodeO::GetBuilderIndex(void){
		return 0x1617;
		}
		
	*/
	return 0;
}

