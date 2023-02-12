#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10Base.h"

#include "headers/Unknown/Families/Families0X/Family8/UnkFamily8Abstract.h"
void UnkFamily10Base::Init() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily10Base::Init(UnkFamily10Base *this){
		uint uVar1;
		uint uVar2;
		uVar1 = this->field6_0x18;
		uVar2 = 0;
		this->field7_0x1c = 0;
		this->field6_0x18 = uVar1 & 0x3efff | 0x9f7c1000;
		if ((uVar1 & 0x3e000) != 0) {
		do {
		this->buffer2[uVar2] = 0;
		this->buffer1[uVar2] = 0;
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < (this->field6_0x18 >> 0xd & 0x1f));
		}
		this->field8_0x20 = 0;
		this->field9_0x24 = 0;
		this->field10_0x28 = 0;
		this->field11_0x2c = 0;
		this->field12_0x30 = -1;
		this->field13_0x34 = -1;
		this->field14_0x38 = -1;
		this->field15_0x3c = -1;
		return;
		}
		
	*/
	return;
}

void UnkFamily10Base::Construct(char* name, size_t length) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10Base * __thiscall UnkFamily10Base::Construct(UnkFamily10Base *this,char *name,size_t length){
		byte *buffer1;
		byte *buffer2;
		int *pvVar1;
		this->vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_Base;
		this->name = name;
		this->buffer1length = length;
		if (length == 0) {
		buffer1 = (byte *)0x0;
		}
		else {
		buffer1 = (byte *)VirtualPool::AllocateMemory(length);
		}
		this->buffer1 = buffer1;
		this->buffer2length = length;
		if (length == 0) {
		buffer2 = (byte *)0x0;
		}
		else {
		buffer2 = (byte *)VirtualPool::AllocateMemory(length);
		}
		this->buffer2 = buffer2;
		this->field6_0x18 = this->field6_0x18 ^ (length << 0xd ^ this->field6_0x18) & 0x3e000;
		(this->field16_0x40).cnt = 0;
		(this->field16_0x40).field2_0x8 = 10;
		(this->field16_0x40).field3_0xc = 10;
		pvVar1 = (int *)VirtualPool::AllocateMemory(0x28);
		(this->field16_0x40).ptrArray = (UnkFamily8Abstract **)pvVar1;
		Init(this);
		return this;
		}
		
	*/
	return;
}

void UnkFamily10Base::Construct_2(uint param_1, uint length) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10Base * __thiscall UnkFamily10Base::Construct(UnkFamily10Base *this,uint param_1,uint length){
		byte *pbVar1;
		UnkFamily8Abstract **ppUVar2;
		this->vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_Base;
		this->name = (char *)0x0;
		this->buffer1length = length;
		if (length == 0) {
		pbVar1 = (byte *)0x0;
		}
		else {
		pbVar1 = (byte *)VirtualPool::AllocateMemory(length);
		}
		this->buffer1 = pbVar1;
		this->buffer2length = length;
		if (length == 0) {
		pbVar1 = (byte *)0x0;
		}
		else {
		pbVar1 = (byte *)VirtualPool::AllocateMemory(length);
		}
		this->buffer2 = pbVar1;
		this->field6_0x18 = (length & 0x1f) << 0xd | this->field6_0x18 & 0xfffc1c00 | param_1 & 0x3ff;
		(this->field16_0x40).cnt = 0;
		(this->field16_0x40).field2_0x8 = 10;
		(this->field16_0x40).field3_0xc = 10;
		ppUVar2 = (UnkFamily8Abstract **)VirtualPool::AllocateMemory(0x28);
		(this->field16_0x40).ptrArray = ppUVar2;
		Init(this);
		return this;
		}
		
	*/
	return;
}

void UnkFamily10Base::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily10Base::CleanUp(UnkFamily10Base *this){
		this->vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_Base;
		VirtualPool::FreeMemory((this->field16_0x40).ptrArray);
		VirtualPool::FreeMemory(this->buffer2);
		VirtualPool::FreeMemory(this->buffer1);
		return;
		}
		
	*/
	return;
}

bool UnkFamily10Base::Add(UnkFamily8Abstract* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall UnkFamily10Base::Add(UnkFamily10Base *this,UnkFamily8Abstract *element){
		UnkFamily10BaseSub::Add(&this->field16_0x40,element);
		return true;
		}
		
	*/
	return false;
}

int UnkFamily10Base::FUN_001a5670(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall UnkFamily10Base::FUN_001a5670(UnkFamily10Base *this,uint param_1){
		uint uVar1;
		int *piVar2;
		int iVar3;
		iVar3 = 0;
		for (uVar1 = 0;
		 (-1 < (int)uVar1 && (uVar1 < (this->field16_0x40).cnt));
		 uVar1 = uVar1 + 1) {
		piVar2 = (int *)(*(code *)PTR_Get_00394664)();
		if ((*(uint *)(*piVar2 + 8) & 0xfff) == param_1) {
		return iVar3;
		}
		iVar3 = iVar3 + 1;
		}
		return -1;
		}
		
	*/
	return 0;
}

int UnkFamily10Base::FUN_001a56e0(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall UnkFamily10Base::FUN_001a56e0(UnkFamily10Base *this,uint param_1){
		uint uVar1;
		int *piVar2;
		for (uVar1 = 0;
		 (-1 < (int)uVar1 && (uVar1 < (this->field16_0x40).cnt));
		 uVar1 = uVar1 + 1) {
		piVar2 = (int *)(*(code *)PTR_Get_00394664)();
		if ((*(uint *)(*piVar2 + 8) & 0xfff) == param_1) {
		return *piVar2;
		}
		}
		return 0;
		}
		
	*/
	return 0;
}

void UnkFamily10Base::FUN_001a57c0(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily10Base::FUN_001a57c0(UnkFamily10Base *this,uint param_1){
		int iVar1;
		iVar1 = FUN_001a5670(this,param_1);
		if (-1 < iVar1) {
		this->field6_0x18 = this->field6_0x18 ^ (iVar1 << 0x12 ^ this->field6_0x18) & 0xfc0000;
		}
		return;
		}
		
	*/
	return;
}

uint* UnkFamily10Base::FUN_000abef0(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily10Base::FUN_000abef0(UnkFamily10Base *this,byte param_1){
		this->vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->vtable;
		}
		
	*/
	return null;
}

uint* UnkFamily10Base::FUN_000abfb0(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily10Base::FUN_000abfb0(UnkFamily10Base *this,byte param_1){
		this->vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->vtable;
		}
		
	*/
	return null;
}

uint* UnkFamily10Base::FUN_000ac0a0(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily10Base::FUN_000ac0a0(UnkFamily10Base *this,byte param_1){
		this->vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->vtable;
		}
		
	*/
	return null;
}

void UnkFamily10Base::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10Base * __thiscall UnkFamily10Base::Dispose(UnkFamily10Base *this,byte param_1){
		this->vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_Base;
		VirtualPool::FreeMemory((this->field16_0x40).ptrArray);
		VirtualPool::FreeMemory(this->buffer2);
		VirtualPool::FreeMemory(this->buffer1);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

uint* UnkFamily10Base::FUN_002036a0(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily10Base::FUN_002036a0(UnkFamily10Base *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->vtable;
		}
		
	*/
	return null;
}

void UnkFamily10Base::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily10Base::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily10Base::EmptyFunction_14() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily10Base::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily10Base::EmptyFunction_15() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily10Base::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily10Base::EmptyFunction_16() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily10Base::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily10Base::EmptyFunction_17() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily10Base::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily10Base::FUN_000ab4c0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily10Base::FUN_000ab4c0(void){
		return 0;
		}
		
	*/
	return;
}

void UnkFamily10Base::EmptyFunction_19() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily10Base::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily10Base::EmptyFunction_20() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily10Base::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily10Base::EmptyFunction_21() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily10Base::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

