#include "headers/Unknown/Families/Families1X/Family10/V/UnkFamily10VG.h"

void UnkFamily10VG::Construct(int param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10VG * __thiscall UnkFamily10VG::Construct(UnkFamily10VG *this,int param_1,int param_2){
		UnkFamily8BA *this_00;
		UnkFamily8BC *element;
		uint uVar1;
		uint uVar2;
		UnkFamily10Base::Construct((UnkFamily10Base *)this,param_1 + 0x5e,1);
		(this->parent).parent.field7_0x1c = param_2;
		(this->parent).parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_VG;
		this->field1_0x50 = (UnkFamily8Abstract *)param_1;
		this_00 = (UnkFamily8BA *)VirtualPool::AllocateMemory(0x14);
		if (this_00 == (UnkFamily8BA *)0x0) {
		param_1 = 0;
		}
		else {
		param_1 = (int)UnkFamily8BA::Construct(this_00,4,0x1d,param_2,1);
		}
		uVar2 = 0;
		uVar1 = 1;
		do {
		element = (UnkFamily8BC *)VirtualPool::AllocateMemory(0x24);
		if (element == (UnkFamily8BC *)0x0) {
		element = (UnkFamily8BC *)0x0;
		}
		else {
		UnkFamily8B::Construct((UnkFamily8B *)element,uVar2 + 0xa7,uVar2,(UnkFamily10Base *)0x0,1);
		(element->parent).parent.vtable = &UnkFamily8_VT_BC;
		TwinString::Set(&element->name,"Extras\\Unseen\\Unseen");
		*(undefined4 *)&element->field_0x14 = 0;
		element->field_0x14 = (char)uVar1;
		element->field_0x15 = (char)uVar1 + '\x02';
		}
		UnkFamily10Base::Add((UnkFamily10Base *)this,(UnkFamily8Abstract *)element);
		uVar1 = uVar1 + 3;
		uVar2 = uVar2 + 1;
		}
		 while (uVar1 < 0x31);
		UnkFamily10Base::Add((UnkFamily10Base *)this,(UnkFamily8Abstract *)param_1);
		return this;
		}
		
	*/
	return;
}

void UnkFamily10VG::FUN_000a7040() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily10VG::FUN_000a7040(UnkFamily10VG *this){
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

void UnkFamily10VG::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily10VG::Dispose(UnkFamily10VG *this,byte param_1){
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

