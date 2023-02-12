#include "headers/Known/Builders/UnkBuilder1/Items/UnkBuilder1Item0x1B0B.h"

void UnkBuilder1Item0x1B0B::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkBuilder1Item0x1B0B::Dispose(UnkBuilder1Item0x1B0B *this,byte param_1){
		(this->parent).vtable = &UnkBuilder1_VT_Item_Abstract;
		TwinString::Dispose(&(this->parent).name);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

uint UnkBuilder1Item0x1B0B::FUN_001c4cd0(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkBuilder1Item0x1B0B::FUN_001c4cd0(UnkBuilder1Item0x1B0B *this,int **param_1){
		int *piVar1;
		bool bVar2;
		byte bVar3;
		byte bVar4;
		byte bVar5;
		byte bVar6;
		uint uVar7;
		undefined3 extraout_var;
		uint uVar8;
		uVar7 = UnkBuilder1ItemAbstract::FUN_001c4af0(&this->parent,param_1);
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 == false) {
		LAB_001c4d20:bVar3 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar3 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*param_1,(AiPosition *)&this->field_0x30,0x937,0);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c4d20;
		bVar3 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*param_1,&this->field_0x30,0x937,0);
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 == false) {
		LAB_001c4d5f:bVar4 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar4 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*param_1,(AiPosition *)&this->field_0x20,0x938,0);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c4d5f;
		bVar4 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*param_1,&this->field_0x20,0x938,0);
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 == false) {
		LAB_001c4d9e:bVar5 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		uVar8 = FUN_00141af0(*param_1,&this->field_0x40,0x93a,0);
		bVar5 = (byte)uVar8;
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c4d9e;
		uVar8 = FUN_00141b40(*param_1,&this->field_0x40,0x93a,0);
		bVar5 = (byte)uVar8;
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		bVar6 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*param_1,(AiPosition *)&this->field_0x80,0x93d,0);
		goto LAB_001c4de2;
		}
		if (param_1[1] == (int *)0x1) {
		bVar6 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*param_1,&this->field_0x80,0x93d,0);
		goto LAB_001c4de2;
		}
		}
		bVar6 = 0;
		LAB_001c4de2:bVar6 = (byte)uVar7 & 1 & bVar3 & bVar4 & bVar5 & bVar6;
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		uVar7 = CONCAT31(extraout_var,bVar2);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		uVar7 = (**(code **)(**param_1 + 0x6c))(0x967,&this->field_0x90);
		return uVar7 & 0xffffff00 | (uint)((byte)uVar7 & bVar6);
		}
		uVar7 = (int)param_1[1] - 1;
		if (uVar7 == 0) {
		piVar1 = *param_1;
		param_1 = (int **)((uint)param_1 & 0xffffff00 | (uint)(byte)this->field_0x90);
		uVar7 = (**(code **)(*piVar1 + 0x1c))(0x967,param_1);
		return uVar7 & 0xffffff00 | (uint)((byte)uVar7 & bVar6);
		}
		}
		return uVar7 & 0xffffff00;
		}
		
	*/
	return 0;
}

uint UnkBuilder1Item0x1B0B::FUN_001ae540() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkBuilder1Item0x1B0B::FUN_001ae540(void){
		return 0x1b0b;
		}
		
	*/
	return 0;
}

void UnkBuilder1Item0x1B0B::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkBuilder1Item0x1B0B * __fastcall UnkBuilder1Item0x1B0B::Construct(UnkBuilder1Item0x1B0B *this){
		(this->parent).name.value = (char *)0x0;
		(this->parent).name.strLength = 0;
		(this->parent).name.strSize = 0;
		(this->parent).field_0x11 = 0;
		(this->parent).field6_0x14 = 0;
		(this->parent).field7_0x18 = -1;
		(this->parent).field8_0x1c = 1;
		(this->parent).vtable = &UnkBuilder1_VT_Item_0x1B0B;
		return this;
		}
		
	*/
	return;
}

UnkBuilder1Item0x1B0B* UnkBuilder1Item0x1B0B::Init(UnkBuilder1Item0x1B0B* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkBuilder1Item0x1B0B * __thiscall UnkBuilder1Item0x1B0B::Init(UnkBuilder1Item0x1B0B *this,UnkBuilder1Item0x1B0B *param_1){
		undefined4 uVar1;
		undefined4 uVar2;
		undefined4 uVar3;
		TwinString::Copy(&(this->parent).name,(param_1->parent).name.value);
		(this->parent).field_0x10 = (param_1->parent).field_0x10;
		(this->parent).field_0x11 = (param_1->parent).field_0x11;
		(this->parent).field6_0x14 = (param_1->parent).field6_0x14;
		(this->parent).field7_0x18 = (param_1->parent).field7_0x18;
		*(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
		*(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
		*(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
		*(undefined4 *)&this->field_0x3c = *(undefined4 *)&param_1->field_0x3c;
		*(undefined4 *)&this->field_0x20 = *(undefined4 *)&param_1->field_0x20;
		*(undefined4 *)&this->field_0x24 = *(undefined4 *)&param_1->field_0x24;
		*(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
		*(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
		uVar1 = *(undefined4 *)&param_1->field_0x44;
		uVar2 = *(undefined4 *)&param_1->field_0x48;
		uVar3 = *(undefined4 *)&param_1->field_0x4c;
		*(undefined4 *)&this->field_0x40 = *(undefined4 *)&param_1->field_0x40;
		*(undefined4 *)&this->field_0x44 = uVar1;
		*(undefined4 *)&this->field_0x48 = uVar2;
		*(undefined4 *)&this->field_0x4c = uVar3;
		uVar1 = *(undefined4 *)&param_1->field_0x54;
		uVar2 = *(undefined4 *)&param_1->field_0x58;
		uVar3 = *(undefined4 *)&param_1->field_0x5c;
		*(undefined4 *)&this->field_0x50 = *(undefined4 *)&param_1->field_0x50;
		*(undefined4 *)&this->field_0x54 = uVar1;
		*(undefined4 *)&this->field_0x58 = uVar2;
		*(undefined4 *)&this->field_0x5c = uVar3;
		uVar1 = *(undefined4 *)&param_1->field_0x64;
		uVar2 = *(undefined4 *)&param_1->field_0x68;
		uVar3 = *(undefined4 *)&param_1->field_0x6c;
		*(undefined4 *)&this->field_0x60 = *(undefined4 *)&param_1->field_0x60;
		*(undefined4 *)&this->field_0x64 = uVar1;
		*(undefined4 *)&this->field_0x68 = uVar2;
		*(undefined4 *)&this->field_0x6c = uVar3;
		uVar1 = *(undefined4 *)&param_1->field_0x74;
		uVar2 = *(undefined4 *)&param_1->field_0x78;
		uVar3 = *(undefined4 *)&param_1->field_0x7c;
		*(undefined4 *)&this->field_0x70 = *(undefined4 *)&param_1->field_0x70;
		*(undefined4 *)&this->field_0x74 = uVar1;
		*(undefined4 *)&this->field_0x78 = uVar2;
		*(undefined4 *)&this->field_0x7c = uVar3;
		*(undefined4 *)&this->field_0x80 = *(undefined4 *)&param_1->field_0x80;
		*(undefined4 *)&this->field_0x84 = *(undefined4 *)&param_1->field_0x84;
		*(undefined4 *)&this->field_0x88 = *(undefined4 *)&param_1->field_0x88;
		*(undefined4 *)&this->field_0x8c = *(undefined4 *)&param_1->field_0x8c;
		this->field_0x90 = param_1->field_0x90;
		return this;
		}
		
	*/
	return null;
}

void UnkBuilder1Item0x1B0B::Construct_5(UnkBuilder1Item0x1B0B* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkBuilder1Item0x1B0B * __thiscall UnkBuilder1Item0x1B0B::Construct(UnkBuilder1Item0x1B0B *this,UnkBuilder1Item0x1B0B *param_1){
		(this->parent).name.value = (char *)0x0;
		(this->parent).name.strLength = 0;
		(this->parent).name.strSize = 0;
		(this->parent).field_0x11 = 0;
		(this->parent).field6_0x14 = 0;
		(this->parent).field7_0x18 = -1;
		(this->parent).field8_0x1c = 1;
		(this->parent).vtable = &UnkBuilder1_VT_Item_0x1B0B;
		Init(this,param_1);
		return this;
		}
		
	*/
	return;
}

