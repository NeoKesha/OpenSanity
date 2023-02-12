#include "headers/Known/Math/Spline/SplineC.h"

#include "headers/Known/Math/Matrix4.h"
void SplineC::Transform(Matrix4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SplineC::Transform(SplineC *this,Matrix4 *param_1){
		float local_5c;
		int local_58;
		float local_54;
		Matrix4 local_50;
		local_58 = (int)((FLOAT_003863a8 / FLOAT_0039e238) * (this->parent).startupLevel * FLOAT_0039e238);
		FUN_000d2a10(&local_58,&local_54,&local_5c);
		local_5c = FLOAT_0039e230 * local_5c * FLOAT_00386ab4;
		FUN_000e2680(&local_50,(int)((FLOAT_003863a8 / FLOAT_0039e238) * local_5c));
		Matrix4::Multiply4443(&local_50,param_1,param_1);
		return;
		}
		
	*/
	return;
}

SplineC* SplineC::Spet(float step) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SplineC * __thiscall SplineC::Spet(SplineC *this,float step){
		bool bVar1;
		int iVar2;
		float fVar3;
		(this->parent).startupLevel = (this->parent).position / (this->parent).length;
		bVar1 = FLOAT_0038639c <= (this->parent).startupLevel;
		fVar3 = step + (this->parent).position;
		(this->parent).position = fVar3;
		if (bVar1) {
		iVar2 = (this->parent).repeats + -1;
		(this->parent).repeats = iVar2;
		(this->parent).position = fVar3 - (this->parent).length;
		if (iVar2 < 1) {
		this = (SplineC *)(this->parent).next;
		}
		}
		return this;
		}
		
	*/
	return null;
}

void SplineC::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SplineC * __fastcall SplineC::Construct(SplineC *this){
		(this->parent).next = (SplineAbstract *)0x0;
		(this->parent).position = 0.0;
		(this->parent).startupLevel = 0.0;
		(this->parent).repeats = 0;
		(this->parent).vtable = (SplineAbstract_VTable *)&Spline_VT_C;
		return this;
		}
		
	*/
	return;
}

