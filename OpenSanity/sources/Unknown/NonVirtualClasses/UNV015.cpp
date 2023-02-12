#include "headers/Unknown/NonVirtualClasses/UNV015.h"

UNV015* UNV015::ParentConstruct(ushort param_1, ushort param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UNV015 * __thiscall UNV015::ParentConstruct(UNV015 *this,ushort param_1,ushort param_2){
		int *piVar1;
		undefined4 *puVar2;
		int iVar3;
		 Separate later *(ushort *)this = param_1;
		*(ushort *)&this->field_0x2 = param_2;
		iVar3 = (uint)param_2 + (uint)param_1;
		piVar1 = (int *)VirtualPool::AllocateMemory(iVar3 * 0x20 + 0x10);
		if (piVar1 == (int *)0x0) {
		piVar1 = (int *)0x0;
		}
		else {
		*piVar1 = iVar3;
		piVar1 = piVar1 + 4;
		}
		*(int **)&this->field_0x4 = piVar1;
		puVar2 = (undefined4 *)VirtualPool::AllocateMemory(iVar3 * 4);
		this->array = puVar2;
		for (;
		 iVar3 != 0;
		 iVar3 = iVar3 + -1) {
		*puVar2 = 0;
		puVar2 = puVar2 + 1;
		}
		for (iVar3 = 0;
		 iVar3 != 0;
		 iVar3 = iVar3 + -1) {
		*(undefined *)puVar2 = 0;
		puVar2 = (undefined4 *)((int)puVar2 + 1);
		}
		return this;
		}
		
	*/
	return null;
}

void UNV015::Set(uint value, int index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UNV015::Set(UNV015 *this,undefined4 value,int index){
		this->array[index] = value;
		return;
		}
		
	*/
	return;
}

void UNV015::FUN_00136df0(uint* param_1, int param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UNV015::FUN_00136df0(UNV015 *this,undefined4 *param_1,int param_2,undefined4 param_3){
		int iVar1;
		int iVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		fVar5 = FLOAT_00386ab4;
		iVar1 = *(int *)&this->field_0x4;
		iVar2 = param_2 * 0x20;
		*(undefined4 *)(iVar1 + iVar2) = *param_1;
		*(undefined4 *)(iVar1 + 4 + iVar2) = param_1[1];
		iVar1 = iVar1 + iVar2;
		*(undefined4 *)(iVar1 + 8) = param_1[2];
		*(undefined4 *)(iVar1 + 0xc) = param_1[3];
		*(undefined4 *)(iVar1 + 0x10) = param_1[4];
		*(undefined4 *)(iVar1 + 0x14) = param_1[5];
		*(undefined4 *)(iVar1 + 0x18) = param_1[6];
		*(undefined4 *)(iVar1 + 0x1c) = param_1[7];
		iVar1 = *(int *)&this->field_0x4;
		fVar4 = (*(float *)(iVar1 + 4 + iVar2) - *(float *)(iVar1 + 0x14 + iVar2)) * fVar5;
		fVar3 = (*(float *)(iVar1 + iVar2) - *(float *)(iVar1 + 0x10 + iVar2)) * fVar5;
		fVar5 = (*(float *)(iVar1 + 8 + iVar2) - *(float *)(iVar1 + 0x18 + iVar2)) * fVar5;
		*(float *)(iVar1 + iVar2 + 0xc) = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
		*(undefined4 *)(*(int *)&this->field_0x4 + 0x1c + iVar2) = param_3;
		return;
		}
		
	*/
	return;
}

void UNV015::Construct(int param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UNV015 * __thiscall UNV015::Construct(UNV015 *this,int param_1,int param_2){
		void *pvVar1;
		ParentConstruct(this,(ushort)param_1,(ushort)param_2);
		this->field9_0xc = 0;
		BoundingBox::SetInfiniteSizes(&this->bb);
		pvVar1 = VirtualPool::AllocateMemory((param_1 + param_2) * 0x40);
		this->field9_0xc = pvVar1;
		return this;
		}
		
	*/
	return;
}

