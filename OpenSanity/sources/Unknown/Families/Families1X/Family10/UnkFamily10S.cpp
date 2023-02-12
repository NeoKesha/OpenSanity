#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10S.h"

#include "headers/Known/Game/SaveSystem/SaveSystem/SaveSystem.h"
void UnkFamily10S::Construct(SaveSystem* mainMenu) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10S * __thiscall UnkFamily10S::Construct(UnkFamily10S *this,SaveSystem *mainMenu){
		undefined4 *puVar1;
		undefined **ppuVar2;
		UnkFamily8Abstract *element;
		UnkFamily8Abstract *local_1c;
		UnkFamily8Abstract *local_18;
		UnkFamily8Abstract *local_14;
		UnkFamily8Abstract *local_10;
		UnkFamily8Abstract *local_c;
		UnkFamily8Abstract *local_8;
		UnkFamily8Abstract *local_4;
		UnkFamily10Base::Construct(&this->parent,"",1);
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_S;
		this->field1_0x50 = (undefined4 *)mainMenu;
		mainMenu = (SaveSystem *)VirtualPool::AllocateMemory(0x20);
		if (mainMenu == (SaveSystem *)0x0) {
		mainMenu = (SaveSystem *)0x0;
		}
		else {
		puVar1 = this->field1_0x50;
		UnkFamily8B::Construct((UnkFamily8B *)mainMenu,&DAT_00388031,0,0,1);
		(mainMenu->parent).vtable = (SaveSystem_VTable *)&UnkFamily8_VT_BE;
		(mainMenu->parent).title.strSize = (uint)puVar1;
		(mainMenu->parent).saveController = (SaveController *)0x0;
		(mainMenu->parent).oleg = (Oleg *)0x1f;
		}
		local_1c = (UnkFamily8Abstract *)VirtualPool::AllocateMemory(0x20);
		if (local_1c == (UnkFamily8Abstract *)0x0) {
		local_1c = (UnkFamily8Abstract *)0x0;
		}
		else {
		ppuVar2 = (undefined **)this->field1_0x50;
		UnkFamily8B::Construct((UnkFamily8B *)local_1c,&DAT_00388031,1,0,1);
		((UnkFamily8Abstract *)&local_1c->vtable)->vtable = &UnkFamily8_VT_BE;
		((UnkFamily8Abstract *)&local_1c[1].vtable)->vtable = ppuVar2;
		local_1c[1].field1_0x4 = 2;
		local_1c[1].field2_0x8 = 0x20;
		}
		local_4 = (UnkFamily8Abstract *)VirtualPool::AllocateMemory(0x20);
		if (local_4 == (UnkFamily8Abstract *)0x0) {
		local_4 = (UnkFamily8Abstract *)0x0;
		}
		else {
		ppuVar2 = (undefined **)this->field1_0x50;
		UnkFamily8B::Construct((UnkFamily8B *)local_4,&DAT_00388031,2,0,1);
		((UnkFamily8Abstract *)&local_4->vtable)->vtable = &UnkFamily8_VT_BE;
		((UnkFamily8Abstract *)&local_4[1].vtable)->vtable = ppuVar2;
		local_4[1].field1_0x4 = 2;
		local_4[1].field2_0x8 = 0x21;
		}
		local_14 = (UnkFamily8Abstract *)VirtualPool::AllocateMemory(0x20);
		if (local_14 == (UnkFamily8Abstract *)0x0) {
		local_14 = (UnkFamily8Abstract *)0x0;
		}
		else {
		ppuVar2 = (undefined **)this->field1_0x50;
		UnkFamily8B::Construct((UnkFamily8B *)local_14,&DAT_00388031,3,0,1);
		((UnkFamily8Abstract *)&local_14->vtable)->vtable = &UnkFamily8_VT_BE;
		((UnkFamily8Abstract *)&local_14[1].vtable)->vtable = ppuVar2;
		local_14[1].field1_0x4 = 0;
		local_14[1].field2_0x8 = 0x22;
		}
		local_18 = (UnkFamily8Abstract *)VirtualPool::AllocateMemory(0x20);
		if (local_18 == (UnkFamily8Abstract *)0x0) {
		local_18 = (UnkFamily8Abstract *)0x0;
		}
		else {
		ppuVar2 = (undefined **)this->field1_0x50;
		UnkFamily8B::Construct((UnkFamily8B *)local_18,&DAT_00388031,4,0,1);
		((UnkFamily8Abstract *)&local_18->vtable)->vtable = &UnkFamily8_VT_BE;
		((UnkFamily8Abstract *)&local_18[1].vtable)->vtable = ppuVar2;
		local_18[1].field1_0x4 = 0;
		local_18[1].field2_0x8 = 0x23;
		}
		local_10 = (UnkFamily8Abstract *)VirtualPool::AllocateMemory(0x20);
		if (local_10 == (UnkFamily8Abstract *)0x0) {
		local_10 = (UnkFamily8Abstract *)0x0;
		}
		else {
		ppuVar2 = (undefined **)this->field1_0x50;
		UnkFamily8B::Construct((UnkFamily8B *)local_10,&DAT_00388031,5,0,1);
		((UnkFamily8Abstract *)&local_10->vtable)->vtable = &UnkFamily8_VT_BE;
		((UnkFamily8Abstract *)&local_10[1].vtable)->vtable = ppuVar2;
		local_10[1].field1_0x4 = 1;
		local_10[1].field2_0x8 = 0x1e;
		}
		local_c = (UnkFamily8Abstract *)VirtualPool::AllocateMemory(0x20);
		if (local_c == (UnkFamily8Abstract *)0x0) {
		local_c = (UnkFamily8Abstract *)0x0;
		}
		else {
		ppuVar2 = (undefined **)this->field1_0x50;
		UnkFamily8B::Construct((UnkFamily8B *)local_c,&DAT_00388031,6,0,1);
		((UnkFamily8Abstract *)&local_c->vtable)->vtable = &UnkFamily8_VT_BE;
		((UnkFamily8Abstract *)&local_c[1].vtable)->vtable = ppuVar2;
		local_c[1].field1_0x4 = 0;
		local_c[1].field2_0x8 = 0x24;
		}
		local_8 = (UnkFamily8Abstract *)VirtualPool::AllocateMemory(0x20);
		if (local_8 == (UnkFamily8Abstract *)0x0) {
		local_8 = (UnkFamily8Abstract *)0x0;
		}
		else {
		ppuVar2 = (undefined **)this->field1_0x50;
		UnkFamily8B::Construct((UnkFamily8B *)local_8,&DAT_00388031,7,0,1);
		((UnkFamily8Abstract *)&local_8->vtable)->vtable = &UnkFamily8_VT_BE;
		((UnkFamily8Abstract *)&local_8[1].vtable)->vtable = ppuVar2;
		local_8[1].field1_0x4 = 1;
		local_8[1].field2_0x8 = 0x25;
		}
		element = (UnkFamily8Abstract *)VirtualPool::AllocateMemory(0x20);
		if (element == (UnkFamily8Abstract *)0x0) {
		element = (UnkFamily8Abstract *)0x0;
		}
		else {
		ppuVar2 = (undefined **)this->field1_0x50;
		UnkFamily8B::Construct((UnkFamily8B *)element,&DAT_00388031,8,0,1);
		((UnkFamily8Abstract *)&element->vtable)->vtable = &UnkFamily8_VT_BE;
		((UnkFamily8Abstract *)&element[1].vtable)->vtable = ppuVar2;
		element[1].field1_0x4 = 1;
		element[1].field2_0x8 = 0x26;
		}
		UnkFamily10Base::Add(&this->parent,(UnkFamily8Abstract *)mainMenu);
		UnkFamily10Base::Add(&this->parent,local_1c);
		UnkFamily10Base::Add(&this->parent,local_18);
		UnkFamily10Base::Add(&this->parent,local_14);
		UnkFamily10Base::Add(&this->parent,local_10);
		UnkFamily10Base::Add(&this->parent,local_c);
		UnkFamily10Base::Add(&this->parent,local_8);
		UnkFamily10Base::Add(&this->parent,local_4);
		UnkFamily10Base::Add(&this->parent,element);
		return this;
		}
		
	*/
	return;
}

void UnkFamily10S::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10S * __thiscall UnkFamily10S::Dispose(UnkFamily10S *this,byte param_1){
		UnkFamily10Base::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

