#include "headers/Known/Builders/UnkBuilder1/Items/UnkBuilder1Item0x1B0A.h"

#include "headers/Known/TwinString.h"
#include "headers/Known/Math/Vector4.h"
uint UnkBuilder1Item0x1B0A::FUN_001c5020(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkBuilder1Item0x1B0A::FUN_001c5020(UnkBuilder1Item0x1B0A *this,int **param_1){
		int *piVar1;
		bool bVar2;
		byte bVar3;
		byte bVar4;
		byte bVar5;
		byte bVar6;
		byte bVar7;
		byte bVar8;
		byte bVar9;
		byte bVar10;
		byte bVar11;
		byte bVar12;
		byte bVar13;
		uint uVar14;
		undefined3 extraout_var;
		uint uVar15;
		uVar14 = UnkBuilder1ItemAbstract::FUN_001c4af0(&this->parent,param_1);
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 == false) {
		LAB_001c5070:bVar3 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		uVar15 = FUN_00119ce0(*param_1,&this->field1_0x20,0x932,0);
		bVar3 = (byte)uVar15;
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c5070;
		uVar15 = FUN_00119d30(*param_1,&this->field1_0x20,0x932,0);
		bVar3 = (byte)uVar15;
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 == false) {
		LAB_001c50af:bVar4 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar4 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*param_1,(AiPosition *)&this->field6_0x30,0x933,0);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c50af;
		bVar4 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*param_1,&this->field6_0x30,0x933,0);
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 == false) {
		LAB_001c50ee:bVar5 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		uVar15 = FUN_000f3400(*param_1,&this->field7_0x40,0x934,0);
		bVar5 = (byte)uVar15;
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c50ee;
		uVar15 = FUN_000f3450(*param_1,&this->field7_0x40,0x934,0);
		bVar5 = (byte)uVar15;
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 == false) {
		LAB_001c512d:bVar6 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar6 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*param_1,(AiPosition *)&this->field8_0x50,0x936,0);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c512d;
		bVar6 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*param_1,&this->field8_0x50,0x936,0);
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 == false) {
		LAB_001c516c:bVar7 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar7 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*param_1,(AiPosition *)&this->field9_0x60,0x93b,0);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c516c;
		bVar7 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*param_1,&this->field9_0x60,0x93b,0);
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 == false) {
		LAB_001c51ab:bVar8 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar8 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*param_1,(AiPosition *)&this->field10_0x70,0x93c,0);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c51ab;
		bVar8 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*param_1,&this->field10_0x70,0x93c,0);
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 == false) {
		LAB_001c51ed:bVar9 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar9 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*param_1,(AiPosition *)&this->field11_0x80,0x93f,0);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c51ed;
		bVar9 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*param_1,&this->field11_0x80,0x93f,0);
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 == false) {
		LAB_001c522f:bVar10 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar10 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*param_1,(AiPosition *)&this->field12_0x90,0x940,0);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c522f;
		bVar10 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*param_1,&this->field12_0x90,0x940,0);
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 == false) {
		LAB_001c5271:bVar11 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar11 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*param_1,(AiPosition *)&this->field_0xa0,0x948,0);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c5271;
		bVar11 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*param_1,&this->field_0xa0,0x948,0);
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 == false) {
		LAB_001c52b3:bVar12 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar12 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*param_1,(AiPosition *)&this->field_0xb0,0x949,0);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c52b3;
		bVar12 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*param_1,&this->field_0xb0,0x949,0);
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		bVar13 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*param_1,(AiPosition *)&this->field_0xc0,0x94a,0);
		goto LAB_001c52f7;
		}
		if (param_1[1] == (int *)0x1) {
		bVar13 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*param_1,&this->field_0xc0,0x94a,0);
		goto LAB_001c52f7;
		}
		}
		bVar13 = 0;
		LAB_001c52f7:bVar13 = (byte)uVar14 & 1 & bVar3 & bVar4 & bVar5 & bVar6 & bVar7 & bVar8 & bVar9 & bVar10 &bVar11 & bVar12 & bVar13;
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		uVar14 = CONCAT31(extraout_var,bVar2);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		uVar14 = (**(code **)(**param_1 + 0x6c))(0x967,&this->field_0xd0);
		return uVar14 & 0xffffff00 | (uint)((byte)uVar14 & bVar13);
		}
		uVar14 = (int)param_1[1] - 1;
		if (uVar14 == 0) {
		piVar1 = *param_1;
		param_1 = (int **)((uint)param_1 & 0xffffff00 | (uint)(byte)this->field_0xd0);
		uVar14 = (**(code **)(*piVar1 + 0x1c))(0x967,param_1);
		return uVar14 & 0xffffff00 | (uint)((byte)uVar14 & bVar13);
		}
		}
		return uVar14 & 0xffffff00;
		}
		
	*/
	return 0;
}

void UnkBuilder1Item0x1B0A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkBuilder1Item0x1B0A::Dispose(UnkBuilder1Item0x1B0A *this,byte param_1){
		(this->parent).vtable = &UnkBuilder1_VT_Item_0x1B0A;
		TwinString::Dispose(&this->field1_0x20);
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

uint UnkBuilder1Item0x1B0A::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkBuilder1Item0x1B0A::GetBuilderIndex(void){
		return 0x1b0a;
		}
		
	*/
	return 0;
}

void UnkBuilder1Item0x1B0A::Construct(TwinString* param_1, Vector4* param_2, Vector4* param_3, TwinString* param_4, Vector4* param_5, Vector4* param_6, Vector4* param_7) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkBuilder1Item0x1B0A * __thiscall UnkBuilder1Item0x1B0A::Construct(UnkBuilder1Item0x1B0A *this,TwinString *param_1,Vector4 *param_2,Vector4 *param_3,TwinString *param_4,Vector4 *param_5,Vector4 *param_6,Vector4 *param_7){
		TwinString *this_00;
		(this->parent).vtable = &UnkBuilder1_VT_Item_Abstract;
		this_00 = &(this->parent).name;
		this_00->value = (char *)0x0;
		(this->parent).name.strLength = 0;
		(this->parent).name.strSize = 0;
		(this->parent).field_0x11 = 0;
		(this->parent).field6_0x14 = 0;
		(this->parent).field7_0x18 = -1;
		(this->parent).field8_0x1c = 1;
		TwinString::Copy(this_00,param_4->value);
		(this->parent).vtable = &UnkBuilder1_VT_Item_0x1B0A;
		(this->field1_0x20).value = (char *)0x0;
		(this->field1_0x20).strLength = 0;
		(this->field1_0x20).strSize = 0;
		TwinString::Copy(&this->field1_0x20,param_1->value);
		(this->field6_0x30).x = param_2->x;
		(this->field6_0x30).y = param_2->y;
		(this->field6_0x30).z = param_2->z;
		(this->field6_0x30).w = param_2->w;
		(this->field7_0x40).x = param_3->x;
		(this->field7_0x40).y = param_3->y;
		(this->field7_0x40).z = param_3->z;
		(this->field7_0x40).w = param_3->w;
		(this->field8_0x50).x = param_5->x;
		(this->field8_0x50).y = param_5->y;
		(this->field8_0x50).z = param_5->z;
		(this->field8_0x50).w = param_5->w;
		(this->field9_0x60).x = param_6->x;
		(this->field9_0x60).y = param_6->y;
		(this->field9_0x60).z = param_6->z;
		(this->field9_0x60).w = param_6->w;
		(this->field10_0x70).x = param_7->x;
		(this->field10_0x70).y = param_7->y;
		(this->field10_0x70).z = param_7->z;
		(this->field10_0x70).w = param_7->w;
		this->field_0xd0 = 0;
		return this;
		}
		
	*/
	return;
}

void UnkBuilder1Item0x1B0A::Construct_4(UnkBuilder1Item0x1B0A* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkBuilder1Item0x1B0A * __thiscall UnkBuilder1Item0x1B0A::Construct(UnkBuilder1Item0x1B0A *this,UnkBuilder1Item0x1B0A *param_1){
		TwinString *this_00;
		undefined uVar1;
		uVar1 = (param_1->parent).field_0x10;
		(this->parent).vtable = &UnkBuilder1_VT_Item_Abstract;
		this_00 = &(this->parent).name;
		this_00->value = (char *)0x0;
		(this->parent).name.strLength = 0;
		(this->parent).name.strSize = 0;
		(this->parent).field_0x11 = 0;
		(this->parent).field6_0x14 = 0;
		(this->parent).field7_0x18 = -1;
		(this->parent).field8_0x1c = 1;
		TwinString::Copy(this_00,(param_1->parent).name.value);
		(this->parent).field_0x10 = uVar1;
		(this->parent).vtable = &UnkBuilder1_VT_Item_0x1B0A;
		(this->field1_0x20).value = (char *)0x0;
		(this->field1_0x20).strLength = 0;
		(this->field1_0x20).strSize = 0;
		TwinString::Copy(&this->field1_0x20,(param_1->field1_0x20).value);
		(this->field6_0x30).x = (param_1->field6_0x30).x;
		(this->field6_0x30).y = (param_1->field6_0x30).y;
		(this->field6_0x30).z = (param_1->field6_0x30).z;
		(this->field6_0x30).w = (param_1->field6_0x30).w;
		(this->field7_0x40).x = (param_1->field7_0x40).x;
		(this->field7_0x40).y = (param_1->field7_0x40).y;
		(this->field7_0x40).z = (param_1->field7_0x40).z;
		(this->field7_0x40).w = (param_1->field7_0x40).w;
		(this->field8_0x50).x = (param_1->field8_0x50).x;
		(this->field8_0x50).y = (param_1->field8_0x50).y;
		(this->field8_0x50).z = (param_1->field8_0x50).z;
		(this->field8_0x50).w = (param_1->field8_0x50).w;
		(this->field9_0x60).x = (param_1->field9_0x60).x;
		(this->field9_0x60).y = (param_1->field9_0x60).y;
		(this->field9_0x60).z = (param_1->field9_0x60).z;
		(this->field9_0x60).w = (param_1->field9_0x60).w;
		(this->field10_0x70).x = (param_1->field10_0x70).x;
		(this->field10_0x70).y = (param_1->field10_0x70).y;
		(this->field10_0x70).z = (param_1->field10_0x70).z;
		(this->field10_0x70).w = (param_1->field10_0x70).w;
		(this->field11_0x80).x = (param_1->field11_0x80).x;
		(this->field11_0x80).y = (param_1->field11_0x80).y;
		(this->field11_0x80).z = (param_1->field11_0x80).z;
		(this->field11_0x80).w = (param_1->field11_0x80).w;
		(this->field12_0x90).x = (param_1->field12_0x90).x;
		(this->field12_0x90).y = (param_1->field12_0x90).y;
		(this->field12_0x90).z = (param_1->field12_0x90).z;
		(this->field12_0x90).w = (param_1->field12_0x90).w;
		this->field_0xd0 = param_1->field_0xd0;
		return this;
		}
		
	*/
	return;
}

