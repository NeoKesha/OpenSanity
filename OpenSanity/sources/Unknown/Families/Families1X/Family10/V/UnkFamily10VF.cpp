#include "headers/Unknown/Families/Families1X/Family10/V/UnkFamily10VF.h"

void UnkFamily10VF::Construct(int param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10VF * __thiscall UnkFamily10VF::Construct(UnkFamily10VF *this,int param_1,int param_2){
		undefined4 uVar1;
		char *pcVar2;
		UnkFamily8BA *this_00;
		UnkFamily8BC *element;
		uint uVar3;
		UnkFamily10Base::Construct((UnkFamily10Base *)this,param_1 + 0x5e,1);
		(this->parent).parent.field7_0x1c = param_2;
		(this->parent).parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_VF;
		this->field1_0x50 = (UnkFamily8Abstract *)param_1;
		this_00 = (UnkFamily8BA *)VirtualPool::AllocateMemory(0x14);
		if (this_00 == (UnkFamily8BA *)0x0) {
		param_1 = 0;
		}
		else {
		param_1 = (int)UnkFamily8BA::Construct(this_00,4,0x1d,param_2,1);
		}
		uVar3 = 0;
		do {
		element = (UnkFamily8BC *)VirtualPool::AllocateMemory(0x24);
		if (element == (UnkFamily8BC *)0x0) {
		element = (UnkFamily8BC *)0x0;
		}
		else {
		uVar1 = (&DAT_0039de24)[uVar3 * 2];
		pcVar2 = (&PTR_s_Extras\Storyboards\02-Jungle\Jun_0039de20)[uVar3 * 2];
		UnkFamily8B::Construct((UnkFamily8B *)element,uVar3 + 0x4c,uVar3,(UnkFamily10Base *)0x0,1);
		(element->parent).parent.vtable = &UnkFamily8_VT_BC;
		TwinString::Set(&element->name,pcVar2);
		*(undefined4 *)&element->field_0x14 = 0;
		element->field_0x14 = 1;
		element->field_0x15 = (char)uVar1;
		}
		UnkFamily10Base::Add((UnkFamily10Base *)this,(UnkFamily8Abstract *)element);
		uVar3 = uVar3 + 1;
		}
		 while (uVar3 < 0x10);
		UnkFamily10Base::Add((UnkFamily10Base *)this,(UnkFamily8Abstract *)param_1);
		return this;
		}
		
	*/
	return;
}

void UnkFamily10VF::FUN_000a6ff0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily10VF::FUN_000a6ff0(UnkFamily10VF *this){
		byte bVar1;
		int iVar2;
		uint uVar3;
		uint *puVar4;
		uVar3 = 0;
		puVar4 = (GameController3->chunkDescriptor).uintArray;
		do {
		iVar2 = UnkFamily10Base::FUN_001a56e0((UnkFamily10Base *)this,uVar3);
		bVar1 = *(byte *)puVar4;
		puVar4 = puVar4 + 1;
		uVar3 = uVar3 + 1;
		*(char *)(iVar2 + 0xd) = -(((byte)(1 << ((byte)this->field1_0x50 & 0x1f)) & bVar1) != 0);
		}
		 while (uVar3 < 0x10);
		return;
		}
		
	*/
	return;
}

void UnkFamily10VF::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily10VF::Dispose(UnkFamily10VF *this,byte param_1){
		(this->parent).parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp((UnkFamily10Base *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

