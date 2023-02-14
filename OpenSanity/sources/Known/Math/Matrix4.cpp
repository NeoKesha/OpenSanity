#include "headers/Known/Math/Matrix4.h"

#include "headers/Known/Math/Vector4.h"
#include "headers/Unknown/Families/Families1X/Family14/UnkFamily14Base.h"

Matrix4::Matrix4()
{
	this->m44 = 1.0;
	this->m33 = 1.0;
	this->m22 = 1.0;
	this->m11 = 1.0;
	this->m21 = 0.0;
	this->m14 = 0.0;
	this->m13 = 0.0;
	this->m12 = 0.0;
	this->m32 = 0.0;
	this->m31 = 0.0;
	this->m24 = 0.0;
	this->m23 = 0.0;
	this->m43 = 0.0;
	this->m42 = 0.0;
	this->m41 = 0.0;
	this->m34 = 0.0;
}

Matrix4::Matrix4(float k)
{
	float fVar1;
	float fVar2;
	float local_8 = 0.0f;
	float local_4 = 0.0f;

	if (k == 0.0) {
		this->m44 = 1.0;
		this->m33 = 1.0;
		this->m22 = 1.0;
		this->m11 = 1.0;
		this->m21 = 0.0;
		this->m14 = 0.0;
		this->m13 = 0.0;
		this->m12 = 0.0;
		this->m32 = 0.0;
		this->m24 = 0.0;
		this->m23 = 0.0;
		this->m43 = 0.0;
		this->m42 = 0.0;
		this->m41 = 0.0;
		this->m34 = 0.0;
		this->m31 = 0.0;
		return;
	}
	fVar1 = 0.0;
	fVar2 = 1.0;
	this->m14 = 0.0;
	this->m13 = 0.0;
	this->m12 = 0.0;
	this->m11 = 0.0;
	this->m24 = 0.0;
	this->m23 = 0.0;
	this->m22 = 0.0;
	this->m21 = 0.0;
	this->m34 = 0.0;
	this->m33 = 0.0;
	this->m32 = 0.0;
	this->m31 = 0.0;
	this->m43 = 0.0;
	this->m42 = 0.0;
	this->m41 = 0.0;
	this->m44 = 1.0;
	FUN_000d2a10(&k, &local_8, &local_4);
	this->m33 = local_8;
	this->m11 = local_8;
	this->m22 = fVar2;
	this->m13 = fVar1 - local_4;
	this->m31 = local_4;
	return;
}

void Matrix4::FUN_000d2a10(float* k, float* x, float* y) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint uVar1;
	uint uVar2;
	uint uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	uVar1 = (int)(*this + 8U) >> 4;
	uVar2 = uVar1 & 0xc00;
	uVar3 = *this + 8U & 0xf;
	uVar1 = uVar1 & 0x3ff;
	if (uVar2 < 0x801) {
		if ((uVar2 == 0x800) || (uVar2 == 0)) {
			uVar3 = uVar3 - 8;
			goto LAB_000d2a5f;
		}
		if (uVar2 != 0x400) goto LAB_000d2a5f;
	}
	else if (uVar2 != 0xc00) goto LAB_000d2a5f;
	uVar1 = 0x400 - uVar1;
	uVar3 = 7 - uVar3;
LAB_000d2a5f:
	fVar5 = (float)(int)TRIGONOMETRY_INDEXES[uVar1 * 2] * 0.0002441406;
	fVar6 = (float)(int)TRIGONOMETRY_INDEXES[uVar1 * 2 + 1] * 0.0002441406;
	if (uVar3 == 0) {
		*x = fVar5;
		*y = fVar6;
	}
	else {
		fVar4 = FLOAT_0039eec0 * 0.0002441406 * 0.0625 * (float)uVar3;
		*x = fVar5 - fVar4 * fVar6;
		*y = fVar4 * fVar5 + fVar6;
	}
	if (uVar2 == 0x400) {
		*x = 0.0 - *x;
	}
	else {
		if (uVar2 == 0x800) {
			*x = 0.0 - *x;
			*y = 0.0 - *y;
			return;
		}
		if (uVar2 == 0xc00) {
			*y = 0.0 - *y;
			return;
		}
	}
	return;
	*/
}


void Matrix4::Multiply4443(Matrix4* mat1, Matrix4* out) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Matrix4::Multiply4443(Matrix4 *this,Matrix4 *mat1,Matrix4 *out){
		float a11;
		float a12;
		float a14;
		float a21;
		float a22;
		float a24;
		float a31;
		float a32;
		float a34;
		float a41;
		float a42;
		float a44;
		float b11;
		float b12;
		float b13;
		float b14;
		float b21;
		float b22;
		float b23;
		float b24;
		float b31;
		float b32;
		float b33;
		float b34;
		float b41;
		float b42;
		float b43;
		float b44;
		a11 = this->m11;
		a12 = this->m12;
		a14 = this->m14;
		b41 = mat1->m41;
		b42 = mat1->m42;
		b43 = mat1->m43;
		b44 = mat1->m44;
		b21 = mat1->m21;
		b22 = mat1->m22;
		b23 = mat1->m23;
		b24 = mat1->m24;
		b31 = mat1->m31;
		b32 = mat1->m32;
		b33 = mat1->m33;
		b34 = mat1->m34;
		b11 = mat1->m11;
		b12 = mat1->m12;
		b13 = mat1->m13;
		b14 = mat1->m14;
		a24 = this->m24;
		a22 = this->m22;
		a21 = this->m21;
		a34 = this->m34;
		a32 = this->m32;
		a31 = this->m31;
		a44 = this->m44;
		a42 = this->m42;
		a41 = this->m41;
		*(undefined (*) [16])out =CONCAT412(a11 * b14 + a12 * b24 + b34 * 0.0 + a14 * b44,CONCAT48(a11 * b13 + a12 * b23 + b33 * 0.0 + a14 * b43,CONCAT44(a11 * b12 + a12 * b22 + b32 * 0.0 + a14 * b42,a11 * b11 + a12 * b21 + b31 * 0.0 + a14 * b41)));
		*(undefined (*) [16])&out->m41 =CONCAT412(a41 * b14 + a42 * b24 + b34 * 0.0 + a44 * b44,CONCAT48(a41 * b13 + a42 * b23 + b33 * 0.0 + a44 * b43,CONCAT44(a41 * b12 + a42 * b22 + b32 * 0.0 + a44 * b42,a41 * b11 + a42 * b21 + b31 * 0.0 + a44 * b41)));
		*(undefined (*) [16])&out->m21 =CONCAT412(a21 * b14 + a22 * b24 + b34 * 0.0 + a24 * b44,CONCAT48(a21 * b13 + a22 * b23 + b33 * 0.0 + a24 * b43,CONCAT44(a21 * b12 + a22 * b22 + b32 * 0.0 + a24 * b42,a21 * b11 + a22 * b21 + b31 * 0.0 + a24 * b41)));
		*(undefined (*) [16])&out->m31 =CONCAT412(a31 * b14 + a32 * b24 + b34 * 0.0 + a34 * b44,CONCAT48(a31 * b13 + a32 * b23 + b33 * 0.0 + a34 * b43,CONCAT44(a31 * b12 + a32 * b22 + b32 * 0.0 + a34 * b42,a31 * b11 + a32 * b21 + b31 * 0.0 + a34 * b41)));
		return;
		}
		
	*/
	return;
}

void Matrix4::FUN_00027120(Matrix4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Matrix4::FUN_00027120(Matrix4 *this,Matrix4 *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		fVar1 = param_1->m12;
		fVar2 = param_1->m13;
		fVar3 = param_1->m14;
		this->m11 = param_1->m11;
		this->m12 = fVar1;
		this->m13 = fVar2;
		this->m14 = fVar3;
		fVar1 = param_1->m22;
		fVar2 = param_1->m23;
		fVar3 = param_1->m24;
		this->m21 = param_1->m21;
		this->m22 = fVar1;
		this->m23 = fVar2;
		this->m24 = fVar3;
		fVar1 = param_1->m32;
		fVar2 = param_1->m33;
		fVar3 = param_1->m34;
		this->m31 = param_1->m31;
		this->m32 = fVar1;
		this->m33 = fVar2;
		this->m34 = fVar3;
		fVar1 = param_1->m42;
		fVar2 = param_1->m43;
		fVar3 = param_1->m44;
		this->m41 = param_1->m41;
		this->m42 = fVar1;
		this->m43 = fVar2;
		this->m44 = fVar3;
		return;
		}
		
	*/
	return;
}

void Matrix4::FUN_000d4000(Vector4* param_1, Vector4* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Matrix4::FUN_000d4000(Matrix4 *this,Vector4 *param_1,Vector4 *param_2){
		float fVar1;
		float fVar2;
		float fVar3;
		fVar1 = param_1->y;
		fVar2 = param_1->z;
		fVar3 = param_1->x;
		param_2->x = this->m31 * fVar2 + this->m21 * fVar1 + this->m11 * fVar3 + this->m41;
		param_2->y = this->m32 * fVar2 + this->m22 * fVar1 + this->m12 * fVar3 + this->m42;
		param_2->z = this->m33 * fVar2 + this->m23 * fVar1 + this->m13 * fVar3 + this->m43;
		param_2->w = param_1->w;
		return;
		}
		
	*/
	return;
}

void Matrix4::FUN_000d4180() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Matrix4::FUN_000d4180(Matrix4 *this){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		fVar4 = this->m21;
		fVar1 = this->m42;
		fVar6 = 0.0 - this->m41;
		fVar2 = this->m43;
		fVar5 = this->m31;
		this->m21 = this->m12;
		this->m31 = this->m13;
		fVar3 = this->m23;
		this->m41 = (this->m11 * fVar6 - this->m21 * fVar1) - this->m31 * fVar2;
		this->m12 = fVar4;
		fVar4 = this->m32;
		this->m32 = fVar3;
		this->m23 = fVar4;
		this->m13 = fVar5;
		this->m42 = (this->m12 * fVar6 - this->m22 * fVar1) - fVar3 * fVar2;
		this->m43 = (fVar6 * this->m13 - this->m23 * fVar1) - this->m33 * fVar2;
		return;
		}
		
	*/
	return;
}

void Matrix4::FUN_000d42b0(Vector4* vec1, Vector4* vec2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Matrix4::FUN_000d42b0(Matrix4 *this,Vector4 *vec1,Vector4 *vec2){
		float x;
		float y;
		float z;
		x = vec1->y;
		y = vec1->z;
		z = vec1->x;
		vec2->x = this->m31 * y + this->m21 * x + this->m11 * z;
		vec2->y = this->m32 * y + this->m22 * x + this->m12 * z;
		vec2->z = this->m33 * y + this->m23 * x + this->m13 * z;
		vec2->w = vec1->w;
		return;
		}
		
	*/
	return;
}

void Matrix4::FUN_000d8470(Matrix4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Matrix4::FUN_000d8470(Matrix4 *this,Matrix4 *param_1){
		Matrix4 local_50;
		Multiply4443(this,param_1,&local_50);
		this->m11 = local_50.m11;
		this->m12 = local_50.m12;
		this->m13 = local_50.m13;
		this->m14 = local_50.m14;
		this->m21 = local_50.m21;
		this->m22 = local_50.m22;
		this->m23 = local_50.m23;
		this->m24 = local_50.m24;
		this->m31 = local_50.m31;
		this->m32 = local_50.m32;
		this->m33 = local_50.m33;
		this->m34 = local_50.m34;
		this->m41 = local_50.m41;
		this->m42 = local_50.m42;
		this->m43 = local_50.m43;
		this->m44 = local_50.m44;
		return;
		}
		
	*/
	return;
}

void Matrix4::FUN_000d9f80(Vector4* vec) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Matrix4::FUN_000d9f80(Matrix4 *this,Vector4 *vec){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		fVar5 = FLOAT_0038639c;
		fVar1 = vec->x;
		fVar2 = vec->y;
		fVar3 = vec->z;
		fVar6 = fVar3 + fVar3;
		fVar4 = vec->w;
		fVar7 = fVar1 * (fVar1 + fVar1);
		fVar8 = fVar2 + fVar2;
		fVar9 = fVar4 * (fVar1 + fVar1);
		this->m11 = FLOAT_0038639c - (fVar3 * fVar6 + fVar2 * fVar8);
		this->m12 = fVar4 * fVar6 + fVar8 * fVar1;
		this->m13 = fVar6 * fVar1 - fVar4 * fVar8;
		this->m14 = 0.0;
		this->m21 = fVar8 * fVar1 - fVar4 * fVar6;
		this->m22 = fVar5 - (fVar3 * fVar6 + fVar7);
		this->m23 = fVar9 + fVar6 * fVar2;
		this->m24 = 0.0;
		this->m31 = fVar4 * fVar8 + fVar6 * fVar1;
		this->m32 = fVar6 * fVar2 - fVar9;
		this->m33 = fVar5 - (fVar2 * fVar8 + fVar7);
		this->m34 = 0.0;
		return;
		}
		
	*/
	return;
}

void Matrix4::FUN_00136680(UnkFamily14Base* param_1, Matrix4* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Matrix4::FUN_00136680(Matrix4 *this,UnkFamily14Base *param_1,Matrix4 *param_2){
		float fVar1;
		float fVar2;
		float fVar3;
		fVar1 = param_2->m12;
		fVar2 = param_2->m13;
		fVar3 = param_2->m14;
		this->m11 = param_2->m11;
		this->m12 = fVar1;
		this->m13 = fVar2;
		this->m14 = fVar3;
		fVar1 = param_2->m22;
		fVar2 = param_2->m23;
		fVar3 = param_2->m24;
		this->m21 = param_2->m21;
		this->m22 = fVar1;
		this->m23 = fVar2;
		this->m24 = fVar3;
		fVar1 = param_2->m32;
		fVar2 = param_2->m33;
		fVar3 = param_2->m34;
		this->m31 = param_2->m31;
		this->m32 = fVar1;
		this->m33 = fVar2;
		this->m34 = fVar3;
		fVar1 = param_2->m42;
		fVar2 = param_2->m43;
		fVar3 = param_2->m44;
		this->m41 = param_2->m41;
		this->m42 = fVar1;
		this->m43 = fVar2;
		this->m44 = fVar3;
		Multiply4443(this + 2,&param_1->field146_0x104->matrix4,this + 1);
		FUN_000e3460(this + 3,&this[2].m11);
		return;
		}
		
	*/
	return;
}

void Matrix4::FUN_001367f0(UnkFamily14Base* param_1, Matrix4* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Matrix4::FUN_001367f0(Matrix4 *this,UnkFamily14Base *param_1,Matrix4 *param_2){
		float fVar1;
		float fVar2;
		float fVar3;
		fVar1 = param_2->m12;
		fVar2 = param_2->m13;
		fVar3 = param_2->m14;
		this->m11 = param_2->m11;
		this->m12 = fVar1;
		this->m13 = fVar2;
		this->m14 = fVar3;
		fVar1 = param_2->m22;
		fVar2 = param_2->m23;
		fVar3 = param_2->m24;
		this->m21 = param_2->m21;
		this->m22 = fVar1;
		this->m23 = fVar2;
		this->m24 = fVar3;
		fVar1 = param_2->m32;
		fVar2 = param_2->m33;
		fVar3 = param_2->m34;
		this->m31 = param_2->m31;
		this->m32 = fVar1;
		this->m33 = fVar2;
		this->m34 = fVar3;
		fVar1 = param_2->m42;
		fVar2 = param_2->m43;
		fVar3 = param_2->m44;
		this->m41 = param_2->m41;
		this->m42 = fVar1;
		this->m43 = fVar2;
		this->m44 = fVar3;
		Multiply4443(this + 2,&param_1->field146_0x104->matrix4,this + 1);
		FUN_000e3460(this + 3,&this[2].m11);
		return;
		}
		
	*/
	return;
}

void Matrix4::FUN_00149f10(float* param_2, int param_3, Vector4* param_4, Vector4* param_5) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __cdecl Matrix4::FUN_00149f10(Matrix4 *this,float *param_2,int param_3,Vector4 *param_4,Vector4 *param_5){
		float fVar1;
		int iVar2;
		float fVar3;
		float fVar4;
		undefined8 uVar5;
		float fVar7;
		float fVar8;
		Vector4 VVar6;
		Vector4 VVar9;
		fVar8 = *param_2;
		fVar1 = param_2[1];
		uVar5 = CONCAT44(fVar8 * this->m12 + fVar1 * this->m22 + param_2[2] * this->m32 + this->m42,fVar8 * this->m11 + fVar1 * this->m21 + param_2[2] * this->m31 + this->m41);
		fVar7 = fVar8 * this->m13 + fVar1 * this->m23 + this->m33 * 0.0 + this->m43;
		fVar8 = fVar8 * this->m14 + fVar1 * this->m24 + this->m34 * 0.0 + this->m44;
		VVar6 = (Vector4)CONCAT412(fVar8,CONCAT48(fVar7,uVar5));
		VVar9 = (Vector4)CONCAT412(fVar8,CONCAT48(fVar7,uVar5));
		if (1 < param_3) {
		iVar2 = param_3 + -1;
		do {
		fVar8 = param_2[4];
		fVar1 = param_2[5];
		fVar7 = fVar8 * this->m11 + fVar1 * this->m21 + this->m31 * 0.0 + this->m41;
		fVar3 = fVar8 * this->m12 + fVar1 * this->m22 + this->m32 * 0.0 + this->m42;
		fVar4 = fVar8 * this->m13 + fVar1 * this->m23 + this->m33 * 0.0 + this->m43;
		fVar8 = fVar8 * this->m14 + fVar1 * this->m24 + this->m34 * 0.0 + this->m44;
		iVar2 = iVar2 + -1;
		VVar6 = (Vector4)minps((undefined  [16])VVar6,CONCAT412(fVar8,CONCAT48(fVar4,CONCAT44(fVar3,fVar7))));
		VVar9 = (Vector4)maxps((undefined  [16])VVar9,CONCAT412(fVar8,CONCAT48(fVar4,CONCAT44(fVar3,fVar7))));
		param_2 = param_2 + 4;
		}
		 while (iVar2 != 0);
		}
		*param_4 = VVar6;
		*param_5 = VVar9;
		return;
		}
		
	*/
	return;
}

void Matrix4::Set(Matrix4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Matrix4::Set(Matrix4 *this,Matrix4 *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		fVar1 = param_1->m12;
		fVar2 = param_1->m13;
		fVar3 = param_1->m14;
		this->m11 = param_1->m11;
		this->m12 = fVar1;
		this->m13 = fVar2;
		this->m14 = fVar3;
		fVar1 = param_1->m22;
		fVar2 = param_1->m23;
		fVar3 = param_1->m24;
		this->m21 = param_1->m21;
		this->m22 = fVar1;
		this->m23 = fVar2;
		this->m24 = fVar3;
		fVar1 = param_1->m32;
		fVar2 = param_1->m33;
		fVar3 = param_1->m34;
		this->m31 = param_1->m31;
		this->m32 = fVar1;
		this->m33 = fVar2;
		this->m34 = fVar3;
		fVar1 = param_1->m42;
		fVar2 = param_1->m43;
		fVar3 = param_1->m44;
		this->m41 = param_1->m41;
		this->m42 = fVar1;
		this->m43 = fVar2;
		this->m44 = fVar3;
		return;
		}
		
	*/
	return;
}

void Matrix4::Set_13(Matrix4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Matrix4::Set(Matrix4 *this,Matrix4 *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		fVar1 = param_1->m12;
		fVar2 = param_1->m13;
		fVar3 = param_1->m14;
		this->m11 = param_1->m11;
		this->m12 = fVar1;
		this->m13 = fVar2;
		this->m14 = fVar3;
		fVar1 = param_1->m22;
		fVar2 = param_1->m23;
		fVar3 = param_1->m24;
		this->m21 = param_1->m21;
		this->m22 = fVar1;
		this->m23 = fVar2;
		this->m24 = fVar3;
		fVar1 = param_1->m32;
		fVar2 = param_1->m33;
		fVar3 = param_1->m34;
		this->m31 = param_1->m31;
		this->m32 = fVar1;
		this->m33 = fVar2;
		this->m34 = fVar3;
		fVar1 = param_1->m42;
		fVar2 = param_1->m43;
		fVar3 = param_1->m44;
		this->m41 = param_1->m41;
		this->m42 = fVar1;
		this->m43 = fVar2;
		this->m44 = fVar3;
		return;
		}
		
	*/
	return;
}

