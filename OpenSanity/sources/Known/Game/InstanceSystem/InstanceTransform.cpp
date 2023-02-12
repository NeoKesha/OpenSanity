#include "headers/Known/Game/InstanceSystem/InstanceTransform.h"

#include "headers/Known/Math/Rotation.h"
#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Math/Matrix4.h"
bool InstanceTransform::SetupRotation(Rotation* rotation) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceTransform::SetupRotation(InstanceTransform *this,Rotation *rotation){
		Vector4 rot;
		if ((*(byte *)&this->field3_0x60 & 8) != 0) {
		Vector4::FUN_000db0d0(&this->rotation,&this->matrix);
		this->field3_0x60 = (float)((uint)this->field3_0x60 & 0xfffffff5);
		}
		Vector4::FromRotation(&rot,rotation->x,rotation->y,rotation->z);
		if ((((rot.x == (this->rotation).x) && (rot.y == (this->rotation).y)) &&(rot.z == (this->rotation).z)) && (rot.w == (this->rotation).w)) {
		return false;
		}
		this->field3_0x60 = (float)((uint)this->field3_0x60 & 0xfffffff7 | 2);
		(this->rotation).x = rot.x;
		(this->rotation).y = rot.y;
		(this->rotation).z = rot.z;
		(this->rotation).w = rot.w;
		return true;
		}
		
	*/
	return false;
}

bool InstanceTransform::FUN_000269f0(Vector4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceTransform::FUN_000269f0(InstanceTransform *this,Vector4 *param_1){
		if ((*(byte *)&this->field3_0x60 & 8) != 0) {
		Vector4::FUN_000db0d0(&this->rotation,&this->matrix);
		this->field3_0x60 = (float)((uint)this->field3_0x60 & 0xfffffff5);
		}
		if ((((param_1->x == (this->rotation).x) && (param_1->y == (this->rotation).y)) &&(param_1->z == (this->rotation).z)) && (param_1->w == (this->rotation).w)) {
		return false;
		}
		this->field3_0x60 = (float)((uint)this->field3_0x60 & 0xfffffff7 | 2);
		(this->rotation).x = param_1->x;
		(this->rotation).y = param_1->y;
		(this->rotation).z = param_1->z;
		(this->rotation).w = param_1->w;
		return true;
		}
		
	*/
	return false;
}

bool InstanceTransform::SetupPosition(Vector4* vec) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceTransform::SetupPosition(InstanceTransform *this,Vector4 *vec){
		float fVar1;
		float fVar2;
		float fVar3;
		if ((*(byte *)&this->field3_0x60 & 4) != 0) {
		fVar1 = (this->matrix).m44;
		fVar2 = (this->matrix).m43;
		fVar3 = (this->matrix).m42;
		(this->position).x = (this->matrix).m41;
		(this->position).y = fVar3;
		(this->position).z = fVar2;
		(this->position).w = fVar1;
		this->field3_0x60 = (float)((uint)this->field3_0x60 & 0xfffffffa);
		}
		if (((vec->x == (this->position).x) && (vec->y == (this->position).y)) &&(vec->z == (this->position).z)) {
		return false;
		}
		this->field3_0x60 = (float)((uint)this->field3_0x60 & 0xfffffffb | 1);
		(this->position).x = vec->x;
		(this->position).y = vec->y;
		(this->position).z = vec->z;
		(this->position).w = vec->w;
		return true;
		}
		
	*/
	return false;
}

void InstanceTransform::FUN_000266b0(Vector4* out) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceTransform::FUN_000266b0(InstanceTransform *this,Vector4 *out){
		float fVar1;
		float fVar2;
		float fVar3;
		if ((*(byte *)&this->field3_0x60 & 4) != 0) {
		fVar1 = (this->matrix).m44;
		fVar2 = (this->matrix).m43;
		fVar3 = (this->matrix).m42;
		(this->position).x = (this->matrix).m41;
		(this->position).y = fVar3;
		(this->position).z = fVar2;
		(this->position).w = fVar1;
		this->field3_0x60 = (float)((uint)this->field3_0x60 & 0xfffffffa);
		}
		out->x = (this->position).x;
		out->y = (this->position).y;
		out->z = (this->position).z;
		out->w = (this->position).w;
		return;
		}
		
	*/
	return;
}

uint InstanceTransform::FUN_00026880(Vector4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall InstanceTransform::FUN_00026880(InstanceTransform *this,Vector4 *param_1){
		float fVar1;
		uint3 uVar2;
		float fVar3;
		float fVar4;
		fVar4 = param_1->x;
		if (fVar4 < 0.0) {
		fVar4 = 0.0 - fVar4;
		}
		uVar2 = (uint3)((uint)param_1 >> 8);
		if (fVar4 <= EPSILON) {
		fVar4 = param_1->y;
		if (fVar4 < 0.0) {
		fVar4 = 0.0 - fVar4;
		}
		if (fVar4 <= EPSILON) {
		fVar4 = param_1->z;
		fVar3 = 0.0 - fVar4;
		if (0.0 <= fVar4) {
		fVar3 = fVar4;
		}
		if (fVar3 <= EPSILON) {
		return (uint)uVar2 << 8;
		}
		}
		}
		if ((*(byte *)&this->field3_0x60 & 4) != 0) {
		fVar4 = (this->matrix).m44;
		fVar3 = (this->matrix).m43;
		fVar1 = (this->matrix).m42;
		(this->position).x = (this->matrix).m41;
		(this->position).y = fVar1;
		(this->position).z = fVar3;
		(this->position).w = fVar4;
		this->field3_0x60 = (float)((uint)this->field3_0x60 & 0xfffffffa);
		}
		this->field3_0x60 = (float)((uint)this->field3_0x60 & 0xfffffffb | 1);
		(this->position).x = (this->position).x + param_1->x;
		(this->position).y = param_1->y + (this->position).y;
		(this->position).z = param_1->z + (this->position).z;
		return CONCAT31(uVar2,1);
		}
		
	*/
	return 0;
}

void InstanceTransform::FUN_00026600(Vector4* out) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceTransform::FUN_00026600(InstanceTransform *this,Vector4 *out){
		FillMatrix(this);
		out->x = (this->matrix).m31;
		out->y = (this->matrix).m32;
		out->z = (this->matrix).m33;
		out->w = (this->matrix).m34;
		return;
		}
		
	*/
	return;
}

bool InstanceTransform::FUN_00026aa0(InstanceTransform* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceTransform::FUN_00026aa0(InstanceTransform *this,InstanceTransform *other){
		Vector4 vec;
		if ((*(byte *)&this->field3_0x60 & 8) != 0) {
		Vector4::FUN_000db0d0(&this->rotation,&this->matrix);
		this->field3_0x60 = (float)((uint)this->field3_0x60 & 0xfffffff5);
		}
		Vector4::FUN_000db0d0(&vec,&other->matrix);
		if ((((vec.x == (this->rotation).x) && (vec.y == (this->rotation).y)) &&(vec.z == (this->rotation).z)) && (vec.w == (this->rotation).w)) {
		return false;
		}
		this->field3_0x60 = (float)((uint)this->field3_0x60 & 0xfffffff7 | 2);
		(this->rotation).x = vec.x;
		(this->rotation).y = vec.y;
		(this->rotation).z = vec.z;
		(this->rotation).w = vec.w;
		return true;
		}
		
	*/
	return false;
}

bool InstanceTransform::FUN_00064660(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceTransform::FUN_00064660(InstanceTransform *this,int param_1){
		float local_20;
		float local_1c;
		float local_18;
		float local_14;
		if (param_1 == 0) {
		return false;
		}
		if ((*(byte *)&this->field3_0x60 & 8) != 0) {
		Vector4::FUN_000db0d0(&this->rotation,&this->matrix);
		this->field3_0x60 = (float)((uint)this->field3_0x60 & 0xfffffff5);
		}
		this->field3_0x60 = (float)((uint)this->field3_0x60 & 0xfffffff7 | 2);
		FUN_000e9500(&local_20,param_1);
		FUN_000dae60(&local_20,&local_20,&(this->rotation).x);
		(this->rotation).x = local_20;
		(this->rotation).y = local_1c;
		(this->rotation).z = local_18;
		(this->rotation).w = local_14;
		return true;
		}
		
	*/
	return false;
}

bool InstanceTransform::FUN_000267c0(InstanceTransform* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceTransform::FUN_000267c0(InstanceTransform *this,InstanceTransform *other){
		float fVar1;
		float fVar2;
		float fVar3;
		if ((*(byte *)&this->field3_0x60 & 4) != 0) {
		fVar1 = (this->matrix).m44;
		fVar2 = (this->matrix).m43;
		fVar3 = (this->matrix).m42;
		(this->position).x = (this->matrix).m41;
		(this->position).y = fVar3;
		(this->position).z = fVar2;
		(this->position).w = fVar1;
		this->field3_0x60 = (float)((uint)this->field3_0x60 & 0xfffffffa);
		}
		if ((((other->matrix).m41 == (this->position).x) && ((other->matrix).m42 == (this->position).y))&& ((other->matrix).m43 == (this->position).z)) {
		return false;
		}
		this->field3_0x60 = (float)((uint)this->field3_0x60 & 0xfffffffb | 1);
		fVar1 = (other->matrix).m44;
		fVar2 = (other->matrix).m43;
		fVar3 = (other->matrix).m42;
		(this->position).x = (other->matrix).m41;
		(this->position).y = fVar3;
		(this->position).z = fVar2;
		(this->position).w = fVar1;
		return true;
		}
		
	*/
	return false;
}

void InstanceTransform::FUN_000269a0(Vector4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceTransform::FUN_000269a0(InstanceTransform *this,Vector4 *param_1){
		if ((*(byte *)&this->field3_0x60 & 8) != 0) {
		Vector4::FUN_000db0d0(&this->rotation,&this->matrix);
		this->field3_0x60 = (float)((uint)this->field3_0x60 & 0xfffffff5);
		}
		param_1->x = (this->rotation).x;
		param_1->y = (this->rotation).y;
		param_1->z = (this->rotation).z;
		param_1->w = (this->rotation).w;
		return;
		}
		
	*/
	return;
}

void InstanceTransform::FUN_000a6690(void* param_2, float* param_3, float* param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceTransform::FUN_000a6690(InstanceTransform *this,void *param_2,float *param_3,float *param_4){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		Vector4 local_40;
		float local_30;
		float local_2c;
		float local_28;
		undefined4 local_20;
		undefined4 local_1c;
		undefined4 local_18;
		local_20 = *(undefined4 *)((int)param_2 + 0x10);
		local_1c = *(undefined4 *)((int)param_2 + 0x14);
		local_18 = *(undefined4 *)((int)param_2 + 0x18);
		local_30 = (this->matrix).m21;
		local_2c = (this->matrix).m22;
		local_28 = (this->matrix).m23;
		fVar1 = SQRT(*param_3 * *param_3 + param_3[1] * param_3[1] + param_3[2] * param_3[2]);
		Matrix4::FUN_000d42b0((Matrix4 *)param_2,(Vector4 *)param_3,&local_40);
		fVar2 = FLOAT_0038639c / fVar1;
		fVar4 = local_40.z * fVar2 * local_2c - local_40.y * fVar2 * local_28;
		fVar3 = local_28 * local_40.x * fVar2 - local_40.z * fVar2 * local_30;
		fVar2 = local_40.y * fVar2 * local_30 - local_2c * local_40.x * fVar2;
		param_4[3] = FLOAT_0038639c;
		*param_4 = (fVar3 * local_28 - fVar2 * local_2c) * fVar1;
		param_4[1] = (fVar2 * local_30 - local_28 * fVar4) * fVar1;
		param_4[2] = (local_2c * fVar4 - fVar3 * local_30) * fVar1;
		return;
		}
		
	*/
	return;
}

void InstanceTransform::FUN_000265d0(Vector4* out) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceTransform::FUN_000265d0(InstanceTransform *this,Vector4 *out){
		FillMatrix(this);
		out->x = (this->matrix).m21;
		out->y = (this->matrix).m22;
		out->z = (this->matrix).m23;
		out->w = (this->matrix).m24;
		return;
		}
		
	*/
	return;
}

InstanceTransform* InstanceTransform::Copy(InstanceTransform* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceTransform * __thiscall InstanceTransform::Copy(InstanceTransform *this,InstanceTransform *other){
		int i;
		InstanceTransform *pIVar1;
		pIVar1 = this;
		 Instance Transform is 28 floats for (i = 0x1c;
		 i != 0;
		 i = i + -1) {
		(pIVar1->matrix).m11 = (other->matrix).m11;
		other = (InstanceTransform *)&(other->matrix).m12;
		pIVar1 = (InstanceTransform *)&(pIVar1->matrix).m12;
		}
		return this;
		}
		
	*/
	return null;
}

void InstanceTransform::FUN_000d3ed0(Vector4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceTransform::FUN_000d3ed0(InstanceTransform *this,Vector4 *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		fVar1 = param_1->y;
		fVar2 = param_1->z;
		fVar3 = param_1->x;
		param_1->x = (this->matrix).m31 * fVar2 + (this->matrix).m21 * fVar1 + (this->matrix).m11 * fVar3;
		param_1->y = (this->matrix).m32 * fVar2 + (this->matrix).m22 * fVar1 + (this->matrix).m12 * fVar3;
		param_1->z = (this->matrix).m33 * fVar2 + (this->matrix).m23 * fVar1 + (this->matrix).m13 * fVar3;
		return;
		}
		
	*/
	return;
}

void InstanceTransform::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceTransform * __fastcall InstanceTransform::Construct(InstanceTransform *this){
		float fVar1;
		float fVar2;
		fVar2 = FLOAT_0038639c;
		fVar1 = this->field3_0x60;
		(this->matrix).m44 = FLOAT_0038639c;
		(this->matrix).m33 = fVar2;
		(this->matrix).m22 = fVar2;
		(this->matrix).m11 = fVar2;
		(this->matrix).m21 = 0.0;
		(this->matrix).m14 = 0.0;
		(this->matrix).m13 = 0.0;
		(this->matrix).m12 = 0.0;
		(this->matrix).m32 = 0.0;
		(this->matrix).m31 = 0.0;
		(this->matrix).m24 = 0.0;
		(this->matrix).m23 = 0.0;
		(this->matrix).m43 = 0.0;
		(this->matrix).m42 = 0.0;
		(this->matrix).m41 = 0.0;
		(this->matrix).m34 = 0.0;
		this->field3_0x60 = (float)((uint)fVar1 & 0xfffffff0);
		(this->position).x = Vector4_0039ef70.x;
		(this->position).y = Vector4_0039ef70.y;
		(this->position).z = Vector4_0039ef70.z;
		(this->position).w = fVar2;
		(this->rotation).z = 0.0;
		(this->rotation).y = 0.0;
		(this->rotation).x = 0.0;
		(this->rotation).w = fVar2;
		return this;
		}
		
	*/
	return;
}

bool InstanceTransform::FUN_000e16f0(Matrix4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceTransform::FUN_000e16f0(InstanceTransform *this,Matrix4 *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		fVar1 = param_1->m12;
		fVar2 = param_1->m13;
		fVar3 = param_1->m14;
		(this->matrix).m11 = param_1->m11;
		(this->matrix).m12 = fVar1;
		(this->matrix).m13 = fVar2;
		(this->matrix).m14 = fVar3;
		fVar1 = param_1->m22;
		fVar2 = param_1->m23;
		fVar3 = param_1->m24;
		(this->matrix).m21 = param_1->m21;
		(this->matrix).m22 = fVar1;
		(this->matrix).m23 = fVar2;
		(this->matrix).m24 = fVar3;
		fVar1 = param_1->m32;
		fVar2 = param_1->m33;
		fVar3 = param_1->m34;
		(this->matrix).m31 = param_1->m31;
		(this->matrix).m32 = fVar1;
		(this->matrix).m33 = fVar2;
		(this->matrix).m34 = fVar3;
		fVar1 = param_1->m41;
		fVar2 = param_1->m42;
		fVar3 = param_1->m43;
		fVar4 = param_1->m44;
		this->field3_0x60 = (float)((uint)this->field3_0x60 & 0xfffffffc | 0xc);
		(this->matrix).m41 = fVar1;
		(this->matrix).m42 = fVar2;
		(this->matrix).m43 = fVar3;
		(this->matrix).m44 = fVar4;
		return true;
		}
		
	*/
	return false;
}

void InstanceTransform::FillMatrix(InstanceTransform* transform) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceTransform::FillMatrix(InstanceTransform *transform){
		Vector4 *vec;
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceTransform *extraout_ECX;
		float fVar4;
		if ((*(byte *)&transform->field3_0x60 & 2) != 0) {
		fVar4 = (transform->rotation).x;
		fVar1 = (transform->rotation).y;
		fVar2 = (transform->rotation).z;
		fVar3 = (transform->rotation).w;
		vec = &transform->rotation;
		fVar4 = FLOAT_0038639c / SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
		vec->x = vec->x * fVar4;
		(transform->rotation).y = fVar4 * (transform->rotation).y;
		(transform->rotation).z = (transform->rotation).z * fVar4;
		(transform->rotation).w = (transform->rotation).w * fVar4;
		Matrix4::FUN_000d9f80(&transform->matrix,vec);
		extraout_ECX->field3_0x60 = (float)((uint)extraout_ECX->field3_0x60 & 0xfffffffd);
		transform = extraout_ECX;
		}
		if ((*(byte *)&transform->field3_0x60 & 1) != 0) {
		(transform->matrix).m41 = (transform->position).x;
		(transform->matrix).m42 = (transform->position).y;
		(transform->matrix).m43 = (transform->position).z;
		(transform->matrix).m44 = (transform->position).w;
		transform->field3_0x60 = (float)((uint)transform->field3_0x60 & 0xfffffffe);
		}
		return;
		}
		
	*/
	return;
}

bool InstanceTransform::Init() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall InstanceTransform::Init(InstanceTransform *this){
		float fVar1;
		float fVar2;
		float fVar3;
		if ((*(byte *)&this->field3_0x60 & 4) != 0) {
		fVar3 = (this->matrix).m44;
		fVar1 = (this->matrix).m43;
		fVar2 = (this->matrix).m42;
		(this->position).x = (this->matrix).m41;
		(this->position).y = fVar2;
		(this->position).z = fVar1;
		(this->position).w = fVar3;
		this->field3_0x60 = (float)((uint)this->field3_0x60 & 0xfffffffa);
		}
		fVar1 = FLOAT_0038639c;
		fVar3 = (this->position).x;
		if (fVar3 < 0.0) {
		fVar3 = 0.0 - fVar3;
		}
		if (fVar3 <= ENV_FLOAT_157) {
		fVar3 = (this->position).y;
		if (fVar3 < 0.0) {
		fVar3 = 0.0 - fVar3;
		}
		if (fVar3 <= ENV_FLOAT_157) {
		fVar3 = (this->position).z;
		if (fVar3 < 0.0) {
		fVar3 = 0.0 - fVar3;
		}
		if (fVar3 <= ENV_FLOAT_157) {
		fVar3 = (this->rotation).x;
		if (fVar3 < 0.0) {
		fVar3 = 0.0 - fVar3;
		}
		if (fVar3 <= ENV_FLOAT_157) {
		fVar3 = (this->rotation).y;
		if (fVar3 < 0.0) {
		fVar3 = 0.0 - fVar3;
		}
		if (fVar3 <= ENV_FLOAT_157) {
		fVar3 = (this->rotation).z;
		if (fVar3 < 0.0) {
		fVar3 = 0.0 - fVar3;
		}
		if (fVar3 <= ENV_FLOAT_157) {
		fVar3 = (this->rotation).w - FLOAT_0038639c;
		if (fVar3 < 0.0) {
		fVar3 = 0.0 - fVar3;
		}
		if (ENV_FLOAT_157 < fVar3) {
		fVar3 = (this->rotation).w + FLOAT_0038639c;
		if (fVar3 < 0.0) {
		fVar3 = 0.0 - fVar3;
		}
		if (ENV_FLOAT_157 < fVar3) goto LAB_000fd280;
		}
		return false;
		}
		}
		}
		}
		}
		}
		LAB_000fd280:this->field3_0x60 = (float)((uint)this->field3_0x60 & 0xfffffff3 | 3);
		(this->position).x = Vector4_0039ef70.x;
		(this->position).y = Vector4_0039ef70.y;
		(this->position).z = Vector4_0039ef70.z;
		(this->position).w = fVar1;
		(this->rotation).z = 0.0;
		(this->rotation).y = 0.0;
		(this->rotation).x = 0.0;
		(this->rotation).w = fVar1;
		return true;
		}
		
	*/
	return false;
}

InstanceTransform* InstanceTransform::FillMatrix_18() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceTransform * __fastcall InstanceTransform::FillMatrix(InstanceTransform *this){
		FillMatrix(this);
		return this;
		}
		
	*/
	return null;
}

void InstanceTransform::FUN_00026640(Vector4* out) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceTransform::FUN_00026640(InstanceTransform *this,Vector4 *out){
		FillMatrix(this);
		out->x = (this->matrix).m41;
		out->y = (this->matrix).m42;
		out->z = (this->matrix).m43;
		out->w = (this->matrix).m44;
		return;
		}
		
	*/
	return;
}

void InstanceTransform::FUN_00026670() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceTransform::FUN_00026670(InstanceTransform *this){
		float fVar1;
		float fVar2;
		float fVar3;
		if ((*(byte *)&this->field3_0x60 & 4) != 0) {
		fVar1 = (this->matrix).m44;
		fVar2 = (this->matrix).m43;
		fVar3 = (this->matrix).m42;
		(this->position).x = (this->matrix).m41;
		(this->position).y = fVar3;
		(this->position).z = fVar2;
		(this->position).w = fVar1;
		this->field3_0x60 = (float)((uint)this->field3_0x60 & 0xfffffffa);
		}
		return;
		}
		
	*/
	return;
}

