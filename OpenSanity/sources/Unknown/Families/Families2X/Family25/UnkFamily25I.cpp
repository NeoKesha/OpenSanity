#include "headers/Unknown/Families/Families2X/Family25/UnkFamily25I.h"

void UnkFamily25I::FUN_001009b0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25I::FUN_001009b0(UnkFamily25I *this){
		InstanceTransform *transform;
		if (*(int *)&this[1].field_0x30 != 0) {
		transform = *(InstanceTransform **)(*(int *)&this[1].field_0x30 + 0x18);
		InstanceTransform::FillMatrix(transform);
		Matrix4::FUN_000d4000(&transform->matrix,(Vector4 *)&this->field_0x30,(Vector4 *)&this[1].field_0x40);
		Matrix4::FUN_000d42b0(&transform->matrix,(Vector4 *)(this + 1),(Vector4 *)&this[1].field_0x50);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily25I::FUN_001009f0(float* param_1, float* param_2, float* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily25I::FUN_001009f0(UnkFamily25I *this,float *param_1,float *param_2,float *param_3){
		ushort uVar1;
		int iVar2;
		int iVar3;
		int iVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float local_14;
		fVar6 = FLOAT_0038639c;
		fVar5 = *(float *)&this[1].field_0x40 - *param_1;
		fVar7 = *(float *)&this[1].field_0x44 - param_1[1];
		fVar8 = *(float *)&this[1].field_0x48 - param_1[2];
		fVar9 = FLOAT_0039f5fc / (fVar5 * fVar5 + fVar7 * fVar7 + fVar8 * fVar8 + FLOAT_0039f5fc);
		*param_2 = fVar5 * fVar9;
		param_2[1] = fVar7 * fVar9;
		param_2[2] = fVar8 * fVar9;
		param_2[3] = fVar6;
		iVar2 = (int)*(short *)&this[1].field_0x20;
		local_14 = *(float *)&this->field_0x14;
		iVar4 = 0;
		if (3 < iVar2) {
		iVar3 = (iVar2 - 4U >> 2) + 1;
		iVar4 = iVar3 * 4;
		do {
		iVar3 = iVar3 + -1;
		local_14 = local_14 * fVar9 * fVar9 * fVar9 * fVar9;
		}
		 while (iVar3 != 0);
		}
		if (iVar4 < iVar2) {
		iVar2 = iVar2 - iVar4;
		do {
		iVar2 = iVar2 + -1;
		local_14 = local_14 * fVar9;
		}
		 while (iVar2 != 0);
		}
		fVar6 = (0.0 - *(float *)&this[1].field_0x58) * fVar8 * fVar9 +(0.0 - *(float *)&this[1].field_0x54) * fVar7 * fVar9 +(0.0 - *(float *)&this[1].field_0x50) * fVar5 * fVar9;
		if (*(float *)&this[1].field_0x14 <= fVar6) {
		if (fVar6 < (float)this[1].parent.field13_0x10) {
		fVar5 = (fVar6 - *(float *)&this[1].field_0x14) /((float)this[1].parent.field13_0x10 - *(float *)&this[1].field_0x14);
		if (0.0 <= fVar5) {
		if (FLOAT_0038639c < fVar5) {
		fVar5 = FLOAT_0038639c;
		}
		local_14 = fVar5 * local_14;
		}
		else {
		local_14 = local_14 * 0.0;
		}
		}
		uVar1 = 0x80;
		fVar5 = FLOAT_0038639c;
		do {
		fVar5 = fVar5 * fVar5;
		if ((uVar1 & *(ushort *)&this[1].field_0x22) != 0) {
		fVar5 = fVar5 * fVar6;
		}
		uVar1 = (short)uVar1 >> 1;
		}
		 while (uVar1 != 0);
		*param_3 = fVar5 * local_14;
		return;
		}
		*param_3 = 0.0;
		return;
		}
		
	*/
	return;
}

void UnkFamily25I::FUN_0011a240() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25I::FUN_0011a240(UnkFamily25I *this){
		*(undefined *)&(this->parent).field13_0x10 = 8;
		return;
		}
		
	*/
	return;
}

void UnkFamily25I::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily25I::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily25I::FUN_0011a260() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily25I::FUN_0011a260(void){
		return 0;
		}
		
	*/
	return;
}

void UnkFamily25I::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily25I * __thiscall UnkFamily25I::Dispose(UnkFamily25I *this,byte param_1){
		(this->parent).vtable = (UnkFamily25Abstract_VTable *)&UnkFamily25_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily25I::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25I::Construct(UnkFamily25I *this){
		int *piVar1;
		(this->parent).field13_0x10 = 0;
		*(undefined *)&(this->parent).field13_0x10 = 4;
		piVar1 = &(this->parent).field13_0x10;
		*piVar1 = *piVar1 | 0x100;
		*(undefined *)&(this->parent).field13_0x10 = 3;
		(this->parent).vtable = (UnkFamily25Abstract_VTable *)&UnkFamily25_VT_I;
		return;
		}
		
	*/
	return;
}

