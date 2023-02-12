#include "headers/Known/Math/Spline/SplineE.h"

#include "headers/Known/Math/Matrix4.h"
void SplineE::Transform(Matrix4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SplineE::Transform(SplineE *this,Matrix4 *param_1){
		float fVar1;
		Matrix4 local_50;
		FUN_000e2680(&local_50,(int)((FLOAT_003863a8 / FLOAT_0039e238) *(this->parent).startupLevel * FLOAT_0039e238 * FLOAT_0038a770));
		fVar1 = FLOAT_0038ca8c;
		if (IS_WIDESCREEN == false) {
		fVar1 = FLOAT_0038ca88;
		}
		param_1->m41 = fVar1 + param_1->m41;
		Matrix4::Multiply4443(&local_50,param_1,param_1);
		return;
		}
		
	*/
	return;
}

void SplineE::Dispose(byte flag) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SplineE * __thiscall SplineE::Dispose(SplineE *this,byte flag){
		(this->parent).vtable = (SplineAbstract_VTable *)&Spline_VT_Abstract;
		if ((flag & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

SplineE* SplineE::Step(float step) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SplineE * __thiscall SplineE::Step(SplineE *this,float step){
		int repeats;
		(this->parent).startupLevel = (this->parent).position / (this->parent).length;
		(this->parent).position = step + (this->parent).position;
		if (FLOAT_0038639c <= (this->parent).startupLevel) {
		repeats = (this->parent).repeats + -1;
		(this->parent).repeats = repeats;
		(this->parent).position = 0.0;
		if (repeats < 1) {
		this = (SplineE *)(this->parent).next;
		}
		}
		return this;
		}
		
	*/
	return null;
}

void SplineE::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SplineE::Construct(SplineE *this){
		(this->parent).next = (SplineAbstract *)0x0;
		(this->parent).position = 0.0;
		(this->parent).startupLevel = 0.0;
		(this->parent).repeats = 0;
		(this->parent).vtable = (SplineAbstract_VTable *)&Spline_VT_E;
		return;
		}
		
	*/
	return;
}

