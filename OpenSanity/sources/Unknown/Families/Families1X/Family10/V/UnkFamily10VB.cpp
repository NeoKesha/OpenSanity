#include "headers/Unknown/Families/Families1X/Family10/V/UnkFamily10VB.h"

void UnkFamily10VB::Construct(int param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10VB * __thiscall UnkFamily10VB::Construct(UnkFamily10VB *this,int param_1,int param_2){
		UnkFamily8BA *this_00;
		UnkFamily8BC *element;
		int iVar1;
		int i;
		UnkFamily10Base::Construct((UnkFamily10Base *)this,param_1 + 0x5e,1);
		(this->parent).parent.field7_0x1c = param_2;
		(this->parent).parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_VB;
		this->field1_0x50 = (UnkFamily8Abstract *)param_1;
		this_00 = (UnkFamily8BA *)VirtualPool::AllocateMemory(0x14);
		if (this_00 == (UnkFamily8BA *)0x0) {
		param_1 = 0;
		}
		else {
		param_1 = (int)UnkFamily8BA::Construct(this_00,4,0x1d,param_2,1);
		}
		iVar1 = 1;
		i = 0x10;
		do {
		element = (UnkFamily8BC *)VirtualPool::AllocateMemory(0x24);
		if (element == (UnkFamily8BC *)0x0) {
		element = (UnkFamily8BC *)0x0;
		}
		else {
		UnkFamily8B::Construct((UnkFamily8B *)element,iVar1 + 0x66,iVar1 - 1,(UnkFamily10Base *)0x0,1);
		(element->parent).parent.vtable = &UnkFamily8_VT_BC;
		TwinString::Set(&element->name,"Extras\\Bosses\\Boss");
		*(undefined4 *)&element->field_0x14 = 0;
		element->field_0x14 = (char)iVar1;
		element->field_0x15 = (char)iVar1;
		}
		UnkFamily10Base::Add((UnkFamily10Base *)this,(UnkFamily8Abstract *)element);
		iVar1 = iVar1 + 1;
		i = i + -1;
		}
		 while (i != 0);
		UnkFamily10Base::Add((UnkFamily10Base *)this,(UnkFamily8Abstract *)param_1);
		return this;
		}
		
	*/
	return;
}

void UnkFamily10VB::FUN_000a6e90() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily10VB::FUN_000a6e90(UnkFamily10VB *this){
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

void UnkFamily10VB::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily10VB::Dispose(UnkFamily10VB *this,byte param_1){
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

