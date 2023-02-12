#include "headers/Known/Math/Spline/SplineD.h"

#include "headers/Known/Math/Matrix4.h"
void SplineD::Dispose(byte flag) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SplineD * __thiscall SplineD::Dispose(SplineD *this,byte flag){
		(this->parent).vtable = (SplineAbstract_VTable *)&Spline_VT_Abstract;
		if ((flag & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

SplineD* SplineD::Step(float step, uint param_2, uint param_3, char param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SplineD * __thiscall SplineD::Step(SplineD *this,float step,undefined4 param_2,undefined4 param_3,char param_4){
		int iVar1;
		if (param_4 != '\0') {
		(this->parent).startupLevel = (this->parent).position / (this->parent).length;
		(this->parent).position = (this->parent).position + step;
		if (FLOAT_0038639c <= (this->parent).startupLevel) {
		iVar1 = (this->parent).repeats + -1;
		(this->parent).repeats = iVar1;
		(this->parent).position = 0.0;
		if (iVar1 < 1) {
		this = (SplineD *)(this->parent).next;
		}
		}
		}
		return this;
		}
		
	*/
	return null;
}

void SplineD::Transform(Matrix4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SplineD::Transform(SplineD *this,Matrix4 *param_1){
		float fVar1;
		fVar1 = FLOAT_0038ca8c;
		if (IS_WIDESCREEN == false) {
		fVar1 = FLOAT_0038ca88;
		}
		param_1->m41 = (this->parent).startupLevel * fVar1 + param_1->m41;
		return;
		}
		
	*/
	return;
}

void SplineD::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SplineD * __fastcall SplineD::Construct(SplineD *this){
		(this->parent).next = (SplineAbstract *)0x0;
		(this->parent).position = 0.0;
		(this->parent).startupLevel = 0.0;
		(this->parent).repeats = 0;
		(this->parent).vtable = (SplineAbstract_VTable *)&Spline_VT_D;
		return this;
		}
		
	*/
	return;
}

