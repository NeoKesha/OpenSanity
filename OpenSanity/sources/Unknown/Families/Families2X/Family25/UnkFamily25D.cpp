#include "headers/Unknown/Families/Families2X/Family25/UnkFamily25D.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void UnkFamily25D::FUN_001007b0(float* param_1, float* param_2, float* param_3, float* param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily25D::FUN_001007b0(UnkFamily25D *this,float *param_1,float *param_2,float *param_3,float *param_4){
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
		if (param_4 == (float *)0x0) {
		fVar5 = *(float *)&this->field_0x30 - *param_1;
		fVar7 = *(float *)&this->field_0x34 - param_1[1];
		fVar8 = *(float *)&this->field_0x38 - param_1[2];
		}
		else {
		fVar5 = *param_4 - *param_1;
		fVar7 = param_4[1] - param_1[1];
		fVar8 = param_4[2] - param_1[2];
		}
		fVar9 = FLOAT_0039f5fc / (fVar5 * fVar5 + fVar7 * fVar7 + fVar8 * fVar8 + FLOAT_0039f5fc);
		*param_2 = fVar5 * fVar9;
		param_2[1] = fVar7 * fVar9;
		param_2[2] = fVar8 * fVar9;
		param_2[3] = fVar6;
		iVar2 = (int)*(short *)&this->field_0x80;
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
		fVar6 = (0.0 - *(float *)&this->field_0x68) * fVar8 * fVar9 +(0.0 - *(float *)&this->field_0x64) * fVar7 * fVar9 +(0.0 - *(float *)&this->field_0x60) * fVar5 * fVar9;
		if (*(float *)&this->field_0x74 <= fVar6) {
		if (fVar6 < *(float *)&this->field_0x70) {
		fVar5 = (fVar6 - *(float *)&this->field_0x74) /(*(float *)&this->field_0x70 - *(float *)&this->field_0x74);
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
		if ((uVar1 & *(ushort *)&this->field_0x82) != 0) {
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

void UnkFamily25D::FUN_00106c10() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25D::FUN_00106c10(UnkFamily25D *this){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		int local_84;
		float local_80;
		float local_74;
		float local_70;
		float local_6c;
		float local_68;
		float local_60;
		float local_5c;
		float local_58;
		local_80 = *(float *)&this->field_0x14 * FLOAT_0038d38c;
		local_84 = (int)((FLOAT_003863a8 / FLOAT_0039f4c0) *(float)*(int *)&this->field_0x78 * FLOAT_0039f4c0 * FLOAT_003863a0) +(int)((FLOAT_003863a8 / FLOAT_0039f4c0) *(float)*(int *)&this->field_0x7c * FLOAT_0039f4c0 * FLOAT_003863a0);
		local_74 = FUN_000d2b60(&local_84);
		local_74 = local_74 * local_80;
		FUN_000dc410(&local_60,&local_70);
		fVar5 = local_68 * local_5c - local_6c * local_58;
		fVar8 = local_58 * local_70 - local_68 * local_60;
		fVar6 = local_6c * local_60 - local_5c * local_70;
		fVar1 = local_6c * local_6c + local_68 * local_68 + local_70 * local_70;
		if (fVar1 <= DAT_0039f538) {
		fVar1 = 0.0;
		}
		else {
		fVar1 = FLOAT_0038639c / SQRT(fVar1);
		}
		local_70 = local_70 * fVar1;
		fVar2 = fVar6 * fVar6 + fVar8 * fVar8 + fVar5 * fVar5;
		if (fVar2 <= DAT_0039f538) {
		fVar2 = 0.0;
		}
		else {
		fVar2 = FLOAT_0038639c / SQRT(fVar2);
		}
		fVar3 = *(float *)&this->field_0x68 * local_80;
		fVar5 = fVar5 * fVar2 * fVar5 * fVar2;
		fVar9 = local_80 * *(float *)&this->field_0x60;
		local_80 = *(float *)&this->field_0x64 * local_80;
		fVar4 = fVar9 - SQRT(local_70 * local_70 + fVar5) * local_74;
		fVar7 = local_6c * fVar1 * local_6c * fVar1 + fVar8 * fVar2 * fVar8 * fVar2;
		fVar8 = local_80 - SQRT(fVar7) * local_74;
		fVar6 = local_68 * fVar1 * local_68 * fVar1 + fVar6 * fVar2 * fVar6 * fVar2;
		fVar1 = fVar3 - SQRT(fVar6) * local_74;
		fVar9 = SQRT(local_70 * local_70 + fVar5) * local_74 + fVar9;
		local_80 = SQRT(fVar7) * local_74 + local_80;
		fVar3 = SQRT(fVar6) * local_74 + fVar3;
		local_60 = 0.0;
		local_5c = 0.0;
		local_70 = 0.0;
		if (fVar4 < 0.0) {
		local_70 = fVar4;
		}
		if (0.0 < fVar4) {
		local_60 = fVar4;
		}
		if (fVar9 < local_70) {
		local_70 = fVar9;
		}
		if (local_60 < fVar9) {
		local_60 = fVar9;
		}
		fVar5 = 0.0;
		if (fVar8 < 0.0) {
		fVar5 = fVar8;
		}
		if (0.0 < fVar8) {
		local_5c = fVar8;
		}
		if (local_80 < fVar5) {
		fVar5 = local_80;
		}
		if (local_5c < local_80) {
		local_5c = local_80;
		}
		fVar6 = 0.0;
		if (fVar1 < 0.0) {
		fVar6 = fVar1;
		}
		fVar8 = 0.0;
		if (0.0 < fVar1) {
		fVar8 = fVar1;
		}
		if (fVar3 < fVar6) {
		fVar6 = fVar3;
		}
		if (fVar8 < fVar3) {
		fVar8 = fVar3;
		}
		*(float *)&this->field_0x40 = *(float *)&this->field_0x30 + local_70;
		*(float *)&this->field_0x44 = *(float *)&this->field_0x34 + fVar5;
		*(float *)&this->field_0x48 = *(float *)&this->field_0x38 + fVar6;
		*(undefined4 *)&this->field_0x4c = 0;
		*(float *)&this->field_0x50 = *(float *)&this->field_0x30 + local_60;
		*(float *)&this->field_0x54 = *(float *)&this->field_0x34 + local_5c;
		*(float *)&this->field_0x58 = *(float *)&this->field_0x38 + fVar8;
		*(undefined4 *)&this->field_0x5c = 0;
		return;
		}
		
	*/
	return;
}

int* UnkFamily25D::FUN_00100680(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall UnkFamily25D::FUN_00100680(UnkFamily25D *this,int param_1){
		*(undefined4 *)&this->field_0x60 = *(undefined4 *)(param_1 + 0x60);
		*(undefined4 *)&this->field_0x64 = *(undefined4 *)(param_1 + 100);
		*(undefined4 *)&this->field_0x68 = *(undefined4 *)(param_1 + 0x68);
		*(undefined4 *)&this->field_0x6c = *(undefined4 *)(param_1 + 0x6c);
		*(undefined4 *)&this->field_0x78 = *(undefined4 *)(param_1 + 0x78);
		*(undefined4 *)&this->field_0x7c = *(undefined4 *)(param_1 + 0x7c);
		*(undefined2 *)&this->field_0x80 = *(undefined2 *)(param_1 + 0x80);
		*(undefined2 *)&this->field_0x82 = *(undefined2 *)(param_1 + 0x82);
		*(undefined4 *)&this->field_0x70 = *(undefined4 *)(param_1 + 0x70);
		*(undefined4 *)&this->field_0x74 = *(undefined4 *)(param_1 + 0x74);
		(*(code *)((this->parent).vtable)->field6_0x18)(param_1);
		return (int *)this;
		}
		
	*/
	return null;
}

void UnkFamily25D::FUN_001132e0(MemoryStream* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily25D::FUN_001132e0(UnkFamily25D *this,MemoryStream *param_1){
		UnkFamily25Abstract::FUN_0010e540(&this->parent,(int *)param_1);
		(*param_1->vtable->Read)(param_1,(int *)&this->field_0x60,0x10,1);
		(*param_1->vtable->ReadFloat)(param_1,(float *)&this->field_0x70);
		(*param_1->vtable->ReadFloat)(param_1,(float *)&this->field_0x74);
		MemoryStream::ReadInt2(param_1,&this->field_0x78);
		MemoryStream::ReadInt2(param_1,&this->field_0x7c);
		(*param_1->vtable->ReadShort)(param_1,(short *)&this->field_0x80);
		(*param_1->vtable->ReadShort)(param_1,(short *)&this->field_0x82);
		return;
		}
		
	*/
	return;
}

void UnkFamily25D::FUN_00113350(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily25D::FUN_00113350(UnkFamily25D *this,int *param_1){
		UnkFamily25Abstract::FUN_0010e5b0(&this->parent,param_1);
		(**(code **)(*param_1 + 0xc))(&this->field_0x60,0x10);
		(**(code **)(*param_1 + 100))(*(undefined4 *)&this->field_0x70);
		(**(code **)(*param_1 + 100))(*(undefined4 *)&this->field_0x74);
		MemoryStream::WriteInt((MemoryStream *)param_1,&this->field_0x78);
		MemoryStream::WriteInt((MemoryStream *)param_1,&this->field_0x7c);
		(**(code **)(*param_1 + 0x74))(*(undefined2 *)&this->field_0x80);
		(**(code **)(*param_1 + 0x74))(*(undefined2 *)&this->field_0x82);
		return;
		}
		
	*/
	return;
}

uint UnkFamily25D::FUN_001133c0(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall UnkFamily25D::FUN_001133c0(UnkFamily25D *this,int **param_1){
		bool bVar1;
		uint uVar2;
		UnkFamily25Abstract::FUN_0010e610(&this->parent,param_1);
		if (param_1[1] == (int *)0x0) {
		UnkFamily27Wrapper::FUN_000f3500((UnkFamily27Wrapper *)param_1,&this->field_0x60,0x97a,0);
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 == false) goto LAB_00113429;
		if (param_1[1] != (int *)0x0) {
		if (param_1[1] == (int *)0x1) {
		(**(code **)(**param_1 + 0x28))(0x97b,*(undefined2 *)&this->field_0x80);
		}
		goto LAB_00113429;
		}
		}
		else {
		UnkFamily27Wrapper::FUN_000f3500((UnkFamily27Wrapper *)param_1,&this->field_0x60,0x97a,0);
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 == false) goto LAB_00113429;
		if (param_1[1] != (int *)0x0) {
		if (param_1[1] == (int *)0x1) {
		(**(code **)(**param_1 + 0x28))(0x97b,*(undefined2 *)&this->field_0x80);
		}
		goto LAB_00113429;
		}
		}
		(**(code **)(**param_1 + 0x78))(0x97b,&this->field_0x80);
		LAB_00113429:FUN_0011aec0(param_1,&this->field_0x78,0x97c,0);
		FUN_0011aec0(param_1,&this->field_0x7c,0x97d,0);
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 != false) {
		if (param_1[1] == (int *)0x0) {
		(**(code **)(**param_1 + 0x78))(0x97e,&this->field_0x82);
		}
		else if (param_1[1] == (int *)0x1) {
		(**(code **)(**param_1 + 0x28))(0x97e,*(undefined2 *)&this->field_0x82);
		}
		}
		FUN_000f2a20(param_1,(undefined4 *)&this->field_0x70,0x97f);
		uVar2 = FUN_000f2a20(param_1,(undefined4 *)&this->field_0x74,0x980);
		return CONCAT31((int3)(uVar2 >> 8),1);
		}
		
	*/
	return 0;
}

void UnkFamily25D::FUN_001170c0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily25D::FUN_001170c0(UnkFamily25D *this){
		*(undefined *)&(this->parent).field13_0x10 = 3;
		return;
		}
		
	*/
	return;
}

void UnkFamily25D::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily25D::Dispose(UnkFamily25D *this,byte param_1){
		UnkFamily25D *pUVar1;
		int iVar2;
		if ((param_1 & 2) == 0) {
		(this->parent).vtable = (UnkFamily25Abstract_VTable *)&UnkFamily25_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		iVar2 = *(int *)&this[-1].field_0x80;
		pUVar1 = this + iVar2;
		if (-1 < iVar2 + -1) {
		do {
		pUVar1 = pUVar1 + -1;
		iVar2 = iVar2 + -1;
		(pUVar1->parent).vtable = (UnkFamily25Abstract_VTable *)&UnkFamily25_VT_Abstract;
		}
		 while (iVar2 != 0);
		}
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(&this[-1].field_0x80);
		}
		return (undefined4 *)&this[-1].field_0x80;
		}
		
	*/
	return;
}

