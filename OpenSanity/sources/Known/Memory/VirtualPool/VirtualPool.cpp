#include "headers/Known/Memory/VirtualPool/VirtualPool.h"

#include "headers/Known/Memory/VirtualPool/unkVirtualPoolStruct.h"
VirtualPool* VirtualPool::GetPool() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	VirtualPool * VirtualPool::GetPool(void){
		if ((DAT_003e8e48 & 1) == 0) {
		DAT_003e8e48 = DAT_003e8e48 | 1;
		Construct(&VirtualPool_003e8cc8);
		VirtualPoolExt::Construct(&VirtualPool_003e8cc8.virtualPoolExt);
		_atexit((__func *)&LAB_0027d040);
		}
		if (DAT_003e8cc4 == '\0') {
		DAT_003e8cc4 = '\x01';
		Pool21MB = _VirtualAlloc@16(0,0x1500000,0x1000,4);
		InitPool(&VirtualPool_003e8cc8,Pool21MB,0x1500000);
		}
		return &VirtualPool_003e8cc8;
		}
		
	*/
	return null;
}

void* VirtualPool::AllocateMemory(size_t size) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void * __cdecl VirtualPool::AllocateMemory(size_t size){
		VirtualPool *this;
		void *ptr;
		this = GetPool();
		ptr = AllocateMemory(this,size);
		return ptr;
		}
		
	*/
	return null;
}

void VirtualPool::FreeMemory(void* ptr) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __cdecl VirtualPool::FreeMemory(void *ptr){
		VirtualPool *pool;
		pool = GetPool();
		FreeMemory(pool,ptr);
		return;
		}
		
	*/
	return;
}

void VirtualPool::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall VirtualPool::Construct(VirtualPool *this){
		this->field2_0x8 = 0;
		this->elementPtr3 = (unkVirtualPoolStruct *)0x0;
		this->elementPtr1 = (unkVirtualPoolStruct *)0x0;
		this->elementPrt2 = (unkVirtualPoolStruct *)0x0;
		this->field4_0x10 = 0;
		this->field3_0xc = 0;
		this->field6_0x18 = 0;
		this->field5_0x14 = 0;
		this->field9_0x24 = 0;
		this->field10_0x28 = 0;
		this->field12_0x30 = 0;
		this->field11_0x2c = 0;
		this->field15_0x3c = 0;
		return;
		}
		
	*/
	return;
}

int VirtualPool::FUN_001596d0(void* str) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall VirtualPool::FUN_001596d0(VirtualPool *this,void *str){
		unkVirtualPoolStruct *puVar1;
		int iVar2;
		if ((str != (void *)0x0) && (this->field12_0x30 != 0)) {
		if (*(int *)((int)str + -0xc) == -0x1234568) {
		puVar1 = *(unkVirtualPoolStruct **)((int)str + -8);
		}
		else {
		puVar1 = (unkVirtualPoolStruct *)((int)str + -0x10);
		}
		this->field4_0x10 = this->field4_0x10 + -1;
		if (this->elementPrt2 == (unkVirtualPoolStruct *)0x0) {
		this->elementPrt2 = puVar1;
		puVar1->field1_0x4 = 0;
		puVar1->field0_0x0 = 0;
		}
		else {
		this->elementPrt2->field1_0x4 = puVar1;
		puVar1->field0_0x0 = this->elementPrt2;
		this->elementPrt2 = puVar1;
		}
		puVar1->field3_0xc = puVar1->field3_0xc | 0x80000000;
		this->field3_0xc = this->field3_0xc + 1;
		iVar2 = (puVar1->field3_0xc & 0x7fffffff) + 0x10;
		this->field5_0x14 = this->field5_0x14 + iVar2;
		this->field6_0x18 = this->field6_0x18 - iVar2;
		iVar2 = FUN_001594d0(this,(int *)puVar1);
		return iVar2;
		}
		return (int)str;
		}
		
	*/
	return 0;
}

void VirtualPool::InitPool(void* memptr, size_t size) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall VirtualPool::InitPool(VirtualPool *this,void *memptr,size_t size){
		int **start;
		unkVirtualPoolStruct *element;
		int size1;
		size_t size2;
		uint size3;
		undefined4 *puVar1;
		size1 = size - size / 5;
		size2 = size1 - 0x10;
		this->end = (void *)(size1 + -1 + (int)memptr & 0xfffffff0);
		element = (unkVirtualPoolStruct *)((int)memptr + 0xfU & 0xfffffff0);
		element->field0_0x0 = 0;
		element->field1_0x4 = 0;
		element->field2_0x8 = 0;
		element->field3_0xc = (int)memptr + (size2 - (int)element) + -0x10 & 0xfffffff0 | 0x80000000;
		this->elementPtr1 = element;
		this->elementPrt2 = element;
		this->elementPtr3 = element;
		this->start = memptr;
		this->size = size2;
		this->field2_0x8 = 0;
		this->field3_0xc = 0;
		this->field5_0x14 = 0;
		this->field12_0x30 = 0;
		this->field4_0x10 = 0;
		this->field6_0x18 = 0;
		this->field9_0x24 = 0;
		this->field10_0x28 = 0;
		this->field11_0x2c = 0;
		this->field15_0x3c = 0;
		this->field2_0x8 = (int)&element[1].field0_0x0 + (element->field3_0xc & 0x7fffffff);
		this->field3_0xc = 1;
		this->field12_0x30 = 1;
		this->field5_0x14 = size2;
		start = (int **)this->end;
		size3 = (size / 5 - 0x10) / 0x1022;
		this->field14_0x38 = 0;
		*(uint *)&this->virtualPoolExt = size3;
		(this->virtualPoolExt).start = start;
		(this->virtualPoolExt).end1 = start + size3 * 8;
		(this->virtualPoolExt).end2 = start + size3 * 8 + size3 * 0x400;
		FUN_001585b0(&(this->virtualPoolExt).field7_0x10,size3 * 0x20,(int *)&DAT_00000020,start);
		puVar1 = &this->field17_0x70;
		for (size1 = 0x3f;
		 size1 != 0;
		 size1 = size1 + -1) {
		*puVar1 = 0;
		puVar1 = puVar1 + 1;
		}
		this->field269_0x178 = 0;
		this->field268_0x174 = 0;
		this->field267_0x170 = 0;
		this->field270_0x17c = 0;
		return;
		}
		
	*/
	return;
}

void VirtualPool::FreeMemory_6(void* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall VirtualPool::FreeMemory(VirtualPool *this,void *param_1){
		if (this->end <= param_1) {
		VirtualPoolExt::FUN_001598b0(&this->virtualPoolExt,param_1);
		return;
		}
		FUN_001596d0(this,param_1);
		return;
		}
		
	*/
	return;
}

void VirtualPool::FUN_0015a800() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall VirtualPool::FUN_0015a800(VirtualPool *this){
		void *str;
		void **ppvVar1;
		int iVar2;
		void **ptr;
		iVar2 = this->field270_0x17c + 1;
		this->field270_0x17c = iVar2;
		if (iVar2 == 3) {
		this->field270_0x17c = 0;
		}
		ptr = (void **)(&this->field267_0x170)[this->field270_0x17c];
		if (ptr == (void **)0x0) {
		(&this->field267_0x170)[this->field270_0x17c] = 0;
		return;
		}
		do {
		str = *ptr;
		if (str < this->end) {
		FUN_001596d0(this,str);
		}
		else {
		VirtualPoolExt::FUN_001598b0(&this->virtualPoolExt,str);
		}
		ppvVar1 = (void **)ptr[1];
		FreeMemory(ptr);
		ptr = ppvVar1;
		}
		 while (ppvVar1 != (void **)0x0);
		(&this->field267_0x170)[this->field270_0x17c] = 0;
		return;
		}
		
	*/
	return;
}

int* VirtualPool::FUN_0015a890(int* param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall VirtualPool::FUN_0015a890(VirtualPool *this,int *param_1,uint param_2){
		int iVar1;
		int *piVar2;
		int iVar3;
		iVar3 = 1000000000;
		piVar2 = (int *)0x0;
		do {
		if (((param_2 <= (param_1[3] & 0x7fffffffU)) &&(iVar1 = (param_1[3] & 0x7fffffffU) - param_2, iVar1 != -1)) && (iVar1 < iVar3)) {
		piVar2 = param_1;
		iVar3 = iVar1;
		}
		param_1 = (int *)*param_1;
		this->field9_0x24 = this->field9_0x24 + 1;
		}
		 while (param_1 != (int *)0x0);
		if (piVar2 != (int *)0x0) {
		piVar2 = FUN_001595a0(this,piVar2,param_2);
		return piVar2;
		}
		return (int *)0x0;
		}
		
	*/
	return null;
}

void* VirtualPool::AllocateMemory_9(size_t size) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void * __thiscall VirtualPool::AllocateMemory(VirtualPool *this,size_t size){
		uint uVar1;
		undefined4 *puVar2;
		int *piVar3;
		if (size < 0x1000) {
		if (size != 0) {
		uVar1 = FUN_00158410(size + 3 & 0xfffffffc);
		puVar2 = FUN_001597c0((int)&this->virtualPoolExt,uVar1);
		return puVar2;
		}
		}
		else if (this->field12_0x30 != 0) {
		this->field10_0x28 = this->field10_0x28 + 1;
		piVar3 = FUN_0015a890(this,(int *)this->elementPrt2,size + 0xf & 0xfffffff0);
		return piVar3;
		}
		return (void *)0x0;
		}
		
	*/
	return null;
}

void* VirtualPool::AllocateMemoryAligned(size_t amount, int alignment) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void * __thiscall VirtualPool::AllocateMemoryAligned(VirtualPool *this,size_t amount,int alignment){
		int *ptr;
		int *alignedPtr;
		if (this->field12_0x30 == 0) {
		ptr = (int *)0x0;
		}
		else {
		this->field10_0x28 = this->field10_0x28 + 1;
		ptr = FUN_0015a890(this,(int *)this->elementPrt2,((alignment * 2 + 0xe) - (alignment - 1U & amount)) + amount & 0xfffffff0);
		}
		alignedPtr = ptr;
		if (((uint)ptr & alignment - 1U) != 0) {
		alignedPtr = (int *)((int)ptr + alignment + -1 & ~(alignment - 1U));
		alignedPtr[-2] = (int)(ptr + -4);
		alignedPtr[-3] = -0x1234568;
		}
		return alignedPtr;
		}
		
	*/
	return null;
}

