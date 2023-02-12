#include "headers/Known/Builders/UnkBuilder1/Items/UnkBuilder1Item0x1B14.h"

uint UnkBuilder1Item0x1B14::FUN_001c58e0(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkBuilder1Item0x1B14::FUN_001c58e0(UnkBuilder1Item0x1B14 *this,int **param_1){
		bool bVar1;
		byte bVar2;
		byte bVar3;
		byte bVar4;
		undefined3 extraout_var;
		uint uVar5;
		UnkBuilder1ItemAbstract::FUN_001c4af0(&this->parent,param_1);
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 == false) {
		LAB_001c592c:bVar2 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar2 = (**(code **)(**param_1 + 0x78))(0x984,&this->field1_0x20);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c592c;
		bVar2 = (**(code **)(**param_1 + 0x28))(0x984,this->field1_0x20);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 == false) {
		LAB_001c596c:bVar3 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar3 = (**(code **)(**param_1 + 0x78))(0x985,&this->field2_0x22);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c596c;
		bVar3 = (**(code **)(**param_1 + 0x28))(0x985,this->field2_0x22);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 != false) {
		if (param_1[1] == (int *)0x0) {
		bVar4 = (**(code **)(**param_1 + 0x78))(0x989,&this->field4_0x26);
		goto LAB_001c59ac;
		}
		if (param_1[1] == (int *)0x1) {
		bVar4 = (**(code **)(**param_1 + 0x28))(0x989,this->field4_0x26);
		goto LAB_001c59ac;
		}
		}
		bVar4 = 0;
		LAB_001c59ac:bVar4 = bVar2 & 1 & bVar3 & bVar4;
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		uVar5 = CONCAT31(extraout_var,bVar1);
		if (bVar1 != false) {
		if (param_1[1] == (int *)0x0) {
		uVar5 = (**(code **)(**param_1 + 0x78))(0x98a,&this->field3_0x24);
		return uVar5 & 0xffffff00 | (uint)((byte)uVar5 & bVar4);
		}
		uVar5 = (int)param_1[1] - 1;
		if (uVar5 == 0) {
		uVar5 = (**(code **)(**param_1 + 0x28))(0x98a,this->field3_0x24);
		return uVar5 & 0xffffff00 | (uint)((byte)uVar5 & bVar4);
		}
		}
		return uVar5 & 0xffffff00;
		}
		
	*/
	return 0;
}

void UnkBuilder1Item0x1B14::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkBuilder1Item0x1B14::Dispose(UnkBuilder1Item0x1B14 *this,byte param_1){
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

uint UnkBuilder1Item0x1B14::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkBuilder1Item0x1B14::GetBuilderIndex(void){
		return 0x1b14;
		}
		
	*/
	return 0;
}

void UnkBuilder1Item0x1B14::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkBuilder1Item0x1B14 * __fastcall UnkBuilder1Item0x1B14::Construct(UnkBuilder1Item0x1B14 *this){
		(this->parent).name.value = (char *)0x0;
		(this->parent).name.strLength = 0;
		(this->parent).name.strSize = 0;
		(this->parent).field_0x11 = 0;
		(this->parent).field6_0x14 = 0;
		(this->parent).field7_0x18 = -1;
		(this->parent).field8_0x1c = 1;
		(this->parent).vtable = &UnkBuilder1_VT_Item_0x1B14;
		this->field1_0x20 = 0;
		this->field2_0x22 = 0;
		this->field3_0x24 = 0;
		this->field4_0x26 = 0;
		return this;
		}
		
	*/
	return;
}

