#include "headers/Unknown/Families/Families3X/Family30/UnkFamily30AA.h"

void UnkFamily30AA::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily30AA::CleanUp(UnkFamily30AA *this){
		int iVar1;
		int iVar2;
		iVar1 = (this->parent).field3_0x8;
		iVar2 = 0;
		(this->parent).parent.vtable = (UnkFamily30Abstract_VTable *)&UnkFamily30_VT_AA;
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
		(this->parent).parent.vtable = (UnkFamily30Abstract_VTable *)&UnkFamily30_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void UnkFamily30AA::FUN_00140f70() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily30AA::FUN_00140f70(UnkFamily30AA *this){
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
		 WARNING: Could not recover jumptable at 0x00140fb3. Too many branches  WARNING: Treating indirect jump as call (**(code **)(*piVar1 + 4))();
		return;
		}
		this->field1_0xc = 0;
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily30AA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily30AA::Dispose(UnkFamily30AA *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void UnkFamily30AA::FUN_00140f40() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily30AA::FUN_00140f40(UnkFamily30AA *this){
		int *piVar1;
		*(undefined4 *)&(this->parent).field1_0x4 = 0;
		if (0 < (this->parent).field3_0x8) {
		piVar1 = *(int **)this->field2_0x10;
		this->field1_0xc = piVar1;
		 WARNING: Could not recover jumptable at 0x00140f58. Too many branches  WARNING: Treating indirect jump as call (**(code **)(*piVar1 + 4))();
		return;
		}
		this->field1_0xc = 0;
		return;
		}
		
	*/
	return;
}

bool UnkFamily30AA::FUN_00140f60() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall UnkFamily30AA::FUN_00140f60(UnkFamily30AA *this){
		return this->field1_0xc == 0;
		}
		
	*/
	return false;
}

void UnkFamily30AA::FUN_001423c0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily30AA::FUN_001423c0(UnkFamily30AA *this){
		 WARNING: Could not recover jumptable at 0x001423c5. Too many branches  WARNING: Treating indirect jump as call (**(code **)(*(int *)this->field1_0xc + 0xc))();
		return;
		}
		
	*/
	return;
}

