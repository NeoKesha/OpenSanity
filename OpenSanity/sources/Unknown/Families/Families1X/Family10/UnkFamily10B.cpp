#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10B.h"

void UnkFamily10B::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10B * __fastcall UnkFamily10B::Construct(UnkFamily10B *this){
		UnkFamily8BA *notthis;
		UnkFamily8B *pUVar1;
		UnkFamily8B *unk7;
		UnkFamily8B *unk8;
		UnkFamily8B *unk6;
		UnkFamily8BB *unk1;
		UnkFamily8BA *unk2;
		UnkFamily8B *unk3;
		UnkFamily8B *unk4;
		UnkFamily8B *unk5;
		UnkFamily10Base::Construct(&this->parent,0x17,1);
		(this->parent).field7_0x1c = (int)&PTR_UnkFamily10_VT_Base_003a3950;
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_B;
		UnkFamily10VB::Construct(&this->gallery1,0,this);
		UnkFamily10VC::Construct(&this->gallery2,3,this);
		UnkFamily10VD::Construct(&this->gallery3,2,this);
		UnkFamily10VE::Construct(&this->gallery4,1,this);
		UnkFamily10VF::Construct(&this->gallery5,4,this);
		UnkFamily10VG::Construct(&this->gallery6,5,this);
		unk1 = (UnkFamily8BB *)VirtualPool::AllocateMemory(0x18);
		if (unk1 == (UnkFamily8BB *)0x0) {
		unk1 = (UnkFamily8BB *)0x0;
		}
		else {
		UnkFamily8B::Construct((UnkFamily8B *)unk1,0x66,0x14,(UnkFamily10Base *)0x0,1);
		((UnkFamily8Abstract *)&unk1->parent)->vtable = &UnkFamily8_VT_BB;
		unk1->field1_0x14 = 0x12;
		}
		notthis = (UnkFamily8BA *)VirtualPool::AllocateMemory(0x14);
		unk6 = (UnkFamily8B *)0x0;
		if (notthis == (UnkFamily8BA *)0x0) {
		unk2 = (UnkFamily8BA *)0x0;
		}
		else {
		unk2 = UnkFamily8BA::Construct(notthis,0x1b,0x1c,&PTR_UnkFamily10_VT_Base_003a3950,1);
		}
		pUVar1 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar1 == (UnkFamily8B *)0x0) {
		unk3 = (UnkFamily8B *)0x0;
		}
		else {
		unk3 = UnkFamily8B::Construct(pUVar1,0x5e,0xe,(UnkFamily10Base *)&this->gallery1,1);
		}
		pUVar1 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar1 == (UnkFamily8B *)0x0) {
		unk4 = (UnkFamily8B *)0x0;
		}
		else {
		unk4 = UnkFamily8B::Construct(pUVar1,0x5f,0xf,&(this->gallery4).parent,1);
		}
		pUVar1 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar1 == (UnkFamily8B *)0x0) {
		unk5 = (UnkFamily8B *)0x0;
		}
		else {
		unk5 = UnkFamily8B::Construct(pUVar1,0x60,0x10,(UnkFamily10Base *)&this->gallery3,1);
		}
		pUVar1 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar1 != (UnkFamily8B *)0x0) {
		unk6 = UnkFamily8B::Construct(pUVar1,0x61,0x11,(UnkFamily10Base *)&this->gallery2,1);
		}
		pUVar1 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar1 == (UnkFamily8B *)0x0) {
		unk7 = (UnkFamily8B *)0x0;
		}
		else {
		unk7 = UnkFamily8B::Construct(pUVar1,0x62,0x12,(UnkFamily10Base *)&this->gallery5,1);
		}
		pUVar1 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar1 == (UnkFamily8B *)0x0) {
		unk8 = (UnkFamily8B *)0x0;
		}
		else {
		unk8 = UnkFamily8B::Construct(pUVar1,99,0x13,(UnkFamily10Base *)&this->gallery6,1);
		}
		UnkFamily10Base::Add(&this->parent,&unk3->parent);
		UnkFamily10Base::Add(&this->parent,&unk4->parent);
		UnkFamily10Base::Add(&this->parent,&unk5->parent);
		UnkFamily10Base::Add(&this->parent,&unk6->parent);
		UnkFamily10Base::Add(&this->parent,&unk7->parent);
		UnkFamily10Base::Add(&this->parent,&unk8->parent);
		UnkFamily10Base::Add(&this->parent,(UnkFamily8Abstract *)unk1);
		UnkFamily10Base::Add(&this->parent,(UnkFamily8Abstract *)unk2);
		return this;
		}
		
	*/
	return;
}

void UnkFamily10B::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily10B::CleanUp(UnkFamily10B *this){
		(this->gallery6).parent.parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp((UnkFamily10Base *)&this->gallery6);
		(this->gallery5).parent.parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp((UnkFamily10Base *)&this->gallery5);
		(this->gallery4).parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp(&(this->gallery4).parent);
		(this->gallery3).parent.parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp((UnkFamily10Base *)&this->gallery3);
		(this->gallery2).parent.parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp((UnkFamily10Base *)&this->gallery2);
		(this->gallery1).parent.parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp((UnkFamily10Base *)&this->gallery1);
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp(&this->parent);
		return;
		}
		
	*/
	return;
}

void UnkFamily10B::FUN_000a6c70() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily10B::FUN_000a6c70(UnkFamily10B *this){
		int iVar1;
		int iVar2;
		int iVar3;
		int iVar4;
		ChunkDesc *chunkDesc;
		uint uVar5;
		chunkDesc = &GameController3->chunkDescriptor;
		iVar1 = ChunkDesc::CountSomething2(chunkDesc);
		iVar2 = UnkFamily10Base::FUN_001a56e0(&this->parent,0x14);
		uVar5 = 0;
		do {
		iVar3 = UnkFamily10Base::FUN_001a56e0(&this->parent,uVar5 + 0xe);
		iVar4 = thunk_FUN_000acb30((int)chunkDesc,(byte)uVar5);
		uVar5 = uVar5 + 1;
		*(char *)(iVar3 + 0xc) = -(iVar4 != 0);
		}
		 while (uVar5 < 6);
		*(undefined4 *)(iVar2 + 4) = 0;
		if (iVar1 == 100) {
		*(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff066fff | 0x66000;
		*(undefined *)(iVar2 + 0xc) = 0xff;
		return;
		}
		*(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff05dfff | 0x5d000;
		*(undefined *)(iVar2 + 0xc) = 0;
		return;
		}
		
	*/
	return;
}

void UnkFamily10B::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily10B::Dispose(UnkFamily10B *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

