#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10Y.h"

void UnkFamily10Y::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10Y * __thiscall UnkFamily10Y::Construct(UnkFamily10Y *this,int param_1){
		UnkFamily8A *pUVar1;
		UnkFamily8A *pUVar2;
		UnkFamily8BA *this_00;
		UnkFamily8Abstract *element;
		UnkFamily10Base::Construct(&this->parent,0xe,1);
		(this->parent).field7_0x1c = param_1;
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_Y;
		pUVar1 = (UnkFamily8A *)VirtualPool::AllocateMemory(0x40);
		if (pUVar1 == (UnkFamily8A *)0x0) {
		pUVar1 = (UnkFamily8A *)0x0;
		}
		else {
		pUVar1 = UnkFamily8A::Construct(pUVar1,0x12,0x17,0,10,0,10,1);
		}
		pUVar2 = (UnkFamily8A *)VirtualPool::AllocateMemory(0x40);
		if (pUVar2 == (UnkFamily8A *)0x0) {
		pUVar2 = (UnkFamily8A *)0x0;
		}
		else {
		pUVar2 = UnkFamily8A::Construct(pUVar2,0x13,0x18,0,10,0,10,1);
		}
		this_00 = (UnkFamily8BA *)VirtualPool::AllocateMemory(0x14);
		if (this_00 == (UnkFamily8BA *)0x0) {
		element = (UnkFamily8Abstract *)0x0;
		}
		else {
		element = (UnkFamily8Abstract *)UnkFamily8BA::Construct(this_00,4,0x1c,param_1,1);
		}
		UnkFamily10Base::Add(&this->parent,&pUVar1->parent);
		UnkFamily10Base::Add(&this->parent,&pUVar2->parent);
		UnkFamily10Base::Add(&this->parent,element);
		return this;
		}
		
	*/
	return;
}

void UnkFamily10Y::FUN_000a7bd0(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily10Y::FUN_000a7bd0(UnkFamily10Y *this,undefined4 param_1){
		float a;
		int *piVar1;
		int *piVar2;
		int unaff_EDI;
		float *pfVar3;
		float a_00;
		float local_c [3];
		piVar1 = (int *)UnkFamily10Base::FUN_001a56e0(&this->parent,0x17);
		piVar2 = (int *)UnkFamily10Base::FUN_001a56e0(&this->parent,0x18);
		pfVar3 = local_c;
		(**(code **)(*piVar1 + 0x1c))(param_1);
		(**(code **)(*piVar2 + 0x1c))(param_1,&stack0xfffffff0);
		a = (float)(int)pfVar3 * FLOAT_00386608;
		a_00 = (float)unaff_EDI * FLOAT_00386608;
		local_c[0] = a;
		SoundBufferRelated(0,a,a);
		SoundBufferRelated(1,a,a);
		SoundBufferRelated(3,a,a);
		SoundBufferRelated(2,a_00,a_00);
		return;
		}
		
	*/
	return;
}

uint* UnkFamily10Y::FUN_000ab540(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily10Y::FUN_000ab540(UnkFamily10Y *this,byte param_1){
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return null;
}

void UnkFamily10Y::FUN_000a7b50(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily10Y::FUN_000a7b50(UnkFamily10Y *this,undefined4 param_1){
		int iVar1;
		int *piVar2;
		int *piVar3;
		long lVar4;
		long lVar5;
		float fVar6;
		float fVar7;
		piVar2 = (int *)UnkFamily10Base::FUN_001a56e0(&this->parent,0x17);
		piVar3 = (int *)UnkFamily10Base::FUN_001a56e0(&this->parent,0x18);
		fVar6 = ::GetNum(0);
		fVar7 = ::GetNum(2);
		lVar4 = __ftol2(fVar7 * FLOAT_00387520 + FLOAT_00386ab4);
		iVar1 = *piVar2;
		lVar5 = __ftol2(fVar6 * FLOAT_00387520 + FLOAT_00386ab4);
		(**(code **)(iVar1 + 0x10))(param_1,lVar5);
		(**(code **)(*piVar3 + 0x10))(param_1,lVar4);
		return;
		}
		
	*/
	return;
}

void UnkFamily10Y::FUN_000aa2e0(int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily10Y::FUN_000aa2e0(float this,int param_2){
		float a;
		int *piVar1;
		int *piVar2;
		uint uVar3;
		int iVar4;
		int unaff_EDI;
		float local_4;
		local_4 = this;
		piVar1 = (int *)UnkFamily10Base::FUN_001a56e0((UnkFamily10Base *)this,0x17);
		piVar2 = (int *)UnkFamily10Base::FUN_001a56e0((UnkFamily10Base *)this,0x18);
		uVar3 = (uint)*(byte *)(*(int *)((int)this + 0x10) + param_2);
		if ((int)uVar3 < *(int *)((int)this + 0x44)) {
		iVar4 = *(int *)(*(int *)((int)this + 0x40) + uVar3 * 4);
		}
		else {
		iVar4 = 0;
		}
		if ((*(uint *)(iVar4 + 8) & 0xfff) == 0x18) {
		(**(code **)(*piVar2 + 0x1c))(param_2,&local_4);
		}
		else {
		(**(code **)(*piVar1 + 0x1c))(param_2,&local_4);
		}
		a = (float)unaff_EDI * FLOAT_00386608;
		local_4 = a;
		SoundBufferRelated(0,a,a);
		SoundBufferRelated(1,a,a);
		SoundBufferRelated(3,a,a);
		return;
		}
		
	*/
	return;
}

