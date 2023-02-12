#include "headers/Unknown/Families/Families3X/Family33/UnkFamily33A.h"

#include "headers/Known/Math/Vector4.h"
void UnkFamily33A::Construct(Vector4* param_1, Vector4* param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33A::Construct(UnkFamily33A *this,Vector4 *param_1,Vector4 *param_2,undefined4 param_3){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		(this->parent).vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_Abstract;
		(this->parent).list1 = (undefined *)0x0;
		(this->parent).list2 = (undefined *)0x0;
		(this->parent).field18_0x3c = 0;
		(this->parent).field19_0x40 = 0;
		(this->parent).field17_0x38 = param_3;
		fVar1 = param_1->x;
		fVar2 = param_1->z;
		fVar3 = param_1->y;
		fVar4 = param_1->z;
		fVar5 = param_2->y;
		fVar6 = param_1->y;
		fVar7 = param_2->x;
		fVar8 = param_2->z;
		fVar9 = param_2->y;
		fVar10 = param_2->z;
		(this->parent).field13_0x10.x = param_1->x - param_2->x;
		fVar11 = FLOAT_0038639c;
		(this->parent).field13_0x10.y = fVar3 - fVar9;
		(this->parent).field13_0x10.z = fVar4 - fVar10;
		(this->parent).field13_0x10.w = fVar11;
		(this->parent).field14_0x20.x = fVar1 + fVar7;
		(this->parent).field14_0x20.y = fVar5 + fVar6;
		(this->parent).field14_0x20.z = fVar2 + fVar8;
		(this->parent).field14_0x20.w = fVar11;
		(this->parent).field20_0x44 = 0;
		(this->parent).field21_0x48 = 0;
		(this->parent).field22_0x4c = 0;
		(this->parent).field23_0x50 = 0;
		(this->parent).vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_A;
		return;
		}
		
	*/
	return;
}

void UnkFamily33A::Construct_1(Vector4* param_1, float param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily33A * __thiscall UnkFamily33A::Construct(UnkFamily33A *this,Vector4 *param_1,float param_2,undefined4 param_3){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		(this->parent).vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_Abstract;
		(this->parent).list1 = (undefined *)0x0;
		(this->parent).list2 = (undefined *)0x0;
		(this->parent).field18_0x3c = 0;
		(this->parent).field19_0x40 = 0;
		(this->parent).field17_0x38 = param_3;
		fVar1 = param_1->w;
		fVar2 = param_1->x;
		fVar3 = param_1->y;
		fVar4 = param_1->z;
		(this->parent).field13_0x10.w = fVar1;
		(this->parent).field13_0x10.x = fVar2 - param_2;
		(this->parent).field13_0x10.y = fVar3 - param_2;
		(this->parent).field13_0x10.z = fVar4 - param_2;
		(this->parent).field14_0x20.x = fVar2 + param_2;
		(this->parent).field14_0x20.y = fVar3 + param_2;
		(this->parent).field14_0x20.z = fVar4 + param_2;
		(this->parent).field14_0x20.w = fVar1;
		(this->parent).field20_0x44 = 0;
		(this->parent).field21_0x48 = 0;
		(this->parent).field22_0x4c = 0;
		(this->parent).field23_0x50 = 0;
		(this->parent).vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_A;
		return this;
		}
		
	*/
	return;
}

void UnkFamily33A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily33A * __thiscall UnkFamily33A::Dispose(UnkFamily33A *this,byte param_1){
		(this->parent).vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_A;
		UnkFamily33Abstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily33A::Construct_3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily33A * __fastcall UnkFamily33A::Construct(UnkFamily33A *this){
		(this->parent).list1 = (undefined *)0x0;
		(this->parent).list2 = (undefined *)0x0;
		(this->parent).field17_0x38 = 0;
		(this->parent).field18_0x3c = 0;
		(this->parent).field19_0x40 = 0;
		(this->parent).field20_0x44 = 0;
		(this->parent).field21_0x48 = 0;
		(this->parent).field22_0x4c = 0;
		(this->parent).field23_0x50 = 0;
		(this->parent).vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_A;
		return this;
		}
		
	*/
	return;
}

uint UnkFamily33A::FUN_00137080() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __fastcall UnkFamily33A::FUN_00137080(UnkFamily33A *this){
		undefined *puVar1;
		puVar1 = (undefined *)(this->parent).field18_0x3c;
		if ((puVar1 == (undefined *)0x0) && (puVar1 = (this->parent).list1, puVar1 == (undefined *)0x0)) {
		return 1;
		}
		return (uint)puVar1 & 0xffffff00;
		}
		
	*/
	return 0;
}

void UnkFamily33A::FUN_00139450(uint param_1, int param_2, int param_3, uint param_4, int param_5, uint param_6, char param_7) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33A::FUN_00139450(UnkFamily33A *this,undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,undefined4 param_6,char param_7){
		if ((param_7 != '\0') && ((param_2 != 0 || (param_2 = param_3, param_3 != 0)))) {
		*(int *)(*(int *)((this->parent).field18_0x3c + 8) + param_5 * 4) = param_2;
		}
		return;
		}
		
	*/
	return;
}

uint UnkFamily33A::FUN_0013c880(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkFamily33A::FUN_0013c880(UnkFamily33A *this,int **param_1){
		uint uVar1;
		uVar1 = UnkFamily33Abstract::FUN_0013c4d0(&this->parent,param_1);
		return uVar1 & 0xffffff01;
		}
		
	*/
	return 0;
}

uint UnkFamily33A::FUN_001430d0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily33A::FUN_001430d0(void){
		return 0x1605;
		}
		
	*/
	return 0;
}

void UnkFamily33A::FUN_001430e0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily33A::FUN_001430e0(void){
		return 1;
		}
		
	*/
	return;
}

void UnkFamily33A::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily33A::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint UnkFamily33A::FUN_00143100() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily33A::FUN_00143100(void){
		return 0;
		}
		
	*/
	return 0;
}

