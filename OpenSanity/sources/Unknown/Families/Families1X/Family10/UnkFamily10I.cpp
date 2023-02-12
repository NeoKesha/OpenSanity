#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10I.h"

void UnkFamily10I::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10I * __fastcall UnkFamily10I::Construct(UnkFamily10I *this){
		UnkFamily10VI *this_00;
		UnkFamily10VH *this_01;
		UnkFamily8B *pUVar1;
		UnkFamily8B *unk2;
		UnkFamily8BD *unk3;
		UnkFamily8B *unk1;
		UnkFamily10VH *page2;
		UnkFamily10VI *page1;
		UnkFamily10Base::Construct(&this->parent,"crash twinsanity",1);
		this_00 = &this->page1;
		(this->parent).field7_0x1c = (int)&PTR_UnkFamily10_VT_Base_003a3950;
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_I;
		UnkFamily10Base::Construct((UnkFamily10Base *)this_00,9,1);
		this_01 = &this->page2;
		(this->page1).parent.parent.field7_0x1c = 0;
		(this_00->parent).parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_VI;
		(this->page1).field1_0x50 = (UnkFamily8Abstract *)this;
		UnkFamily10Base::Construct((UnkFamily10Base *)this_01,10,1);
		(this->page2).parent.parent.field7_0x1c = 0;
		(this_01->parent).parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_VH;
		(this->page2).field1_0x50 = (UnkFamily8Abstract *)this;
		pUVar1 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar1 == (UnkFamily8B *)0x0) {
		unk1 = (UnkFamily8B *)0x0;
		}
		else {
		unk1 = UnkFamily8B::Construct(pUVar1,9,0,(UnkFamily10Base *)this_00,1);
		}
		pUVar1 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar1 == (UnkFamily8B *)0x0) {
		unk2 = (UnkFamily8B *)0x0;
		}
		else {
		unk2 = UnkFamily8B::Construct(pUVar1,10,2,(UnkFamily10Base *)this_01,1);
		}
		unk3 = (UnkFamily8BD *)VirtualPool::AllocateMemory(0x18);
		if (unk3 == (UnkFamily8BD *)0x0) {
		unk3 = (UnkFamily8BD *)0x0;
		}
		else {
		UnkFamily8B::Construct((UnkFamily8B *)unk3,0xb,0x1e,(UnkFamily10Base *)0x0,1);
		(unk3->parent).parent.vtable = &UnkFamily8_VT_BD;
		unk3->field1_0x14 = 1;
		}
		UnkFamily10Base::Add(&this->parent,&unk1->parent);
		UnkFamily10Base::Add(&this->parent,&unk2->parent);
		UnkFamily10Base::Add(&this->parent,(UnkFamily8Abstract *)unk3);
		return this;
		}
		
	*/
	return;
}

void UnkFamily10I::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily10I::CleanUp(UnkFamily10I *this){
		(this->page2).parent.parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp((UnkFamily10Base *)&this->page2);
		(this->page1).parent.parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp((UnkFamily10Base *)&this->page1);
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp(&this->parent);
		return;
		}
		
	*/
	return;
}

void UnkFamily10I::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily10I::Dispose(UnkFamily10I *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void UnkFamily10I::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily10I::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

