#include "headers/Unknown/Families/Families2X/Family25/UnkFamily25F.h"

void UnkFamily25F::FUN_00100ce0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25F::FUN_00100ce0(UnkFamily25F *this){
		InstanceTransform *transform;
		if (*(int *)&this[1].field_0x20 != 0) {
		transform = *(InstanceTransform **)(*(int *)&this[1].field_0x20 + 0x18);
		InstanceTransform::FillMatrix(transform);
		Matrix4::FUN_000d4000(&transform->matrix,(Vector4 *)&this->field_0x30,(Vector4 *)&this[1].field_0x30);
		Matrix4::FUN_000d42b0(&transform->matrix,(Vector4 *)(this + 1),(Vector4 *)&this[1].field_0x40);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily25F::FUN_00100d20(float* param_1, uint* param_2, float* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily25F::FUN_00100d20(UnkFamily25F *this,float *param_1,undefined4 *param_2,float *param_3){
		float fVar1;
		float fVar2;
		float fVar3;
		fVar1 = *(float *)&this[1].field_0x30 - *param_1;
		fVar2 = *(float *)&this[1].field_0x34 - param_1[1];
		fVar3 = *(float *)&this[1].field_0x38 - param_1[2];
		*param_3 = (FLOAT_0039f5fc / (fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3 + FLOAT_0039f5fc)) **(float *)&this->field_0x14;
		*param_2 = *(undefined4 *)&this[1].field_0x40;
		param_2[1] = *(undefined4 *)&this[1].field_0x44;
		param_2[2] = *(undefined4 *)&this[1].field_0x48;
		param_2[3] = *(undefined4 *)&this[1].field_0x4c;
		return;
		}
		
	*/
	return;
}

void UnkFamily25F::FUN_0011a340() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25F::FUN_0011a340(UnkFamily25F *this){
		*(undefined *)&(this->parent).field13_0x10 = 6;
		return;
		}
		
	*/
	return;
}

void UnkFamily25F::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily25F::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily25F::FUN_0011a360() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily25F::FUN_0011a360(void){
		return 0;
		}
		
	*/
	return;
}

void UnkFamily25F::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily25F * __thiscall UnkFamily25F::Dispose(UnkFamily25F *this,byte param_1){
		(this->parent).vtable = (UnkFamily25Abstract_VTable *)&UnkFamily25_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily25F::Construct(UnkFamily25F* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25F::Construct(UnkFamily25F *param_1){
		int *piVar1;
		(param_1->parent).field13_0x10 = 0;
		*(undefined *)&(param_1->parent).field13_0x10 = 4;
		piVar1 = &(param_1->parent).field13_0x10;
		*piVar1 = *piVar1 | 0x100;
		*(undefined *)&(param_1->parent).field13_0x10 = 1;
		(param_1->parent).vtable = (UnkFamily25Abstract_VTable *)&UnkFamily25_VT_F;
		return;
		}
		
	*/
	return;
}

