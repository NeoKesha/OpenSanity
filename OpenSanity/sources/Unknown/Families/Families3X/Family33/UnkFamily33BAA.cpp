#include "headers/Unknown/Families/Families3X/Family33/UnkFamily33BAA.h"

#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Math/Vector4.h"
void UnkFamily33BAA::FUN_0013d060(int param_1, Matrix4* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33BAA::FUN_0013d060(UnkFamily33BAA *this,int param_1,Matrix4 *param_2){
		InstanceTransform *transform;
		int iVar1;
		BoundingBox *pBVar2;
		Vector4 *pVVar3;
		BoundingBox local_70;
		Matrix4 local_50;
		if (param_2 == (Matrix4 *)0x0) {
		pBVar2 = (BoundingBox *)(param_1 + 0x50);
		pVVar3 = (Vector4 *)(param_1 + 0x60);
		}
		else {
		transform = *(InstanceTransform **)(param_1 + 0x18);
		InstanceTransform::FillMatrix(transform);
		Matrix4::Multiply4443(&transform->matrix,param_2,&local_50);
		AutoClass2::FUN_0013cda0((AutoClass2 *)(param_1 + 0x20),&local_50,&local_70);
		pBVar2 = &local_70;
		pVVar3 = &local_70.v2;
		}
		iVar1 = FUN_001487c0(&(this->parent).parent.parent.field13_0x10,(float *)pBVar2,&pVVar3->x,FLOAT_003a3344);
		if (iVar1 == 0) {
		return;
		}
		UnkFamily33BA::FUN_001375a0(&this->parent,(float *)pBVar2,&pVVar3->x,this->field29_0x90);
		return;
		}
		
	*/
	return;
}

void UnkFamily33BAA::FUN_0013d100(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33BAA::FUN_0013d100(UnkFamily33BAA *this,int *param_1){
		(**(code **)(*param_1 + 0x6c))(this->field29_0x90);
		UnkFamily33BA::FUN_0013cf50(&this->parent,param_1);
		return;
		}
		
	*/
	return;
}

void UnkFamily33BAA::FUN_0013f190(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33BAA::FUN_0013f190(UnkFamily33BAA *this,int *param_1){
		(**(code **)(*param_1 + 0x40))(&this->field29_0x90);
		(this->parent).parent.parent.field19_0x40 = 0;
		UnkFamily33BA::FUN_0013efb0(&this->parent,param_1);
		return;
		}
		
	*/
	return;
}

void UnkFamily33BAA::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily33BAA * __thiscall UnkFamily33BAA::Construct(UnkFamily33BAA *this,int *param_1){
		UnkFamily33BA::Construct(&this->parent);
		(this->parent).parent.parent.vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_BAA;
		(**(code **)(*param_1 + 0x40))(&this->field29_0x90);
		(this->parent).parent.parent.field19_0x40 = 0;
		UnkFamily33BA::FUN_0013efb0(&this->parent,param_1);
		return this;
		}
		
	*/
	return;
}

uint UnkFamily33BAA::FUN_00140140(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkFamily33BAA::FUN_00140140(UnkFamily33BAA *this,int **param_1){
		int *piVar1;
		bool bVar2;
		byte bVar3;
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		bVar3 = (**(code **)(**param_1 + 0x74))(0x611,&this->field29_0x90);
		goto LAB_00140188;
		}
		if (param_1[1] == (int *)0x1) {
		bVar3 = (**(code **)(**param_1 + 0x24))(0x611,this->field29_0x90);
		goto LAB_00140188;
		}
		}
		bVar3 = 0;
		LAB_00140188:UnkFamily33BA::FUN_00140070(&this->parent,param_1);
		piVar1 = param_1[1];
		if (piVar1 == (int *)0x0) {
		(this->parent).parent.parent.field19_0x40 = 0;
		}
		return (uint)piVar1 & 0xffffff00 | (uint)(bVar3 & 1);
		}
		
	*/
	return 0;
}

void UnkFamily33BAA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily33BAA * __thiscall UnkFamily33BAA::Dispose(UnkFamily33BAA *this,byte param_1){
		(this->parent).parent.parent.vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_BAA;
		UnkFamily33BA::Dispose(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily33BAA::Dispose_6() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily33BAA * __fastcall UnkFamily33BAA::Dispose(UnkFamily33BAA *this){
		UnkFamily33BA::Construct(&this->parent);
		(this->parent).parent.parent.vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_BAA;
		return this;
		}
		
	*/
	return;
}

void UnkFamily33BAA::FUN_001377b0(float* param_1, float* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33BAA::FUN_001377b0(UnkFamily33BAA *this,float *param_1,float *param_2){
		int iVar1;
		iVar1 = FUN_001488f0(&(this->parent).parent.parent.field13_0x10,(int)param_1,(int)param_2);
		if (iVar1 == 0) {
		return;
		}
		UnkFamily33BA::FUN_001375a0(&this->parent,param_1,param_2,this->field29_0x90);
		return;
		}
		
	*/
	return;
}

void UnkFamily33BAA::FUN_0013e1a0(int* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33BAA::FUN_0013e1a0(UnkFamily33BAA *this,int *param_1,int param_2){
		int iVar1;
		iVar1 = FUN_0020bfb0(param_1,param_2,this,0xa0);
		UnkFamily33BA::FUN_0013e120(&this->parent,param_1,iVar1);
		return;
		}
		
	*/
	return;
}

void UnkFamily33BAA::FUN_0013ff20(uint param_1, void* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33BAA::FUN_0013ff20(UnkFamily33BAA *this,undefined4 param_1,void *param_2){
		uint unaff_retaddr;
		(*(code *)((this->parent).parent.parent.vtable)->field6_0x18)(param_2);
		FUN_0013f700(param_2,unaff_retaddr);
		return;
		}
		
	*/
	return;
}

uint UnkFamily33BAA::FUN_001434d0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily33BAA::FUN_001434d0(void){
		return 0x160a;
		}
		
	*/
	return 0;
}

void UnkFamily33BAA::Construct_11(float* param_1, float param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily33BAA * __thiscall UnkFamily33BAA::Construct(UnkFamily33BAA *this,float *param_1,float param_2,int param_3){
		int iVar1;
		undefined4 *puVar2;
		UnkFamily33B::Construct((UnkFamily33B *)this,(Vector4 *)param_1,param_2,0,param_3);
		(this->parent).parent.parent.vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_BA;
		iVar1 = (*(code *)PTR_FUN_00393514)();
		puVar2 = (undefined4 *)(*(code *)((this->parent).parent.parent.vtable)->field37_0x94)();
		if (0 < iVar1) {
		for (;
		 iVar1 != 0;
		 iVar1 = iVar1 + -1) {
		*puVar2 = 0;
		puVar2 = puVar2 + 1;
		}
		}
		this->field29_0x90 = param_3;
		(this->parent).parent.parent.vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_BAA;
		(this->parent).parent.parent.field19_0x40 = 0;
		return this;
		}
		
	*/
	return;
}

void UnkFamily33BAA::Construct_12(Vector4* param_1, Vector4* param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily33BAA * __thiscall UnkFamily33BAA::Construct(UnkFamily33BAA *this,Vector4 *param_1,Vector4 *param_2,int param_3){
		UnkFamily33BA::Construct(&this->parent,param_1,param_2,0,param_3);
		this->field29_0x90 = param_3;
		(this->parent).parent.parent.vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_BAA;
		(this->parent).parent.parent.field19_0x40 = 0;
		return this;
		}
		
	*/
	return;
}

void UnkFamily33BAA::Dispose_13() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily33BAA::Dispose(UnkFamily33BAA *this){
		(this->parent).parent.parent.vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_BAA;
		UnkFamily33BA::Dispose(&this->parent);
		return;
		}
		
	*/
	return;
}

