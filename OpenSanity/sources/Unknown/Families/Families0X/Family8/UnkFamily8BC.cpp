#include "headers/Unknown/Families/Families0X/Family8/UnkFamily8BC.h"

uint* UnkFamily8BC::FUN_000ab910(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily8BC::FUN_000ab910(UnkFamily8BC *this,byte param_1){
		TwinString::Dispose(&this->name);
		UnkFamily8Abstract::Unroll((UnkFamily8Abstract *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return null;
}

uint UnkFamily8BC::FUN_000a6db0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall UnkFamily8BC::FUN_000a6db0(UnkFamily8BC *this){
		thunk_FUN_000afdc0((int)GameController3,(int)(TicksPerTime * FLOAT_00386ab4),(this->name).value,*(uint *)&this->field_0x14 & 0xff,(uint)(byte)this->field_0x15);
		return 0;
		}
		
	*/
	return 0;
}

void UnkFamily8BC::Construct(uint param_1, uint param_2, char* param_3, byte param_4, byte param_5) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily8BC::Construct(UnkFamily8BC *this,uint param_1,uint param_2,char *param_3,undefined param_4,undefined param_5){
		UnkFamily8B::Construct(&this->parent,param_1,param_2,(UnkFamily10Base *)0x0,1);
		(this->parent).parent.vtable = &UnkFamily8_VT_BC;
		TwinString::Set(&this->name,param_3);
		*(undefined4 *)&this->field_0x14 = 0;
		this->field_0x14 = param_4;
		this->field_0x15 = param_5;
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void UnkFamily8BC::Construct_3(uint param_1, uint param_2, char* param_3, byte param_4, byte param_5) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily8BC::Construct(UnkFamily8BC *this,undefined4 param_1,uint param_2,char *param_3,undefined param_4,undefined param_5){
		UnkFamily8B::Construct(&this->parent,param_1,param_2,0,1);
		(this->parent).parent.vtable = &UnkFamily8_VT_BC;
		TwinString::Set(&this->name,param_3);
		*(undefined4 *)&this->field_0x14 = 0;
		this->field_0x14 = param_4;
		this->field_0x15 = param_5;
		return (undefined4 *)this;
		}
		
	*/
	return;
}

