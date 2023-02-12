#include "headers/Unknown/Families/Families3X/Family32/UnkFamily32AA.h"

void UnkFamily32AA::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily32AA::CleanUp(UnkFamily32AA *this){
		int iVar1;
		int iVar2;
		iVar1 = (this->parent).field3_0x8;
		iVar2 = 0;
		(this->parent).parent.vtable = (UnkFamily32Abstract_VTable *)&UnkFamily32_VT_AA;
		if (0 < iVar1) {
		do {
		if (*(undefined4 **)(this->field2_0x10 + iVar2 * 4) != (undefined4 *)0x0) {
		(**(code **)**(undefined4 **)(this->field2_0x10 + iVar2 * 4))(1);
		}
		iVar2 = iVar2 + 1;
		}
		 while (iVar2 < (this->parent).field3_0x8);
		}
		VirtualPool::FreeMemory(this->field2_0x10);
		(this->parent).parent.vtable = (UnkFamily32Abstract_VTable *)&UnkFamily32_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void UnkFamily32AA::FUN_00141090() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily32AA::FUN_00141090(UnkFamily32AA *this){
		int *piVar1;
		char cVar2;
		int iVar3;
		if ((int *)this->field1_0xc != (int *)0x0) {
		cVar2 = (**(code **)(*(int *)this->field1_0xc + 8))();
		if (cVar2 == '\0') {
		(**(code **)(*(int *)this->field1_0xc + 0x10))();
		cVar2 = (**(code **)(*(int *)this->field1_0xc + 8))();
		if (cVar2 == '\0') {
		return;
		}
		}
		iVar3 = *(int *)&(this->parent).field1_0x4 + 1;
		*(int *)&(this->parent).field1_0x4 = iVar3;
		if (iVar3 < (this->parent).field3_0x8) {
		piVar1 = *(int **)(this->field2_0x10 + iVar3 * 4);
		this->field1_0xc = piVar1;
		 WARNING: Could not recover jumptable at 0x001410d3. Too many branches  WARNING: Treating indirect jump as call (**(code **)(*piVar1 + 4))();
		return;
		}
		this->field1_0xc = 0;
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily32AA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily32AA * __thiscall UnkFamily32AA::Dispose(UnkFamily32AA *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily32AA::FUN_00141060() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily32AA::FUN_00141060(UnkFamily32AA *this){
		int *piVar1;
		*(undefined4 *)&(this->parent).field1_0x4 = 0;
		if (0 < (this->parent).field3_0x8) {
		piVar1 = *(int **)this->field2_0x10;
		this->field1_0xc = piVar1;
		 WARNING: Could not recover jumptable at 0x00141078. Too many branches  WARNING: Treating indirect jump as call (**(code **)(*piVar1 + 4))();
		return;
		}
		this->field1_0xc = 0;
		return;
		}
		
	*/
	return;
}

bool UnkFamily32AA::FUN_00141080() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall UnkFamily32AA::FUN_00141080(UnkFamily32AA *this){
		return this->field1_0xc == 0;
		}
		
	*/
	return false;
}

void UnkFamily32AA::FUN_00142600() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily32AA::FUN_00142600(UnkFamily32AA *this){
		 WARNING: Could not recover jumptable at 0x00142605. Too many branches  WARNING: Treating indirect jump as call (**(code **)(*(int *)this->field1_0xc + 0xc))();
		return;
		}
		
	*/
	return;
}

