#include "headers/Unknown/Families/Families1X/Family11/UnkFamily11A.h"

void UnkFamily11A::FUN_000e08e0(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily11A::FUN_000e08e0(UnkFamily11A *this,int *param_1){
		int *piVar1;
		int *piVar2;
		size_t size;
		undefined *puVar3;
		piVar1 = &(this->parent).cnt;
		(**(code **)(*param_1 + 0x40))(piVar1);
		piVar2 = &(this->parent).field3_0xc;
		(**(code **)(*param_1 + 0x38))(piVar2);
		size = (*piVar1 * 2 + 2) * 0x10;
		(this->parent).field4_0x10 = (int)(FLOAT_0038639c / (float)*piVar2);
		puVar3 = (undefined *)VirtualPool::AllocateMemory(size);
		(this->parent).field2_0x8 = puVar3;
		(**(code **)(*param_1 + 4))(puVar3,size,1);
		return;
		}
		
	*/
	return;
}

void UnkFamily11A::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily11A::Dispose(UnkFamily11A *this){
		undefined *ptr;
		ptr = this->field1_0x14;
		(this->parent).vtable = (UnkFamily11Abstract_VTable *)&UnkFamily11_VT_A;
		VirtualPool::FreeMemory(ptr);
		(this->parent).vtable = (UnkFamily11Abstract_VTable *)&UnkFamily11_VT_Abstract;
		VirtualPool::FreeMemory((this->parent).field2_0x8);
		return;
		}
		
	*/
	return;
}

UnkFamily11A* UnkFamily11A::FUN_000edec0(int cnt, int param_2, float param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily11A * __thiscall UnkFamily11A::FUN_000edec0(UnkFamily11A *this,int cnt,int param_2,float param_3){
		int iVar1;
		int iVar2;
		float fVar3;
		undefined *puVar4;
		int iVar5;
		undefined4 *puVar6;
		undefined4 *puVar7;
		undefined4 *puVar8;
		int iVar9;
		fVar3 = FLOAT_0038639c;
		(this->parent).cnt = cnt / 2 + -1;
		(this->parent).vtable = (UnkFamily11Abstract_VTable *)&UnkFamily11_VT_Abstract;
		(this->parent).field3_0xc = (int)param_3;
		(this->parent).field4_0x10 = (int)(fVar3 / param_3);
		puVar4 = (undefined *)VirtualPool::AllocateMemory(cnt << 4);
		(this->parent).field2_0x8 = puVar4;
		iVar5 = 0;
		if (3 < cnt) {
		iVar2 = -param_2;
		iVar9 = (cnt - 4U >> 2) + 1;
		puVar6 = (undefined4 *)(param_2 + 0x18);
		iVar5 = iVar9 * 4;
		do {
		iVar1 = (int)puVar6 + (-0x18 - param_2);
		puVar7 = (undefined4 *)((this->parent).field2_0x8 + iVar1);
		*puVar7 = puVar6[-6];
		puVar7[1] = puVar6[-5];
		puVar7[2] = puVar6[-4];
		puVar7[3] = puVar6[-3];
		puVar7 = (undefined4 *)((this->parent).field2_0x8 + iVar1 + 0x10);
		*puVar7 = puVar6[-2];
		puVar7[1] = puVar6[-1];
		puVar7[2] = *puVar6;
		puVar7[3] = puVar6[1];
		puVar4 = (this->parent).field2_0x8 + (int)puVar6;
		*(undefined4 *)(puVar4 + iVar2 + 8) = puVar6[2];
		*(undefined4 *)(puVar4 + iVar2 + 0xc) = puVar6[3];
		*(undefined4 *)(puVar4 + iVar2 + 0x10) = puVar6[4];
		*(undefined4 *)(puVar4 + iVar2 + 0x14) = puVar6[5];
		puVar8 = (undefined4 *)((this->parent).field2_0x8 + (int)puVar6 + (0x18 - param_2));
		*puVar8 = puVar6[6];
		puVar8[1] = puVar6[7];
		puVar8[2] = puVar6[8];
		puVar7 = puVar6 + 9;
		puVar6 = puVar6 + 0x10;
		iVar9 = iVar9 + -1;
		puVar8[3] = *puVar7;
		}
		 while (iVar9 != 0);
		}
		if (iVar5 < cnt) {
		puVar6 = (undefined4 *)(iVar5 * 0x10 + 8 + param_2);
		iVar5 = cnt - iVar5;
		do {
		puVar8 = (undefined4 *)((this->parent).field2_0x8 + (-8 - param_2) + (int)puVar6);
		*puVar8 = puVar6[-2];
		puVar8[1] = puVar6[-1];
		puVar8[2] = *puVar6;
		puVar7 = puVar6 + 1;
		puVar6 = puVar6 + 4;
		iVar5 = iVar5 + -1;
		puVar8[3] = *puVar7;
		}
		 while (iVar5 != 0);
		}
		return this;
		}
		
	*/
	return null;
}

void UnkFamily11A::Construct(UnkFamily11A* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily11A * __thiscall UnkFamily11A::Construct(UnkFamily11A *this,UnkFamily11A *other){
		undefined4 *puVar1;
		uint uVar2;
		int iVar3;
		undefined4 *puVar4;
		(this->parent).vtable = (UnkFamily11Abstract_VTable *)&UnkFamily11_VT_Abstract;
		(this->parent).field2_0x8 = (undefined *)0x0;
		UnkFamily11Abstract::Copy(&this->parent,&other->parent);
		this->field1_0x14 = (undefined *)0x0;
		(this->parent).vtable = (UnkFamily11Abstract_VTable *)&UnkFamily11_VT_A;
		this->field47_0x48 = -1;
		VirtualPool::FreeMemory(this->field1_0x14);
		iVar3 = (other->parent).cnt;
		uVar2 = iVar3 * 8;
		puVar1 = (undefined4 *)VirtualPool::AllocateMemory(uVar2);
		this->field2_0x18 = puVar1 + iVar3;
		this->field1_0x14 = (undefined *)puVar1;
		puVar4 = (undefined4 *)other->field1_0x14;
		for (uVar2 = uVar2 >> 2;
		 uVar2 != 0;
		 uVar2 = uVar2 - 1) {
		*puVar1 = *puVar4;
		puVar4 = puVar4 + 1;
		puVar1 = puVar1 + 1;
		}
		for (iVar3 = 0;
		 iVar3 != 0;
		 iVar3 = iVar3 + -1) {
		*(undefined *)puVar1 = *(undefined *)puVar4;
		puVar4 = (undefined4 *)((int)puVar4 + 1);
		puVar1 = (undefined4 *)((int)puVar1 + 1);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily11A::FUN_000e15a0(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily11A::FUN_000e15a0(UnkFamily11A *this,int *param_1){
		size_t size;
		int iVar1;
		undefined *puVar2;
		FUN_000e08e0(this,param_1);
		iVar1 = (this->parent).cnt;
		size = iVar1 << 3;
		puVar2 = (undefined *)VirtualPool::AllocateMemory(size);
		this->field2_0x18 = puVar2 + iVar1 * 4;
		this->field1_0x14 = puVar2;
		(**(code **)(*param_1 + 4))(puVar2,size,1);
		return;
		}
		
	*/
	return;
}

void UnkFamily11A::Dispose_5(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily11A * __thiscall UnkFamily11A::Dispose(UnkFamily11A *this,byte param_1){
		undefined *ptr;
		ptr = this->field1_0x14;
		(this->parent).vtable = (UnkFamily11Abstract_VTable *)&UnkFamily11_VT_A;
		VirtualPool::FreeMemory(ptr);
		(this->parent).vtable = (UnkFamily11Abstract_VTable *)&UnkFamily11_VT_Abstract;
		VirtualPool::FreeMemory((this->parent).field2_0x8);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily11A::Construct_6(int cnt, float param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily11A * __thiscall UnkFamily11A::Construct(UnkFamily11A *this,int cnt,float param_2){
		undefined *puVar1;
		float fVar2;
		fVar2 = FLOAT_0038639c / param_2;
		(this->parent).vtable = (UnkFamily11Abstract_VTable *)&UnkFamily11_VT_Abstract;
		(this->parent).field3_0xc = (int)param_2;
		(this->parent).field4_0x10 = (int)fVar2;
		(this->parent).cnt = cnt / 2 + -1;
		puVar1 = (undefined *)VirtualPool::AllocateMemory(cnt << 4);
		(this->parent).field2_0x8 = puVar1;
		(this->parent).vtable = (UnkFamily11Abstract_VTable *)&UnkFamily11_VT_A;
		this->field47_0x48 = -1;
		return this;
		}
		
	*/
	return;
}

void UnkFamily11A::FUN_000e1550(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily11A::FUN_000e1550(UnkFamily11A *this,int *param_1){
		(**(code **)(*param_1 + 0x6c))((this->parent).cnt);
		(**(code **)(*param_1 + 100))((this->parent).field3_0xc);
		(**(code **)(*param_1 + 0xc))((this->parent).field2_0x8,((this->parent).cnt + 1) * 0x20);
		(**(code **)(*param_1 + 0xc))(this->field1_0x14,(this->parent).cnt << 3);
		return;
		}
		
	*/
	return;
}

void UnkFamily11A::Construct_8() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily11A * __fastcall UnkFamily11A::Construct(UnkFamily11A *this){
		(this->parent).field2_0x8 = (undefined *)0x0;
		(this->parent).vtable = (UnkFamily11Abstract_VTable *)&UnkFamily11_VT_A;
		this->field1_0x14 = (undefined *)0x0;
		this->field47_0x48 = -1;
		return this;
		}
		
	*/
	return;
}

void UnkFamily11A::Construct_9(int cnt, int param_2, float param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily11A * __thiscall UnkFamily11A::Construct(UnkFamily11A *this,int cnt,int param_2,float param_3){
		FUN_000edec0(this,cnt,param_2,param_3);
		(this->parent).vtable = (UnkFamily11Abstract_VTable *)&UnkFamily11_VT_A;
		this->field47_0x48 = -1;
		return this;
		}
		
	*/
	return;
}

