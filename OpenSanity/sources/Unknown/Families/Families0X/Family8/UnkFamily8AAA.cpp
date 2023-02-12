#include "headers/Unknown/Families/Families0X/Family8/UnkFamily8AAA.h"

void UnkFamily8AAA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily8AAA::Dispose(UnkFamily8AAA *this,byte param_1){
		UnkFamily8A::Dispose((UnkFamily8A *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

uint UnkFamily8AAA::FUN_000a7620() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall UnkFamily8AAA::FUN_000a7620(UnkFamily8AAA *this){
		uint uVar1;
		uVar1 = *(uint *)&(this->parent).field_0x50;
		if ((uVar1 & 1) != 0) {
		GameController::thunk_FUN_000af380(GameController3,uVar1 >> 1 & 0x7f);
		}
		return 0;
		}
		
	*/
	return 0;
}

void UnkFamily8AAA::Construct(uint param_1, uint param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily8AAA * __thiscall UnkFamily8AAA::Construct(UnkFamily8AAA *this,uint param_1,uint param_2,int param_3){
		uint uVar1;
		UnkFamily8AA::Construct(&this->parent,param_1,param_2,0,1,0,1);
		(this->parent).parent.parent.vtable = &UnkFamily8_VT_AAA;
		*(undefined4 *)&(this->parent).field_0x50 = 0;
		uVar1 = *(uint *)&(this->parent).field_0x50;
		*(uint *)&(this->parent).field_0x50 = (param_3 * 2 ^ uVar1) & 0xfe ^ uVar1 | 1;
		return this;
		}
		
	*/
	return;
}

void UnkFamily8AAA::Construct_3(uint param_1, uint param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily8AAA * __thiscall UnkFamily8AAA::Construct(UnkFamily8AAA *this,undefined4 param_1,uint param_2,int param_3){
		uint uVar1;
		UnkFamily8AA::Construct(&this->parent,param_1,param_2,0,1,0,1);
		(this->parent).parent.parent.vtable = &UnkFamily8_VT_AAA;
		*(undefined4 *)&(this->parent).field_0x50 = 0;
		uVar1 = *(uint *)&(this->parent).field_0x50;
		*(uint *)&(this->parent).field_0x50 = (param_3 * 2 ^ uVar1) & 0xfe ^ uVar1 | 1;
		return this;
		}
		
	*/
	return;
}

