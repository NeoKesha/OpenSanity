#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10M.h"

void UnkFamily10M::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10M * __fastcall UnkFamily10M::Construct(UnkFamily10M *this){
		UnkFamily10Base *this_00;
		UnkFamily8B *notthis2;
		UnkFamily8BD *unk5;
		UnkFamily8BA *notthis3;
		UnkFamily8A *element_00;
		UnkFamily8BD *unk1;
		UnkFamily8B *unk2;
		UnkFamily8BD *unk3;
		UnkFamily8BD *unk4;
		UnkFamily10Base::Construct(&this->parent,0x18,1);
		this_00 = &this->field1_0x50;
		(this->parent).field7_0x1c = (int)&PTR_UnkFamily10_VT_Base_003a3950;
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_M;
		UnkFamily10Base::Construct(this_00,0x19,1);
		(this->field1_0x50).field7_0x1c = 0;
		this_00->vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_T;
		*(UnkFamily10M **)&this->field_0xa0 = this;
		UnkFamily10Base::Construct(&this->field6_0xa4,10,1);
		(this->field6_0xa4).field7_0x1c = 0;
		(this->field6_0xa4).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_VH;
		*(UnkFamily10M **)&this->field_0xf4 = this;
		UnkFamily10VA::Construct(&this->field11_0xf8,this);
		unk1 = (UnkFamily8BD *)VirtualPool::AllocateMemory(0x18);
		if (unk1 == (UnkFamily8BD *)0x0) {
		unk1 = (UnkFamily8BD *)0x0;
		}
		else {
		UnkFamily8B::Construct((UnkFamily8B *)unk1,0xb,0x1e,(UnkFamily10Base *)0x0,1);
		((UnkFamily8Abstract *)&unk1->parent)->vtable = &UnkFamily8_VT_BD;
		unk1->field1_0x14 = 1;
		}
		notthis2 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (notthis2 == (UnkFamily8B *)0x0) {
		unk2 = (UnkFamily8B *)0x0;
		}
		else {
		unk2 = UnkFamily8B::Construct(notthis2,0x19,1,this_00,1);
		}
		unk3 = (UnkFamily8BD *)VirtualPool::AllocateMemory(0x18);
		if (unk3 == (UnkFamily8BD *)0x0) {
		unk3 = (UnkFamily8BD *)0x0;
		}
		else {
		UnkFamily8B::Construct((UnkFamily8B *)unk3,10,2,(UnkFamily10Base *)0x0,1);
		((UnkFamily8Abstract *)&unk3->parent)->vtable = &UnkFamily8_VT_BD;
		unk3->field1_0x14 = 6;
		}
		unk4 = (UnkFamily8BD *)VirtualPool::AllocateMemory(0x18);
		if (unk4 == (UnkFamily8BD *)0x0) {
		unk4 = (UnkFamily8BD *)0x0;
		}
		else {
		UnkFamily8B::Construct((UnkFamily8B *)unk4,0x16,10,(UnkFamily10Base *)0x0,1);
		((UnkFamily8Abstract *)&unk4->parent)->vtable = &UnkFamily8_VT_BD;
		unk4->field1_0x14 = 4;
		}
		unk5 = (UnkFamily8BD *)VirtualPool::AllocateMemory(0x18);
		if (unk5 == (UnkFamily8BD *)0x0) {
		unk5 = (UnkFamily8BD *)0x0;
		}
		else {
		UnkFamily8B::Construct((UnkFamily8B *)unk5,0x1a,0xb,(UnkFamily10Base *)0x0,1);
		(unk5->parent).parent.vtable = &UnkFamily8_VT_BD;
		unk5->field1_0x14 = 2;
		}
		notthis3 = (UnkFamily8BA *)VirtualPool::AllocateMemory(0x14);
		if (notthis3 == (UnkFamily8BA *)0x0) {
		element_00 = (UnkFamily8A *)0x0;
		}
		else {
		element_00 = (UnkFamily8A *)UnkFamily8BA::Construct(notthis3,0x1b,0xc,&PTR_UnkFamily10_VT_Base_003a3950,1);
		}
		UnkFamily10Base::Add(&this->parent,(UnkFamily8Abstract *)unk1);
		UnkFamily10Base::Add(&this->parent,&unk2->parent);
		UnkFamily10Base::Add(&this->parent,(UnkFamily8Abstract *)unk3);
		UnkFamily10Base::Add(&this->parent,(UnkFamily8Abstract *)unk4);
		UnkFamily10Base::Add(&this->parent,(UnkFamily8Abstract *)unk5);
		UnkFamily10Base::Add(&this->parent,&element_00->parent);
		UnkFamily10Base::FUN_001a57c0(&this->parent,0xc);
		return this;
		}
		
	*/
	return;
}

void UnkFamily10M::CleanUp(UnkFamily10M* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily10M::CleanUp(UnkFamily10M *param_1){
		(param_1->field11_0xf8).parent.parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp((UnkFamily10Base *)&param_1->field11_0xf8);
		(param_1->field6_0xa4).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp(&param_1->field6_0xa4);
		(param_1->field1_0x50).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp(&param_1->field1_0x50);
		(param_1->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp(&param_1->parent);
		return;
		}
		
	*/
	return;
}

uint* UnkFamily10M::FUN_000abfe0(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily10M::FUN_000abfe0(UnkFamily10M *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return null;
}

void UnkFamily10M::FUN_000a7530() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily10M::FUN_000a7530(UnkFamily10M *this){
		int iVar1;
		uint uVar2;
		iVar1 = UnkFamily10Base::FUN_001a56e0(&this->parent,10);
		uVar2 = GameController3->flags >> 0x1b & 0xf;
		if ((((uVar2 == 1) || (uVar2 == 2)) || (uVar2 == 3)) && (uVar2 != 3)) {
		*(undefined *)(iVar1 + 0xc) = 0xff;
		return;
		}
		*(undefined *)(iVar1 + 0xc) = 0;
		return;
		}
		
	*/
	return;
}

