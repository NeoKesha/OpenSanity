#include "headers/Unknown/Families/Families3X/Family33/UnkFamily33B.h"

#include "headers/Known/Math/Vector4.h"
void UnkFamily33B::FUN_00138bb0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33B::FUN_00138bb0(UnkFamily33B *this,int param_1){
		int *piVar1;
		int iVar2;
		int iVar3;
		int iVar4;
		iVar2 = (*(code *)((this->parent).vtable)->field35_0x8c)();
		iVar3 = (*(code *)((this->parent).vtable)->field37_0x94)();
		(this->parent).field19_0x40 = param_1;
		iVar4 = 0;
		if (0 < iVar2) {
		do {
		piVar1 = *(int **)(iVar3 + iVar4 * 4);
		if (piVar1 != (int *)0x0) {
		(**(code **)(*piVar1 + 0x2c))(param_1);
		}
		iVar4 = iVar4 + 1;
		}
		 while (iVar4 < iVar2);
		}
		return;
		}
		
	*/
	return;
}

uint UnkFamily33B::FUN_00138d30() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __fastcall UnkFamily33B::FUN_00138d30(UnkFamily33B *this){
		uint in_EAX;
		int iVar1;
		int *piVar2;
		int *piVar3;
		int iVar4;
		byte bVar5;
		bVar5 = (this->parent).list1 != (undefined *)0x0;
		if ((bool)bVar5) {
		return in_EAX & 0xffffff00 | (uint)bVar5;
		}
		iVar1 = (*(code *)((this->parent).vtable)->field35_0x8c)();
		piVar2 = (int *)(*(code *)((this->parent).vtable)->field36_0x90)();
		iVar4 = 0;
		piVar3 = piVar2;
		if (0 < iVar1) {
		do {
		piVar3 = (int *)piVar2[iVar4];
		if (piVar3 != (int *)0x0) {
		piVar3 = (int *)(**(code **)(*piVar3 + 0x58))();
		bVar5 = (byte)piVar3;
		if (bVar5 != 0) break;
		}
		iVar4 = iVar4 + 1;
		}
		 while (iVar4 < iVar1);
		}
		return (uint)piVar3 & 0xffffff00 | (uint)bVar5;
		}
		
	*/
	return 0;
}

void UnkFamily33B::Construct(Vector4* param_1, float param_2, uint param_3, uint param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily33B * __thiscall UnkFamily33B::Construct(UnkFamily33B *this,Vector4 *param_1,float param_2,undefined4 param_3,undefined *param_4){
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
		(this->parent).vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_B;
		this->field13_0x60 = param_4;
		return this;
		}
		
	*/
	return;
}

void UnkFamily33B::Construct_3(Vector4* param_1, Vector4* param_2, uint param_3, uint param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily33B * __thiscall UnkFamily33B::Construct(UnkFamily33B *this,Vector4 *param_1,Vector4 *param_2,undefined4 param_3,undefined *param_4){
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
		(this->parent).field17_0x38 = param_3;
		(this->parent).field18_0x3c = 0;
		(this->parent).field19_0x40 = 0;
		fVar1 = param_2->y;
		fVar2 = param_1->x;
		fVar3 = param_1->z;
		fVar4 = param_1->y;
		fVar5 = param_1->z;
		fVar6 = param_2->x;
		fVar7 = param_1->y;
		fVar8 = param_2->z;
		fVar9 = param_2->y;
		fVar10 = param_2->z;
		(this->parent).field13_0x10.x = param_1->x - param_2->x;
		fVar11 = FLOAT_0038639c;
		(this->parent).field13_0x10.y = fVar4 - fVar9;
		(this->parent).field13_0x10.z = fVar5 - fVar10;
		(this->parent).field13_0x10.w = fVar11;
		(this->parent).field14_0x20.x = fVar2 + fVar6;
		(this->parent).field14_0x20.y = fVar1 + fVar7;
		(this->parent).field14_0x20.z = fVar3 + fVar8;
		(this->parent).field14_0x20.w = fVar11;
		(this->parent).field20_0x44 = 0;
		(this->parent).field21_0x48 = 0;
		(this->parent).field22_0x4c = 0;
		(this->parent).field23_0x50 = 0;
		(this->parent).vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_B;
		this->field13_0x60 = param_4;
		return this;
		}
		
	*/
	return;
}

void UnkFamily33B::FUN_0013fd60(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33B::FUN_0013fd60(UnkFamily33B *this,int *param_1){
		int *piVar1;
		int *piVar2;
		char cVar3;
		int iVar4;
		int iVar5;
		int iVar6;
		cVar3 = (*(code *)((this->parent).vtable)->field22_0x58)();
		piVar2 = param_1;
		if (cVar3 != '\0') {
		piVar1 = param_1 + 2;
		param_1 = (int *)this;
		FUN_00143220(*piVar1,&param_1);
		}
		iVar4 = (*(code *)((this->parent).vtable)->field35_0x8c)();
		iVar5 = (*(code *)((this->parent).vtable)->field36_0x90)();
		iVar6 = 0;
		if (0 < iVar4) {
		do {
		piVar1 = *(int **)(iVar5 + iVar6 * 4);
		if (piVar1 != (int *)0x0) {
		(**(code **)(*piVar1 + 0x18))(piVar2);
		}
		iVar6 = iVar6 + 1;
		}
		 while (iVar6 < iVar4);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily33B::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily33B * __thiscall UnkFamily33B::Dispose(UnkFamily33B *this,byte param_1){
		(this->parent).vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_B;
		UnkFamily33Abstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

int* UnkFamily33B::FUN_00138d90(short* param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall UnkFamily33B::FUN_00138d90(UnkFamily33B *this,short *param_1,undefined4 param_2){
		int iVar1;
		int *piVar2;
		if (*param_1 == -1) {
		return (int *)this;
		}
		iVar1 = (*(code *)((this->parent).vtable)->field37_0x94)();
		if ((*(int *)(iVar1 + *param_1 * 4) == 0) && ((char)param_2 != '\0')) {
		(*(code *)((this->parent).vtable)->field33_0x84)((int)*param_1,this->field13_0x60);
		}
		piVar2 = (int *)(**(code **)(**(int **)(iVar1 + *param_1 * 4) + 0x7c))(param_1 + 1,param_2);
		return piVar2;
		}
		
	*/
	return null;
}

void UnkFamily33B::FUN_00138df0(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33B::FUN_00138df0(UnkFamily33B *this,uint param_1){
		byte *pbVar1;
		int *piVar2;
		int iVar3;
		int iVar4;
		int iVar5;
		pbVar1 = (byte *)((int)&(this->parent).field20_0x44 + (param_1 >> 3));
		*pbVar1 = *pbVar1 | '\x01' << ((byte)param_1 & 7);
		iVar3 = (*(code *)((this->parent).vtable)->field37_0x94)();
		iVar5 = 0;
		iVar4 = (*(code *)((this->parent).vtable)->field35_0x8c)();
		if (0 < iVar4) {
		do {
		piVar2 = *(int **)(iVar3 + iVar5 * 4);
		if (piVar2 != (int *)0x0) {
		(**(code **)(*piVar2 + 0x88))(param_1);
		}
		iVar5 = iVar5 + 1;
		iVar4 = (*(code *)((this->parent).vtable)->field35_0x8c)();
		}
		 while (iVar5 < iVar4);
		}
		return;
		}
		
	*/
	return;
}

int* UnkFamily33B::FUN_0013be30(short* param_1, int param_2, int param_3, uint param_4, int param_5, uint param_6, uint param_7) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall UnkFamily33B::FUN_0013be30(UnkFamily33B *this,short *param_1,int param_2,int param_3,undefined4 param_4,int param_5,undefined4 param_6,undefined4 param_7){
		int iVar1;
		int *piVar2;
		if (*param_1 == -1) {
		if ((param_2 != 0) || (param_2 = param_3, param_3 != 0)) {
		*(int *)(*(int *)((this->parent).field18_0x3c + 8) + param_5 * 4) = param_2;
		}
		return (int *)this;
		}
		iVar1 = (*(code *)((this->parent).vtable)->field37_0x94)();
		piVar2 = (int *)(**(code **)(**(int **)(iVar1 + *param_1 * 4) + 0x74))(param_1 + 1,param_2,param_3,param_4,param_5,param_6,param_7);
		return piVar2;
		}
		
	*/
	return null;
}

uint UnkFamily33B::FUN_0013d860(int param_1, int* param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkFamily33B::FUN_0013d860(UnkFamily33B *this,int param_1,int *param_2,int param_3){
		int *piVar1;
		int iVar2;
		int iVar3;
		int iVar4;
		int iVar5;
		uint uVar6;
		int iVar7;
		uVar6 = 0;
		if (param_1 == 1) {
		uVar6 = UnkFamily33Abstract::FUN_0013c5e0(&this->parent,param_2,param_3);
		iVar2 = (*(code *)((this->parent).vtable)->field35_0x8c)();
		iVar3 = (*(code *)((this->parent).vtable)->field37_0x94)();
		iVar7 = 0;
		if (0 < iVar2) {
		do {
		piVar1 = *(int **)(iVar3 + iVar7 * 4);
		if (piVar1 != (int *)0x0) {
		iVar4 = (**(code **)(*piVar1 + 8))(1,param_2,param_3);
		uVar6 = uVar6 + iVar4;
		}
		iVar7 = iVar7 + 1;
		}
		 while (iVar7 < iVar2);
		}
		}
		else {
		(**(code **)(*param_2 + 8))(&(this->parent).field13_0x10);
		iVar2 = param_2[0x43];
		if (iVar2 != 0) {
		uVar6 = UnkFamily33Abstract::FUN_0013c650(&this->parent,param_2,(int)param_2);
		iVar3 = (*(code *)((this->parent).vtable)->field35_0x8c)();
		iVar7 = (*(code *)((this->parent).vtable)->field37_0x94)();
		iVar4 = 0;
		if (0 < iVar3) {
		do {
		piVar1 = *(int **)(iVar7 + iVar4 * 4);
		if (piVar1 != (int *)0x0) {
		iVar5 = (**(code **)(*piVar1 + 8))(iVar2,param_2,param_2);
		uVar6 = uVar6 + iVar5;
		}
		iVar4 = iVar4 + 1;
		}
		 while (iVar4 < iVar3);
		}
		return uVar6;
		}
		}
		return uVar6;
		}
		
	*/
	return 0;
}

int* UnkFamily33B::FUN_0013d950(short* param_1, int param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall UnkFamily33B::FUN_0013d950(UnkFamily33B *this,short *param_1,int param_2,undefined4 param_3){
		int iVar1;
		int *piVar2;
		if (*param_1 == -1) {
		FUN_0013c7d0((int)this,(InstanceContext *)param_2);
		return (int *)this;
		}
		iVar1 = (*(code *)((this->parent).vtable)->field37_0x94)();
		if (*(int *)(iVar1 + *param_1 * 4) == 0) {
		(*(code *)((this->parent).vtable)->field33_0x84)((int)*param_1,this->field13_0x60);
		}
		piVar2 = (int *)(**(code **)(**(int **)(iVar1 + *param_1 * 4) + 0x78))(param_1 + 1,param_2,param_3);
		return piVar2;
		}
		
	*/
	return null;
}

void UnkFamily33B::FUN_0013d9c0(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33B::FUN_0013d9c0(UnkFamily33B *this,undefined4 param_1){
		int *piVar1;
		int iVar2;
		int iVar3;
		int iVar4;
		UnkFamily33Abstract::FUN_0013c6c0(&this->parent,(char)param_1);
		iVar2 = (*(code *)((this->parent).vtable)->field35_0x8c)();
		iVar3 = (*(code *)((this->parent).vtable)->field37_0x94)();
		iVar4 = 0;
		if (0 < iVar2) {
		do {
		piVar1 = *(int **)(iVar3 + iVar4 * 4);
		if (piVar1 != (int *)0x0) {
		(**(code **)(*piVar1 + 0x40))(param_1);
		}
		iVar4 = iVar4 + 1;
		}
		 while (iVar4 < iVar2);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily33B::FUN_0013da10(int* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33B::FUN_0013da10(UnkFamily33B *this,int *param_1,int param_2){
		int iVar1;
		iVar1 = FUN_0020bfb0(param_1,param_2,this,0x70);
		iVar1 = FUN_0020bfb0(param_1,iVar1,this,0x60);
		FUN_001429e0((ushort **)&(this->parent).field18_0x3c,iVar1,(int)this,param_1);
		return;
		}
		
	*/
	return;
}

void UnkFamily33B::FUN_0013fdc0(float* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33B::FUN_0013fdc0(UnkFamily33B *this,float *param_1,int param_2){
		int *piVar1;
		int iVar2;
		int iVar3;
		int iVar4;
		iVar2 = (*(code *)((this->parent).vtable)->field35_0x8c)();
		iVar3 = (*(code *)((this->parent).vtable)->field36_0x90)();
		iVar4 = UnkFamily33Abstract::FUN_0013f470(&this->parent,param_1,param_2);
		if ((iVar4 != 0) && (iVar4 = 0, 0 < iVar2)) {
		do {
		piVar1 = *(int **)(iVar3 + iVar4 * 4);
		if (piVar1 != (int *)0x0) {
		(**(code **)(*piVar1 + 0x14))(param_1,param_2);
		}
		iVar4 = iVar4 + 1;
		}
		 while (iVar4 < iVar2);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily33B::FUN_0013fe30(int param_1, int* param_2, uint param_3, int* param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33B::FUN_0013fe30(UnkFamily33B *this,int param_1,int *param_2,uint param_3,int *param_4){
		int *piVar1;
		int iVar2;
		int iVar3;
		int iVar4;
		int iVar5;
		if (param_1 == 1) {
		FUN_0013f1f0((int)this,param_2,param_3);
		iVar2 = (*(code *)((this->parent).vtable)->field35_0x8c)();
		iVar3 = (*(code *)((this->parent).vtable)->field37_0x94)();
		iVar4 = 0;
		if (0 < iVar2) {
		do {
		piVar1 = *(int **)(iVar3 + iVar4 * 4);
		if (piVar1 != (int *)0x0) {
		(**(code **)(*piVar1 + 0xc))(1,param_2,param_3,param_4);
		}
		iVar4 = iVar4 + 1;
		}
		 while (iVar4 < iVar2);
		return;
		}
		}
		else {
		FUN_0013f2c0((int)this,param_2,param_3,param_4);
		(**(code **)(*param_4 + 8))(&(this->parent).field13_0x10);
		iVar2 = param_4[0x43];
		if (iVar2 != 0) {
		iVar3 = (*(code *)((this->parent).vtable)->field35_0x8c)();
		iVar4 = (*(code *)((this->parent).vtable)->field37_0x94)();
		iVar5 = 0;
		if (0 < iVar3) {
		do {
		piVar1 = *(int **)(iVar4 + iVar5 * 4);
		if (piVar1 != (int *)0x0) {
		(**(code **)(*piVar1 + 0xc))(iVar2,param_1,param_2,param_4);
		}
		iVar5 = iVar5 + 1;
		}
		 while (iVar5 < iVar3);
		}
		}
		}
		return;
		}
		
	*/
	return;
}

uint UnkFamily33B::FUN_00143130() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily33B::FUN_00143130(void){
		return 0;
		}
		
	*/
	return 0;
}

uint UnkFamily33B::FUN_00143140() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily33B::FUN_00143140(void){
		return 0;
		}
		
	*/
	return 0;
}

uint UnkFamily33B::FUN_00143150() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily33B::FUN_00143150(void){
		return 0;
		}
		
	*/
	return 0;
}

void UnkFamily33B::FUN_00143160() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily33B::FUN_00143160(void){
		return 0;
		}
		
	*/
	return;
}

uint UnkFamily33B::FUN_00143170() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined * __fastcall UnkFamily33B::FUN_00143170(UnkFamily33B *this){
		return this->field13_0x60;
		}
		
	*/
	return 0;
}

void UnkFamily33B::Construct_20(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily33B * __thiscall UnkFamily33B::Construct(UnkFamily33B *this,int *param_1){
		(this->parent).list1 = (undefined *)0x0;
		(this->parent).list2 = (undefined *)0x0;
		(this->parent).field17_0x38 = 0;
		(this->parent).field18_0x3c = 0;
		(this->parent).field19_0x40 = 0;
		(this->parent).field20_0x44 = 0;
		(this->parent).field21_0x48 = 0;
		(this->parent).field22_0x4c = 0;
		(this->parent).field23_0x50 = 0;
		(this->parent).vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_B;
		UnkFamily33Abstract::FUN_0013c340(&this->parent,param_1);
		return this;
		}
		
	*/
	return;
}

