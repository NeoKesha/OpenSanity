#include "headers/Unknown/Families/Families2X/Family28/UnkFamily28A.h"

void UnkFamily28A::Dispose(UnkFamily28A* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily28A::Dispose(UnkFamily28A *param_1){
		UnkFamily28Element *this;
		(param_1->parent).vtable = (UnkFamily28Abstract_VTable *)&UnkFamily28_VT_A;
		VirtualPool::FreeMemory((param_1->parent).indexArray);
		this = (param_1->parent).array;
		if (this != (UnkFamily28Element *)0x0) {
		FUN_001356e0(this,3);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily28A::Dispose_1(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily28A * __thiscall UnkFamily28A::Dispose(UnkFamily28A *this,byte param_1){
		UnkFamily28Element *this_00;
		(this->parent).vtable = (UnkFamily28Abstract_VTable *)&UnkFamily28_VT_A;
		VirtualPool::FreeMemory((this->parent).indexArray);
		this_00 = (this->parent).array;
		if (this_00 != (UnkFamily28Element *)0x0) {
		FUN_001356e0(this_00,3);
		}
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily28A::Construct(int cnt) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily28A * __thiscall UnkFamily28A::Construct(UnkFamily28A *this,int cnt){
		short cnt1;
		short *psVar1;
		int *piVar2;
		UnkFamily28Element *pUVar3;
		short sVar4;
		uint uVar5;
		UnkFamily28Element *pUVar6;
		int iVar7;
		bool bVar8;
		short cntDiv4;
		cnt1 = (short)cnt;
		cntDiv4 = (short)(cnt >> 2);
		sVar4 = cntDiv4 + 10;
		uVar5 = (int)cnt1 & 0x80000001;
		bVar8 = uVar5 == 0;
		(this->parent).vtable = (UnkFamily28Abstract_VTable *)&UnkFamily28_VT_A;
		(this->parent).field1_0x4 = cnt1;
		(this->parent).field2_0x6 = sVar4;
		(this->parent).cnt = 0;
		(this->parent).field4_0xa = 0;
		(this->parent).indexArray = (short *)0x0;
		(this->parent).array = (UnkFamily28Element *)0x0;
		if ((int)uVar5 < 0) {
		bVar8 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
		}
		if (!bVar8) {
		(this->parent).field1_0x4 = cnt1 + 1;
		}
		uVar5 = (int)sVar4 & 0x80000001;
		bVar8 = uVar5 == 0;
		if ((int)uVar5 < 0) {
		bVar8 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
		}
		if (!bVar8) {
		(this->parent).field2_0x6 = cntDiv4 + 0xb;
		}
		psVar1 = (short *)VirtualPool::AllocateMemory((int)(this->parent).field1_0x4 << 1);
		iVar7 = (int)(this->parent).field1_0x4;
		(this->parent).indexArray = psVar1;
		piVar2 = (int *)VirtualPool::AllocateMemory(iVar7 * 0x1c + 4);
		if (piVar2 == (int *)0x0) {
		pUVar6 = (UnkFamily28Element *)0x0;
		}
		else {
		pUVar6 = (UnkFamily28Element *)(piVar2 + 1);
		*piVar2 = iVar7;
		pUVar3 = pUVar6;
		if (-1 < iVar7 + -1) {
		do {
		pUVar3->field0_0x0 = 0;
		iVar7 = iVar7 + -1;
		pUVar3 = pUVar3 + 1;
		}
		 while (iVar7 != 0);
		}
		}
		iVar7 = 0;
		(this->parent).array = pUVar6;
		if (0 < (this->parent).field1_0x4) {
		do {
		(this->parent).indexArray[iVar7] = (short)iVar7 + 1;
		iVar7 = iVar7 + 1;
		}
		 while (iVar7 < (this->parent).field1_0x4);
		}
		(this->parent).indexArray[(this->parent).field1_0x4 + -1] = -2;
		return this;
		}
		
	*/
	return;
}

