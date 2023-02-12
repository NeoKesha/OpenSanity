#include "headers/Unknown/Families/Families0X/Family8/UnkFamily8B.h"

#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10Base.h"
void UnkFamily8B::Construct(uint param_1, uint param_2, uint param_3, byte param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily8B * __thiscall UnkFamily8B::Construct(UnkFamily8B *this,int param_1,uint param_2,UnkFamily10Base *param_3,byte param_4){
		char cVar1;
		(this->parent).field1_0x4 = param_1;
		(this->parent).field2_0x8 =(param_4 & 0xf | 0x10) << 0x18 | param_2 & 0xfff | (this->parent).field2_0x8 & 0xf0000000;
		(this->parent).vtable = &UnkFamily8_VT_B;
		(this->parent).field7_0x10 = param_3;
		cVar1 = ('\x01' << (param_4 & 0x1f)) + -1;
		(this->parent).field_0xd = cVar1;
		(this->parent).field_0xc = cVar1;
		return this;
		}
		
	*/
	return;
}

void UnkFamily8B::Construct_1(uint param_1, uint param_2, UnkFamily10Base* param_3, uint param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily8B * __thiscall UnkFamily8B::Construct(UnkFamily8B *this,uint param_1,uint param_2,UnkFamily10Base *param_3,uint param_4){
		char cVar1;
		(this->parent).field2_0x8 =((param_4 & 0xf | 0x10) << 0xc | param_1 & 0xfff) << 0xc | param_2 & 0xfff |(this->parent).field2_0x8 & 0xf0000000;
		(this->parent).field1_0x4 = 0;
		(this->parent).vtable = &UnkFamily8_VT_B;
		cVar1 = ('\x01' << ((byte)param_4 & 0x1f)) + -1;
		(this->parent).field_0xd = cVar1;
		(this->parent).field_0xc = cVar1;
		(this->parent).field7_0x10 = param_3;
		return this;
		}
		
	*/
	return;
}

uint UnkFamily8B::FUN_001a1da0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10Base * __fastcall UnkFamily8B::FUN_001a1da0(UnkFamily8B *this){
		return (this->parent).field7_0x10;
		}
		
	*/
	return 0;
}

uint UnkFamily8B::FUN_001a1db0(void* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint UnkFamily8B::FUN_001a1db0(UnkFamily8B *this,undefined *param_2){
		*param_2 = 0;
		return (uint)param_2 & 0xffffff00;
		}
		
	*/
	return 0;
}

void UnkFamily8B::FUN_001a1dc0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily8B::FUN_001a1dc0(void){
		return 0;
		}
		
	*/
	return;
}

uint UnkFamily8B::FUN_001a1dd0(uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint UnkFamily8B::FUN_001a1dd0(UnkFamily8B *this,undefined4 *param_2){
		*param_2 = 0xffffffff;
		return (uint)param_2 & 0xffffff00;
		}
		
	*/
	return 0;
}

void UnkFamily8B::FUN_001a1de0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily8B::FUN_001a1de0(void){
		return 0;
		}
		
	*/
	return;
}

uint UnkFamily8B::FUN_001a1df0(uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint UnkFamily8B::FUN_001a1df0(UnkFamily8B *this,undefined4 *param_2){
		*param_2 = 0xffffffff;
		return (uint)param_2 & 0xffffff00;
		}
		
	*/
	return 0;
}

void UnkFamily8B::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily8B::IsA(void){
		return 0;
		}
		
	*/
	return;
}

uint UnkFamily8B::FUN_001a1e10(float* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint UnkFamily8B::FUN_001a1e10(UnkFamily8B *this,float *param_2){
		*param_2 = FLOAT_003943a4;
		return (uint)param_2 & 0xffffff00;
		}
		
	*/
	return 0;
}

uint UnkFamily8B::FUN_001a4250(uint param_1, int* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10Base * __thiscall UnkFamily8B::FUN_001a4250(UnkFamily8B *this,undefined4 param_1,int *param_2){
		(**(code **)(*param_2 + 0x10))(param_1);
		return (this->parent).field7_0x10;
		}
		
	*/
	return 0;
}

void UnkFamily8B::Construct_11(uint param_1, uint param_2, uint param_3, byte param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily8B::Construct(UnkFamily8B *this,int param_1,uint param_2,UnkFamily10Base *param_3,byte param_4){
		char cVar1;
		(this->parent).field1_0x4 = param_1;
		(this->parent).field2_0x8 =(param_4 & 0xf | 0x10) << 0x18 | param_2 & 0xfff | (this->parent).field2_0x8 & 0xf0000000;
		(this->parent).field7_0x10 = param_3;
		(this->parent).vtable = &UnkFamily8_VT_BA;
		cVar1 = ('\x01' << (param_4 & 0x1f)) + -1;
		(this->parent).field_0xd = cVar1;
		(this->parent).field_0xc = cVar1;
		return;
		}
		
	*/
	return;
}

