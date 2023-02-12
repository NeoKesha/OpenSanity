#include "headers/Known/Math/BoundingBox.h"

#include "headers/Known/Math/Matrix4.h"
void BoundingBox::FUN_00147330(Matrix4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall BoundingBox::FUN_00147330(BoundingBox *this,Matrix4 *param_1){
		float *pfVar1;
		float fVar2;
		fVar2 = (this->v1).x;
		if (param_1->m11 <= fVar2 && fVar2 != param_1->m11) {
		(this->v1).x = param_1->m11;
		}
		fVar2 = (this->v1).y;
		if (param_1->m12 <= fVar2 && fVar2 != param_1->m12) {
		(this->v1).y = param_1->m12;
		}
		fVar2 = (this->v1).z;
		if (param_1->m13 <= fVar2 && fVar2 != param_1->m13) {
		(this->v1).z = param_1->m13;
		}
		if ((this->v2).x <= param_1->m21 && param_1->m21 != (this->v2).x) {
		(this->v2).x = param_1->m21;
		}
		pfVar1 = &(this->v2).y;
		if (*pfVar1 <= param_1->m22 && param_1->m22 != *pfVar1) {
		(this->v2).y = param_1->m22;
		}
		pfVar1 = &(this->v2).z;
		if (*pfVar1 <= param_1->m23 && param_1->m23 != *pfVar1) {
		(this->v2).z = param_1->m23;
		}
		return;
		}
		
	*/
	return;
}

void BoundingBox::SetInfiniteSizes(BoundingBox* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall BoundingBox::SetInfiniteSizes(BoundingBox *param_1){
		float fVar1;
		float fVar2;
		fVar2 = FLOAT_003935e8;
		fVar1 = FLOAT_0038639c;
		(param_1->v1).x = FLOAT_003935e8;
		(param_1->v1).y = fVar2;
		(param_1->v1).z = fVar2;
		fVar2 = FLOAT_0038d6d4;
		(param_1->v1).w = fVar1;
		(param_1->v2).x = fVar2;
		(param_1->v2).y = fVar2;
		(param_1->v2).z = fVar2;
		(param_1->v2).w = fVar1;
		return;
		}
		
	*/
	return;
}

void BoundingBox::Expand(float value) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall BoundingBox::Expand(BoundingBox *this,float value){
		(this->v1).x = (this->v1).x - value;
		(this->v1).y = (this->v1).y - value;
		(this->v1).z = (this->v1).z - value;
		(this->v2).x = (this->v2).x + value;
		(this->v2).y = (this->v2).y + value;
		(this->v2).z = (this->v2).z + value;
		return;
		}
		
	*/
	return;
}

bool BoundingBox::IsSomething(BoundingBox* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall BoundingBox::IsSomething(BoundingBox *this,BoundingBox *other){
		float *pfVar1;
		float fVar2;
		fVar2 = (other->v1).x;
		if ((((fVar2 < (this->v1).x || fVar2 == (this->v1).x) &&(fVar2 = (other->v1).y, pfVar1 = &(this->v1).y, fVar2 < *pfVar1 || fVar2 == *pfVar1)) &&(fVar2 = (other->v1).z, pfVar1 = &(this->v1).z, fVar2 < *pfVar1 || fVar2 == *pfVar1)) &&(((fVar2 = (this->v2).x, fVar2 < (other->v2).x || fVar2 == (other->v2).x &&(fVar2 = (this->v2).y, pfVar1 = &(other->v2).y, fVar2 < *pfVar1 || fVar2 == *pfVar1)) &&(fVar2 = (this->v2).z, pfVar1 = &(other->v2).z, fVar2 < *pfVar1 || fVar2 == *pfVar1)))) {
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void BoundingBox::FUN_001481e0(Matrix4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall BoundingBox::FUN_001481e0(BoundingBox *this,Matrix4 *param_1){
		float *pfVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		uint uVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		fVar7 = FLOAT_003935e8;
		fVar10 = FLOAT_0038639c;
		fVar2 = (this->v1).x;
		fVar3 = (this->v1).y;
		fVar4 = (this->v2).x;
		fVar5 = (this->v2).y;
		(this->v1).x = FLOAT_003935e8;
		(this->v1).y = fVar7;
		(this->v1).z = fVar7;
		fVar7 = FLOAT_0038d6d4;
		(this->v1).w = fVar10;
		(this->v2).x = fVar7;
		(this->v2).y = fVar7;
		(this->v2).z = fVar7;
		(this->v2).w = fVar10;
		uVar6 = 0;
		do {
		fVar10 = fVar3;
		if ((uVar6 & 2) == 0) {
		fVar10 = fVar5;
		}
		fVar7 = fVar2;
		if ((uVar6 & 1) == 0) {
		fVar7 = fVar4;
		}
		fVar8 = fVar7 * param_1->m11 + fVar10 * param_1->m21 + param_1->m31 * 0.0 + param_1->m41;
		fVar9 = fVar7 * param_1->m12 + fVar10 * param_1->m22 + param_1->m32 * 0.0 + param_1->m42;
		fVar10 = fVar7 * param_1->m13 + fVar10 * param_1->m23 + param_1->m33 * 0.0 + param_1->m43;
		if (fVar8 < (this->v1).x) {
		(this->v1).x = fVar8;
		}
		if (fVar9 < (this->v1).y) {
		(this->v1).y = fVar9;
		}
		if (fVar10 < (this->v1).z) {
		(this->v1).z = fVar10;
		}
		if ((this->v2).x <= fVar8 && fVar8 != (this->v2).x) {
		(this->v2).x = fVar8;
		}
		pfVar1 = &(this->v2).y;
		if (*pfVar1 <= fVar9 && fVar9 != *pfVar1) {
		(this->v2).y = fVar9;
		}
		pfVar1 = &(this->v2).z;
		if (*pfVar1 <= fVar10 && fVar10 != *pfVar1) {
		(this->v2).z = fVar10;
		}
		uVar6 = uVar6 + 1;
		}
		 while ((int)uVar6 < 8);
		return;
		}
		
	*/
	return;
}

