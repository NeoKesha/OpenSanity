#include "headers/Known/Camera/Zone.h"

#include "headers/Known/Math/Vector4.h"
bool Zone::FUN_000da210(Vector4* param_1, Vector4* param_2, Vector4* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall Zone::FUN_000da210(Zone *this,Vector4 *param_1,Vector4 *param_2,Vector4 *param_3){
		float fVar1;
		float fVar2;
		float fVar3;
		(this->field0_0x0).m11 = param_2->x;
		(this->field0_0x0).m12 = param_2->y;
		(this->field0_0x0).m13 = param_2->z;
		(this->field0_0x0).m14 = param_2->w;
		(this->field0_0x0).m11 = (this->field0_0x0).m11 - param_1->x;
		fVar3 = (this->field0_0x0).m11;
		(this->field0_0x0).m12 = (this->field0_0x0).m12 - param_1->y;
		fVar1 = (this->field0_0x0).m13 - param_1->z;
		fVar2 = (this->field0_0x0).m12;
		(this->field0_0x0).m13 = fVar1;
		(this->field0_0x0).m11 = param_3->z * fVar2 - fVar1 * param_3->y;
		(this->field0_0x0).m12 = (this->field0_0x0).m13 * param_3->x - fVar3 * param_3->z;
		fVar1 = (this->field0_0x0).m11;
		fVar2 = param_3->y * fVar3 - param_3->x * fVar2;
		fVar3 = (this->field0_0x0).m12;
		(this->field0_0x0).m13 = fVar2;
		fVar3 = fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1;
		if (EPSILON < fVar3) {
		fVar3 = FLOAT_0038639c / SQRT(fVar3);
		if (fVar3 != 0.0) {
		fVar1 = (this->field0_0x0).m13 * fVar3;
		fVar2 = (this->field0_0x0).m11 * fVar3;
		fVar3 = fVar3 * (this->field0_0x0).m12;
		(this->field0_0x0).m12 = fVar3;
		(this->field0_0x0).m13 = fVar1;
		(this->field0_0x0).m11 = fVar2;
		(this->field0_0x0).m14 = 0.0 - (param_1->z * fVar1 + param_1->y * fVar3 + param_1->x * fVar2);
		return true;
		}
		}
		return false;
		}
		
	*/
	return false;
}

uint Zone::FUN_000da450(Vector4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall Zone::FUN_000da450(Zone *this,Vector4 *param_1){
		undefined4 uVar1;
		float fVar2;
		fVar2 = param_1->z * (this->field0_0x0).m13 + param_1->y * (this->field0_0x0).m12 +param_1->x * (this->field0_0x0).m11 + (this->field0_0x0).m14;
		uVar1 = 2;
		if (0.0 < fVar2) {
		return 1;
		}
		if (fVar2 < 0.0) {
		uVar1 = 3;
		}
		return uVar1;
		}
		
	*/
	return 0;
}

void Zone::FUN_000e8e80(Vector4* param_1, Vector4* param_2, Vector4* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Zone::FUN_000e8e80(Zone *this,Vector4 *param_1,Vector4 *param_2,Vector4 *param_3){
		Vector4 *this_00;
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float local_40;
		float local_3c;
		float local_38;
		Vector4 local_30;
		Vector4 local_20;
		local_20.w = param_2->w;
		local_30.w = param_3->w;
		local_20.y = param_2->y - param_1->y;
		local_30.x = param_3->x - param_1->x;
		local_30.y = param_3->y - param_1->y;
		local_20.z = param_2->z - param_1->z;
		local_30.z = param_3->z - param_1->z;
		local_20.x = param_2->x - param_1->x;
		fVar2 = local_30.z * local_20.y - local_30.y * local_20.z;
		fVar5 = 0.0;
		fVar3 = local_20.z * local_30.x - local_30.z * local_20.x;
		fVar4 = local_30.y * local_20.x - local_20.y * local_30.x;
		fVar1 = fVar2;
		if (fVar2 < 0.0) {
		fVar1 = 0.0 - fVar2;
		}
		local_40 = fVar2;
		local_3c = fVar3;
		local_38 = fVar4;
		if (FLOAT_0039ef40 < fVar1) goto LAB_000e9087;
		fVar1 = fVar3;
		if (fVar3 < 0.0) {
		fVar1 = 0.0 - fVar3;
		}
		if (FLOAT_0039ef40 < fVar1) goto LAB_000e9087;
		fVar1 = fVar4;
		if (fVar4 < 0.0) {
		fVar1 = 0.0 - fVar4;
		}
		if (FLOAT_0039ef40 < fVar1) goto LAB_000e9087;
		fVar1 = local_20.x;
		if (local_20.x < 0.0) {
		fVar1 = 0.0 - local_20.x;
		}
		if (FLOAT_0039ef40 < fVar1) {
		LAB_000e8fee:this_00 = &local_20;
		}
		else {
		fVar1 = local_20.y;
		if (local_20.y < 0.0) {
		fVar1 = 0.0 - local_20.y;
		}
		if (FLOAT_0039ef40 < fVar1) goto LAB_000e8fee;
		fVar1 = local_20.z;
		if (local_20.z < 0.0) {
		fVar1 = 0.0 - local_20.z;
		}
		if (FLOAT_0039ef40 < fVar1) goto LAB_000e8fee;
		fVar1 = local_30.x;
		if (local_30.x < 0.0) {
		fVar1 = 0.0 - local_30.x;
		}
		if (fVar1 <= FLOAT_0039ef40) {
		fVar1 = local_30.y;
		if (local_30.y < 0.0) {
		fVar1 = 0.0 - local_30.y;
		}
		if (fVar1 <= FLOAT_0039ef40) {
		fVar1 = local_30.z;
		if (local_30.z < 0.0) {
		fVar1 = 0.0 - local_30.z;
		}
		local_40 = DAT_0039efb0;
		local_3c = FLOAT_0039efb4;
		local_38 = DAT_0039efb8;
		if (fVar1 <= FLOAT_0039ef40) goto LAB_000e9087;
		}
		}
		this_00 = &local_30;
		}
		local_40 = fVar2;
		local_3c = fVar3;
		local_38 = fVar4;
		FUN_000dc410(this_00,&local_40);
		LAB_000e9087:fVar1 = FLOAT_0038639c;
		fVar3 = local_38 * local_38 + local_3c * local_3c + local_40 * local_40;
		fVar2 = fVar5;
		if (EPSILON < fVar3) {
		fVar2 = FLOAT_0038639c / SQRT(fVar3);
		}
		(this->field0_0x0).m12 = local_3c * fVar2;
		(this->field0_0x0).m13 = local_38 * fVar2;
		(this->field0_0x0).m14 = fVar1;
		(this->field0_0x0).m11 = local_40 * fVar2;
		(this->field0_0x0).m14 =fVar5 - (param_1->z * local_38 * fVar2 + param_1->y * local_3c * fVar2 +param_1->x * local_40 * fVar2);
		return;
		}
		
	*/
	return;
}

void Zone::FUN_000ed320(Vector4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Zone::FUN_000ed320(Zone *this,Vector4 *param_1){
		undefined *puVar1;
		undefined *puVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float local_50;
		undefined4 local_4c;
		undefined4 local_48;
		undefined4 local_44;
		undefined4 local_40;
		float local_3c;
		undefined4 local_38;
		undefined4 local_34;
		undefined4 local_30;
		undefined4 local_2c;
		float local_28;
		undefined4 local_24;
		float local_20;
		float local_1c;
		float local_18;
		float local_14;
		puVar1 = this->field1_0x40;
		puVar2 = this->field2_0x44;
		fVar4 = (this->field0_0x0).m42 + (this->field0_0x0).m22 * (float)puVar1;
		fVar3 = (this->field0_0x0).m41 + (this->field0_0x0).m21 * (float)puVar1;
		fVar5 = (this->field0_0x0).m43 + (this->field0_0x0).m23 * (float)puVar1;
		local_1c = param_1->y -((((this->field0_0x0).m42 + (this->field0_0x0).m32 * (float)puVar2) - fVar4) *FLOAT_00386ab4 + fVar4);
		local_20 = param_1->x -((((this->field0_0x0).m41 + (this->field0_0x0).m31 * (float)puVar2) - fVar3) *FLOAT_00386ab4 + fVar3);
		local_18 = param_1->z -((((this->field0_0x0).m43 + (this->field0_0x0).m33 * (float)puVar2) - fVar5) *FLOAT_00386ab4 + fVar5);
		local_28 = FLOAT_0038639c;
		local_3c = FLOAT_0038639c;
		local_50 = FLOAT_0038639c;
		local_40 = 0;
		local_44 = 0;
		local_48 = 0;
		local_4c = 0;
		local_2c = 0;
		local_30 = 0;
		local_34 = 0;
		local_38 = 0;
		local_24 = 0;
		local_14 = FLOAT_0038639c;
		FUN_000df380(this,&local_50);
		return;
		}
		
	*/
	return;
}

void Zone::Construct(float* param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Zone * __thiscall Zone::Construct(Zone *this,float *param_1,undefined *param_2){
		float *pfVar1;
		Vector4 local_30;
		Vector4 local_20;
		(this->field0_0x0).m21 = DAT_0039efc0;
		(this->field0_0x0).m22 = DAT_0039efc4;
		(this->field0_0x0).m23 = FLOAT_0039efc8;
		(this->field0_0x0).m24 = FLOAT_0039efcc;
		(this->field0_0x0).m31 = FLOAT_0039efa0;
		(this->field0_0x0).m32 = DAT_0039efa4;
		(this->field0_0x0).m33 = DAT_0039efa8;
		(this->field0_0x0).m34 = FLOAT_0039efac;
		(this->field0_0x0).m41 = Vector4_0039ef70.x;
		(this->field0_0x0).m42 = Vector4_0039ef70.y;
		pfVar1 = &(this->field0_0x0).m41;
		(this->field0_0x0).m43 = Vector4_0039ef70.z;
		local_30.w = FLOAT_0038639c;
		(this->field0_0x0).m44 = FLOAT_0038639c;
		this->field2_0x44 = param_2;
		this->field1_0x40 = param_2;
		local_30.x = *pfVar1 + (this->field0_0x0).m31;
		local_30.y = (this->field0_0x0).m42 + (this->field0_0x0).m32;
		local_30.z = (this->field0_0x0).m43 + (this->field0_0x0).m33;
		local_20.x = *pfVar1 + (this->field0_0x0).m21;
		local_20.y = (this->field0_0x0).m42 + (this->field0_0x0).m22;
		local_20.z = (this->field0_0x0).m43 + (this->field0_0x0).m23;
		local_20.w = local_30.w;
		FUN_000e8e80(this,&local_20,&local_30,(Vector4 *)pfVar1);
		FUN_000ed320(this,(Vector4 *)param_1);
		return this;
		}
		
	*/
	return;
}

void Zone::Copy(Zone* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Zone::Copy(Zone *this,Zone *other){
		(this->field0_0x0).m11 = (other->field0_0x0).m11;
		(this->field0_0x0).m12 = (other->field0_0x0).m12;
		(this->field0_0x0).m13 = (other->field0_0x0).m13;
		(this->field0_0x0).m14 = (other->field0_0x0).m14;
		(this->field0_0x0).m21 = (other->field0_0x0).m21;
		(this->field0_0x0).m22 = (other->field0_0x0).m22;
		(this->field0_0x0).m23 = (other->field0_0x0).m23;
		(this->field0_0x0).m24 = (other->field0_0x0).m24;
		(this->field0_0x0).m31 = (other->field0_0x0).m31;
		(this->field0_0x0).m32 = (other->field0_0x0).m32;
		(this->field0_0x0).m33 = (other->field0_0x0).m33;
		(this->field0_0x0).m34 = (other->field0_0x0).m34;
		(this->field0_0x0).m41 = (other->field0_0x0).m41;
		(this->field0_0x0).m42 = (other->field0_0x0).m42;
		(this->field0_0x0).m43 = (other->field0_0x0).m43;
		(this->field0_0x0).m44 = (other->field0_0x0).m44;
		this->field1_0x40 = other->field1_0x40;
		this->field2_0x44 = other->field2_0x44;
		return;
		}
		
	*/
	return;
}

