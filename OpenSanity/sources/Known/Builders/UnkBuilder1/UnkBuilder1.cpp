#include "headers/Known/Builders/UnkBuilder1/UnkBuilder1.h"

void UnkBuilder1::Dispose(byte flag) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkBuilder1 * __thiscall UnkBuilder1::Dispose(UnkBuilder1 *this,byte flag){
		this->vtable = (UnkBuilder1_VTable *)&Builder_VT_Abstract;
		if ((flag & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void* UnkBuilder1::BUILD(uint id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined * UnkBuilder1::BUILD(uint id){
		GameObject *this;
		uint *puVar2;
		ParameterTable *puVar1;
		undefined4 *puVar3;
		undefined *puVar4;
		UnkBuilder1Item0x1B0B *pUVar5;
		UnkBuilder1Item0x1B14 *pUVar6;
		UnkBuilder1Item0x1B16 *this_00;
		switch(id) {
		case 0x1b02:this = (GameObject *)VirtualPool::AllocateMemory(0x60);
		if (this != (GameObject *)0x0) {
		puVar2 = GameObject::Construct(this);
		return (undefined *)puVar2;
		}
		break;
		case 0x1b04:puVar1 = (ParameterTable *)VirtualPool::AllocateMemory(0x24);
		if (puVar1 != (ParameterTable *)0x0) {
		puVar1->vtable = &ParameterTable_VT;
		puVar1->unkInt = 0;
		(puVar1->fractions).fractionCnt = 0;
		(puVar1->fractions).fraction = (uint *)0x0;
		(puVar1->floats).floatsCnt = 0;
		(puVar1->floats).floats = (float *)0x0;
		(puVar1->ints).intsCnt = 0;
		(puVar1->ints).ints = (int *)0x0;
		puVar1->instancePropsHeader = 0;
		*(undefined *)&puVar1->instancePropsHeader = 0;
		*(undefined *)((int)&puVar1->instancePropsHeader + 1) = 0;
		*(undefined *)((int)&puVar1->instancePropsHeader + 2) = 0;
		return (undefined *)puVar1;
		}
		break;
		case 0x1b0b:pUVar5 = (UnkBuilder1Item0x1B0B *)VirtualPool::AllocateMemory(0xa0);
		if (pUVar5 != (UnkBuilder1Item0x1B0B *)0x0) {
		pUVar5 = UnkBuilder1Item0x1B0B::Construct(pUVar5);
		return (undefined *)pUVar5;
		}
		break;
		case 0x1b13:puVar2 = (uint *)VirtualPool::AllocateMemory(0x18);
		if (puVar2 != (uint *)0x0) {
		puVar4 = (undefined *)FUN_001a89c0(puVar2);
		return puVar4;
		}
		break;
		case 0x1b14:pUVar6 = (UnkBuilder1Item0x1B14 *)VirtualPool::AllocateMemory(0x28);
		if (pUVar6 != (UnkBuilder1Item0x1B14 *)0x0) {
		pUVar6 = UnkBuilder1Item0x1B14::Construct(pUVar6);
		return (undefined *)pUVar6;
		}
		break;
		case 0x1b16:this_00 = (UnkBuilder1Item0x1B16 *)VirtualPool::AllocateMemory(0x50);
		if (this_00 != (UnkBuilder1Item0x1B16 *)0x0) {
		puVar4 = (undefined *)UnkBuilder1Item0x1B16::Construct(this_00);
		return puVar4;
		}
		break;
		case 0x1b18:puVar3 = (undefined4 *)VirtualPool::AllocateMemory(0x20);
		if (puVar3 != (undefined4 *)0x0) {
		puVar4 = (undefined *)FUN_001a7b00(puVar3);
		return puVar4;
		}
		}
		return (undefined *)0x0;
		}
		
	*/
	return null;
}

void UnkBuilder1::Construct(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkBuilder1::Construct(undefined4 *param_1){
		*param_1 = &Builder_VT_1;
		return;
		}
		
	*/
	return;
}

