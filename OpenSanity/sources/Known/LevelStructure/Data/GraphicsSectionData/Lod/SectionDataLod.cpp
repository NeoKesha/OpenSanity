#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Lod/SectionDataLod.h"

#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Lod/TwinsanityLod.h"
#include "headers/Known/Game/GameResources/ResourceList/ResourceListTwinsanityLod.h"
void SectionDataLod::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataLod::Dispose(SectionDataLod *this){
		uint uVar1;
		if ((int *)this->pool != (int *)0x0) {
		uVar1 = 0;
		if (*(int *)this->pool != 0) {
		do {
		(*((this->parent).vtable)->Method5)(&this->parent,(uint *)(this->pool + uVar1 * 4 + 4));
		uVar1 = uVar1 + 1;
		}
		 while (uVar1 < *(uint *)this->pool);
		}
		this->pool = (undefined *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void SectionDataLod::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataLod::CleanUp(SectionDataLod *this){
		TwinsanityLod *this_00;
		EntryDescriptorLod *pEVar1;
		uint uVar2;
		uVar2 = 0;
		if ((this->entries).cnt != 0) {
		do {
		this_00 = (this->entries).elements[uVar2].lodPtr;
		*(undefined2 *)&this_00->field0_0x0 = 0;
		this_00->field0_0x0 = this_00->field0_0x0 & 0xfffcffff;
		TwinsanityLod::Dispose(this_00);
		VirtualPool::FreeMemory(this_00);
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < (this->entries).cnt);
		}
		pEVar1 = (this->entries).elements;
		if (pEVar1 != (EntryDescriptorLod *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->entries).elements = (EntryDescriptorLod *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		if (this->lodList == (ResourceListTwinsanityLod *)0x0) {
		return;
		}
		FUN_00122760(&this->lodList->capacity);
		return;
		}
		
	*/
	return;
}

uint* SectionDataLod::Create(uint** param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint * __thiscall SectionDataLod::Create(SectionDataLod *this,uint **param_1,int param_2){
		SectionDataEntriesLod *this_00;
		EntryDescriptorLod *pEVar1;
		uint **ppuVar2;
		uint *puVar3;
		uint **ppuVar4;
		int iVar5;
		TwinsanityLod *unaff_EBX;
		ppuVar4 = param_1;
		ppuVar2 = (uint **)*param_1;
		this_00 = &this->entries;
		if ((this->entries).cnt != 0) {
		param_1 = ppuVar2;
		iVar5 = SectionDataEntriesLodFUN_0011f700(this_00,(uint *)&param_1);
		pEVar1 = this_00->elements + iVar5;
		if (((uint **)pEVar1->id == ppuVar2) && (pEVar1 != (EntryDescriptorLod *)0x0)) {
		param_1 = (uint **)pEVar1->lodPtr;
		goto LAB_0011f8ba;
		}
		}
		param_1 = (uint **)0x0;
		LAB_0011f8ba:if (param_2 != 0) {
		*(bool *)param_2 = (TwinsanityLod *)param_1 == (TwinsanityLod *)0x0;
		}
		if ((TwinsanityLod *)param_1 == (TwinsanityLod *)0x0) {
		param_1 = (uint **)VirtualPool::AllocateMemory(0x24);
		if (param_1 == (uint **)0x0) {
		param_1 = (uint **)0x0;
		}
		else {
		puVar3 = *ppuVar4;
		*(short *)param_1 = 0;
		*param_1 = (uint *)((uint)*param_1 & 0xfffcffff);
		param_1[1] = puVar3;
		param_1[2] = (uint *)0x0;
		*(undefined *)(param_1 + 3) = 0;
		}
		*param_1 = (uint *)((uint)*param_1 & 0xfffdffff);
		*(short *)param_1 = *(short *)param_1 + 1;
		(*((this->parent).vtable)->EmptyFunction)(ppuVar4,param_1);
		SectionDataEntriesLod::Add(this_00,(TwinsanityLod **)&stack0xfffffffc,(uint)*ppuVar4);
		return &unaff_EBX->field0_0x0;
		}
		*(uint *)param_1 = *(uint *)param_1 & 0xfffdffff;
		*(short *)(uint *)param_1 = *(short *)(uint *)param_1 + 1;
		return &((TwinsanityLod *)param_1)->field0_0x0;
		}
		
	*/
	return null;
}

void SectionDataLod::Dispose_3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataLod::Dispose(SectionDataLod *this){
		EntryDescriptorLod *pEVar1;
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Lod;
		CleanUp(this);
		pEVar1 = (this->entries).elements;
		if (pEVar1 != (EntryDescriptorLod *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->entries).elements = (EntryDescriptorLod *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void SectionDataLod::Dispose_4(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataLod * __thiscall SectionDataLod::Dispose(SectionDataLod *this,byte param_1){
		EntryDescriptorLod *pEVar1;
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Lod;
		CleanUp(this);
		pEVar1 = (this->entries).elements;
		if (pEVar1 != (EntryDescriptorLod *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->entries).elements = (EntryDescriptorLod *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionDataLod::FUN_0011c440(TwinsanityLod* lod) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataLod::FUN_0011c440(SectionDataLod *this,TwinsanityLod *lod){
		int *piVar1;
		piVar1 = (int *)this->pool;
		if (piVar1 != (int *)0x0) {
		piVar1[*piVar1 + 1] = lod->id;
		*piVar1 = *piVar1 + 1;
		lod->field0_0x0 = lod->field0_0x0 & 0xfffdffff;
		*(short *)&lod->field0_0x0 = *(short *)&lod->field0_0x0 + 1;
		}
		return;
		}
		
	*/
	return;
}

void SectionDataLod::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataLod::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataLod::Add(uint* param_1, uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataLod::Add(SectionDataLod *this,uint *param_1,uint *param_2){
		*param_2 = *param_2 & 0xfffdffff;
		*(short *)param_2 = *(short *)param_2 + 1;
		SectionDataEntriesLod::Add(&this->entries,(TwinsanityLod **)&param_2,*param_1);
		return;
		}
		
	*/
	return;
}

uint SectionDataLod::Check(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall SectionDataLod::Check(SectionDataLod *this,uint *param_1){
		uint *puVar1;
		uint uVar2;
		puVar1 = (uint *)*param_1;
		if ((this->entries).cnt == 0) {
		return (uint)param_1 & 0xffffff00;
		}
		param_1 = puVar1;
		uVar2 = SectionDataEntriesLodFUN_0011f700(&this->entries,(uint *)&param_1);
		return uVar2 & 0xffffff00 | (uint)((uint *)(this->entries).elements[uVar2].id == puVar1);
		}
		
	*/
	return 0;
}

uint SectionDataLod::Get(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall SectionDataLod::Get(SectionDataLod *this,uint *param_1){
		EntryDescriptorLod *pEVar1;
		uint *puVar2;
		EntryDescriptorLod *pEVar3;
		int iVar4;
		puVar2 = (uint *)*param_1;
		if ((this->entries).cnt != 0) {
		param_1 = puVar2;
		iVar4 = SectionDataEntriesLodFUN_0011f700(&this->entries,(uint *)&param_1);
		pEVar3 = (this->entries).elements;
		pEVar1 = pEVar3 + iVar4;
		if (((uint *)pEVar3[iVar4].id == puVar2) && (pEVar1 != (EntryDescriptorLod *)0x0)) {
		return pEVar1->lodPtr;
		}
		}
		return 0;
		}
		
	*/
	return 0;
}

void SectionDataLod::Method5(uint** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataLod::Method5(SectionDataLod *this,uint **param_1){
		SectionDataEntriesLod *this_00;
		EntryDescriptorLod *pEVar1;
		uint **ppuVar2;
		uint **ppuVar3;
		int iVar4;
		uint uVar5;
		TwinsanityLod *this_01;
		ppuVar3 = param_1;
		ppuVar2 = (uint **)*param_1;
		this_00 = &this->entries;
		param_1 = ppuVar2;
		if ((this->entries).cnt != 0) {
		iVar4 = SectionDataEntriesLodFUN_0011f700(this_00,(uint *)&param_1);
		pEVar1 = this_00->elements + iVar4;
		if (((uint **)pEVar1->id == ppuVar2) && (pEVar1 != (EntryDescriptorLod *)0x0)) {
		this_01 = pEVar1->lodPtr;
		goto LAB_00121acb;
		}
		}
		this_01 = (TwinsanityLod *)0x0;
		LAB_00121acb:*(short *)&this_01->field0_0x0 = *(short *)&this_01->field0_0x0 + -1;
		uVar5 = this_01->field0_0x0 & 0xffff;
		if (uVar5 == 0) {
		uVar5 = this_01->field0_0x0 & 0x20000;
		}
		if (uVar5 == 0) {
		FUN_00121b50(this_00,(uint)*ppuVar3);
		if (this->lodList == (ResourceListTwinsanityLod *)0x0) {
		TwinsanityLod::Dispose(this_01);
		VirtualPool::FreeMemory(this_01);
		return;
		}
		FUN_00121b20(this->lodList,this_01);
		}
		return;
		}
		
	*/
	return;
}

void SectionDataLod::Method4(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataLod::Method4(SectionDataLod *this,uint *param_1){
		ResourceListTwinsanityLod *pRVar1;
		uint uVar2;
		*(short *)param_1 = *(short *)param_1 + -1;
		uVar2 = *param_1 & 0xffff;
		if (uVar2 == 0) {
		uVar2 = *param_1 & 0x20000;
		}
		if (uVar2 == 0) {
		FUN_00121b50(&this->entries,param_1[1]);
		pRVar1 = this->lodList;
		if (pRVar1 == (ResourceListTwinsanityLod *)0x0) {
		TwinsanityLod::Dispose((TwinsanityLod *)param_1);
		VirtualPool::FreeMemory(param_1);
		return;
		}
		uVar2 = (uint)pRVar1->capacity + (uint)(ushort)pRVar1->count;
		if (0x2fe < uVar2) {
		uVar2 = uVar2 - 0x2ff;
		}
		pRVar1->lodArray[uVar2] = (TwinsanityLod *)param_1;
		pRVar1->count = pRVar1->count + 1;
		}
		return;
		}
		
	*/
	return;
}

void SectionDataLod::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataLod::Construct(SectionDataLod *this){
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Lod;
		(this->entries).elements = (EntryDescriptorLod *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		(this->entries).field3_0x8 = 0x40;
		this->pool = (undefined *)0x0;
		this->lodList = (ResourceListTwinsanityLod *)0x0;
		return;
		}
		
	*/
	return;
}

