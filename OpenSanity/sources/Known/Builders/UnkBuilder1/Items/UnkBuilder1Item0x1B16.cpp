#include "headers/Known/Builders/UnkBuilder1/Items/UnkBuilder1Item0x1B16.h"

void UnkBuilder1Item0x1B16::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkBuilder1Item0x1B16::Dispose(UnkBuilder1Item0x1B16 *this,byte param_1){
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

uint UnkBuilder1Item0x1B16::FUN_001a91b0(int** param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkBuilder1Item0x1B16::FUN_001a91b0(uint this,int **param_2){
		int **ppiVar1;
		bool bVar2;
		byte bVar3;
		byte bVar4;
		byte bVar5;
		uint uVar6;
		undefined3 extraout_var;
		uint uStack4;
		ppiVar1 = param_2;
		uVar6 = UnkBuilder1ItemAbstract::FUN_001c4af0((UnkBuilder1ItemAbstract *)this,param_2);
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*ppiVar1);
		if (bVar2 == false) {
		LAB_001a9201:bVar3 = 0;
		}
		else if (ppiVar1[1] == (int *)0x0) {
		bVar3 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*ppiVar1,(AiPosition *)(this + 0x20),0x9a0,0);
		}
		else {
		if (ppiVar1[1] != (int *)0x1) goto LAB_001a9201;
		bVar3 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*ppiVar1,(AiPosition *)(this + 0x20),0x9a0,0);
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*ppiVar1);
		if (bVar2 == false) {
		LAB_001a9240:bVar4 = 0;
		}
		else if (ppiVar1[1] == (int *)0x0) {
		bVar4 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*ppiVar1,(AiPosition *)(this + 0x30),0x9a1,0);
		}
		else {
		if (ppiVar1[1] != (int *)0x1) goto LAB_001a9240;
		bVar4 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*ppiVar1,(AiPosition *)(this + 0x30),0x9a1,0);
		}
		param_2 = *(int ***)(this + 0x40);
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*ppiVar1);
		if (bVar2 != false) {
		if (ppiVar1[1] == (int *)0x0) {
		bVar5 = (**(code **)(**ppiVar1 + 0x74))(0x9a2,&param_2);
		goto LAB_001a9289;
		}
		if (ppiVar1[1] == (int *)0x1) {
		bVar5 = (**(code **)(**ppiVar1 + 0x24))(0x9a2,param_2);
		goto LAB_001a9289;
		}
		}
		bVar5 = 0;
		LAB_001a9289:bVar5 = (byte)uVar6 & 1 & bVar3 & bVar4 & bVar5;
		if (ppiVar1[1] == (int *)0x0) {
		*(int ***)(this + 0x40) = param_2;
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*ppiVar1);
		uVar6 = CONCAT31(extraout_var,bVar2);
		if (bVar2 != false) {
		if (ppiVar1[1] == (int *)0x0) {
		uVar6 = (**(code **)(**ppiVar1 + 0x6c))(0x9a3,(byte *)(this + 0x44));
		return uVar6 & 0xffffff00 | (uint)((byte)uVar6 & bVar5);
		}
		uVar6 = (int)ppiVar1[1] - 1;
		if (uVar6 == 0) {
		uStack4 = this & 0xffffff00 | (uint)*(byte *)(this + 0x44);
		uVar6 = (**(code **)(**ppiVar1 + 0x1c))(0x9a3,uStack4);
		return uVar6 & 0xffffff00 | (uint)((byte)uVar6 & bVar5);
		}
		}
		return uVar6 & 0xffffff00;
		}
		
	*/
	return 0;
}

uint UnkBuilder1Item0x1B16::FUN_001a7750() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkBuilder1Item0x1B16::FUN_001a7750(void){
		return 0x1b16;
		}
		
	*/
	return 0;
}

void UnkBuilder1Item0x1B16::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkBuilder1Item0x1B16::Construct(UnkBuilder1Item0x1B16 *this){
		(this->parent).name.value = (char *)0x0;
		(this->parent).name.strLength = 0;
		(this->parent).name.strSize = 0;
		(this->parent).field_0x11 = 0;
		(this->parent).field6_0x14 = 0;
		(this->parent).field7_0x18 = -1;
		(this->parent).field8_0x1c = 1;
		(this->parent).vtable = &UnkBuilder1_VT_Item_0x1B16;
		this->field33_0x40 = -1;
		return;
		}
		
	*/
	return;
}

