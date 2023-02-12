#include "headers/Unknown/AutoClasses/AutoClass44.h"

char AutoClass44::FUN_001027a0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	char __thiscall AutoClass44::FUN_001027a0(AutoClass44 *this,int param_1){
		char cVar1;
		int *piVar2;
		uint uVar3;
		int *piVar4;
		if (*(char *)&this[1].vertexAttributeFormat != '\0') {
		return '\x01';
		}
		uVar3 = 0;
		cVar1 = '\0';
		piVar4 = (int *)(param_1 + 0x18);
		piVar2 = &this->field2_0x8;
		while( true ) {
		if (cVar1 != '\0') {
		return cVar1;
		}
		if ((((*piVar2 != *(int *)((param_1 - (int)this) + (int)piVar2)) || (piVar2[-1] != piVar4[-5]))|| (piVar2[-2] != piVar4[-6])) ||((((piVar2[4] != *piVar4 || (piVar2[3] != piVar4[-1])) ||((piVar2[2] != piVar4[-2] || ((piVar2[8] != piVar4[4] || (piVar2[7] != piVar4[3])))))) ||(piVar2[6] != piVar4[2])))) break;
		if (((piVar2[0xc] != piVar4[8]) || (piVar2[0xb] != piVar4[7])) || (piVar2[10] != piVar4[6])) {
		cVar1 = '\x01';
		}
		uVar3 = uVar3 + 4;
		piVar4 = piVar4 + 0x10;
		piVar2 = piVar2 + 0x10;
		if (0xf < uVar3) {
		return cVar1;
		}
		}
		return '\x01';
		}
		
	*/
	return 0;
}

void AutoClass44::FUN_00102850(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass44::FUN_00102850(AutoClass44 *this,uint *param_1){
		uint uVar1;
		*(undefined *)&this[1].vertexAttributeFormat = 1;
		uVar1 = *param_1;
		DAT_00402a08 = 1;
		_D3DDevice_SetVertexShaderInput@12((int *)0x0,(int *)0x0,(int **)0x0);
		_D3DDevice_SetVertexShader@4(uVar1);
		return;
		}
		
	*/
	return;
}

void AutoClass44::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall AutoClass44::Construct(AutoClass44 *this){
		undefined4 *puVar1;
		int iVar2;
		*(undefined *)&this[1].vertexAttributeFormat = 1;
		puVar1 = &this->field1_0x4;
		iVar2 = 0x10;
		do {
		puVar1[-1] = 0;
		puVar1[1] = 2;
		*puVar1 = 0;
		*(undefined *)((int)puVar1 + 9) = 0;
		*(undefined *)(puVar1 + 2) = 0;
		puVar1 = puVar1 + 4;
		iVar2 = iVar2 + -1;
		}
		 while (iVar2 != 0);
		return;
		}
		
	*/
	return;
}

