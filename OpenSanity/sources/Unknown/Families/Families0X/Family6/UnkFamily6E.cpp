#include "headers/Unknown/Families/Families0X/Family6/UnkFamily6E.h"

#include "headers/Known/Math/Vector4.h"
void UnkFamily6E::Construct(int param_1, int param_2, byte param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily6E * __thiscall UnkFamily6E::Construct(UnkFamily6E *this,int param_1,int param_2,undefined param_3){
		float fVar1;
		fVar1 = FLOAT_0038b698;
		(this->parent).field15_0x18 = param_2;
		(this->parent).field14_0x14 = param_1;
		(this->parent).field13_0x10 = 2;
		(this->parent).vtable = &UnkFamily6_VT_E;
		*(undefined4 *)&this->field_0xf4 = 0;
		this->field_0xf9 = param_3;
		*(float *)&this->field_0xfc = fVar1;
		Init(this);
		*(float *)&this->field_0x100 = FLOAT_0038807c;
		return this;
		}
		
	*/
	return;
}

void UnkFamily6E::Init(UnkFamily6E* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily6E::Init(UnkFamily6E *param_1){
		undefined *this;
		uint *puVar1;
		InstanceNodePhysics *this_00;
		float fVar2;
		float fVar3;
		fVar2 = FLOAT_0038a840;
		fVar3 = FLOAT_00386ab4;
		if (param_1->field_0xf9 == '\0') {
		param_1->field_0x104 = 0;
		param_1->field_0x105 = 1;
		param_1->field_0x106 = 0;
		*(float *)&param_1->field_0x108 = fVar2;
		*(float *)&param_1->field_0x10c = fVar3;
		}
		else {
		*(float *)&param_1->field_0x108 = FLOAT_0038639c;
		*(float *)&param_1->field_0x10c = FLOAT_0038a834;
		fVar2 = FLOAT_0038b3cc;
		param_1->field_0x104 = 1;
		param_1->field_0x105 = 0;
		param_1->field_0x106 = 1;
		}
		*(float *)&param_1->field_0x110 = fVar2;
		this = &param_1->field_0xf4;
		*(undefined4 *)&param_1->field_0xf0 = 0;
		if ((*(int **)this != (int *)0x0) && (**(int **)this != 0)) {
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)this);
		*(undefined4 *)this = 0;
		}
		param_1->field_0xf8 = 0;
		UnkFamily6Abstract::thunk_FUN_000870c0(&param_1->parent);
		*(undefined4 *)(*(int *)((param_1->parent).field14_0x14 + 0x10) + 0x38) =*(undefined4 *)((param_1->parent).field15_0x18 + 0x10);
		this_00 = (InstanceNodePhysics *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)((param_1->parent).field14_0x14 + 0x10) + 0xe4),Physics);
		if (param_1->field_0xf9 == '\0') {
		InstanceNodePhysics::InitStuff(this_00,5.0,*(float *)&param_1->field_0x108,*(float *)&param_1->field_0x10c,*(float *)&param_1->field_0x110);
		FUN_001dc280((int)this_00,*(float *)&param_1->field_0x108,*(float *)&param_1->field_0x10c,*(float *)&param_1->field_0x110);
		fVar3 = 0.5;
		}
		else {
		InstanceNodePhysics::InitStuff(this_00,5.0,*(float *)&param_1->field_0x108 * FLOAT_0038b824,*(float *)&param_1->field_0x10c,*(float *)&param_1->field_0x110);
		FUN_001dc280((int)this_00,*(float *)&param_1->field_0x108,*(float *)&param_1->field_0x10c,*(float *)&param_1->field_0x110);
		fVar3 = 40.0;
		}
		FUN_001dbca0((int)this_00,fVar3);
		FUN_001dbcc0((int)this_00,0);
		FUN_001dbce0((int)this_00,0x3b03126f,0x3b03126f);
		puVar1 = &this_00[1].body.parent.time;
		*puVar1 = *puVar1 & 0xfffffffe;
		return;
		}
		
	*/
	return;
}

uint UnkFamily6E::FUN_00081950() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall UnkFamily6E::FUN_00081950(UnkFamily6E *this){
		Matrix4 *matrix;
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		InstanceNodeAbstract *pIVar5;
		InstanceContext *pIVar6;
		InstanceNodeAbstract_VTable *pIVar7;
		float fVar8;
		float fVar9;
		InstanceNodeAbstract *pIVar10;
		undefined4 uVar11;
		Vector4 local_30;
		Vector4 local_20;
		pIVar10 = InstanceDataList::GetNode((InstanceDataList *)(*(int *)((this->parent).field14_0x14 + 0x10) + 0xe4),Physics);
		fVar1 = (float)pIVar10[7].time;
		pIVar5 = pIVar10[7].field5_0x10;
		fVar2 = (float)pIVar10[7].field6_0x14;
		(this->parent).field22_0xa0.m11 = *(float *)&pIVar10[7].field2_0x8;
		(this->parent).field22_0xa0.m12 = fVar1;
		(this->parent).field22_0xa0.m13 = (float)pIVar5;
		(this->parent).field22_0xa0.m14 = fVar2;
		pIVar6 = pIVar10[8].ctx;
		fVar1 = *(float *)&pIVar10[8].field2_0x8;
		fVar2 = (float)pIVar10[8].time;
		(this->parent).field22_0xa0.m21 = (float)pIVar10[8].vtable;
		(this->parent).field22_0xa0.m22 = (float)pIVar6;
		(this->parent).field22_0xa0.m23 = fVar1;
		(this->parent).field22_0xa0.m24 = fVar2;
		fVar1 = (float)pIVar10[8].field6_0x14;
		pIVar7 = pIVar10[9].vtable;
		pIVar6 = pIVar10[9].ctx;
		(this->parent).field22_0xa0.m31 = (float)pIVar10[8].field5_0x10;
		(this->parent).field22_0xa0.m32 = fVar1;
		(this->parent).field22_0xa0.m33 = (float)pIVar7;
		(this->parent).field22_0xa0.m34 = (float)pIVar6;
		fVar1 = (float)pIVar10[9].time;
		pIVar5 = pIVar10[9].field5_0x10;
		fVar2 = (float)pIVar10[9].field6_0x14;
		(this->parent).field22_0xa0.m41 = *(float *)&pIVar10[9].field2_0x8;
		(this->parent).field22_0xa0.m42 = fVar1;
		(this->parent).field22_0xa0.m43 = (float)pIVar5;
		(this->parent).field22_0xa0.m44 = fVar2;
		fVar9 = FLOAT_0038bd9c;
		fVar1 = (this->parent).field22_0xa0.m12;
		fVar2 = (this->parent).field22_0xa0.m13;
		fVar3 = (this->parent).field22_0xa0.m14;
		(this->parent).field21_0x60.m11 = (this->parent).field22_0xa0.m11;
		(this->parent).field21_0x60.m12 = fVar1;
		(this->parent).field21_0x60.m13 = fVar2;
		(this->parent).field21_0x60.m14 = fVar3;
		fVar1 = (this->parent).field22_0xa0.m22;
		fVar2 = (this->parent).field22_0xa0.m23;
		fVar3 = (this->parent).field22_0xa0.m24;
		(this->parent).field21_0x60.m21 = (this->parent).field22_0xa0.m21;
		(this->parent).field21_0x60.m22 = fVar1;
		(this->parent).field21_0x60.m23 = fVar2;
		(this->parent).field21_0x60.m24 = fVar3;
		fVar1 = (this->parent).field22_0xa0.m32;
		fVar2 = (this->parent).field22_0xa0.m33;
		fVar3 = (this->parent).field22_0xa0.m34;
		(this->parent).field21_0x60.m31 = (this->parent).field22_0xa0.m31;
		(this->parent).field21_0x60.m32 = fVar1;
		(this->parent).field21_0x60.m33 = fVar2;
		(this->parent).field21_0x60.m34 = fVar3;
		fVar1 = (this->parent).field22_0xa0.m42;
		fVar2 = (this->parent).field22_0xa0.m43;
		fVar3 = (this->parent).field22_0xa0.m44;
		(this->parent).field21_0x60.m41 = (this->parent).field22_0xa0.m41;
		(this->parent).field21_0x60.m42 = fVar1;
		(this->parent).field21_0x60.m43 = fVar2;
		(this->parent).field21_0x60.m44 = fVar3;
		fVar1 = (this->parent).field21_0x60.m21;
		fVar2 = (this->parent).field21_0x60.m23;
		fVar3 = (this->parent).field21_0x60.m41;
		(this->parent).field21_0x60.m42 =(this->parent).field21_0x60.m42 + (this->parent).field21_0x60.m22 * fVar9;
		fVar4 = (this->parent).field21_0x60.m43;
		(this->parent).field21_0x60.m41 = fVar3 + fVar1 * fVar9;
		fVar8 = FLOAT_0038ab58;
		(this->parent).field21_0x60.m43 = fVar4 + fVar2 * fVar9;
		fVar1 = (this->parent).field21_0x60.m31;
		fVar2 = (this->parent).field21_0x60.m33;
		fVar3 = (this->parent).field21_0x60.m41;
		(this->parent).field21_0x60.m42 =(this->parent).field21_0x60.m42 + (this->parent).field21_0x60.m32 * fVar8;
		fVar4 = (this->parent).field21_0x60.m43;
		(this->parent).field21_0x60.m41 = fVar3 + fVar1 * fVar8;
		(this->parent).field21_0x60.m43 = fVar4 + fVar2 * fVar8;
		Vector4::FUN_000db0d0(&local_30,&(this->parent).field21_0x60);
		fVar8 = FLOAT_0038639c;
		(this->parent).field20_0x20.m21 = 0.0;
		(this->parent).field20_0x20.m23 = 0.0;
		(this->parent).field20_0x20.m22 = fVar8;
		(this->parent).field20_0x20.m24 = fVar8;
		matrix = &(this->parent).field20_0x20;
		matrix->m11 = (this->parent).field21_0x60.m32 * 0.0 - fVar8 * (this->parent).field21_0x60.m33;
		(this->parent).field20_0x20.m12 =(this->parent).field20_0x20.m21 * (this->parent).field21_0x60.m33 -(this->parent).field20_0x20.m23 * (this->parent).field21_0x60.m31;
		fVar1 = (this->parent).field20_0x20.m22;
		fVar2 = (this->parent).field21_0x60.m31;
		fVar3 = (this->parent).field21_0x60.m32;
		fVar4 = (this->parent).field20_0x20.m21;
		(this->parent).field20_0x20.m14 = fVar8;
		(this->parent).field20_0x20.m13 = fVar1 * fVar2 - fVar3 * fVar4;
		(this->parent).field20_0x20.m31 =(this->parent).field20_0x20.m12 * (this->parent).field20_0x20.m23 -(this->parent).field20_0x20.m13 * (this->parent).field20_0x20.m22;
		(this->parent).field20_0x20.m32 =(this->parent).field20_0x20.m13 * (this->parent).field20_0x20.m21 -(this->parent).field20_0x20.m23 * matrix->m11;
		fVar1 = (this->parent).field20_0x20.m22;
		fVar2 = (this->parent).field20_0x20.m12;
		fVar3 = matrix->m11;
		fVar4 = (this->parent).field20_0x20.m21;
		(this->parent).field20_0x20.m34 = fVar8;
		(this->parent).field20_0x20.m33 = fVar1 * fVar3 - fVar2 * fVar4;
		(this->parent).field20_0x20.m41 = (this->parent).field21_0x60.m41;
		(this->parent).field20_0x20.m42 = (this->parent).field21_0x60.m42;
		(this->parent).field20_0x20.m43 = (this->parent).field21_0x60.m43;
		(this->parent).field20_0x20.m44 = (this->parent).field21_0x60.m44;
		uVar11 = Vector4::FUN_000db0d0(&local_20,matrix);
		return CONCAT31((int3)((uint)uVar11 >> 8),1);
		}
		
	*/
	return 0;
}

void UnkFamily6E::FUN_0008e910(int param_1, uint param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily6E::FUN_0008e910(UnkFamily6E *this,int param_1,undefined4 param_2,int param_3){
		int iVar1;
		InstanceNodeAbstract *this_00;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float local_70;
		float local_6c;
		float local_68;
		float local_64;
		float local_60;
		float local_5c;
		float local_58;
		undefined4 local_54;
		Matrix4 local_50;
		fVar3 = *(float *)(param_1 + 0xc);
		if ((FLOAT_0038b834 < fVar3) && (param_3 != 0)) {
		*(float *)&this->field_0xf0 = FLOAT_0038639c;
		this_00 = InstanceDataList::GetNode((InstanceDataList *)(*(int *)((this->parent).field14_0x14 + 0x10) + 0xe4),Physics);
		local_50.m11 = *(float *)&this_00[7].field2_0x8;
		local_50.m12 = (float)this_00[7].time;
		local_50.m13 = (float)this_00[7].field5_0x10;
		local_50.m14 = (float)this_00[7].field6_0x14;
		iVar1 = *(int *)(param_3 + 0x18);
		local_50.m21 = (float)this_00[8].vtable;
		local_50.m22 = (float)this_00[8].ctx;
		local_50.m23 = *(float *)&this_00[8].field2_0x8;
		local_50.m24 = (float)this_00[8].time;
		local_50.m31 = (float)this_00[8].field5_0x10;
		local_50.m32 = (float)this_00[8].field6_0x14;
		local_50.m33 = (float)this_00[9].vtable;
		local_50.m34 = (float)this_00[9].ctx;
		local_50.m41 = *(float *)&this_00[9].field2_0x8;
		local_50.m42 = (float)this_00[9].time;
		local_50.m43 = (float)this_00[9].field5_0x10;
		local_64 = (float)this_00[9].field6_0x14;
		if ((*(byte *)(iVar1 + 0x60) & 4) != 0) {
		*(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x30);
		*(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(iVar1 + 0x34);
		*(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(iVar1 + 0x38);
		*(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(iVar1 + 0x3c);
		*(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) & 0xfffffffa;
		}
		local_60 = *(float *)(iVar1 + 0x40);
		local_5c = *(float *)(iVar1 + 0x44);
		local_58 = *(float *)(iVar1 + 0x48);
		fVar5 = local_50.m42 - local_5c;
		fVar6 = local_50.m41 - local_60;
		fVar4 = local_50.m43 - local_58;
		local_54 = *(undefined4 *)(iVar1 + 0x4c);
		fVar2 = fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6;
		local_68 = (fVar3 * FLOAT_0038a770) / (fVar2 + FLOAT_0038a770);
		if (fVar2 <= DAT_0039dbf8) {
		fVar3 = 0.0;
		}
		else {
		fVar3 = FLOAT_0038639c / SQRT(fVar2);
		}
		local_70 = fVar6 * fVar3 * local_68;
		local_6c = fVar5 * fVar3 * local_68;
		local_68 = fVar4 * fVar3 * local_68;
		local_50.m44 = local_64;
		Matrix4::FUN_000d4180(&local_50);
		thunk_FUN_00025aa0(&local_50,(undefined (*) [16])&local_60);
		FUN_001e0260((int)this_00,&local_70,&local_60);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily6E::FUN_0009a020(float param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily6E::FUN_0009a020(UnkFamily6E *this,float param_1){
		InstanceContext *pIVar1;
		int iVar2;
		InstanceNodeAbstract *this_00;
		InstanceNodeAbstract *pIVar3;
		float fVar4;
		InstanceNodeAbstract_VTable *pIVar5;
		undefined4 uVar6;
		float local_20;
		float local_1c;
		float local_18;
		uint local_14;
		this_00 = InstanceDataList::GetNode((InstanceDataList *)(*(int *)((this->parent).field14_0x14 + 0x10) + 0xe4),Physics);
		pIVar1 = this_00[0x16].ctx;
		thunk_FUN_00097b30((int)this);
		if (this->field_0x105 != '\0') {
		if ((*(uint *)((this->parent).field14_0x14 + 0x70) >> 0xe & 1) == 0) {
		thunk_FUN_000999f0((int)this);
		}
		else if ((*(int **)&this->field_0xf4 != (int *)0x0) && (**(int **)&this->field_0xf4 != 0)) {
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)&this->field_0xf4);
		*(undefined4 *)&this->field_0xf4 = 0;
		}
		}
		fVar4 = *(float *)&this->field_0xf0 - param_1 * FLOAT_0038b834;
		*(float *)&this->field_0xf0 = fVar4;
		if (fVar4 < 0.0) {
		*(undefined4 *)&this->field_0xf0 = 0;
		}
		if (FLOAT_00386610 < (float)pIVar1) {
		if (*(float *)&this->field_0xf0 <= FLOAT_0038639c &&FLOAT_0038639c != *(float *)&this->field_0xf0) {
		*(float *)&this->field_0xf0 = FLOAT_0038639c;
		}
		if (this->field_0xf9 == '\0') {
		local_14 = this_00[0xd].field6_0x14;
		local_1c = (float)this_00[0xd].time * FLOAT_0038807c;
		local_20 = *(float *)&this_00[0xd].field2_0x8 * FLOAT_00386ab4;
		local_18 = (float)this_00[0xd].field5_0x10 * FLOAT_00386ab4;
		FUN_001db2b0((int)this_00,&local_20);
		}
		}
		if (this->field_0xf9 != '\0') {
		if (FLOAT_0038a82c < *(float *)&this->field_0xf0) {
		*(float *)&this->field_0xf0 = FLOAT_0038a82c;
		}
		if (this->field_0xf9 != '\0') {
		pIVar5 = (InstanceNodeAbstract_VTable *)FLOAT_0038acf0;
		if (*(float *)&this->field_0xf0 <= 0.0) {
		pIVar5 = (InstanceNodeAbstract_VTable *)(*(float *)&this->field_0x100 * FLOAT_0038c054 + FLOAT_0038bef0);
		}
		iVar2 = (this->parent).field14_0x14;
		*(InstanceNodeAbstract_VTable **)&this->field_0x100 = pIVar5;
		pIVar3 = InstanceDataList::GetNode((InstanceDataList *)(*(int *)(iVar2 + 0x10) + 0xe4),Camera);
		if (pIVar3 != (InstanceNodeAbstract *)0x0) {
		pIVar3[0x4a].vtable = pIVar5;
		}
		}
		}
		if (this->field_0xf9 == '\0') {
		uVar6 = 0x3f19999a;
		}
		else {
		uVar6 = 0x3e99999a;
		}
		FUN_001dbc80((int)this_00,uVar6);
		UnkFamily6Abstract::thunk_FUN_0007f010(&this->parent);
		return;
		}
		
	*/
	return;
}

void UnkFamily6E::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily6E::Dispose(UnkFamily6E *this,byte param_1){
		InstanceNodePhysics *node;
		(this->parent).vtable = &UnkFamily6_VT_E;
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)&this->field_0xf4);
		(this->parent).vtable = &UnkFamily6_VT_Abstract;
		node = (InstanceNodePhysics *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)((this->parent).field14_0x14 + 0x10) + 0xe4),Physics);
		if (node != (InstanceNodePhysics *)0x0) {
		FUN_001dde00(PTR_003e6bf4,node);
		}
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void UnkFamily6E::FUN_000a6480(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined __fastcall UnkFamily6E::FUN_000a6480(int param_1){
		return *(undefined *)(param_1 + 0xf9);
		}
		
	*/
	return;
}

uint UnkFamily6E::FUN_000a6490() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily6E::FUN_000a6490(void){
		return 5;
		}
		
	*/
	return 0;
}

void UnkFamily6E::FUN_000a64a0(Vector4* param_1, Vector4* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily6E::FUN_000a64a0(Vector4 *param_1,Vector4 *param_2){
		float fVar1;
		float fVar2;
		fVar2 = FLOAT_0038ab88;
		fVar1 = FLOAT_0038639c;
		param_1->z = FLOAT_0038ab88;
		param_1->y = fVar2;
		param_1->x = fVar2;
		fVar2 = FLOAT_0038b824;
		param_1->w = fVar1;
		param_2->z = fVar2;
		param_2->y = fVar2;
		param_2->x = fVar2;
		param_2->w = fVar1;
		return;
		}
		
	*/
	return;
}

