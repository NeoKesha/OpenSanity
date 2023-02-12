#include "headers/Unknown/Families/Families0X/Family5/UnkFamily5SomeStruct.h"

#include "headers/Unknown/Families/Families0X/Family5/UnkFamily5Ptr.h"
#include "headers/Unknown/Families/Families0X/Family5/UnkFamily5AA.h"
void UnkFamily5SomeStruct::CreatePayload(UnkFamily5AA* param_1, byte param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily5Ptr * __thiscall UnkFamily5SomeStruct::CreatePayload(UnkFamily5SomeStruct *this,UnkFamily5AA *param_1,byte param_2){
		uint uVar1;
		UnkFamily5Ptr *pUVar2;
		if (this->ptr == (UnkFamily5Ptr *)0x0) {
		pUVar2 = (UnkFamily5Ptr *)VirtualPool::AllocateMemory(8);
		if (pUVar2 == (UnkFamily5Ptr *)0x0) {
		pUVar2 = (UnkFamily5Ptr *)0x0;
		}
		else {
		pUVar2->ptr = (UnkFamily5Base *)param_1;
		pUVar2->unk = (param_2 & 1) << 0x18 | pUVar2->unk & 0xfe000000;
		}
		this->ptr = pUVar2;
		}
		uVar1 = this->ptr->unk;
		this->ptr->unk = (uVar1 + 1 ^ uVar1) & 0xffffff ^ uVar1;
		return this->ptr;
		}
		
	*/
	return;
}

UnkFamily5SomeStruct* UnkFamily5SomeStruct::FUN_00059cf0(UnkFamily5AA* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily5SomeStruct * __thiscall UnkFamily5SomeStruct::FUN_00059cf0(UnkFamily5SomeStruct *this,UnkFamily5AA *param_1){
		UnkFamily5Ptr *pUVar1;
		if (param_1 == (UnkFamily5AA *)0x0) {
		this->ptr = (UnkFamily5Ptr *)0x0;
		return this;
		}
		pUVar1 = (UnkFamily5Ptr *)CreatePayload(&(param_1->parent).parent.someStruct,param_1,1);
		this->ptr = pUVar1;
		return this;
		}
		
	*/
	return null;
}

