#include "headers/Unknown/Families/Families0X/Family8/UnkFamily8AA.h"

void UnkFamily8AA::Construct(uint param_1, uint param_2, int param_3, byte param_4, uint param_5, uint param_6) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily8AA * __thiscall UnkFamily8AA::Construct(UnkFamily8AA *this,uint param_1,uint param_2,int param_3,undefined param_4,undefined4 param_5,uint param_6){
		int *piVar1;
		uint i;
		UnkFamily8A::Construct(&this->parent,param_1,param_2,0,param_3 + -1,param_4,param_5,param_6);
		(this->parent).parent.vtable = &UnkFamily8_VT_AA;
		*(undefined4 *)&this->field_0x44 = 0;
		this->field1_0x40 = (char *)0x0;
		this->cnt = param_3;
		if (param_3 == 0) {
		piVar1 = (int *)0x0;
		}
		else {
		piVar1 = (int *)VirtualPool::AllocateMemory(param_3 * 4);
		}
		this->array = piVar1;
		i = 0;
		if (this->cnt != 0) {
		do {
		this->array[i] = -1;
		i = i + 1;
		}
		 while (i < this->cnt);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily8AA::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily8AA::Dispose(UnkFamily8AA *this){
		int *ptr;
		ptr = this->array;
		(this->parent).parent.vtable = &UnkFamily8_VT_AA;
		VirtualPool::FreeMemory(ptr);
		VirtualPool::FreeMemory(this->field1_0x40);
		(this->parent).parent.vtable = &UnkFamily8_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void UnkFamily8AA::Dispose_2(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily8AA::Dispose(UnkFamily8AA *this,byte param_1){
		int *ptr;
		ptr = this->array;
		(this->parent).parent.vtable = &UnkFamily8_VT_AA;
		VirtualPool::FreeMemory(ptr);
		VirtualPool::FreeMemory(this->field1_0x40);
		(this->parent).parent.vtable = &UnkFamily8_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void UnkFamily8AA::Dispose_3(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily8AA::Dispose(UnkFamily8AA *this,byte param_1){
		int *ptr;
		ptr = this->array;
		(this->parent).parent.vtable = &UnkFamily8_VT_AA;
		VirtualPool::FreeMemory(ptr);
		VirtualPool::FreeMemory(this->field1_0x40);
		(this->parent).parent.vtable = &UnkFamily8_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

bool UnkFamily8AA::PrintValue(int param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall UnkFamily8AA::PrintValue(UnkFamily8AA *this,int param_1,int param_2){
		char cVar1;
		float fVar2;
		char *pcVar3;
		char **ppcVar4;
		int iVar5;
		if ((this->parent).cnt < *(int *)&(this->parent).field_0x34) {
		return false;
		}
		fVar2 = (this->parent).field1_0x14[param_1];
		if (*(int *)&this->field_0x44 == 0) {
		fVar2 = (float)this->array[(int)fVar2];
		ppcVar4 = LOCAL_MSG1;
		}
		else {
		ppcVar4 = (char **)this->field1_0x40;
		}
		pcVar3 = ppcVar4[(int)fVar2];
		iVar5 = param_2 - (int)pcVar3;
		do {
		cVar1 = *pcVar3;
		pcVar3[iVar5] = cVar1;
		pcVar3 = pcVar3 + 1;
		}
		 while (cVar1 != '\0');
		return true;
		}
		
	*/
	return false;
}

void UnkFamily8AA::Construct_5(uint param_1, uint param_2, int strCnt, byte param_4, uint param_5, byte param_6) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily8AA * __thiscall UnkFamily8AA::Construct(UnkFamily8AA *this,undefined4 param_1,uint param_2,int strCnt,undefined param_4,undefined4 param_5,byte param_6){
		char *stringArray;
		uint i;
		UnkFamily8A::Construct(&this->parent,param_1,param_2,0,strCnt + -1,param_4,param_5,param_6);
		(this->parent).parent.vtable = &UnkFamily8_VT_AA;
		*(int *)&this->field_0x44 = strCnt;
		if (strCnt == 0) {
		stringArray = (char *)0x0;
		}
		else {
		stringArray = (char *)VirtualPool::AllocateMemory(strCnt * 4);
		}
		this->field1_0x40 = stringArray;
		i = 0;
		if (*(int *)&this->field_0x44 != 0) {
		do {
		*(char **)(this->field1_0x40 + i * 4) = "*** UNDEFINED!!! ***";
		i = i + 1;
		}
		 while (i < *(uint *)&this->field_0x44);
		}
		this->cnt = 0;
		this->array = (int *)0x0;
		return this;
		}
		
	*/
	return;
}

