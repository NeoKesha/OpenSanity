#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Skydome/SectionDataSkydome.h"

#include "headers/Known/Game/GameResources/ResourceList/ResourceListTwinsanitySkydome.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Skydome/TwinsanitySkydome.h"
void SectionDataSkydome::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataSkydome::Dispose(SectionDataSkydome *this){
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

void SectionDataSkydome::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataSkydome::CleanUp(SectionDataSkydome *this){
		TwinsanitySkydome *this_00;
		undefined *puVar1;
		uint uVar2;
		uVar2 = 0;
		if ((this->entries).cnt != 0) {
		do {
		this_00 = *(TwinsanitySkydome **)((this->entries).elements + uVar2 * 8);
		*(undefined2 *)&this_00->field0_0x0 = 0;
		this_00->field0_0x0 = this_00->field0_0x0 & 0xfffcffff;
		TwinsanitySkydome::Dispose(this_00);
		VirtualPool::FreeMemory(this_00);
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < (this->entries).cnt);
		}
		puVar1 = (this->entries).elements;
		if (puVar1 != (undefined *)0x0) {
		VirtualPool::FreeMemory(puVar1 + -4);
		}
		(this->entries).elements = (undefined *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		if (this->skydomeList == (ResourceListTwinsanitySkydome *)0x0) {
		return;
		}
		FUN_00122050(&this->skydomeList->capacity);
		return;
		}
		
	*/
	return;
}

void SectionDataSkydome::Dispose_2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataSkydome::Dispose(SectionDataSkydome *this){
		undefined *puVar1;
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skydome;
		CleanUp(this);
		puVar1 = (this->entries).elements;
		if (puVar1 != (undefined *)0x0) {
		VirtualPool::FreeMemory(puVar1 + -4);
		}
		(this->entries).elements = (undefined *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void SectionDataSkydome::Dispose_3(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataSkydome * __thiscall SectionDataSkydome::Dispose(SectionDataSkydome *this,byte param_1){
		undefined *puVar1;
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skydome;
		CleanUp(this);
		puVar1 = (this->entries).elements;
		if (puVar1 != (undefined *)0x0) {
		VirtualPool::FreeMemory(puVar1 + -4);
		}
		(this->entries).elements = (undefined *)0x0;
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

void SectionDataSkydome::FUN_0011c1d0(TwinsanitySkydome* skydome) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataSkydome::FUN_0011c1d0(SectionDataSkydome *this,TwinsanitySkydome *skydome){
		int *piVar1;
		piVar1 = (int *)this->pool;
		if (piVar1 != (int *)0x0) {
		piVar1[*piVar1 + 1] = skydome->id;
		*piVar1 = *piVar1 + 1;
		skydome->field0_0x0 = skydome->field0_0x0 & 0xfffdffff;
		*(short *)&skydome->field0_0x0 = *(short *)&skydome->field0_0x0 + 1;
		}
		return;
		}
		
	*/
	return;
}

void SectionDataSkydome::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataSkydome::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataSkydome::Add(uint* param_1, uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataSkydome::Add(SectionDataSkydome *this,uint *param_1,uint *param_2){
		*param_2 = *param_2 & 0xfffdffff;
		*(short *)param_2 = *(short *)param_2 + 1;
		SectionDataEntriesSkydome::Add(&this->entries,(TwinsanitySkydome **)&param_2,*param_1);
		return;
		}
		
	*/
	return;
}

uint* SectionDataSkydome::Create(uint** param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint * __thiscall SectionDataSkydome::Create(SectionDataSkydome *this,uint **param_1,int param_2){
		SectionDataEntriesSkydome *this_00;
		uint **ppuVar1;
		uint **ppuVar2;
		uint **ppuVar3;
		int iVar4;
		TwinsanitySkydome *unaff_EBX;
		ppuVar3 = param_1;
		ppuVar2 = (uint **)*param_1;
		this_00 = &this->entries;
		if ((this->entries).cnt != 0) {
		param_1 = ppuVar2;
		iVar4 = SectionDataEntriesSkydome::FUN_0011f3b0(this_00,(uint *)&param_1);
		ppuVar1 = (uint **)(this_00->elements + iVar4 * 8);
		if (((uint **)ppuVar1[1] == ppuVar2) && (ppuVar1 != (uint **)0x0)) {
		param_1 = (uint **)*ppuVar1;
		goto LAB_0012134a;
		}
		}
		param_1 = (uint **)0x0;
		LAB_0012134a:if (param_2 != 0) {
		*(bool *)param_2 = param_1 == (uint **)0x0;
		}
		if (param_1 == (uint **)0x0) {
		param_1 = (uint **)VirtualPool::AllocateMemory(0x50);
		if (param_1 == (uint **)0x0) {
		param_1 = (uint **)0x0;
		}
		else {
		*(short *)param_1 = 0;
		*param_1 = (uint *)((uint)*param_1 & 0xfffcffff);
		param_1[1] = *ppuVar3;
		param_1[2] = (uint *)0x0;
		param_1[3] = (uint *)0x0;
		}
		*param_1 = (uint *)((uint)*param_1 & 0xfffdffff);
		*(short *)param_1 = *(short *)param_1 + 1;
		(*((this->parent).vtable)->EmptyFunction)(ppuVar3,param_1);
		SectionDataEntriesSkydome::Add(this_00,(TwinsanitySkydome **)&stack0xfffffffc,(uint)*ppuVar3);
		return (uint *)unaff_EBX;
		}
		*param_1 = (uint *)((uint)*param_1 & 0xfffdffff);
		*(short *)param_1 = *(short *)param_1 + 1;
		return (uint *)param_1;
		}
		
	*/
	return null;
}

uint SectionDataSkydome::Check(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall SectionDataSkydome::Check(SectionDataSkydome *this,uint *param_1){
		uint *puVar1;
		uint uVar2;
		puVar1 = (uint *)*param_1;
		if ((this->entries).cnt == 0) {
		return (uint)param_1 & 0xffffff00;
		}
		param_1 = puVar1;
		uVar2 = SectionDataEntriesSkydome::FUN_0011f3b0(&this->entries,(uint *)&param_1);
		return uVar2 & 0xffffff00 | (uint)(*(uint **)((this->entries).elements + uVar2 * 8 + 4) == puVar1);
		}
		
	*/
	return 0;
}

uint SectionDataSkydome::Get(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall SectionDataSkydome::Get(SectionDataSkydome *this,uint *param_1){
		undefined4 *puVar1;
		uint *puVar2;
		undefined *puVar3;
		int iVar4;
		puVar2 = (uint *)*param_1;
		if ((this->entries).cnt != 0) {
		param_1 = puVar2;
		iVar4 = SectionDataEntriesSkydome::FUN_0011f3b0(&this->entries,(uint *)&param_1);
		puVar3 = (this->entries).elements;
		puVar1 = (undefined4 *)(puVar3 + iVar4 * 8);
		if ((*(uint **)(puVar3 + iVar4 * 8 + 4) == puVar2) && (puVar1 != (undefined4 *)0x0)) {
		return *puVar1;
		}
		}
		return 0;
		}
		
	*/
	return 0;
}

void SectionDataSkydome::Method5(uint** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataSkydome::Method5(SectionDataSkydome *this,uint **param_1){
		SectionDataEntriesSkydome *this_00;
		TwinsanitySkydome **ppTVar1;
		uint **ppuVar2;
		int iVar3;
		uint uVar4;
		TwinsanitySkydome *pTVar5;
		ppuVar2 = param_1;
		pTVar5 = (TwinsanitySkydome *)*param_1;
		this_00 = &this->entries;
		param_1 = (uint **)pTVar5;
		if ((this->entries).cnt != 0) {
		iVar3 = SectionDataEntriesSkydome::FUN_0011f3b0(this_00,(uint *)&param_1);
		ppTVar1 = (TwinsanitySkydome **)(this_00->elements + iVar3 * 8);
		if ((ppTVar1[1] == pTVar5) && (ppTVar1 != (TwinsanitySkydome **)0x0)) {
		pTVar5 = *ppTVar1;
		goto LAB_001214ab;
		}
		}
		pTVar5 = (TwinsanitySkydome *)0x0;
		LAB_001214ab:*(short *)&pTVar5->field0_0x0 = *(short *)&pTVar5->field0_0x0 + -1;
		uVar4 = pTVar5->field0_0x0 & 0xffff;
		if (uVar4 == 0) {
		uVar4 = pTVar5->field0_0x0 & 0x20000;
		}
		if (uVar4 == 0) {
		FUN_00121530(this_00,(uint)*ppuVar2);
		if (this->skydomeList == (ResourceListTwinsanitySkydome *)0x0) {
		TwinsanitySkydome::Dispose(pTVar5);
		VirtualPool::FreeMemory(pTVar5);
		return;
		}
		FUN_00121500(this->skydomeList,pTVar5);
		}
		return;
		}
		
	*/
	return;
}

void SectionDataSkydome::Method4(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataSkydome::Method4(SectionDataSkydome *this,uint *param_1){
		ResourceListTwinsanitySkydome *pRVar1;
		uint uVar2;
		*(short *)param_1 = *(short *)param_1 + -1;
		uVar2 = *param_1 & 0xffff;
		if (uVar2 == 0) {
		uVar2 = *param_1 & 0x20000;
		}
		if (uVar2 == 0) {
		FUN_00121530(&this->entries,param_1[1]);
		pRVar1 = this->skydomeList;
		if (pRVar1 == (ResourceListTwinsanitySkydome *)0x0) {
		TwinsanitySkydome::Dispose((TwinsanitySkydome *)param_1);
		VirtualPool::FreeMemory(param_1);
		return;
		}
		uVar2 = (uint)pRVar1->capacity + (uint)(ushort)pRVar1->count;
		if (0x2fe < uVar2) {
		uVar2 = uVar2 - 0x2ff;
		}
		pRVar1->skydomeArray[uVar2] = (TwinsanitySkydome *)param_1;
		pRVar1->count = pRVar1->count + 1;
		}
		return;
		}
		
	*/
	return;
}

void SectionDataSkydome::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataSkydome::Construct(SectionDataSkydome *this){
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skydome;
		(this->entries).elements = (undefined *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		(this->entries).field3_0x8 = 0x40;
		this->pool = (undefined *)0x0;
		this->skydomeList = (ResourceListTwinsanitySkydome *)0x0;
		return;
		}
		
	*/
	return;
}

