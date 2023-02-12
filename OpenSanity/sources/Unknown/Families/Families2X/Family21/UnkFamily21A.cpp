#include "headers/Unknown/Families/Families2X/Family21/UnkFamily21A.h"

void UnkFamily21A::Construct(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily21A * __thiscall UnkFamily21A::Construct(UnkFamily21A *this,undefined4 param_1,undefined4 param_2){
		(this->parent).field7_0x10 = param_2;
		(this->parent).field_0x4 = 0;
		(this->parent).str = "FILL ME";
		(this->parent).field6_0xc = param_1;
		(this->parent).vtable = (UnkFamily21Base_VTable *)&UnkFamily21_VT_A;
		FUN_00156250(&this->field1_0x14,(int *)&DAT_0000000a);
		return this;
		}
		
	*/
	return;
}

void UnkFamily21A::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily21A::Dispose(UnkFamily21A *this){
		undefined4 *puVar1;
		puVar1 = (undefined4 *)this->field1_0x14;
		(this->parent).vtable = (UnkFamily21Base_VTable *)&UnkFamily21_VT_A;
		if (puVar1 != (undefined4 *)0x0) {
		if (puVar1[-1] != 0) {
		(**(code **)*puVar1)(3);
		(this->parent).vtable = (UnkFamily21Base_VTable *)&UnkFamily21_VT_Base;
		return;
		}
		VirtualPool::FreeMemory(puVar1 + -1);
		}
		(this->parent).vtable = (UnkFamily21Base_VTable *)&UnkFamily21_VT_Base;
		return;
		}
		
	*/
	return;
}

void UnkFamily21A::FUN_000c5000(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily21A::FUN_000c5000(UnkFamily21A *this,int *param_1){
		char cVar1;
		char *pcVar2;
		undefined4 uVar3;
		char *pcVar4;
		uint uVar5;
		int iVar6;
		undefined **ppuVar7;
		undefined **ppuVar8;
		(**(code **)(*param_1 + 0x78))(0x28);
		(**(code **)(*param_1 + 0x6c))((this->parent).field6_0xc);
		(**(code **)(*param_1 + 0x78))(0x29);
		pcVar2 = (this->parent).str;
		pcVar4 = pcVar2;
		do {
		cVar1 = *pcVar4;
		pcVar4 = pcVar4 + 1;
		}
		 while (cVar1 != '\0');
		(**(code **)(*param_1 + 0x7c))(pcVar4 + (1 - (int)(pcVar2 + 1)));
		(**(code **)(*param_1 + 0xc))(pcVar2,pcVar4 + (1 - (int)(pcVar2 + 1)));
		(**(code **)(*param_1 + 0x78))(10);
		(**(code **)(*param_1 + 0x6c))(this[1].parent.vtable);
		thunk_FUN_000c5150(param_1," NUMBER OF CHILDREN");
		(**(code **)(*param_1 + 0x78))(10);
		ppuVar8 = &this->field1_0x14;
		ppuVar7 = &IteratorB_VT_10;
		for (uVar5 = 0;
		 (-1 < (int)uVar5 && (uVar5 < ppuVar8[1]));
		 uVar5 = uVar5 + 1) {
		iVar6 = (*(code *)ppuVar7[3])();
		pcVar2 = *(char **)(iVar6 + 8);
		uVar3 = *(undefined4 *)(iVar6 + 0xc);
		(**(code **)(*param_1 + 0x78))(0x28);
		(**(code **)(*param_1 + 0x6c))(uVar3);
		(**(code **)(*param_1 + 0x78))(0x29);
		pcVar4 = pcVar2;
		do {
		cVar1 = *pcVar4;
		pcVar4 = pcVar4 + 1;
		}
		 while (cVar1 != '\0');
		(**(code **)(*param_1 + 0x7c))(pcVar4 + (1 - (int)(pcVar2 + 1)));
		(**(code **)(*param_1 + 0xc))(pcVar2,pcVar4 + (1 - (int)(pcVar2 + 1)));
		(**(code **)(*param_1 + 0x78))(10);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily21A::Construct_3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily21A * __fastcall UnkFamily21A::Construct(UnkFamily21A *this){
		(this->parent).field_0x4 = 0;
		(this->parent).str = "FILL ME";
		(this->parent).field6_0xc = 0;
		(this->parent).field7_0x10 = 0;
		(this->parent).vtable = (UnkFamily21Base_VTable *)&UnkFamily21_VT_A;
		FUN_00156250(&this->field1_0x14,(int *)&DAT_0000000a);
		return this;
		}
		
	*/
	return;
}

void UnkFamily21A::Dispose_4(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily21A * __thiscall UnkFamily21A::Dispose(UnkFamily21A *this,byte param_1){
		undefined4 *puVar1;
		undefined4 *puVar2;
		undefined *puVar3;
		if ((param_1 & 2) == 0) {
		puVar2 = (undefined4 *)this->field1_0x14;
		(this->parent).vtable = (UnkFamily21Base_VTable *)&UnkFamily21_VT_A;
		if (puVar2 != (undefined4 *)0x0) {
		if (puVar2[-1] == 0) {
		VirtualPool::FreeMemory(puVar2 + -1);
		}
		else {
		(**(code **)*puVar2)(3);
		}
		}
		(this->parent).vtable = (UnkFamily21Base_VTable *)&UnkFamily21_VT_Base;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		puVar3 = this[-1].field1_0x14;
		puVar2 = (undefined4 *)((int)this + (int)puVar3 * 0x24);
		if (-1 < (int)(puVar3 + -1)) {
		do {
		puVar1 = (undefined4 *)puVar2[-4];
		puVar2 = puVar2 + -9;
		*puVar2 = &UnkFamily21_VT_A;
		if (puVar1 != (undefined4 *)0x0) {
		if (puVar1[-1] == 0) {
		VirtualPool::FreeMemory(puVar1 + -1);
		}
		else {
		(**(code **)*puVar1)(3);
		}
		}
		puVar3 = puVar3 + -1;
		*puVar2 = &UnkFamily21_VT_Base;
		}
		 while (puVar3 != (undefined *)0x0);
		}
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(&this[-1].field1_0x14);
		}
		return (UnkFamily21A *)&this[-1].field1_0x14;
		}
		
	*/
	return;
}

