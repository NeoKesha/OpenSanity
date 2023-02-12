#include "headers/Known/Builders/UnkBuilder1/Items/UnkBuilder1ItemAbstract.h"

#include "headers/Known/TwinString.h"
uint UnkBuilder1ItemAbstract::FUN_001c4af0(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkBuilder1ItemAbstract::FUN_001c4af0(UnkBuilder1ItemAbstract *this,int **param_1){
		undefined *puVar1;
		int *piVar2;
		int **ppiVar3;
		bool bVar4;
		byte bVar5;
		byte bVar6;
		byte bVar7;
		char cVar8;
		undefined3 extraout_var;
		uint uVar9;
		ppiVar3 = param_1;
		bVar4 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar4 == false) {
		LAB_001c4b35:bVar5 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		uVar9 = FUN_00119ce0(*param_1,&this->name,0x935,0);
		bVar5 = (byte)uVar9;
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c4b35;
		uVar9 = FUN_00119d30(*param_1,&this->name,0x935,0);
		bVar5 = (byte)uVar9;
		}
		bVar4 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar4 == false) {
		LAB_001c4b7c:bVar6 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar6 = (**(code **)(**param_1 + 0x6c))(0x931,&this->field_0x10);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c4b7c;
		piVar2 = *param_1;
		param_1 = (int **)((uint)param_1 & 0xffffff00 | (uint)(byte)this->field_0x10);
		bVar6 = (**(code **)(*piVar2 + 0x1c))(0x931,param_1);
		}
		bVar4 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*ppiVar3);
		if (bVar4 == false) {
		LAB_001c4bbd:bVar7 = 0;
		}
		else if (ppiVar3[1] == (int *)0x0) {
		bVar7 = (**(code **)(**ppiVar3 + 0x68))(0x9a4,&this->field6_0x14);
		}
		else {
		if (ppiVar3[1] != (int *)0x1) goto LAB_001c4bbd;
		param_1 = (int **)this->field6_0x14;
		bVar7 = (**(code **)(**ppiVar3 + 0x18))(0x9a4,param_1);
		}
		bVar7 = bVar5 & 1 & bVar6 & bVar7;
		puVar1 = &this->field_0x11;
		bVar4 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*ppiVar3);
		if (bVar4 != false) {
		if (ppiVar3[1] == (int *)0x0) {
		cVar8 = (**(code **)(**ppiVar3 + 0x6c))(0x99f,puVar1);
		}
		else {
		if (ppiVar3[1] != (int *)0x1) goto LAB_001c4c04;
		param_1 = (int **)((uint)param_1 & 0xffffff00 | (uint)(byte)*puVar1);
		cVar8 = (**(code **)(**ppiVar3 + 0x1c))(0x99f,param_1);
		}
		if (cVar8 != '\0') goto LAB_001c4c09;
		}
		LAB_001c4c04:*puVar1 = 0;
		bVar7 = 0;
		LAB_001c4c09:bVar4 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*ppiVar3);
		uVar9 = CONCAT31(extraout_var,bVar4);
		if (bVar4 != false) {
		if (ppiVar3[1] == (int *)0x0) {
		uVar9 = (**(code **)(**ppiVar3 + 0x74))(0x935,&this->field7_0x18);
		return uVar9 & 0xffffff00 | (uint)((byte)uVar9 & bVar7);
		}
		uVar9 = (int)ppiVar3[1] - 1;
		if (uVar9 == 0) {
		uVar9 = (**(code **)(**ppiVar3 + 0x24))(0x935,this->field7_0x18);
		return uVar9 & 0xffffff00 | (uint)((byte)uVar9 & bVar7);
		}
		}
		return uVar9 & 0xffffff00;
		}
		
	*/
	return 0;
}

void UnkBuilder1ItemAbstract::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkBuilder1ItemAbstract::Dispose(UnkBuilder1ItemAbstract *this,byte param_1){
		this->vtable = &UnkBuilder1_VT_Item_Abstract;
		TwinString::Dispose(&this->name);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->vtable;
		}
		
	*/
	return;
}

void UnkBuilder1ItemAbstract::Construct(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkBuilder1ItemAbstract * __thiscall UnkBuilder1ItemAbstract::Construct(UnkBuilder1ItemAbstract *this,int param_1){
		this->vtable = &UnkBuilder1_VT_Item_Abstract;
		(this->name).value = (char *)0x0;
		(this->name).strLength = 0;
		(this->name).strSize = 0;
		TwinString::Copy(&this->name,*(char **)(param_1 + 4));
		this->field_0x10 = *(undefined *)(param_1 + 0x10);
		this->field_0x11 = *(undefined *)(param_1 + 0x11);
		this->field6_0x14 = *(undefined4 *)(param_1 + 0x14);
		this->field7_0x18 = *(int *)(param_1 + 0x18);
		return this;
		}
		
	*/
	return;
}

uint UnkBuilder1ItemAbstract::FUN_001a76e0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkBuilder1ItemAbstract::FUN_001a76e0(void){
		return 0x1b0e;
		}
		
	*/
	return 0;
}

void UnkBuilder1ItemAbstract::Construct_4() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkBuilder1ItemAbstract::Construct(UnkBuilder1ItemAbstract *this){
		this->vtable = &UnkBuilder1_VT_Item_Abstract;
		(this->name).value = (char *)0x0;
		(this->name).strLength = 0;
		(this->name).strSize = 0;
		this->field_0x11 = 0;
		this->field6_0x14 = 0;
		this->field7_0x18 = -1;
		this->field8_0x1c = 1;
		return;
		}
		
	*/
	return;
}

void UnkBuilder1ItemAbstract::Dispose_5() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkBuilder1ItemAbstract::Dispose(UnkBuilder1ItemAbstract *this){
		this->vtable = &UnkBuilder1_VT_Item_Abstract;
		TwinString::Dispose(&this->name);
		return;
		}
		
	*/
	return;
}

void UnkBuilder1ItemAbstract::Construct_6(TwinString* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkBuilder1ItemAbstract * __thiscall UnkBuilder1ItemAbstract::Construct(UnkBuilder1ItemAbstract *this,TwinString *param_1){
		this->vtable = &UnkBuilder1_VT_Item_Abstract;
		(this->name).value = (char *)0x0;
		(this->name).strLength = 0;
		(this->name).strSize = 0;
		this->field_0x11 = 0;
		this->field6_0x14 = 0;
		this->field7_0x18 = -1;
		this->field8_0x1c = 1;
		TwinString::Copy(&this->name,param_1->value);
		return this;
		}
		
	*/
	return;
}

void UnkBuilder1ItemAbstract::Construct_7(TwinString* param_1, byte param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkBuilder1ItemAbstract * __thiscall UnkBuilder1ItemAbstract::Construct(UnkBuilder1ItemAbstract *this,TwinString *param_1,undefined param_2){
		this->vtable = &UnkBuilder1_VT_Item_Abstract;
		(this->name).value = (char *)0x0;
		(this->name).strLength = 0;
		(this->name).strSize = 0;
		this->field_0x11 = 0;
		this->field6_0x14 = 0;
		this->field7_0x18 = -1;
		this->field8_0x1c = 1;
		TwinString::Copy(&this->name,param_1->value);
		this->field_0x10 = param_2;
		return this;
		}
		
	*/
	return;
}

