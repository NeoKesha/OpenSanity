#include "headers/Known/Memory/PhysicalPool/PhysicalPoolElement.h"

void PhysicalPoolElement::FUN_00156ae0(PhysicalPoolElement** param_2, int param_3, int param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __cdecl PhysicalPoolElement::FUN_00156ae0(PhysicalPoolElement *this,PhysicalPoolElement **param_2,int param_3,int param_4){
		int iVar1;
		int iVar2;
		iVar1 = *(int *)((int)&this->bufferIndex + param_3);
		if (iVar1 != 0) {
		iVar2 = *(int *)((int)&this->bufferIndex + param_4);
		if (iVar2 == 0) {
		*(undefined4 *)(iVar1 + param_4) = 0;
		*(undefined4 *)((int)&this->bufferIndex + param_4) = 0;
		*(undefined4 *)((int)&this->bufferIndex + param_3) = 0;
		return;
		}
		*(int *)(iVar1 + param_4) = iVar2;
		*(undefined4 *)(param_3 + *(int *)((int)&this->bufferIndex + param_4)) =*(undefined4 *)((int)&this->bufferIndex + param_3);
		*(undefined4 *)((int)&this->bufferIndex + param_4) = 0;
		*(undefined4 *)((int)&this->bufferIndex + param_3) = 0;
		return;
		}
		iVar1 = *(int *)((int)&this->bufferIndex + param_4);
		if (iVar1 == 0) {
		*param_2 = (PhysicalPoolElement *)0x0;
		*(undefined4 *)((int)&this->bufferIndex + param_4) = 0;
		*(undefined4 *)((int)&this->bufferIndex + param_3) = 0;
		return;
		}
		*(undefined4 *)(iVar1 + param_3) = 0;
		*param_2 = *(PhysicalPoolElement **)((int)&this->bufferIndex + param_4);
		*(undefined4 *)((int)&this->bufferIndex + param_4) = 0;
		*(undefined4 *)((int)&this->bufferIndex + param_3) = 0;
		return;
		}
		
	*/
	return;
}

void PhysicalPoolElement::Init() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void PhysicalPoolElement::Init(PhysicalPoolElement *this){
		int iVar1;
		uint uVar2;
		int extraout_ECX;
		int extraout_EDX;
		uVar2 = AlignUnknown(this->length);
		*(int *)(extraout_ECX + 0x4c) = *(int *)(extraout_ECX + 0x4c) + 1;
		iVar1 = *(int *)(extraout_ECX + 0xc + uVar2 * 4);
		if (iVar1 == 0) {
		*(int *)(extraout_ECX + 0xc + uVar2 * 4) = extraout_EDX;
		*(undefined4 *)(extraout_EDX + 0x14) = 0;
		*(undefined4 *)(extraout_EDX + 0x18) = 0;
		}
		else {
		*(int *)(iVar1 + 0x14) = extraout_EDX;
		*(undefined4 *)(extraout_EDX + 0x18) = *(undefined4 *)(extraout_ECX + 0xc + uVar2 * 4);
		*(int *)(extraout_ECX + 0xc + uVar2 * 4) = extraout_EDX;
		}
		if ((*(int *)(extraout_ECX + 8) == 0) ||(*(uint *)(extraout_EDX + 4) < *(uint *)(*(int *)(extraout_ECX + 8) + 4))) {
		*(int *)(extraout_ECX + 8) = extraout_EDX;
		}
		return;
		}
		
	*/
	return;
}

void PhysicalPoolElement::FUN_0015a8f0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void PhysicalPoolElement::FUN_0015a8f0(PhysicalPoolElement *this){
		uint uVar1;
		int iVar2;
		uint uVar3;
		int extraout_ECX;
		int extraout_EDX;
		int iVar4;
		uVar1 = this->length;
		uVar3 = AlignUnknown(uVar1);
		iVar2 = *(int *)(extraout_ECX + 0xc + uVar3 * 4);
		if (iVar2 != 0) {
		do {
		iVar4 = iVar2;
		if (uVar1 <= *(uint *)(iVar4 + 8) && *(uint *)(iVar4 + 8) != uVar1) {
		*(int *)(extraout_ECX + 0x4c) = *(int *)(extraout_ECX + 0x4c) + 1;
		iVar2 = *(int *)(iVar4 + 0x14);
		*(int *)(iVar4 + 0x14) = extraout_EDX;
		*(int *)(extraout_EDX + 0x18) = iVar4;
		if (iVar2 == 0) {
		*(undefined4 *)(extraout_EDX + 0x14) = 0;
		*(int *)(extraout_ECX + 0xc + uVar3 * 4) = extraout_EDX;
		}
		else {
		*(int *)(iVar2 + 0x18) = extraout_EDX;
		*(int *)(extraout_EDX + 0x14) = iVar2;
		}
		goto LAB_0015a985;
		}
		iVar2 = *(int *)(iVar4 + 0x18);
		}
		 while (*(int *)(iVar4 + 0x18) != 0);
		if (iVar4 != 0) {
		*(int *)(extraout_ECX + 0x4c) = *(int *)(extraout_ECX + 0x4c) + 1;
		iVar2 = *(int *)(iVar4 + 0x18);
		*(int *)(iVar4 + 0x18) = extraout_EDX;
		*(int *)(extraout_EDX + 0x14) = iVar4;
		if (iVar2 == 0) {
		*(undefined4 *)(extraout_EDX + 0x18) = 0;
		}
		else {
		*(int *)(iVar2 + 0x14) = extraout_EDX;
		*(int *)(extraout_EDX + 0x18) = iVar2;
		}
		goto LAB_0015a985;
		}
		}
		*(int *)(extraout_ECX + 0x4c) = *(int *)(extraout_ECX + 0x4c) + 1;
		iVar2 = *(int *)(extraout_ECX + 0xc + uVar3 * 4);
		if (iVar2 == 0) {
		*(int *)(extraout_ECX + 0xc + uVar3 * 4) = extraout_EDX;
		*(undefined4 *)(extraout_EDX + 0x14) = 0;
		*(undefined4 *)(extraout_EDX + 0x18) = 0;
		}
		else {
		*(int *)(iVar2 + 0x14) = extraout_EDX;
		*(undefined4 *)(extraout_EDX + 0x18) = *(undefined4 *)(extraout_ECX + 0xc + uVar3 * 4);
		*(int *)(extraout_ECX + 0xc + uVar3 * 4) = extraout_EDX;
		}
		LAB_0015a985:if ((*(int *)(extraout_ECX + 8) == 0) ||(*(uint *)(extraout_EDX + 4) < *(uint *)(*(int *)(extraout_ECX + 8) + 4))) {
		*(int *)(extraout_ECX + 8) = extraout_EDX;
		}
		return;
		}
		
	*/
	return;
}

