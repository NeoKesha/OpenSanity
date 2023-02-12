#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Physics/InstanceNodePhysics.h"

#include "headers/Known/Math/Vector4.h"
void InstanceNodePhysics::FUN_001de910() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodePhysics::FUN_001de910(InstanceNodePhysics *this){
		float fVar1;
		float fVar2;
		float fVar3;
		void *b;
		void *v;
		float fVar4;
		undefined4 *a;
		a = &(this->body).field59_0x21c;
		FUN_001dada0(a,(Vector4 *)&(this->body).matrix1.m41);
		FUN_001dcf10(a,&(this->body).field17_0x6c);
		FUN_001dcf10(b,&(this->body).field37_0x14c);
		FUN_001de700(v,&(this->body).field18_0x7c);
		fVar3 = FLOAT_0038639c;
		if ((*(byte *)a & 1) != 0) {
		fVar1 = (this->body).field88_0x23c.y;
		fVar2 = (this->body).field88_0x23c.z;
		fVar4 = (this->body).field88_0x23c.z * (this->body).field19_0x8c.z +(this->body).field88_0x23c.y * (this->body).field19_0x8c.y +(this->body).field88_0x23c.x * (this->body).field19_0x8c.x;
		(this->body).field19_0x8c.x = (this->body).field88_0x23c.x * fVar4;
		(this->body).field19_0x8c.y = fVar1 * fVar4;
		(this->body).field19_0x8c.z = fVar2 * fVar4;
		(this->body).field19_0x8c.w = fVar3;
		if ((*(byte *)a & 1) != 0) {
		fVar1 = (this->body).field88_0x23c.y;
		fVar2 = (this->body).field88_0x23c.z;
		fVar4 = (this->body).field88_0x23c.z * (this->body).field36_0x13c.z +(this->body).field88_0x23c.y * (this->body).field36_0x13c.y +(this->body).field36_0x13c.x * (this->body).field88_0x23c.x;
		(this->body).field36_0x13c.x = (this->body).field88_0x23c.x * fVar4;
		(this->body).field36_0x13c.y = fVar1 * fVar4;
		(this->body).field36_0x13c.z = fVar2 * fVar4;
		(this->body).field36_0x13c.w = fVar3;
		}
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodePhysics::FUN_001df330() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __fastcall InstanceNodePhysics::FUN_001df330(InstanceNodePhysics *this){
		uint *puVar1;
		Matrix4 *mat1;
		Vector4 *vec2;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		Matrix4 local_90;
		Matrix4 local_50;
		Matrix4 *mat;
		if ((*(byte *)&(this->body).field1_0x14 & 1) != 0) {
		(this->body).field37_0x14c.x = (this->body).field17_0x6c.x;
		(this->body).field37_0x14c.y = (this->body).field17_0x6c.y;
		(this->body).field37_0x14c.z = (this->body).field17_0x6c.z;
		(this->body).field37_0x14c.w = (this->body).field17_0x6c.w;
		fVar3 = (this->body).field3_0x1c.x;
		(this->body).field37_0x14c.x = (this->body).field37_0x14c.x * fVar3;
		(this->body).field37_0x14c.y = (this->body).field37_0x14c.y * fVar3;
		fVar3 = (this->body).field37_0x14c.z * fVar3;
		(this->body).field37_0x14c.z = fVar3;
		fVar4 = (this->body).field37_0x14c.x;
		fVar5 = (this->body).field3_0x1c.y;
		fVar2 = (this->body).field37_0x14c.y;
		if (fVar5 * fVar5 < fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3) {
		fVar3 = (this->body).field37_0x14c.y;
		fVar4 = (this->body).field37_0x14c.z;
		fVar5 = (this->body).field37_0x14c.x;
		fVar3 = fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4;
		if (fVar3 <= _DAT_0049d370) {
		fVar3 = 0.0;
		}
		else {
		fVar3 = FLOAT_0038639c / SQRT(fVar3);
		}
		(this->body).field37_0x14c.x = (this->body).field37_0x14c.x * fVar3;
		(this->body).field37_0x14c.y = (this->body).field37_0x14c.y * fVar3;
		(this->body).field37_0x14c.z = (this->body).field37_0x14c.z * fVar3;
		fVar3 = (this->body).field3_0x1c.y;
		(this->body).field37_0x14c.x = (this->body).field37_0x14c.x * fVar3;
		(this->body).field37_0x14c.y = (this->body).field37_0x14c.y * fVar3;
		(this->body).field37_0x14c.z = (this->body).field37_0x14c.z * fVar3;
		fVar2 = FLOAT_0038639c;
		fVar3 = (this->body).field2_0x18;
		fVar4 = (this->body).field37_0x14c.y;
		fVar5 = (this->body).field37_0x14c.z;
		(this->body).field17_0x6c.x = (this->body).field37_0x14c.x * fVar3;
		(this->body).field17_0x6c.y = fVar4 * fVar3;
		(this->body).field17_0x6c.z = fVar5 * fVar3;
		(this->body).field17_0x6c.w = fVar2;
		}
		puVar1 = &(this->body).field1_0x14;
		*puVar1 = *puVar1 & 0xfffffffe;
		}
		if ((*(byte *)&(this->body).field1_0x14 & 2) != 0) {
		FUN_001de910(this);
		Matrix4::FUN_000d9f80(&local_90,&(this->body).field18_0x7c);
		local_90.m41 = Vector4_0039ef70.x;
		local_90.m42 = Vector4_0039ef70.y;
		local_90.m43 = Vector4_0039ef70.z;
		local_90.m44 = FLOAT_0038639c;
		Matrix4::FUN_000d4180(&local_90);
		(this->body).matrix1.m11 = local_90.m11;
		(this->body).matrix1.m12 = local_90.m12;
		(this->body).matrix1.m13 = local_90.m13;
		(this->body).matrix1.m14 = local_90.m14;
		(this->body).matrix1.m21 = local_90.m21;
		mat1 = &(this->body).matrix1;
		(this->body).matrix1.m22 = local_90.m22;
		(this->body).matrix1.m23 = local_90.m23;
		(this->body).matrix1.m24 = local_90.m24;
		(this->body).matrix1.m31 = local_90.m31;
		(this->body).matrix1.m32 = local_90.m32;
		(this->body).matrix1.m33 = local_90.m33;
		(this->body).matrix1.m34 = local_90.m34;
		fVar3 = (this->body).matrix1.m12;
		fVar4 = (this->body).matrix1.m13;
		fVar5 = (this->body).matrix1.m14;
		mat = &(this->body).matrix2;
		mat->m11 = mat1->m11;
		(this->body).matrix2.m12 = fVar3;
		(this->body).matrix2.m13 = fVar4;
		(this->body).matrix2.m14 = fVar5;
		fVar3 = (this->body).matrix1.m22;
		fVar4 = (this->body).matrix1.m23;
		fVar5 = (this->body).matrix1.m24;
		(this->body).matrix2.m21 = (this->body).matrix1.m21;
		(this->body).matrix2.m22 = fVar3;
		(this->body).matrix2.m23 = fVar4;
		(this->body).matrix2.m24 = fVar5;
		fVar3 = (this->body).matrix1.m32;
		fVar4 = (this->body).matrix1.m33;
		fVar5 = (this->body).matrix1.m34;
		(this->body).matrix2.m31 = (this->body).matrix1.m31;
		(this->body).matrix2.m32 = fVar3;
		(this->body).matrix2.m33 = fVar4;
		(this->body).matrix2.m34 = fVar5;
		fVar3 = (this->body).matrix1.m42;
		fVar4 = (this->body).matrix1.m43;
		fVar5 = (this->body).matrix1.m44;
		(this->body).matrix2.m41 = (this->body).matrix1.m41;
		(this->body).matrix2.m42 = fVar3;
		(this->body).matrix2.m43 = fVar4;
		(this->body).matrix2.m44 = fVar5;
		Matrix4::FUN_000d4180(mat);
		local_90.m14 = (this->body).matrix2.m14;
		local_90.m24 = (this->body).matrix2.m24;
		local_90.m34 = (this->body).matrix2.m34;
		local_90.m41 = (this->body).matrix2.m41;
		local_90.m42 = (this->body).matrix2.m42;
		local_90.m43 = (this->body).matrix2.m43;
		local_90.m44 = (this->body).matrix2.m44;
		local_90.m11 = mat->m11 * (this->body).field5_0x3c.x;
		local_90.m21 = (this->body).matrix2.m21 * (this->body).field5_0x3c.x;
		local_90.m31 = (this->body).matrix2.m31 * (this->body).field5_0x3c.x;
		local_90.m12 = (this->body).matrix2.m12 * (this->body).field5_0x3c.y;
		local_90.m22 = (this->body).matrix2.m22 * (this->body).field5_0x3c.y;
		local_90.m32 = (this->body).matrix2.m32 * (this->body).field5_0x3c.y;
		local_90.m13 = (this->body).matrix2.m13 * (this->body).field5_0x3c.z;
		local_90.m23 = (this->body).matrix2.m23 * (this->body).field5_0x3c.z;
		local_90.m33 = (this->body).matrix2.m33 * (this->body).field5_0x3c.z;
		mat = &(this->body).field39_0x16c;
		Matrix4::Multiply4443(&local_90,mat1,mat);
		vec2 = &(this->body).field36_0x13c;
		Matrix4::FUN_000d42b0(mat,&(this->body).field19_0x8c,vec2);
		fVar3 = (this->body).field36_0x13c.y;
		fVar4 = (this->body).field36_0x13c.z;
		fVar5 = (this->body).field3_0x1c.z;
		if (fVar5 * fVar5 < vec2->x * vec2->x + fVar3 * fVar3 + fVar4 * fVar4) {
		fVar3 = (this->body).field36_0x13c.y;
		fVar4 = (this->body).field36_0x13c.z;
		fVar3 = vec2->x * vec2->x + fVar3 * fVar3 + fVar4 * fVar4;
		if (fVar3 <= _DAT_0049d370) {
		fVar3 = 0.0;
		}
		else {
		fVar3 = FLOAT_0038639c / SQRT(fVar3);
		}
		vec2->x = fVar3 * vec2->x;
		(this->body).field36_0x13c.y = (this->body).field36_0x13c.y * fVar3;
		(this->body).field36_0x13c.z = (this->body).field36_0x13c.z * fVar3;
		fVar3 = (this->body).field3_0x1c.z;
		vec2->x = vec2->x * fVar3;
		fVar4 = (this->body).field36_0x13c.z;
		(this->body).field36_0x13c.y = fVar3 * (this->body).field36_0x13c.y;
		(this->body).field36_0x13c.z = fVar3 * fVar4;
		local_50.m11 = mat->m11;
		local_50.m12 = (this->body).field39_0x16c.m12;
		local_50.m13 = (this->body).field39_0x16c.m13;
		local_50.m14 = (this->body).field39_0x16c.m14;
		local_50.m21 = (this->body).field39_0x16c.m21;
		local_50.m22 = (this->body).field39_0x16c.m22;
		local_50.m23 = (this->body).field39_0x16c.m23;
		local_50.m24 = (this->body).field39_0x16c.m24;
		local_50.m31 = (this->body).field39_0x16c.m31;
		local_50.m32 = (this->body).field39_0x16c.m32;
		local_50.m33 = (this->body).field39_0x16c.m33;
		local_50.m34 = (this->body).field39_0x16c.m34;
		local_50.m41 = (this->body).field39_0x16c.m41;
		local_50.m42 = (this->body).field39_0x16c.m42;
		local_50.m43 = (this->body).field39_0x16c.m43;
		local_50.m44 = (this->body).field39_0x16c.m44;
		Matrix4::FUN_000d4180(&local_50);
		Matrix4::FUN_000d42b0(&local_50,vec2,&(this->body).field19_0x8c);
		}
		fVar3 = (((this->body).field18_0x7c.w * (this->body).field36_0x13c.z -(this->body).field18_0x7c.y * vec2->x) +(this->body).field36_0x13c.y * (this->body).field18_0x7c.x) * FLOAT_00386ab4;
		fVar4 = ((vec2->x * (this->body).field18_0x7c.z +(this->body).field36_0x13c.y * (this->body).field18_0x7c.w) -(this->body).field18_0x7c.x * (this->body).field36_0x13c.z) * FLOAT_00386ab4;
		fVar5 = (((0.0 - vec2->x * (this->body).field18_0x7c.x) -(this->body).field18_0x7c.y * (this->body).field36_0x13c.y) -(this->body).field36_0x13c.z * (this->body).field18_0x7c.z) * FLOAT_00386ab4;
		(this->body).field32_0x12c =((vec2->x * (this->body).field18_0x7c.w -(this->body).field36_0x13c.y * (this->body).field18_0x7c.z) +(this->body).field18_0x7c.y * (this->body).field36_0x13c.z) * FLOAT_00386ab4;
		(this->body).field33_0x130 = fVar4;
		(this->body).field34_0x134 = fVar3;
		(this->body).field35_0x138 = fVar5;
		puVar1 = &(this->body).field1_0x14;
		*puVar1 = *puVar1 & 0xfffffffd;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodePhysics::FUN_001dfbd0(Vector4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodePhysics::FUN_001dfbd0(InstanceNodePhysics *this,Vector4 *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		(this->body).field37_0x14c.x = param_1->x;
		(this->body).field37_0x14c.y = param_1->y;
		(this->body).field37_0x14c.z = param_1->z;
		(this->body).field37_0x14c.w = param_1->w;
		fVar4 = FLOAT_0038639c;
		fVar1 = (this->body).field2_0x18;
		fVar2 = (this->body).field37_0x14c.y;
		fVar3 = (this->body).field37_0x14c.z;
		(this->body).field17_0x6c.x = (this->body).field37_0x14c.x * fVar1;
		(this->body).field17_0x6c.y = fVar2 * fVar1;
		(this->body).field17_0x6c.z = fVar3 * fVar1;
		(this->body).field17_0x6c.w = fVar4;
		(this->body).field1_0x14 = (this->body).field1_0x14 & 0xfffffffe;
		FUN_001df330(this);
		return;
		}
		
	*/
	return;
}

void InstanceNodePhysics::InitStuff(float param_1, float k3, float k1, float k2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodePhysics::InitStuff(InstanceNodePhysics *this,float param_1,float k3,float k1,float k2){
		float fVar1;
		float K;
		float bk1;
		float bk2;
		float fVar2;
		float bk3;
		fVar1 = FLOAT_0038639c;
		bk1 = k1 * FLOAT_0038ab90;
		bk2 = k2 * FLOAT_0038ab90;
		bk3 = k3 * FLOAT_0038ab90;
		K = bk1;
		if (bk1 < bk2) {
		K = bk2;
		}
		if (K < k3) {
		K = k3;
		}
		fVar2 = bk3;
		if (bk3 < bk2) {
		fVar2 = bk2;
		}
		if (fVar2 < k1) {
		fVar2 = k1;
		}
		if (bk3 < bk1) {
		bk3 = bk1;
		}
		if (bk3 < k2) {
		bk3 = k2;
		}
		(this->body).field2_0x18 = param_1;
		bk1 = param_1 * FLOAT_0038d5c0;
		(this->body).field3_0x1c.x = fVar1 / param_1;
		(this->body).field4_0x2c.w = fVar1;
		(this->body).field4_0x2c.x = (bk3 * bk3 + fVar2 * fVar2) * bk1;
		(this->body).field4_0x2c.z = (K * K + fVar2 * fVar2) * bk1;
		bk1 = (K * K + bk3 * bk3) * bk1;
		(this->body).field4_0x2c.y = bk1;
		K = (this->body).field4_0x2c.z;
		(this->body).field5_0x3c.x = fVar1 / (this->body).field4_0x2c.x;
		(this->body).field5_0x3c.z = fVar1 / K;
		(this->body).field5_0x3c.w = fVar1;
		(this->body).field5_0x3c.y = fVar1 / bk1;
		(this->body).field6_0x4c.x = (this->body).field5_0x3c.x;
		(this->body).field6_0x4c.y = (this->body).field5_0x3c.y;
		(this->body).field6_0x4c.z = (this->body).field5_0x3c.z;
		(this->body).field6_0x4c.w = (this->body).field5_0x3c.w;
		FUN_001df330(this);
		return;
		}
		
	*/
	return;
}

void InstanceNodePhysics::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodePhysics * __fastcall InstanceNodePhysics::Construct(InstanceNodePhysics *this){
		float fVar1;
		float fVar2;
		InstanceNodeAbstract::Contruct((InstanceNodeAbstract *)this);
		this->vtable = (InstanceNodePhysics_VTable *)&InstanceNode_VT_Physics;
		(this->body).field59_0x21c = 0;
		(this->body).mePtr = this;
		(this->body).field5_0x3c.x = Vector4_0039ef70.x;
		(this->body).field5_0x3c.y = Vector4_0039ef70.y;
		(this->body).field5_0x3c.z = Vector4_0039ef70.z;
		fVar1 = FLOAT_0038639c;
		(this->body).field5_0x3c.w = FLOAT_0038639c;
		(this->body).field6_0x4c.x = Vector4_0039ef70.x;
		(this->body).field6_0x4c.y = Vector4_0039ef70.y;
		(this->body).field6_0x4c.z = Vector4_0039ef70.z;
		(this->body).field6_0x4c.w = fVar1;
		(this->body).matrix1.m41 = Vector4_0039ef70.x;
		(this->body).matrix1.m42 = Vector4_0039ef70.y;
		(this->body).matrix1.m43 = Vector4_0039ef70.z;
		(this->body).matrix1.m44 = fVar1;
		(this->body).field32_0x12c = 0;
		(this->body).field33_0x130 = 0;
		(this->body).field34_0x134 = 0;
		(this->body).field35_0x138 = 0;
		(this->body).field39_0x16c.m14 = 0.0;
		(this->body).field39_0x16c.m13 = 0.0;
		(this->body).field39_0x16c.m12 = 0.0;
		(this->body).field39_0x16c.m11 = 0.0;
		(this->body).field39_0x16c.m24 = 0.0;
		(this->body).field39_0x16c.m23 = 0.0;
		(this->body).field39_0x16c.m22 = 0.0;
		(this->body).field39_0x16c.m21 = 0.0;
		(this->body).field39_0x16c.m34 = 0.0;
		(this->body).field39_0x16c.m33 = 0.0;
		(this->body).field39_0x16c.m32 = 0.0;
		(this->body).field39_0x16c.m31 = 0.0;
		(this->body).field39_0x16c.m43 = 0.0;
		(this->body).field39_0x16c.m42 = 0.0;
		(this->body).field39_0x16c.m41 = 0.0;
		(this->body).field39_0x16c.m44 = 0.0;
		(this->body).field40_0x1ac.x = Vector4_0039ef70.x;
		(this->body).field40_0x1ac.y = Vector4_0039ef70.y;
		(this->body).field40_0x1ac.z = Vector4_0039ef70.z;
		(this->body).field40_0x1ac.w = fVar1;
		(this->body).field8_0x60 = 1;
		Matrix4::Construct1(&(this->body).matrix1);
		Matrix4::Construct1(&(this->body).matrix2);
		(this->body).field17_0x6c.x = Vector4_0039ef70.x;
		(this->body).field17_0x6c.y = Vector4_0039ef70.y;
		(this->body).field17_0x6c.z = Vector4_0039ef70.z;
		fVar1 = FLOAT_0038639c;
		(this->body).field17_0x6c.w = FLOAT_0038639c;
		(this->body).field18_0x7c.x = 0.0;
		(this->body).field18_0x7c.y = 0.0;
		(this->body).field18_0x7c.z = 0.0;
		(this->body).field18_0x7c.w = fVar1;
		(this->body).field19_0x8c.x = Vector4_0039ef70.x;
		(this->body).field19_0x8c.y = Vector4_0039ef70.y;
		(this->body).field19_0x8c.z = Vector4_0039ef70.z;
		(this->body).field19_0x8c.w = fVar1;
		(this->body).field36_0x13c.x = Vector4_0039ef70.x;
		(this->body).field36_0x13c.y = Vector4_0039ef70.y;
		fVar2 = Vector4_0039ef70.z;
		(this->body).field36_0x13c.w = fVar1;
		(this->body).field36_0x13c.z = fVar2;
		(this->body).field37_0x14c.x = Vector4_0039ef70.x;
		(this->body).field37_0x14c.y = Vector4_0039ef70.y;
		fVar2 = Vector4_0039ef70.z;
		(this->body).field37_0x14c.w = fVar1;
		(this->body).field37_0x14c.z = fVar2;
		(this->body).field38_0x15c.x = (this->body).field37_0x14c.x;
		(this->body).field38_0x15c.y = (this->body).field37_0x14c.y;
		(this->body).field38_0x15c.z = (this->body).field37_0x14c.z;
		(this->body).field38_0x15c.w = (this->body).field37_0x14c.w;
		(this->body).field43_0x1dc.x = Vector4_0039ef70.x;
		(this->body).field43_0x1dc.y = Vector4_0039ef70.y;
		fVar2 = Vector4_0039ef70.z;
		(this->body).field43_0x1dc.w = fVar1;
		(this->body).field43_0x1dc.z = fVar2;
		(this->body).field44_0x1ec.x = Vector4_0039ef70.x;
		(this->body).field44_0x1ec.y = Vector4_0039ef70.y;
		fVar2 = Vector4_0039ef70.z;
		(this->body).field44_0x1ec.w = fVar1;
		fVar1 = FLOAT_0038d6d4;
		(this->body).field44_0x1ec.z = fVar2;
		(this->body).field46_0x20c = fVar1;
		(this->body).field1_0x14 = 3;
		InitStuff(this,1.0,1.5,1.5,1.5);
		fVar1 = FLOAT_003959c0;
		(this->body).field3_0x1c.y = FLOAT_003959c0;
		(this->body).field3_0x1c.z = fVar1;
		(this->body).field41_0x1bc.x = Vector4_0039ef70.x;
		(this->body).field41_0x1bc.y = Vector4_0039ef70.y;
		(this->body).field41_0x1bc.z = Vector4_0039ef70.z;
		fVar1 = FLOAT_0038639c;
		(this->body).field41_0x1bc.w = FLOAT_0038639c;
		(this->body).field42_0x1cc.x = Vector4_0039ef70.x;
		(this->body).field42_0x1cc.y = Vector4_0039ef70.y;
		(this->body).field42_0x1cc.z = Vector4_0039ef70.z;
		(this->body).field42_0x1cc.w = fVar1;
		(this->body).field7_0x5c = fVar1;
		(this->body).field20_0x9c = 0;
		(this->body).field21_0xa0 = 0;
		return this;
		}
		
	*/
	return;
}

void InstanceNodePhysics::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodePhysics::Dispose(InstanceNodePhysics *this,byte param_1){
		this->vtable = (InstanceNodePhysics_VTable *)&InstanceNode_VT_Physics;
		InstanceNodeAbstract::UnrollVtable((InstanceNodeAbstract *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (InstanceNodeAbstract *)this;
		}
		
	*/
	return;
}

bool InstanceNodePhysics::Step() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodePhysics::Step(void){
		return false;
		}
		
	*/
	return false;
}

byte InstanceNodePhysics::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte InstanceNodePhysics::GetIndex(void){
		return 5;
		}
		
	*/
	return 0;
}

uint InstanceNodePhysics::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodePhysics::GetBuilderIndex(void){
		return 0x1309;
		}
		
	*/
	return 0;
}

byte InstanceNodePhysics::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte InstanceNodePhysics::IsA(void){
		return 0;
		}
		
	*/
	return 0;
}

void InstanceNodePhysics::Dispose_10() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodePhysics::Dispose(InstanceNodePhysics *this){
		this->vtable = (InstanceNodePhysics_VTable *)&InstanceNode_VT_Physics;
		InstanceNodeAbstract::UnrollVtable((InstanceNodeAbstract *)this);
		return;
		}
		
	*/
	return;
}

