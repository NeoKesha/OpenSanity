#include "headers/Unknown/Families/Families2X/Family28/UnkFamily28B.h"

void UnkFamily28B::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily28B::Dispose(UnkFamily28B *this){
		UnkFamily28Element *notthis;
		(this->parent).vtable = (UnkFamily28Abstract_VTable *)&UnkFamily28_VT_B;
		VirtualPool::FreeMemory((this->parent).indexArray);
		notthis = (this->parent).array;
		if (notthis != (UnkFamily28Element *)0x0) {
		FUN_001357a0(notthis,3);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily28B::Dispose_1(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily28B * __thiscall UnkFamily28B::Dispose(UnkFamily28B *this,byte param_1){
		UnkFamily28Element *this_00;
		(this->parent).vtable = (UnkFamily28Abstract_VTable *)&UnkFamily28_VT_B;
		VirtualPool::FreeMemory((this->parent).indexArray);
		this_00 = (this->parent).array;
		if (this_00 != (UnkFamily28Element *)0x0) {
		FUN_001357a0(this_00,3);
		}
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily28B::Construct(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily28B * __thiscall UnkFamily28B::Construct(UnkFamily28B *this,int param_1){
		short sVar1;
		short sVar2;
		short *psVar3;
		int *piVar4;
		UnkFamily28Element *element;
		short sVar5;
		uint uVar6;
		UnkFamily28Element *array;
		int cnt;
		bool bVar7;
		sVar2 = (short)param_1;
		sVar1 = (short)(param_1 >> 2);
		sVar5 = sVar1 + 10;
		uVar6 = (int)sVar2 & 0x80000001;
		bVar7 = uVar6 == 0;
		(this->parent).vtable = (UnkFamily28Abstract_VTable *)&UnkFamily28_VT_B;
		(this->parent).field1_0x4 = sVar2;
		(this->parent).field2_0x6 = sVar5;
		(this->parent).cnt = 0;
		(this->parent).field4_0xa = 0;
		(this->parent).indexArray = (short *)0x0;
		(this->parent).array = (UnkFamily28Element *)0x0;
		if ((int)uVar6 < 0) {
		bVar7 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
		}
		if (!bVar7) {
		(this->parent).field1_0x4 = sVar2 + 1;
		}
		uVar6 = (int)sVar5 & 0x80000001;
		bVar7 = uVar6 == 0;
		if ((int)uVar6 < 0) {
		bVar7 = (uVar6 - 1 | 0xfffffffe) == 0xffffffff;
		}
		if (!bVar7) {
		(this->parent).field2_0x6 = sVar1 + 0xb;
		}
		psVar3 = (short *)VirtualPool::AllocateMemory((int)(this->parent).field1_0x4 << 1);
		cnt = (int)(this->parent).field1_0x4;
		(this->parent).indexArray = psVar3;
		piVar4 = (int *)VirtualPool::AllocateMemory(cnt * 0x1c + 4);
		if (piVar4 == (int *)0x0) {
		array = (UnkFamily28Element *)0x0;
		}
		else {
		array = (UnkFamily28Element *)(piVar4 + 1);
		*piVar4 = cnt;
		element = array;
		if (-1 < cnt + -1) {
		do {
		element->field0_0x0 = 0;
		cnt = cnt + -1;
		element = element + 1;
		}
		 while (cnt != 0);
		}
		}
		cnt = 0;
		(this->parent).array = array;
		if (0 < (this->parent).field1_0x4) {
		do {
		(this->parent).indexArray[cnt] = (short)cnt + 1;
		cnt = cnt + 1;
		}
		 while (cnt < (this->parent).field1_0x4);
		}
		(this->parent).indexArray[(this->parent).field1_0x4 + -1] = -2;
		return this;
		}
		
	*/
	return;
}

