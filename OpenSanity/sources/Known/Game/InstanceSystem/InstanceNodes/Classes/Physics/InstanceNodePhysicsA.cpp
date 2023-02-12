#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Physics/InstanceNodePhysicsA.h"

#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubA.h"
void InstanceNodePhysicsA::FUN_001db180(float* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodePhysicsA::FUN_001db180(InstanceNodePhysicsA *this,float *param_1){
		Matrix4 *this_00;
		float fVar1;
		float fVar2;
		float fVar3;
		(this->body).parent.matrix1.m41 = (this->body).parent.matrix1.m41 + *param_1;
		(this->body).parent.matrix1.m42 = param_1[1] + (this->body).parent.matrix1.m42;
		(this->body).parent.matrix1.m43 = param_1[2] + (this->body).parent.matrix1.m43;
		fVar1 = (this->body).parent.matrix1.m12;
		fVar2 = (this->body).parent.matrix1.m13;
		fVar3 = (this->body).parent.matrix1.m14;
		this_00 = &(this->body).parent.matrix2;
		this_00->m11 = (this->body).parent.matrix1.m11;
		(this->body).parent.matrix2.m12 = fVar1;
		(this->body).parent.matrix2.m13 = fVar2;
		(this->body).parent.matrix2.m14 = fVar3;
		fVar1 = (this->body).parent.matrix1.m22;
		fVar2 = (this->body).parent.matrix1.m23;
		fVar3 = (this->body).parent.matrix1.m24;
		(this->body).parent.matrix2.m21 = (this->body).parent.matrix1.m21;
		(this->body).parent.matrix2.m22 = fVar1;
		(this->body).parent.matrix2.m23 = fVar2;
		(this->body).parent.matrix2.m24 = fVar3;
		fVar1 = (this->body).parent.matrix1.m32;
		fVar2 = (this->body).parent.matrix1.m33;
		fVar3 = (this->body).parent.matrix1.m34;
		(this->body).parent.matrix2.m31 = (this->body).parent.matrix1.m31;
		(this->body).parent.matrix2.m32 = fVar1;
		(this->body).parent.matrix2.m33 = fVar2;
		(this->body).parent.matrix2.m34 = fVar3;
		fVar1 = (this->body).parent.matrix1.m42;
		fVar2 = (this->body).parent.matrix1.m43;
		fVar3 = (this->body).parent.matrix1.m44;
		(this->body).parent.matrix2.m41 = (this->body).parent.matrix1.m41;
		(this->body).parent.matrix2.m42 = fVar1;
		(this->body).parent.matrix2.m43 = fVar2;
		(this->body).parent.matrix2.m44 = fVar3;
		Matrix4::FUN_000d4180(this_00);
		return;
		}
		
	*/
	return;
}

void InstanceNodePhysicsA::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodePhysicsA * __fastcall InstanceNodePhysicsA::Construct(InstanceNodePhysicsA *this){
		uint uVar1;
		float fVar2;
		float fVar3;
		InstanceNodePhysics::Construct((InstanceNodePhysics *)this);
		fVar3 = FLOAT_0038bc04;
		fVar2 = FLOAT_0038639c;
		uVar1 = (this->body).field13_0x2dc;
		this->vtable = (InstanceNodePhysics_VTable *)&InstanceNode_VT_Physics_A;
		(this->body).field13_0x2dc = uVar1 & 0xffffffbd | 5;
		(this->body).field14_0x2e0 = 0;
		(this->body).field23_0x2ec = 0;
		(this->body).field24_0x2f0 = 0;
		(this->body).field25_0x2f4 = 0;
		(this->body).field26_0x2f8 = fVar2;
		(this->body).field32_0x304 = fVar3;
		(this->body).field33_0x308 = FLOAT_00395a08;
		(this->body).field34_0x30c = FLOAT_00386ab4;
		fVar3 = FLOAT_0038a928;
		(this->body).field35_0x310 = FLOAT_0038a928;
		(this->body).field36_0x314 = fVar3;
		fVar3 = FLOAT_0038b694;
		(this->body).field37_0x318 = FLOAT_0038b694;
		(this->body).field38_0x31c = fVar3;
		fVar3 = FLOAT_003869d8;
		(this->body).field27_0x2fc = (UNV007 *)0x0;
		(this->body).field_0x300 = 0;
		(this->body).field39_0x320 = fVar3;
		(this->body).field43_0x328 = fVar2;
		(this->body).field44_0x32c = 0;
		(this->body).field57_0x33c.x = 0.0;
		(this->body).field57_0x33c.y = 0.0;
		(this->body).field57_0x33c.z = 0.0;
		(this->body).field57_0x33c.w = fVar2;
		(this->body).field58_0x34c.x = 0.0;
		(this->body).field58_0x34c.y = 0.0;
		(this->body).field58_0x34c.z = 0.0;
		(this->body).field58_0x34c.w = fVar2;
		(this->body).field60_0x360 = 0;
		(this->body).field65_0x368 = 0;
		(this->body).field59_0x35c = 0;
		(this->body).parent.field45_0x1fc.x = Vector4_0039ef70.x;
		(this->body).parent.field45_0x1fc.y = Vector4_0039ef70.y;
		(this->body).parent.field45_0x1fc.z = Vector4_0039ef70.z;
		(this->body).parent.field45_0x1fc.w = fVar2;
		return this;
		}
		
	*/
	return;
}

void InstanceNodePhysicsA::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodePhysicsA::Dispose(InstanceNodeAbstract *this){
		InstanceNodeAbstract_VTable *ptr;
		undefined4 *puVar1;
		undefined4 *ptr_00;
		this->vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_Physics_A;
		FUN_001dde00(PTR_003e6bf4,(InstanceNodePhysics *)this);
		ptr = this[0x20].vtable;
		if (ptr != (InstanceNodeAbstract_VTable *)0x0) {
		ptr_00 = (undefined4 *)ptr[1].UpdateTime;
		while (ptr_00 != (undefined4 *)0x0) {
		puVar1 = (undefined4 *)*ptr_00;
		VirtualPool::FreeMemory(ptr_00);
		ptr_00 = puVar1;
		}
		ptr[1].UpdateTime = (UpdateTime *)0x0;
		VirtualPool::FreeMemory(ptr);
		}
		this->vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_Physics;
		InstanceNodeAbstract::UnrollVtable(this);
		return;
		}
		
	*/
	return;
}

void InstanceNodePhysicsA::PhysicsMethod6(Vector4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodePhysicsA::PhysicsMethod6(InstanceNodePhysicsA *this,Vector4 *param_1){
		Vector4 local_20;
		local_20.x = param_1->x - (float)(this->body).field23_0x2ec;
		local_20.y = param_1->y - (float)(this->body).field24_0x2f0;
		local_20.z = param_1->z - (float)(this->body).field25_0x2f4;
		local_20.w = FLOAT_0038639c;
		InstanceTransform::FUN_000d3ed0((InstanceTransform *)&(this->body).parent.matrix1,&local_20);
		FUN_001db180(this,&local_20.x);
		(this->body).field23_0x2ec = param_1->x;
		(this->body).field24_0x2f0 = param_1->y;
		(this->body).field25_0x2f4 = param_1->z;
		(this->body).field26_0x2f8 = param_1->w;
		return;
		}
		
	*/
	return;
}

uint InstanceNodePhysicsA::IsA(uint param_1, InstanceNodeKSubA* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall InstanceNodePhysicsA::IsA(InstanceNodePhysicsA *this,undefined4 param_1,InstanceNodeKSubA *param_2){
		uint *puVar1;
		Vector4 *vec;
		undefined4 uVar2;
		uint uVar3;
		Vector4 local_60;
		Matrix4 local_50;
		if (((uint)(param_2->parent).parent.vtable >> 0x12 & 1) != 0) {
		InstanceNodeKSubA::FUN_00139650(param_2,&(this->body).parent.field17_0x6c,false);
		InstanceNodeKSubA::FUN_00139650(param_2,&(this->body).parent.field19_0x8c,false);
		vec = &(this->body).parent.field18_0x7c;
		Matrix4::FUN_000d9f80(&local_50,vec);
		local_50.m41 = Vector4_0039ef70.x;
		local_50.m42 = Vector4_0039ef70.y;
		local_50.m43 = Vector4_0039ef70.z;
		local_50.m44 = FLOAT_0038639c;
		Matrix4::FUN_000d4180(&local_50);
		InstanceNodeKSubA::FUN_00139500(param_2,&local_50,'\x01');
		Matrix4::FUN_000d4180(&local_50);
		Vector4::FUN_000db0d0(vec,&local_50);
		local_60.x = (this->body).parent.matrix1.m41;
		local_60.y = (this->body).parent.matrix1.m42;
		local_60.z = (this->body).parent.matrix1.m43;
		local_60.w = (this->body).parent.matrix1.m44;
		InstanceNodeKSubA::FUN_00139650(param_2,&local_60,true);
		uVar2 = FUN_001db110((int)this,&local_60.x);
		puVar1 = &(this->body).parent.field1_0x14;
		*puVar1 = *puVar1 | 3;
		return CONCAT31((int3)((uint)uVar2 >> 8),1);
		}
		FUN_001db110((int)this,(undefined4 *)((this->body).field14_0x2e0 + 0xd0));
		local_60.w = (this->body).parent.field37_0x14c.w;
		local_60.x = (this->body).parent.field37_0x14c.x * FLOAT_0038adb8;
		local_60.y = (this->body).parent.field37_0x14c.y * FLOAT_0038adb8;
		local_60.z = (this->body).parent.field37_0x14c.z * FLOAT_0038adb8;
		InstanceNodePhysics::FUN_001dfbd0((InstanceNodePhysics *)this,&local_60);
		local_60.w = (this->body).parent.field36_0x13c.w;
		local_60.x = (this->body).parent.field36_0x13c.x * FLOAT_0038adb8;
		local_60.y = (this->body).parent.field36_0x13c.y * FLOAT_0038adb8;
		local_60.z = (this->body).parent.field36_0x13c.z * FLOAT_0038adb8;
		uVar3 = FUN_001db2b0((int)this,&local_60.x);
		return uVar3 & 0xffffff00;
		}
		
	*/
	return 0;
}

void InstanceNodePhysicsA::Dispose_5(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodePhysicsA::Dispose(InstanceNodePhysicsA *this,byte param_1){
		Dispose((InstanceNodeAbstract *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (InstanceNodeAbstract *)this;
		}
		
	*/
	return;
}

void InstanceNodePhysicsA::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodePhysicsA::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void InstanceNodePhysicsA::SetCtx(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodePhysicsA::SetCtx(InstanceNodePhysicsA *this,uint param_1){
		(this->body).field14_0x2e0 = param_1;
		InstanceNodeAbstract::SetCtx((InstanceNodeAbstract *)this,(InstanceContext *)param_1);
		return;
		}
		
	*/
	return;
}

