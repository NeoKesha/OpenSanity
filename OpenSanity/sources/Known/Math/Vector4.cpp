#include "headers/Known/Math/Vector4.h"

#include "headers/Known/Math/Matrix4.h"
Vector4::Vector4()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
	w = 0.0f;
}
Vector4::Vector4(float _x, float _y, float _z, float _w)
{
	x = _x;
	y = _y;
	z = _z;
	w = _w;
}
void Vector4::Scale(Vector4* a, float k) {
	/*
	void __cdecl Vector4::Scale(Vector4 *this,Vector4 *a,float k){
		this->x = a->x * k;
		this->y = a->y * k;
		this->z = a->z * k;
		return;
		}
		
	*/
	return;
}

float Vector4::FUN_00021500(Vector4* a, Vector4* b) {
	/*
	float __cdecl Vector4::FUN_00021500(Vector4 *this,Vector4 *a,Vector4 *b){
		float dx;
		float dy;
		float dz;
		if (b != (Vector4 *)0x0) {
		b->x = this->x - a->x;
		b->y = this->y - a->y;
		dx = this->z - a->z;
		b->z = dx;
		return SQRT(b->x * b->x + b->y * b->y + dx * dx);
		}
		dz = this->z - a->z;
		dy = this->y - a->y;
		dx = this->x - a->x;
		return SQRT(dz * dz + dy * dy + dx * dx);
		}
		
	*/
	return 0.0f;
}

void Vector4::FUN_00020b50(Vector4* vec, Matrix4* mat) {
	/*
	void __cdecl Vector4::FUN_00020b50(Vector4 *this,Vector4 *vec,Matrix4 *mat){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		fVar1 = mat->m32;
		fVar2 = vec->z;
		fVar3 = mat->m12;
		fVar4 = vec->x;
		fVar5 = mat->m13;
		fVar6 = vec->x;
		fVar7 = mat->m22;
		fVar8 = vec->y;
		fVar9 = mat->m33;
		fVar10 = vec->z;
		fVar11 = mat->m42;
		fVar12 = mat->m23;
		fVar13 = vec->y;
		fVar14 = mat->m43;
		this->x = mat->m31 * vec->z + mat->m21 * vec->y + vec->x * mat->m11 + mat->m41;
		this->y = fVar1 * fVar2 + fVar3 * fVar4 + fVar7 * fVar8 + fVar11;
		this->z = fVar9 * fVar10 + fVar5 * fVar6 + fVar12 * fVar13 + fVar14;
		return;
		}
		
	*/
	return;
}

float Vector4::GetLength() {
	/*
	float __fastcall Vector4::GetLength(Vector4 *this){
		return SQRT(this->x * this->x + this->y * this->y + this->z * this->z);
		}
		
	*/
	return 0.0f;
}

float Vector4::Distance(Vector4* param_1, Vector4* param_2) {
	/*
	float Vector4::Distance(Vector4 *param_1,Vector4 *param_2){
		float fVar1;
		float fVar2;
		float fVar3;
		fVar1 = param_2->x - param_1->x;
		fVar3 = param_2->y - param_1->y;
		fVar2 = param_2->z - param_1->z;
		return fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
		}
		
	*/
	return 0.0f;
}

float Vector4::Length() {
	/*
	float __fastcall Vector4::Length(Vector4 *this){
		return SQRT(this->x * this->x + this->z * this->z);
		}
		
	*/
	return 0.0f;
}

void Vector4::Subtract(Vector4* a, Vector4* b) {
	/*
	void __cdecl Vector4::Subtract(Vector4 *this,Vector4 *a,Vector4 *b){
		this->x = a->x - b->x;
		this->y = a->y - b->y;
		this->z = a->z - b->z;
		return;
		}
		
	*/
	return;
}

float Vector4::GetLength_7() {
	/*
	float Vector4::GetLength(Vector4 *this){
		return this->z * this->z + this->y * this->y + this->x * this->x;
		}
		
	*/
	return 0.0f;
}

void Vector4::FUN_00020a80(Vector4* vec, Matrix4* mat) {
	/*
	void __cdecl Vector4::FUN_00020a80(Vector4 *this,Vector4 *vec,Matrix4 *mat){
		float x1;
		float x2;
		float x3;
		float x4;
		float y1;
		float y2;
		float y3;
		float y4;
		float z1;
		float z2;
		float z3;
		float z4;
		z3 = mat->m32;
		z1 = vec->z;
		x3 = mat->m12;
		x1 = vec->x;
		x4 = mat->m13;
		x2 = vec->x;
		y3 = mat->m22;
		y1 = vec->y;
		z4 = mat->m33;
		z2 = vec->z;
		y4 = mat->m23;
		y2 = vec->y;
		this->x = mat->m31 * vec->z + mat->m21 * vec->y + vec->x * mat->m11;
		this->y = z3 * z1 + x3 * x1 + y3 * y1;
		this->z = z4 * z2 + x4 * x2 + y4 * y2;
		return;
		}
		
	*/
	return;
}

void Vector4::FUN_000db0d0(Matrix4* matrix) {
	/*
	void __thiscall Vector4::FUN_000db0d0(Vector4 *this,Matrix4 *matrix){
		uint uVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		Vector4 vec;
		fVar2 = matrix->m22 + matrix->m11 + matrix->m33;
		vec.x = 1.401298e-45;
		vec.y = 2.802597e-45;
		vec.z = 0.0;
		if (0.0 < fVar2) {
		fVar2 = SQRT(fVar2 + FLOAT_0038639c);
		fVar3 = FLOAT_00386ab4 / fVar2;
		this->w = fVar2 * FLOAT_00386ab4;
		this->x = (matrix->m23 - matrix->m32) * fVar3;
		this->y = (matrix->m31 - matrix->m13) * fVar3;
		this->z = (matrix->m12 - matrix->m21) * fVar3;
		return;
		}
		uVar1 = (uint)(matrix->m11 <= matrix->m22 && matrix->m22 != matrix->m11);
		if ((&matrix->m11)[uVar1 * 5] <= matrix->m33 && matrix->m33 != (&matrix->m11)[uVar1 * 5]) {
		uVar1 = 2;
		}
		fVar2 = (&vec.x)[uVar1];
		fVar3 = (&vec.x)[(int)fVar2];
		fVar4 = SQRT(((&matrix->m11)[uVar1 * 5] -((&matrix->m11)[(int)fVar3 * 5] + (&matrix->m11)[(int)fVar2 * 5])) + FLOAT_0038639c);
		(&vec.x)[uVar1] = fVar4 * FLOAT_00386ab4;
		if (fVar4 != 0.0) {
		fVar4 = FLOAT_00386ab4 / fVar4;
		}
		vec.w = ((&matrix->m11)[(int)fVar3 + (int)fVar2 * 4] - (&matrix->m11)[(int)fVar2 + (int)fVar3 * 4]) * fVar4;
		(&vec.x)[(int)fVar2] =((&matrix->m11)[uVar1 + (int)fVar2 * 4] + (&matrix->m11)[(int)fVar2 + uVar1 * 4]) * fVar4;
		(&vec.x)[(int)fVar3] =((&matrix->m11)[uVar1 + (int)fVar3 * 4] + (&matrix->m11)[(int)fVar3 + uVar1 * 4]) * fVar4;
		this->x = vec.x;
		this->y = vec.y;
		this->z = vec.z;
		this->w = vec.w;
		return;
		}
		
	*/
	return;
}

void Vector4::FromRotation(int x, int y, int z) {
	/*
	void __thiscall Vector4::FromRotation(Vector4 *this,int x,int y,int z){
		float fVar1;
		uint uVar2;
		uint uVar3;
		float local_10;
		float local_c;
		float local_8;
		float local_4;
		fVar1 = (float)(x & 0xffff);
		if (fVar1 == 0.0) {
		FUN_000e9840(this,(float)y,z);
		return;
		}
		uVar2 = y & 0xffff;
		if (uVar2 == 0) {
		FUN_000e9730(this,fVar1,z);
		return;
		}
		uVar3 = z & 0xffff;
		if (uVar3 == 0) {
		FUN_000e9620(this,fVar1,uVar2);
		return;
		}
		z = (int)((float)(int)fVar1 * FLOAT_00386ab4);
		y = (int)((float)uVar2 * FLOAT_00386ab4);
		x = (int)((float)uVar3 * FLOAT_00386ab4);
		Global::Trigonometry(&z,&local_10,&local_c);
		Global::Trigonometry(&y,&local_8,&local_4);
		Global::Trigonometry(&x,(float *)&z,(float *)&y);
		this->w = (float)z * local_10 * local_8 + (float)y * local_c * local_4;
		this->x = (float)z * local_c * local_8 - (float)y * local_10 * local_4;
		this->y = (float)y * local_c * local_8 + (float)z * local_10 * local_4;
		this->z = (float)y * local_10 * local_8 - (float)z * local_c * local_4;
		return;
		}
		
	*/
	return;
}

int Vector4::AddVectorToDict(Vector4* vector) {
	/*
	int __cdecl Vector4::AddVectorToDict(Vector4 *vector){
		int i;
		Vector4 *pVVar1;
		float *vec;
		float deltaX;
		float deltaY;
		float deltaZ;
		int cnt;
		cnt = SOME_VECTOR_INDEX;
		i = 0;
		if (0 < SOME_VECTOR_INDEX) {
		vec = &VECTOR_ARRAY.z;
		do {
		deltaZ = *vec - vector->z;
		deltaY = vec[-1] - vector->y;
		deltaX = ((Vector4 *)(vec + -2))->x - vector->x;
		if (SQRT(deltaZ * deltaZ + deltaY * deltaY + deltaX * deltaX) < FLOAT_0038acf0) {
		return i;
		}
		i = i + 1;
		vec = vec + 4;
		}
		 while (i < SOME_VECTOR_INDEX);
		}
		pVVar1 = &VECTOR_ARRAY + SOME_VECTOR_INDEX;
		SOME_VECTOR_INDEX = SOME_VECTOR_INDEX + 1;
		pVVar1->x = vector->x;
		(&VECTOR_ARRAY)[cnt].y = vector->y;
		(&VECTOR_ARRAY)[cnt].z = vector->z;
		(&VECTOR_ARRAY)[cnt].w = vector->w;
		return cnt;
		}
		
	*/
	return 0;
}

void Vector4::FUN_00029b20(Vector4* param_1) {
	/*
	void __thiscall Vector4::FUN_00029b20(Vector4 *this,Vector4 *param_1){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		param_1->x = this->x;
		param_1->y = this->y;
		param_1->z = this->z;
		param_1->w = fVar1;
		return;
		}
		
	*/
	return;
}

float Vector4::DotProduct(Vector4* other) {
	/*
	float __thiscall Vector4::DotProduct(Vector4 *this,Vector4 *other){
		return other->x * this->x + other->y * this->y + other->z * this->z;
		}
		
	*/
	return 0.0f;
}

void Vector4::FUN_00027600(Vector4* param_1) {
	/*
	void __thiscall Vector4::FUN_00027600(Vector4 *this,Vector4 *param_1){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		param_1->x = this->x;
		param_1->y = this->y;
		param_1->z = this->z;
		param_1->w = fVar1;
		return;
		}
		
	*/
	return;
}

float Vector4::Distance_15(Vector4* param_1) {
	/*
	float __thiscall Vector4::Distance(Vector4 *this,Vector4 *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		fVar3 = this->z - param_1->z;
		fVar2 = this->y - param_1->y;
		fVar1 = this->x - param_1->x;
		return SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
		}
		
	*/
	return 0.0f;
}

void Vector4::Invert() {
	/*
	void __fastcall Vector4::Invert(Vector4 *this){
		this->x = 0.0 - this->x;
		this->y = 0.0 - this->y;
		this->z = 0.0 - this->z;
		return;
		}
		
	*/
	return;
}

float Vector4::GetLength_17() {
	/*
	float Vector4::GetLength(Vector4 *this){
		return this->w * this->w + this->z * this->z + this->y * this->y + this->x * this->x;
		}
		
	*/
	return 0.0f;
}

void Vector4::FUN_00027150() {
	/*
	void __fastcall Vector4::FUN_00027150(Vector4 *this){
		float fVar1;
		this->y = 0.0;
		this->z = 0.0;
		fVar1 = FLOAT_0038639c;
		this->x = (float)((uint)this->x & 0xfffffcff | 0xff);
		this->w = fVar1;
		return;
		}
		
	*/
	return;
}

float Vector4::Length_19() {
	/*
	float __cdecl Vector4::Length(Vector4 *this){
		return SQRT(this->x * this->x + this->y * this->y + this->z * this->z);
		}
		
	*/
	return 0.0f;
}

