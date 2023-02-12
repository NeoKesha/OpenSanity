#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10L.h"

void UnkFamily10L::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10L * __fastcall UnkFamily10L::Construct(UnkFamily10L *this){
		UnkFamily8AA *unk1;
		UnkFamily8BD *element;
		UnkFamily10Base::Construct(&this->parent,0x48,1);
		(this->parent).field7_0x1c = 0;
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_L;
		unk1 = (UnkFamily8AA *)VirtualPool::AllocateMemory(0x54);
		if (unk1 == (UnkFamily8AA *)0x0) {
		unk1 = (UnkFamily8AA *)0x0;
		}
		else {
		UnkFamily8AA::Construct(unk1,5,9,0,1,0,1);
		(unk1->parent).parent.vtable = &UnkFamily8_VT_AAA;
		*(undefined4 *)&unk1->field_0x50 = 0;
		*(uint *)&unk1->field_0x50 = *(uint *)&unk1->field_0x50 & 0xffffff05 | 5;
		}
		element = (UnkFamily8BD *)VirtualPool::AllocateMemory(0x18);
		if (element == (UnkFamily8BD *)0x0) {
		element = (UnkFamily8BD *)0x0;
		}
		else {
		UnkFamily8B::Construct((UnkFamily8B *)element,0x1a,0xb,(UnkFamily10Base *)0x0,1);
		(element->parent).parent.vtable = &UnkFamily8_VT_BD;
		element->field1_0x14 = 3;
		}
		UnkFamily10Base::Add(&this->parent,(UnkFamily8Abstract *)unk1);
		UnkFamily10Base::Add(&this->parent,(UnkFamily8Abstract *)element);
		UnkFamily10Base::FUN_001a57c0(&this->parent,(unk1->parent).parent.field2_0x8 & 0xfff);
		return this;
		}
		
	*/
	return;
}

void UnkFamily10L::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily10L::Dispose(UnkFamily10L *this,byte param_1){
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

