#include "headers/Known/Memory/VirtualPool/VirtualPoolExt.h"

void VirtualPoolExt::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall VirtualPoolExt::Construct(VirtualPoolExt *this){
		this->field7_0x10 = 0;
		this->field8_0x14 = 0;
		this->field9_0x18 = 0;
		this->field10_0x1c = (int **)0x0;
		this->field15_0x24 = 0;
		this->field16_0x28 = 0;
		this->field17_0x2c = 0;
		return;
		}
		
	*/
	return;
}

void VirtualPoolExt::FUN_001598b0(void* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall VirtualPoolExt::FUN_001598b0(VirtualPoolExt *this,void *param_1){
		int *piVar1;
		int **ppiVar2;
		int **ppiVar3;
		uint uVar4;
		uVar4 = (uint)((int)param_1 - (int)this->end1) >> 0xc;
		ppiVar3 = this->start + uVar4 * 8;
		if (param_1 != (void *)0x0) {
		piVar1 = ppiVar3[3];
		ppiVar3[3] = (int *)param_1;
		*(int **)param_1 = piVar1;
		ppiVar3[5] = (int *)((int)ppiVar3[5] + 1);
		}
		uVar4 = (uint)*(ushort *)((int)this->end2 + uVar4 * 2);
		if (ppiVar3[4] == ppiVar3[5]) {
		ppiVar2 = this->field10_0x1c;
		this->field10_0x1c = ppiVar3;
		*ppiVar3 = (int *)ppiVar2;
		this->field15_0x24 = this->field15_0x24 + 1;
		FUN_00156c30((int)ppiVar3,(undefined4 *)(&this[1].field_0x0 + uVar4 * 4),0x18,0x1c);
		}
		else {
		ppiVar2 = (int **)(&this[1].field_0x0 + uVar4 * 4);
		if (ppiVar3 != (int **)*ppiVar2) {
		FUN_00156c30((int)ppiVar3,ppiVar2,0x18,0x1c);
		if (*ppiVar2 == (int *)0x0) {
		*ppiVar2 = (int *)ppiVar3;
		ppiVar3[6] = (int *)0x0;
		ppiVar3[7] = (int *)0x0;
		return;
		}
		(*ppiVar2)[6] = (int)ppiVar3;
		ppiVar3[7] = *ppiVar2;
		*ppiVar2 = (int *)ppiVar3;
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

