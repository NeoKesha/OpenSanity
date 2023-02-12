#include "headers/Unknown/Families/Families2X/Family27/UnkFamily27Wrapper.h"

#include "headers/Unknown/Families/Families2X/Family27/UnkFamily27A.h"
bool UnkFamily27Wrapper::FUN_000f3500(uint param_1, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall UnkFamily27Wrapper::FUN_000f3500(UnkFamily27Wrapper *this,AiPosition *param_1,undefined4 param_2,undefined4 param_3){
		bool bVar1;
		bVar1 = UnkFamily27A::FUN_0020c0a0(this->ptr);
		if (bVar1 != false) {
		if (this->field1_0x4 == 0) {
		bVar1 = UnkFamily27A::FUN_000f3360(this->ptr,param_1,param_2,param_3);
		return bVar1;
		}
		if (this->field1_0x4 == 1) {
		bVar1 = UnkFamily27A::FUN_000f33b0(this->ptr,param_1,param_2,param_3);
		return bVar1;
		}
		}
		return false;
		}
		
	*/
	return false;
}

void UnkFamily27Wrapper::FUN_0020e930(int param_1, int* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily27Wrapper::FUN_0020e930(UnkFamily27Wrapper *this,int param_1,int *param_2){
		UnkFamily27A *this_00;
		bool bVar1;
		uint uVar2;
		(this->ptr->parent).field410_0x1ac = this;
		this_00 = this->ptr;
		UnkFamily27B::CleanUp((UnkFamily27B *)this_00);
		(this_00->parent).field408_0x1a4 = param_1;
		(this_00->parent).field_0x9 = 0;
		this->field1_0x4 = (int)param_2;
		if (param_2 == (int *)0x1) {
		uVar2 = FUN_0020e490(this->ptr,0);
		*(char *)&this->field2_0x8 = (char)uVar2;
		return;
		}
		bVar1 = UnkFamily27A::FUN_0020e560(this->ptr,0);
		*(bool *)&this->field2_0x8 = bVar1;
		return;
		}
		
	*/
	return;
}

