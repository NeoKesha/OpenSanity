#include "headers/Known/Math/Line4.h"

#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Math/Matrix4.h"
void Line4::GetPoint(float t, Vector4* posOut) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Line4::GetPoint(Line4 *this,float t,Vector4 *posOut){
		bool bVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		if (t == FLOAT_00386394) {
		posOut->x = (this->start).x;
		posOut->y = (this->start).y;
		posOut->z = (this->start).z;
		posOut->w = (this->start).w;
		return;
		}
		bVar1 = t == FLOAT_0038639c;
		posOut->x = (this->end).x;
		posOut->y = (this->end).y;
		posOut->z = (this->end).z;
		if (bVar1) {
		posOut->w = (this->end).w;
		return;
		}
		posOut->w = (this->end).w;
		posOut->x = posOut->x - (this->start).x;
		posOut->y = posOut->y - (this->start).y;
		posOut->z = posOut->z - (this->start).z;
		fVar2 = posOut->x * t;
		posOut->x = fVar2;
		fVar3 = posOut->y * t;
		posOut->y = fVar3;
		fVar4 = posOut->z * t;
		posOut->z = fVar4;
		posOut->x = fVar2 + (this->start).x;
		posOut->y = fVar3 + (this->start).y;
		posOut->z = (this->start).z + fVar4;
		return;
		}
		
	*/
	return;
}

float Line4::GetProgress(Vector4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Line4::GetProgress(Line4 *this,Vector4 *param_1){
		float t;
		float x;
		float y;
		float z;
		z = (this->start).z;
		x = (this->start).x;
		y = (this->start).y;
		t = (((this->end).z * param_1->z + (this->end).y * param_1->y + (this->end).x * param_1->x) -(z * param_1->z + param_1->x * x + param_1->y * y)) -(((this->end).z * z + (this->end).y * y + (this->end).x * x) - (x * x + y * y + z * z));
		if (t * t != 0.0) {
		y = (this->start).z - (this->end).z;
		x = (this->start).y - (this->end).y;
		z = (this->start).x - (this->end).x;
		return t / (y * y + x * x + z * z);
		}
		return 0.0;
		}
		
	*/
	return 0.0f;
}

void Line4::FUN_000d6090(Matrix4* matrix) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Line4::FUN_000d6090(Line4 *this,Matrix4 *matrix){
		float fVar1;
		float fVar2;
		fVar1 = (this->start).x;
		fVar2 = (this->start).y;
		this->start = (Vector4)CONCAT412(fVar1 * matrix->m14 + fVar2 * matrix->m24 +matrix->m34 * 0.0 + matrix->m44,CONCAT48(fVar1 * matrix->m13 + fVar2 * matrix->m23 +matrix->m33 * 0.0 + matrix->m43,CONCAT44(fVar1 * matrix->m12 + fVar2 * matrix->m22 +matrix->m32 * 0.0 + matrix->m42,fVar1 * matrix->m11 + fVar2 * matrix->m21 +matrix->m31 * 0.0 + matrix->m41)));
		fVar1 = (this->end).x;
		fVar2 = (this->end).y;
		this->end = (Vector4)CONCAT412(fVar1 * matrix->m14 + fVar2 * matrix->m24 +matrix->m34 * 0.0 + matrix->m44,CONCAT48(fVar1 * matrix->m13 + fVar2 * matrix->m23 +matrix->m33 * 0.0 + matrix->m43,CONCAT44(fVar1 * matrix->m12 + fVar2 * matrix->m22 +matrix->m32 * 0.0 + matrix->m42,fVar1 * matrix->m11 + fVar2 * matrix->m21 +matrix->m31 * 0.0 + matrix->m41)));
		return;
		}
		
	*/
	return;
}

