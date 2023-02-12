#include "headers/Known/Math/Spline/SplineA.h"

#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Math/Vector2.h"
void SplineA::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SplineA * __fastcall SplineA::Construct(SplineA *this){
		float fVar1;
		float fVar2;
		Vector2 *pVVar3;
		(this->parent).next = (SplineAbstract *)0x0;
		(this->parent).position = 0.0;
		(this->parent).startupLevel = 0.0;
		(this->parent).repeats = 0;
		(this->parent).vtable = (SplineAbstract_VTable *)&Spline_VT_A;
		this->arrayLength = 4;
		pVVar3 = (Vector2 *)VirtualPool::AllocateMemory(0x20);
		fVar2 = FLOAT_0038b704;
		fVar1 = FLOAT_0038639c;
		this->spline = pVVar3;
		pVVar3->x = fVar1;
		pVVar3->y = fVar1;
		pVVar3 = this->spline;
		pVVar3[1].x = fVar2;
		pVVar3[1].y = fVar2;
		fVar2 = FLOAT_0038b718;
		pVVar3 = this->spline;
		pVVar3[2].x = FLOAT_0038b718;
		pVVar3[2].y = fVar2;
		pVVar3 = this->spline;
		pVVar3[3].x = fVar1;
		pVVar3[3].y = fVar1;
		return this;
		}
		
	*/
	return;
}

void SplineA::Transform(Matrix4* matrix) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SplineA::Transform(SplineA *this,Matrix4 *matrix){
		int i;
		float j;
		Vector2 vec;
		Matrix4 tmpMatrix;
		Vector2 *vectorArray;
		j = (this->parent).startupLevel;
		if (FLOAT_0038639c <= j) {
		vec.x = this->spline[this->arrayLength + -1].x;
		vec.y = this->spline[this->arrayLength + -1].y;
		}
		else {
		vectorArray = this->spline;
		j = (float)(this->arrayLength + -1) * j;
		i = (int)j;
		j = j - (float)i;
		vec.x = (vectorArray[i + 1].x - vectorArray[i].x) * j + vectorArray[i].x;
		vec.y = (vectorArray[i + 1].y - vectorArray[i].y) * j + vectorArray[i].y;
		}
		Matrix4::Construct1(&tmpMatrix);
		tmpMatrix.m11 = vec.x;
		tmpMatrix.m22 = vec.y;
		Matrix4::Multiply4443(&tmpMatrix,matrix,matrix);
		return;
		}
		
	*/
	return;
}

void SplineA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SplineA * __thiscall SplineA::Dispose(SplineA *this,byte param_1){
		(this->parent).vtable = (SplineAbstract_VTable *)&Spline_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

SplineA* SplineA::Step(float step, uint param_2, uint param_3, char flag) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SplineA * __thiscall SplineA::Step(SplineA *this,float step,undefined4 param_2,undefined4 param_3,char flag){
		int iVar1;
		if (flag != '\0') {
		(this->parent).startupLevel = (this->parent).position / (this->parent).length;
		(this->parent).position = (this->parent).position + step;
		if (FLOAT_0038639c <= (this->parent).startupLevel) {
		iVar1 = (this->parent).repeats + -1;
		(this->parent).repeats = iVar1;
		(this->parent).position = 0.0;
		if (iVar1 < 1) {
		this = (SplineA *)(this->parent).next;
		}
		}
		}
		return this;
		}
		
	*/
	return null;
}

