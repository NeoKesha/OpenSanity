#include "headers/Unknown/Families/Families0X/Family8/UnkFamily8AAB.h"

void UnkFamily8AAB::Construct(uint param_1, uint param_2, uint param_3, uint param_4, byte param_5, byte param_6, uint param_7) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily8AAB::Construct(UnkFamily8AAB *this,uint param_1,uint param_2,int param_3,int param_4,undefined param_5,byte param_6,uint param_7){
		int *piVar1;
		UnkFamily8AA::Construct(&this->parent,param_1,param_2,2,param_5,(uint)param_6,param_7);
		piVar1 = (this->parent).array;
		(this->parent).parent.parent.vtable = &UnkFamily8_VT_AAB;
		(this->parent).parent.field_0x3d = 1;
		*piVar1 = param_3;
		(this->parent).array[1] = param_4;
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void UnkFamily8AAB::Construct_1(uint param_1, uint param_2, uint param_3, uint param_4, byte param_5, byte param_6, byte param_7) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily8AAB * __thiscall UnkFamily8AAB::Construct(UnkFamily8AAB *this,undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined param_5,byte param_6,byte param_7){
		undefined4 *puVar1;
		UnkFamily8AA::Construct(&this->parent,param_1,param_2,2,param_5,(uint)param_6,param_7);
		puVar1 = (undefined4 *)(this->parent).field1_0x40;
		(this->parent).parent.parent.vtable = &UnkFamily8_VT_AAB;
		(this->parent).parent.field_0x3d = 1;
		*puVar1 = param_3;
		*(undefined4 *)((this->parent).field1_0x40 + 4) = param_4;
		return this;
		}
		
	*/
	return;
}

