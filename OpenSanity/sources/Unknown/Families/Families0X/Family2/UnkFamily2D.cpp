#include "headers/Unknown/Families/Families0X/Family2/UnkFamily2D.h"

void UnkFamily2D::Construct(uint ctx, byte param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily2D * __thiscall UnkFamily2D::Construct(UnkFamily2D *this,InstanceNodeAbstract *ctx,undefined param_2){
		undefined2 *puVar1;
		undefined4 *puVar2;
		int iVar3;
		uint *puVar4;
		(this->parent).field_0x4 = param_2;
		(this->parent).node = ctx;
		(this->parent).vtable = (UnkFamily2_VTable *)&UnkFamily2_VT_D;
		puVar4 = &this->field30_0x40;
		iVar3 = 8;
		do {
		FUN_0016f1c0(puVar4);
		puVar4 = puVar4 + 0x1c;
		iVar3 = iVar3 + -1;
		}
		 while (iVar3 != 0);
		puVar2 = &this->field923_0x3c0;
		puVar1 = &this->field2_0x10;
		iVar3 = 8;
		do {
		*puVar1 = 0xffff;
		*puVar2 = 0xffffffff;
		puVar1 = puVar1 + 1;
		puVar2 = puVar2 + 1;
		iVar3 = iVar3 + -1;
		}
		 while (iVar3 != 0);
		this->field17_0x20 = 0xffffffff;
		this->field18_0x24 = 0xffffffff;
		this->field19_0x28 = 0xffffffff;
		this->field20_0x2c = 0xffffffff;
		this->field21_0x30 = 0xffffffff;
		this->field22_0x34 = 0xffffffff;
		this->field23_0x38 = 0xffff;
		this->field1_0xc = this->field1_0xc & 0xfffe00ff;
		return this;
		}
		
	*/
	return;
}

void UnkFamily2D::FUN_00039760() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily2D::FUN_00039760(UnkFamily2D *this){
		this->field1_0xc = this->field1_0xc & 0xfff9ffff;
		this->field956_0x3e4 = 0;
		return;
		}
		
	*/
	return;
}

void UnkFamily2D::FUN_00039780() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily2D::FUN_00039780(UnkFamily2D *this){
		int *piVar1;
		InstanceNodeAbstract *pIVar2;
		uint uVar3;
		int iVar4;
		uVar3 = GameController4->flags >> 0xc & 0x3f;
		if ((uVar3 == 0xc) || (uVar3 == 6)) {
		if ((this->field1_0xc & 0x10000) != 0) goto LAB_000397be;
		uVar3 = this->field1_0xc | 0x10000;
		}
		else {
		if ((this->field1_0xc & 0x10000) == 0) goto LAB_000397be;
		uVar3 = this->field1_0xc & 0xfffeffff;
		}
		this->field1_0xc = uVar3;
		LAB_000397be:uVar3 = this->field1_0xc;
		uVar3 = (uVar3 * 2 ^ uVar3) & 0x40000 ^ uVar3;
		this->field1_0xc = uVar3;
		if ((((uVar3 & 0x10000) == 0) &&(piVar1 = (int *)PTR_003d0ee8->field22_0xb8, piVar1 != (int *)0x0)) &&(iVar4 = (**(code **)(*piVar1 + 0x1c))(), iVar4 == 3)) {
		if ((*(int *)&this->field_0x3e0 == 0) || (*(char *)(piVar1 + 0x8e) == '\0')) {
		iVar4 = 0;
		}
		else {
		iVar4 = 1;
		}
		this->field1_0xc = this->field1_0xc ^ (iVar4 << 0x11 ^ this->field1_0xc) & 0x20000;
		}
		if ((*(int *)&this->field_0x3e0 == 0) &&(pIVar2 = (this->parent).node, *(char *)&pIVar2[0xe].time != -1)) {
		(*pIVar2->vtable[4].IsA)();
		this->field1_0xc = this->field1_0xc & 0xfff9ffff;
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily2D::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily2D::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily2D::EmptyFunction_4() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily2D::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily2D::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily2Base * __thiscall UnkFamily2D::Dispose(UnkFamily2D *this,byte param_1){
		thunk_FUN_000235a0(&this->field30_0x40,0x70,8,UnkFamily2B::EmptyFunction);
		(this->parent).vtable = (UnkFamily2_VTable *)&UnkFamily2_VT_Base;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

