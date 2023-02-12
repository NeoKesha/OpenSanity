#include "headers/Unknown/Families/Families0X/Family6/UnkFamily6C.h"

#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubA.h"
void UnkFamily6C::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily6C::CleanUp(UnkFamily6C *this){
		int iVar1;
		InstanceNodePhysics *node;
		iVar1 = (this->parent).field15_0x18;
		(this->parent).vtable = &UnkFamily6_VT_C;
		if (iVar1 != 0) {
		iVar1 = *(int *)(iVar1 + 0x10);
		*(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) | 0x10;
		}
		thunk_FUN_0008eb30((int)&this->field_0x3d0);
		thunk_FUN_0008eb30((int)&this->field_0x1f0);
		(this->parent).vtable = &UnkFamily6_VT_Abstract;
		node = (InstanceNodePhysics *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)((this->parent).field14_0x14 + 0x10) + 0xe4),Physics);
		if (node != (InstanceNodePhysics *)0x0) {
		FUN_001dde00(PTR_003e6bf4,node);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily6C::Init(UnkFamily6C* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily6C::Init(UnkFamily6C *param_1){
		InstanceTransform *transform;
		int iVar1;
		float fVar2;
		InstanceNodeAbstract *this;
		undefined4 uVar3;
		transform = *(InstanceTransform **)(*(int *)((param_1->parent).field14_0x14 + 0x10) + 0x18);
		InstanceTransform::FillMatrix(transform);
		fVar2 = FLOAT_0038adb8;
		uVar3 = 0;
		*(undefined4 *)&param_1->field_0xf0 = 0;
		*(float *)&param_1->field_0x110 = (transform->matrix).m31;
		*(float *)&param_1->field_0x114 = (transform->matrix).m32;
		*(float *)&param_1->field_0x118 = (transform->matrix).m33;
		*(float *)&param_1->field_0x11c = (transform->matrix).m34;
		*(undefined4 *)&param_1->field_0x120 = 0;
		*(float *)&param_1->field_0xf8 = fVar2;
		thunk_FUN_000820d0(&param_1->field_0x1f0);
		thunk_FUN_000820d0(&param_1->field_0x3d0);
		*(float *)&param_1->field_0x140 = Vector4_0039ef70.x;
		*(float *)&param_1->field_0x144 = Vector4_0039ef70.y;
		*(float *)&param_1->field_0x148 = Vector4_0039ef70.z;
		*(float *)&param_1->field_0x14c = FLOAT_0038639c;
		*(undefined4 *)&param_1->field_0x150 = uVar3;
		Matrix4::Construct1((Matrix4 *)&param_1->field_0x160);
		*(float *)&param_1->field_0x1a0 = Vector4_0039ef70.x;
		*(float *)&param_1->field_0x1a4 = Vector4_0039ef70.y;
		*(float *)&param_1->field_0x1a8 = Vector4_0039ef70.z;
		*(float *)&param_1->field_0x1ac = FLOAT_0038639c;
		*(undefined4 *)&param_1->field_0x1b0 = 0;
		*(undefined4 *)&param_1->field_0x1b4 = 0;
		*(undefined4 *)&param_1->field_0x1b8 = 0;
		UnkFamily6Abstract::thunk_FUN_000870c0(&param_1->parent);
		thunk_FUN_0007fdb0((int)param_1,0.0);
		this = InstanceDataList::GetNode((InstanceDataList *)(*(int *)((param_1->parent).field14_0x14 + 0x10) + 0xe4),Physics);
		FUN_001dbc80((int)this,0x3e19999a);
		FUN_001dbca0((int)this,12.0);
		FUN_001dbcc0((int)this,0x3fc00000);
		FUN_001dbce0((int)this,0x3f000000,0x3d8f5c29);
		this[0x1e].field5_0x10 = (InstanceNodeAbstract *)((uint)this[0x1e].field5_0x10 & 0xfffffffe);
		this[4].ctx = (InstanceContext *)0x3;
		this[0x24].ctx = (InstanceContext *)thunk_FUN_0008a4f0;
		*(UnkFamily6C **)&this[0x24].field2_0x8 = param_1;
		this[0x24].time = (uint)::EmptyFunction;
		this[0x24].field5_0x10 = (InstanceNodeAbstract *)param_1;
		FUN_001dd940((int)this,0x10);
		*(undefined4 *)&this[0x21].field2_0x8 = 0;
		this[0x21].ctx = (InstanceContext *)0x0;
		iVar1 = *(int *)((param_1->parent).field15_0x18 + 0x10);
		*(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) & 0xffffffef;
		*(InstanceNodeAbstract_VTable **)&param_1->field_0x130 = this[0xe].vtable;
		*(InstanceContext **)&param_1->field_0x134 = this[0xe].ctx;
		*(undefined4 *)&param_1->field_0x138 = *(undefined4 *)&this[0xe].field2_0x8;
		*(uint *)&param_1->field_0x13c = this[0xe].time;
		thunk_FUN_0007fdb0((int)param_1,0.0);
		param_1->field_0x104 = 0;
		return;
		}
		
	*/
	return;
}

void UnkFamily6C::Construct(int param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily6C * __thiscall UnkFamily6C::Construct(UnkFamily6C *this,int param_1,int param_2){
		int iVar1;
		undefined4 *puVar2;
		(this->parent).field14_0x14 = param_1;
		(this->parent).field15_0x18 = param_2;
		*(int *)&this->field_0xf4 = param_2;
		(this->parent).field13_0x10 = 2;
		(this->parent).vtable = &UnkFamily6_VT_C;
		puVar2 = (undefined4 *)&this->field_0x228;
		for (iVar1 = 100;
		 iVar1 != 0;
		 iVar1 = iVar1 + -1) {
		*puVar2 = 0;
		puVar2 = puVar2 + 1;
		}
		*(undefined4 *)&this->field_0x3b8 = 0;
		this->field_0x1f0 = 0;
		*(undefined4 *)&this->field_0x3c0 = 0;
		*(undefined4 *)&this->field_0x3bc = 0;
		puVar2 = (undefined4 *)&this->field_0x408;
		for (iVar1 = 100;
		 iVar1 != 0;
		 iVar1 = iVar1 + -1) {
		*puVar2 = 0;
		puVar2 = puVar2 + 1;
		}
		*(undefined4 *)&this->field_0x598 = 0;
		this->field_0x3d0 = 0;
		*(undefined4 *)&this->field_0x5a0 = 0;
		*(undefined4 *)&this->field_0x59c = 0;
		Init(this);
		return this;
		}
		
	*/
	return;
}

void UnkFamily6C::FUN_0007ffe0(uint* param_1, uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily6C::FUN_0007ffe0(UnkFamily6C *this,undefined4 *param_1,undefined4 *param_2){
		InstanceNodeAbstract *pIVar1;
		pIVar1 = InstanceDataList::GetNode((InstanceDataList *)(*(int *)((this->parent).field14_0x14 + 0x10) + 0xe4),Physics);
		*param_1 = *(undefined4 *)&pIVar1[9].field2_0x8;
		param_1[1] = pIVar1[9].time;
		param_1[2] = pIVar1[9].field5_0x10;
		param_1[3] = pIVar1[9].field6_0x14;
		*param_2 = *(undefined4 *)&this->field_0xf8;
		return;
		}
		
	*/
	return;
}

uint UnkFamily6C::FUN_0008a1e0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall UnkFamily6C::FUN_0008a1e0(UnkFamily6C *this){
		Matrix4 *pMVar1;
		float fVar2;
		float fVar3;
		InstanceNodeAbstract *pIVar4;
		InstanceContext *pIVar5;
		InstanceNodeAbstract_VTable *pIVar6;
		float fVar7;
		InstanceNodeAbstract *pIVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		pIVar8 = InstanceDataList::GetNode((InstanceDataList *)(*(int *)((this->parent).field14_0x14 + 0x10) + 0xe4),Physics);
		fVar9 = (float)pIVar8[7].time;
		pIVar4 = pIVar8[7].field5_0x10;
		fVar2 = (float)pIVar8[7].field6_0x14;
		pMVar1 = &(this->parent).field22_0xa0;
		pMVar1->m11 = *(float *)&pIVar8[7].field2_0x8;
		(this->parent).field22_0xa0.m12 = fVar9;
		(this->parent).field22_0xa0.m13 = (float)pIVar4;
		(this->parent).field22_0xa0.m14 = fVar2;
		pIVar5 = pIVar8[8].ctx;
		fVar9 = *(float *)&pIVar8[8].field2_0x8;
		fVar2 = (float)pIVar8[8].time;
		(this->parent).field22_0xa0.m21 = (float)pIVar8[8].vtable;
		(this->parent).field22_0xa0.m22 = (float)pIVar5;
		(this->parent).field22_0xa0.m23 = fVar9;
		(this->parent).field22_0xa0.m24 = fVar2;
		fVar9 = (float)pIVar8[8].field6_0x14;
		pIVar6 = pIVar8[9].vtable;
		pIVar5 = pIVar8[9].ctx;
		(this->parent).field22_0xa0.m31 = (float)pIVar8[8].field5_0x10;
		(this->parent).field22_0xa0.m32 = fVar9;
		(this->parent).field22_0xa0.m33 = (float)pIVar6;
		(this->parent).field22_0xa0.m34 = (float)pIVar5;
		fVar9 = (float)pIVar8[9].time;
		pIVar4 = pIVar8[9].field5_0x10;
		fVar2 = (float)pIVar8[9].field6_0x14;
		(this->parent).field22_0xa0.m41 = *(float *)&pIVar8[9].field2_0x8;
		(this->parent).field22_0xa0.m42 = fVar9;
		(this->parent).field22_0xa0.m43 = (float)pIVar4;
		(this->parent).field22_0xa0.m44 = fVar2;
		FUN_000d84c0(pMVar1,(Matrix4 *)&this->field_0x160);
		(this->parent).field22_0xa0.m41 = *(float *)&this->field_0x1a0 + (this->parent).field22_0xa0.m41;
		(this->parent).field22_0xa0.m42 = *(float *)&this->field_0x1a4 + (this->parent).field22_0xa0.m42;
		(this->parent).field22_0xa0.m43 = *(float *)&this->field_0x1a8 + (this->parent).field22_0xa0.m43;
		fVar9 = (float)pIVar8[7].time;
		pIVar4 = pIVar8[7].field5_0x10;
		fVar2 = (float)pIVar8[7].field6_0x14;
		pMVar1 = &(this->parent).field21_0x60;
		pMVar1->m11 = *(float *)&pIVar8[7].field2_0x8;
		(this->parent).field21_0x60.m12 = fVar9;
		(this->parent).field21_0x60.m13 = (float)pIVar4;
		(this->parent).field21_0x60.m14 = fVar2;
		pIVar5 = pIVar8[8].ctx;
		fVar9 = *(float *)&pIVar8[8].field2_0x8;
		fVar2 = (float)pIVar8[8].time;
		(this->parent).field21_0x60.m21 = (float)pIVar8[8].vtable;
		(this->parent).field21_0x60.m22 = (float)pIVar5;
		(this->parent).field21_0x60.m23 = fVar9;
		(this->parent).field21_0x60.m24 = fVar2;
		fVar9 = (float)pIVar8[8].field6_0x14;
		pIVar6 = pIVar8[9].vtable;
		pIVar5 = pIVar8[9].ctx;
		(this->parent).field21_0x60.m31 = (float)pIVar8[8].field5_0x10;
		(this->parent).field21_0x60.m32 = fVar9;
		(this->parent).field21_0x60.m33 = (float)pIVar6;
		(this->parent).field21_0x60.m34 = (float)pIVar5;
		fVar9 = (float)pIVar8[9].time;
		pIVar4 = pIVar8[9].field5_0x10;
		fVar2 = (float)pIVar8[9].field6_0x14;
		(this->parent).field21_0x60.m41 = *(float *)&pIVar8[9].field2_0x8;
		(this->parent).field21_0x60.m42 = fVar9;
		(this->parent).field21_0x60.m43 = (float)pIVar4;
		(this->parent).field21_0x60.m44 = fVar2;
		FUN_000d84c0(pMVar1,(Matrix4 *)&this->field_0x160);
		(this->parent).field21_0x60.m41 = *(float *)&this->field_0x1a0 + (this->parent).field21_0x60.m41;
		(this->parent).field21_0x60.m42 = *(float *)&this->field_0x1a4 + (this->parent).field21_0x60.m42;
		(this->parent).field21_0x60.m43 = *(float *)&this->field_0x1a8 + (this->parent).field21_0x60.m43;
		fVar9 = FLOAT_0038a934;
		(this->parent).field20_0x20.m41 = *(float *)&pIVar8[9].field2_0x8;
		(this->parent).field20_0x20.m42 = (float)pIVar8[9].time;
		(this->parent).field20_0x20.m43 = (float)pIVar8[9].field5_0x10;
		(this->parent).field20_0x20.m44 = (float)pIVar8[9].field6_0x14;
		(this->parent).field20_0x20.m42 =(fVar9 - *(float *)&this->field_0xf8) + (this->parent).field20_0x20.m42;
		(this->parent).field20_0x20.m31 = *(float *)&this->field_0x110;
		fVar3 = *(float *)&this->field_0x114;
		(this->parent).field20_0x20.m32 = fVar3;
		(this->parent).field20_0x20.m33 = *(float *)&this->field_0x118;
		(this->parent).field20_0x20.m34 = *(float *)&this->field_0x11c;
		(this->parent).field20_0x20.m32 = 0.0;
		fVar7 = DAT_0039dbf8;
		fVar11 = FLOAT_0038639c;
		fVar9 = (this->parent).field20_0x20.m31;
		fVar2 = (this->parent).field20_0x20.m33;
		fVar9 = fVar9 * fVar9 + 0.0 + fVar2 * fVar2;
		if (fVar9 <= DAT_0039dbf8) {
		fVar9 = 0.0;
		}
		else {
		fVar9 = FLOAT_0038639c / SQRT(fVar9);
		}
		(this->parent).field20_0x20.m31 = (this->parent).field20_0x20.m31 * fVar9;
		(this->parent).field20_0x20.m32 = (this->parent).field20_0x20.m32 * fVar9;
		(this->parent).field20_0x20.m33 = (this->parent).field20_0x20.m33 * fVar9;
		(this->parent).field20_0x20.m21 = 0.0;
		(this->parent).field20_0x20.m22 = fVar11;
		(this->parent).field20_0x20.m23 = 0.0;
		(this->parent).field20_0x20.m24 = 0.0;
		(this->parent).field20_0x20.m11 =fVar11 * (this->parent).field20_0x20.m33 - (this->parent).field20_0x20.m32 * 0.0;
		(this->parent).field20_0x20.m12 =(this->parent).field20_0x20.m23 * (this->parent).field20_0x20.m31 -(this->parent).field20_0x20.m21 * (this->parent).field20_0x20.m33;
		fVar10 = (this->parent).field20_0x20.m32 * (this->parent).field20_0x20.m21 -(this->parent).field20_0x20.m22 * (this->parent).field20_0x20.m31;
		(this->parent).field20_0x20.m13 = fVar10;
		(this->parent).field20_0x20.m14 = fVar11;
		fVar9 = (this->parent).field20_0x20.m12;
		fVar2 = (this->parent).field20_0x20.m11;
		fVar9 = fVar2 * fVar2 + fVar9 * fVar9 + fVar10 * fVar10;
		if (fVar9 <= fVar7) {
		fVar11 = 0.0;
		}
		else {
		fVar11 = fVar11 / SQRT(fVar9);
		}
		(this->parent).field20_0x20.m11 = fVar11 * (this->parent).field20_0x20.m11;
		(this->parent).field20_0x20.m12 = (this->parent).field20_0x20.m12 * fVar11;
		(this->parent).field20_0x20.m13 = (this->parent).field20_0x20.m13 * fVar11;
		(this->parent).field20_0x20.m14 = 0.0;
		(this->parent).field20_0x20.m34 = 0.0;
		return CONCAT31((int3)((uint)fVar3 >> 8),1);
		}
		
	*/
	return 0;
}

void UnkFamily6C::FUN_0008a510(UnkFamily6C* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily6C::FUN_0008a510(UnkFamily6C *param_1){
		thunk_FUN_00081cb0((int)&param_1->field_0x1f0);
		thunk_FUN_00081cb0((int)&param_1->field_0x3d0);
		return;
		}
		
	*/
	return;
}

void UnkFamily6C::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily6C::Dispose(UnkFamily6C *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void UnkFamily6C::FUN_0007fef0(uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily6C::FUN_0007fef0(int this,undefined4 *param_2){
		InstanceNodePhysics *this_00;
		this_00 = (InstanceNodePhysics *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)(*(int *)(this + 0x14) + 0x10) + 0xe4),Physics);
		InstanceNodePhysics::FUN_001dfbd0(this_00,(Vector4 *)param_2);
		return;
		}
		
	*/
	return;
}

uint UnkFamily6C::FUN_0007ff10(uint param_1, InstanceNodeKSubA* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall UnkFamily6C::FUN_0007ff10(UnkFamily6C *this,undefined4 param_1,InstanceNodeKSubA *param_2){
		undefined *puVar1;
		if (((uint)(param_2->parent).parent.vtable >> 0x12 & 1) != 0) {
		puVar1 = &this->field_0x130;
		InstanceNodeKSubA::FUN_00139650(param_2,(Vector4 *)puVar1,false);
		return CONCAT31((int3)((uint)puVar1 >> 8),1);
		}
		return (uint)this & 0xffffff00;
		}
		
	*/
	return 0;
}

void UnkFamily6C::FUN_00092720(float param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily6C::FUN_00092720(UnkFamily6C *this,float param_1){
		int iVar1;
		InstanceNodeAbstract *pIVar2;
		char local_4;
		pIVar2 = InstanceDataList::GetNode((InstanceDataList *)(*(int *)((this->parent).field14_0x14 + 0x10) + 0xe4),Physics);
		if ((((uint)pIVar2[1].vtable >> 4 & 1) != 0) ||(local_4 = '\0', ((uint)pIVar2[1].vtable >> 2 & 1) != 0)) {
		local_4 = '\x01';
		}
		iVar1 = *(int *)&this->field_0xf0;
		if (iVar1 == 0) {
		thunk_FUN_00092020(this,param_1);
		thunk_FUN_00089300((int)this,local_4,param_1);
		}
		else if (iVar1 == 1) {
		thunk_FUN_00089440(this,param_1);
		thunk_FUN_00089300((int)this,local_4,param_1);
		}
		else if (iVar1 == 2) {
		thunk_FUN_000896d0(this,param_1);
		}
		thunk_FUN_000889c0((int)this,param_1);
		thunk_FUN_00092210((int)this,(byte)((uint)pIVar2[1].vtable >> 2) & 1);
		thunk_FUN_00089db0((int)this);
		return;
		}
		
	*/
	return;
}

uint UnkFamily6C::FUN_000a6210() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily6C::FUN_000a6210(void){
		return 1;
		}
		
	*/
	return 0;
}

void UnkFamily6C::FUN_000a6220(Vector4* param_1, Vector4* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily6C::FUN_000a6220(Vector4 *param_1,Vector4 *param_2){
		float fVar1;
		fVar1 = FLOAT_003869d8;
		param_1->z = FLOAT_003869d8;
		param_1->y = fVar1;
		param_1->x = fVar1;
		fVar1 = FLOAT_0038639c;
		param_1->w = FLOAT_0038639c;
		param_2->z = fVar1;
		param_2->y = fVar1;
		param_2->x = fVar1;
		param_2->w = fVar1;
		return;
		}
		
	*/
	return;
}

void UnkFamily6C::FUN_000a6280() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily6C::FUN_000a6280(void){
		return 0;
		}
		
	*/
	return;
}

