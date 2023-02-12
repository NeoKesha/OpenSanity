#include "headers/Unknown/Families/Families0X/Family5/UnkFamily5AA.h"

#include "headers/Known/Game/InstanceSystem/InstanceContextRefCounter.h"
void UnkFamily5AA::Construct(ushort param_1, bool param_2, bool param_3, InstanceContextRefCounter* param_4, uint param_5, int param_6) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily5AA * __thiscall UnkFamily5AA::Construct(UnkFamily5AA *this,undefined2 param_1,bool param_2,bool param_3,InstanceContextRefCounter *param_4,undefined4 param_5,int param_6){
		uint uVar1;
		if (param_4 != (InstanceContextRefCounter *)0x0) {
		uVar1 = param_4->refCount;
		param_4->refCount = (uVar1 + 1 ^ uVar1) & 0xffffff ^ uVar1;
		}
		UnkFamily5A::Construct(&this->parent,0x100,param_4,param_6);
		(this->parent).parent.vtable = &UnkFamily5_VT_AA;
		this->field1_0x14 = param_1;
		*(bool *)&this->field4_0x18 = param_2;
		this->field4_0x18 = this->field4_0x18 ^ ((uint)param_3 << 8 ^ this->field4_0x18) & 0x100;
		*(undefined4 *)&this->field_0x1c = param_5;
		InstanceContextSmartPtr::Release(&param_4);
		return this;
		}
		
	*/
	return;
}

void UnkFamily5AA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily5AA::Dispose(UnkFamily5AA *this,byte param_1){
		UnkFamily5Ptr *pUVar1;
		(this->parent).parent.vtable = &UnkFamily5_VT_Base;
		InstanceContextSmartPtr::Release(&(this->parent).parent.field5_0x10);
		pUVar1 = (this->parent).parent.someStruct.ptr;
		if (pUVar1 != (UnkFamily5Ptr *)0x0) {
		pUVar1->ptr = (UnkFamily5Base *)0x0;
		}
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void UnkFamily5AA::FUN_00187100(int* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily5AA::FUN_00187100(UnkFamily5AA *this,int *param_1,int param_2){
		int iVar1;
		if ((this->field1_0x14 != 0xffff) &&(iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 8) +((ushort)this->field1_0x14 & 0x7fff) * 4), iVar1 != 0)) {
		(**(code **)(*param_1 + 0x44))(iVar1,*(undefined4 *)&this->field_0x1c,this->field4_0x18 >> 8 & 0xffffff01,*(undefined *)&this->field4_0x18);
		}
		return;
		}
		
	*/
	return;
}

