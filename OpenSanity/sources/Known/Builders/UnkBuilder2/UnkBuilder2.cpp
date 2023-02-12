#include "headers/Known/Builders/UnkBuilder2/UnkBuilder2.h"

void UnkBuilder2::Dispose(byte flag) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkBuilder2 * __thiscall UnkBuilder2::Dispose(UnkBuilder2 *this,byte flag){
		this->vtable = (UnkBuilder2_VTable *)&Builder_VT_Abstract;
		if ((flag & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float* UnkBuilder2::BUILD(int id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float * UnkBuilder2::BUILD(int id){
		UnkBuilder2Item0x1809 *this;
		UnkBuilder2Item0x1808 *pUVar1;
		UnkBuilder2Item0x180C *pfVar8;
		UnkBuilder2Item0x180E *pfVar7;
		ScriptMain *pSVar2;
		ScriptHeader *pSVar3;
		undefined4 *puVar4;
		UnkBuilder2Item0x1805 *puVar1;
		UnkBuilder2Item0x1805 *pUVar5;
		UnkBuilder2Item0x180F *this_00;
		UnkBuilder2Item0x1810 *this_01;
		float *pfVar9;
		UnkBuilder2Item0x1811 *pfVar6;
		switch(id) {
		case 0x1800:puVar4 = (undefined4 *)VirtualPool::AllocateMemory(0x10);
		if (puVar4 != (undefined4 *)0x0) {
		pfVar9 = (float *)FUN_0017f780(puVar4);
		return pfVar9;
		}
		break;
		case 0x1801:puVar4 = (undefined4 *)VirtualPool::AllocateMemory(0x18);
		if (puVar4 != (undefined4 *)0x0) {
		pfVar9 = (float *)FUN_00180bb0(puVar4);
		return pfVar9;
		}
		break;
		case 0x1803:pSVar3 = (ScriptHeader *)VirtualPool::AllocateMemory(0x3c);
		if (pSVar3 != (ScriptHeader *)0x0) {
		pSVar3 = ScriptHeader::Construct(pSVar3);
		return (float *)pSVar3;
		}
		break;
		case 0x1804:pSVar2 = (ScriptMain *)VirtualPool::AllocateMemory(0x20);
		if (pSVar2 != (ScriptMain *)0x0) {
		pSVar2 = ScriptMain::Construct(pSVar2);
		return (float *)pSVar2;
		}
		break;
		case 0x1805:puVar1 = (UnkBuilder2Item0x1805 *)VirtualPool::AllocateMemory(0x14);
		if (puVar1 != (UnkBuilder2Item0x1805 *)0x0) {
		pUVar5 = UnkBuilder2Item0x1805::Construct(puVar1);
		return (float *)pUVar5;
		}
		break;
		case 0x1808:pUVar1 = (UnkBuilder2Item0x1808 *)VirtualPool::AllocateMemory(0xc);
		if (pUVar1 != (UnkBuilder2Item0x1808 *)0x0) {
		pUVar1 = UnkBuilder2Item0x1808::Construct(pUVar1);
		return (float *)pUVar1;
		}
		break;
		case 0x1809:this = (UnkBuilder2Item0x1809 *)VirtualPool::AllocateMemory(4);
		if (this != (UnkBuilder2Item0x1809 *)0x0) {
		UnkBuilder2Item0x1809::Construct(this);
		return (float *)this;
		}
		break;
		case 0x180c:pfVar8 = (UnkBuilder2Item0x180C *)VirtualPool::AllocateMemory(8);
		if (pfVar8 != (UnkBuilder2Item0x180C *)0x0) {
		pfVar8->field0_0x0 = -1;
		pfVar8->field1_0x4 = -1;
		return (float *)pfVar8;
		}
		break;
		case 0x180e:pfVar7 = (UnkBuilder2Item0x180E *)VirtualPool::AllocateMemory(8);
		if (pfVar7 != (UnkBuilder2Item0x180E *)0x0) {
		pfVar7->field0_0x0 = 0;
		pfVar7->field1_0x4 = 0;
		return (float *)pfVar7;
		}
		break;
		case 0x180f:this_00 = (UnkBuilder2Item0x180F *)VirtualPool::AllocateMemory(0x20);
		if (this_00 != (UnkBuilder2Item0x180F *)0x0) {
		UnkBuilder2Item0x180F::Construct(this_00);
		return (float *)this_00;
		}
		break;
		case 0x1810:this_01 = (UnkBuilder2Item0x1810 *)VirtualPool::AllocateMemory(10);
		if (this_01 != (UnkBuilder2Item0x1810 *)0x0) {
		pfVar9 = (float *)UnkBuilder2Item0x1810::Construct(this_01);
		return pfVar9;
		}
		break;
		case 0x1811:pfVar6 = (UnkBuilder2Item0x1811 *)VirtualPool::AllocateMemory(0x10);
		return (float *)pfVar6;
		}
		return (float *)0x0;
		}
		
	*/
	return null;
}

void UnkBuilder2::Construct(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkBuilder2::Construct(undefined4 *param_1){
		*param_1 = &Builder_VT_2;
		return;
		}
		
	*/
	return;
}

