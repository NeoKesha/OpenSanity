#include "headers/Unknown/Families/Families2X/Family25/UnkFamily25G.h"

void UnkFamily25G::FUN_00100bc0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25G::FUN_00100bc0(UnkFamily25G *this){
		int iVar1;
		InstanceTransform *transform;
		iVar1 = this[1].parent.field13_0x10;
		if (iVar1 != 0) {
		transform = *(InstanceTransform **)(iVar1 + 0x18);
		InstanceTransform::FillMatrix(transform);
		Matrix4::FUN_000d4000(&transform->matrix,(Vector4 *)&this->field_0x30,(Vector4 *)&this[1].field_0x20);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily25G::FUN_00100bf0(float* param_1, float* param_2, float* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily25G::FUN_00100bf0(UnkFamily25G *this,float *param_1,float *param_2,float *param_3){
		int iVar1;
		int iVar2;
		int iVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		fVar4 = *(float *)&this[1].field_0x20 - *param_1;
		fVar5 = *(float *)&this[1].field_0x24 - param_1[1];
		fVar6 = *(float *)&this[1].field_0x28 - param_1[2];
		fVar7 = FLOAT_0039f5fc / (fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6 + FLOAT_0039f5fc);
		*param_2 = fVar4 * fVar7;
		fVar4 = FLOAT_0038639c;
		param_2[1] = fVar5 * fVar7;
		param_2[2] = fVar6 * fVar7;
		param_2[3] = fVar4;
		iVar1 = (int)*(short *)&this[1].parent.vtable;
		fVar4 = *(float *)&this->field_0x14;
		iVar3 = 0;
		if (3 < iVar1) {
		iVar2 = (iVar1 - 4U >> 2) + 1;
		iVar3 = iVar2 * 4;
		do {
		iVar2 = iVar2 + -1;
		fVar4 = fVar4 * fVar7 * fVar7 * fVar7 * fVar7;
		}
		 while (iVar2 != 0);
		}
		if (iVar3 < iVar1) {
		iVar1 = iVar1 - iVar3;
		do {
		iVar1 = iVar1 + -1;
		fVar4 = fVar4 * fVar7;
		}
		 while (iVar1 != 0);
		*param_3 = fVar4;
		return;
		}
		*param_3 = fVar4;
		return;
		}
		
	*/
	return;
}

void UnkFamily25G::FUN_0011a2d0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25G::FUN_0011a2d0(UnkFamily25G *this){
		*(undefined *)&(this->parent).field13_0x10 = 7;
		return;
		}
		
	*/
	return;
}

void UnkFamily25G::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily25G::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily25G::FUN_0011a2f0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily25G::FUN_0011a2f0(void){
		return 0;
		}
		
	*/
	return;
}

void UnkFamily25G::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily25G * __thiscall UnkFamily25G::Dispose(UnkFamily25G *this,byte param_1){
		(this->parent).vtable = (UnkFamily25Abstract_VTable *)&UnkFamily25_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily25G::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25G::Construct(UnkFamily25G *this){
		int *piVar1;
		uint uVar2;
		(this->parent).field13_0x10 = 0;
		*(undefined *)&(this->parent).field13_0x10 = 4;
		piVar1 = &(this->parent).field13_0x10;
		*piVar1 = *piVar1 | 0x100;
		*(undefined *)&(this->parent).field13_0x10 = 2;
		this[1].parent.field13_0x10 = 0;
		uVar2 = (this->parent).field13_0x10;
		(this->parent).vtable = (UnkFamily25Abstract_VTable *)&UnkFamily25_VT_G;
		*(undefined2 *)&this[1].field_0x14 = 0xffff;
		(this->parent).field13_0x10 = uVar2 & 0xfffffeff;
		return;
		}
		
	*/
	return;
}

