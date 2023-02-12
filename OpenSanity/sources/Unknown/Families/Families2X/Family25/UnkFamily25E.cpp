#include "headers/Unknown/Families/Families2X/Family25/UnkFamily25E.h"

void UnkFamily25E::FUN_00100dc0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25E::FUN_00100dc0(UnkFamily25E *this){
		UnkFamily25Abstract_VTable *pUVar1;
		InstanceTransform *transform;
		pUVar1 = this[1].parent.vtable;
		if (pUVar1 != (UnkFamily25Abstract_VTable *)0x0) {
		transform = (InstanceTransform *)pUVar1->field6_0x18;
		InstanceTransform::FillMatrix(transform);
		Matrix4::FUN_000d4000((Matrix4 *)transform,(Vector4 *)&this->field_0x30,(Vector4 *)&this[1].parent.field13_0x10);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily25E::FUN_00100df0(float* param_1, uint param_2, float* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily25E::FUN_00100df0(UnkFamily25E *this,float *param_1,undefined4 param_2,float *param_3){
		float fVar1;
		float fVar2;
		float fVar3;
		fVar1 = (float)this[1].parent.field13_0x10 - *param_1;
		fVar2 = *(float *)&this[1].field_0x14 - param_1[1];
		fVar3 = *(float *)&this[1].field_0x18 - param_1[2];
		*param_3 = (FLOAT_0039f5fc / (fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3 + FLOAT_0039f5fc)) **(float *)&this->field_0x14;
		return;
		}
		
	*/
	return;
}

void UnkFamily25E::FUN_0011a3b0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25E::FUN_0011a3b0(UnkFamily25E *this){
		*(undefined *)&(this->parent).field13_0x10 = 5;
		return;
		}
		
	*/
	return;
}

void UnkFamily25E::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily25E::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily25E::FUN_0011a3d0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily25E::FUN_0011a3d0(void){
		return 0;
		}
		
	*/
	return;
}

void UnkFamily25E::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily25E * __thiscall UnkFamily25E::Dispose(UnkFamily25E *this,byte param_1){
		(this->parent).vtable = (UnkFamily25Abstract_VTable *)&UnkFamily25_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily25E::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25E::Construct(UnkFamily25E *this){
		int *piVar1;
		(this->parent).field13_0x10 = 0;
		*(undefined *)&(this->parent).field13_0x10 = 4;
		piVar1 = &(this->parent).field13_0x10;
		*piVar1 = *piVar1 | 0x100;
		*(undefined *)&(this->parent).field13_0x10 = 0;
		(this->parent).vtable = (UnkFamily25Abstract_VTable *)&UnkFamily25_VT_E;
		return;
		}
		
	*/
	return;
}

