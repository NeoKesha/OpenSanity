#include "headers/Known/LevelStructure/Data/GraphicsSectionData/BlendSkin/SectionDataBlendSkin.h"

#include "headers/Known/Graphics/Assets/TwinsanityBlendSkin.h"
#include "headers/Known/Game/GameResources/ResourceList/ResourceListTwinsanityBlendSkin.h"
void SectionDataBlendSkin::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataBlendSkin::Dispose(SectionDataBlendSkin *this){
		uint uVar1;
		if (this->ids != (int *)0x0) {
		uVar1 = 0;
		if (*this->ids != 0) {
		do {
		(*((this->parent).vtable)->Method5)(&this->parent,(uint *)(this->ids + uVar1 + 1));
		uVar1 = uVar1 + 1;
		}
		 while (uVar1 < (uint)*this->ids);
		}
		this->ids = (int *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void SectionDataBlendSkin::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataBlendSkin::CleanUp(SectionDataBlendSkin *this){
		TwinsanityBlendSkin *this_00;
		EntryDescriptorBlendSkin *pEVar1;
		uint uVar2;
		uVar2 = 0;
		if ((this->entries).cnt != 0) {
		do {
		this_00 = (this->entries).elements[uVar2].skinPtr;
		*(undefined2 *)&(this_00->parent).field1_0x4 = 0;
		(this_00->parent).field1_0x4 = (this_00->parent).field1_0x4 & 0xfffcffff;
		if (this_00 != (TwinsanityBlendSkin *)0x0) {
		TwinsanityBlendSkin::Dispose(this_00);
		VirtualPool::FreeMemory(this_00);
		}
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < (this->entries).cnt);
		}
		pEVar1 = (this->entries).elements;
		if (pEVar1 != (EntryDescriptorBlendSkin *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->entries).elements = (EntryDescriptorBlendSkin *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		if (this->blendSkinLlist == (ResourceListTwinsanityBlendSkin *)0x0) {
		return;
		}
		FUN_0011e3e0(&this->blendSkinLlist->capacity);
		return;
		}
		
	*/
	return;
}

void SectionDataBlendSkin::Dispose_2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataBlendSkin::Dispose(SectionDataBlendSkin *this){
		EntryDescriptorBlendSkin *pEVar1;
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_BlendSkin;
		CleanUp(this);
		pEVar1 = (this->entries).elements;
		if (pEVar1 != (EntryDescriptorBlendSkin *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->entries).elements = (EntryDescriptorBlendSkin *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void SectionDataBlendSkin::Dispose_3(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataBlendSkin * __thiscall SectionDataBlendSkin::Dispose(SectionDataBlendSkin *this,byte param_1){
		EntryDescriptorBlendSkin *pEVar1;
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_BlendSkin;
		CleanUp(this);
		pEVar1 = (this->entries).elements;
		if (pEVar1 != (EntryDescriptorBlendSkin *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->entries).elements = (EntryDescriptorBlendSkin *)0x0;
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

void SectionDataBlendSkin::FUN_0011c090(TwinsanityBlendSkin* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataBlendSkin::FUN_0011c090(SectionDataBlendSkin *this,TwinsanityBlendSkin *element){
		uint *puVar1;
		int *piVar2;
		piVar2 = this->ids;
		if (piVar2 != (int *)0x0) {
		piVar2[*piVar2 + 1] = (element->parent).id;
		*piVar2 = *piVar2 + 1;
		puVar1 = &(element->parent).field1_0x4;
		*puVar1 = *puVar1 & 0xfffdffff;
		puVar1 = &(element->parent).field1_0x4;
		*(short *)puVar1 = *(short *)puVar1 + 1;
		}
		return;
		}
		
	*/
	return;
}

void SectionDataBlendSkin::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataBlendSkin::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

TwinsanityBlendSkin* SectionDataBlendSkin::Create(TwinsanityBlendSkin* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinsanityBlendSkin * __thiscall SectionDataBlendSkin::Create(SectionDataBlendSkin *this,TwinsanityBlendSkin *param_1,int param_2){
		SectionDataEntriesBlendSkin *this_00;
		EntryDescriptorBlendSkin *pEVar1;
		TwinsanityBlendSkin *pTVar2;
		int iVar3;
		TwinsanityBlendSkin *pTVar4;
		uint *puVar5;
		TwinsanityBlendSkin *unaff_EBX;
		pTVar2 = param_1;
		pTVar4 = (TwinsanityBlendSkin *)(param_1->parent).vtable;
		this_00 = &this->entries;
		if ((this->entries).cnt != 0) {
		param_1 = pTVar4;
		iVar3 = SectionDataEntriesBlendSkin::FUN_00120490(this_00,(uint *)&param_1);
		pEVar1 = this_00->elements + iVar3;
		if (((TwinsanityBlendSkin *)pEVar1->id == pTVar4) && (pEVar1 != (EntryDescriptorBlendSkin *)0x0)) {
		param_1 = pEVar1->skinPtr;
		goto LAB_0012064b;
		}
		}
		param_1 = (TwinsanityBlendSkin *)0x0;
		LAB_0012064b:if (param_2 != 0) {
		*(bool *)param_2 = param_1 == (TwinsanityBlendSkin *)0x0;
		}
		if (param_1 == (TwinsanityBlendSkin *)0x0) {
		pTVar4 = (TwinsanityBlendSkin *)VirtualPool::AllocateMemory(0x50);
		if (pTVar4 == (TwinsanityBlendSkin *)0x0) {
		param_1 = (TwinsanityBlendSkin *)0x0;
		}
		else {
		param_1 = TwinsanityBlendSkin::Construct(pTVar4,(pTVar2->parent).vtable);
		}
		puVar5 = &(param_1->parent).field1_0x4;
		*puVar5 = (param_1->parent).field1_0x4 & 0xfffdffff;
		*(short *)puVar5 = *(short *)puVar5 + 1;
		(*((this->parent).vtable)->EmptyFunction)(pTVar2,param_1);
		SectionDataEntriesBlendSkin::Add(this_00,(TwinsanityBlendSkin **)&stack0xfffffffc,(uint)(pTVar2->parent).vtable);
		return unaff_EBX;
		}
		puVar5 = &(param_1->parent).field1_0x4;
		*puVar5 = (param_1->parent).field1_0x4 & 0xfffdffff;
		*(short *)puVar5 = *(short *)puVar5 + 1;
		return param_1;
		}
		
	*/
	return null;
}

void SectionDataBlendSkin::UnkMethod3(TwinsanityBlendSkin* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataBlendSkin::UnkMethod3(SectionDataBlendSkin *this,TwinsanityBlendSkin *param_1){
		uint *puVar1;
		ResourceListTwinsanityBlendSkin *pRVar2;
		uint uVar3;
		uint uVar4;
		puVar1 = &(param_1->parent).field1_0x4;
		*(short *)puVar1 = *(short *)puVar1 + -1;
		uVar4 = (param_1->parent).field1_0x4;
		uVar3 = uVar4 & 0xffff;
		if (uVar3 == 0) {
		uVar3 = uVar4 & 0x20000;
		}
		if (uVar3 == 0) {
		FUN_001207b0(&this->entries,(param_1->parent).id);
		pRVar2 = this->blendSkinLlist;
		if (pRVar2 == (ResourceListTwinsanityBlendSkin *)0x0) {
		TwinsanityBlendSkin::Dispose(param_1);
		VirtualPool::FreeMemory(param_1);
		return;
		}
		uVar4 = (uint)(ushort)pRVar2->count + (uint)pRVar2->capacity;
		if (0x2fe < uVar4) {
		uVar4 = uVar4 - 0x2ff;
		}
		pRVar2->blendSkinArray[uVar4] = param_1;
		pRVar2->count = pRVar2->count + 1;
		}
		return;
		}
		
	*/
	return;
}

void SectionDataBlendSkin::UnkMethod4(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataBlendSkin::UnkMethod4(SectionDataBlendSkin *this,uint *param_1){
		SectionDataEntriesBlendSkin *this_00;
		EntryDescriptorBlendSkin *pEVar1;
		uint *puVar2;
		uint uVar3;
		uint *puVar4;
		int iVar5;
		uint uVar6;
		TwinsanityBlendSkin *this_01;
		puVar4 = param_1;
		puVar2 = (uint *)*param_1;
		this_00 = &this->entries;
		param_1 = puVar2;
		if ((this->entries).cnt != 0) {
		iVar5 = SectionDataEntriesBlendSkin::FUN_00120490(this_00,(uint *)&param_1);
		pEVar1 = this_00->elements + iVar5;
		if (((uint *)pEVar1->id == puVar2) && (pEVar1 != (EntryDescriptorBlendSkin *)0x0)) {
		this_01 = pEVar1->skinPtr;
		goto LAB_0012071b;
		}
		}
		this_01 = (TwinsanityBlendSkin *)0x0;
		LAB_0012071b:puVar2 = &(this_01->parent).field1_0x4;
		*(short *)puVar2 = *(short *)puVar2 + -1;
		uVar3 = (this_01->parent).field1_0x4;
		uVar6 = uVar3 & 0xffff;
		if (uVar6 == 0) {
		uVar6 = uVar3 & 0x20000;
		}
		if (uVar6 == 0) {
		FUN_001207b0(this_00,*puVar4);
		if (this->blendSkinLlist == (ResourceListTwinsanityBlendSkin *)0x0) {
		if (this_01 != (TwinsanityBlendSkin *)0x0) {
		TwinsanityBlendSkin::Dispose(this_01);
		VirtualPool::FreeMemory(this_01);
		return;
		}
		}
		else {
		FUN_00120780(this->blendSkinLlist,this_01);
		}
		}
		return;
		}
		
	*/
	return;
}

bool SectionDataBlendSkin::Check(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionDataBlendSkin::Check(SectionDataBlendSkin *this,uint *param_1){
		uint *puVar1;
		int iVar2;
		puVar1 = (uint *)*param_1;
		if ((this->entries).cnt == 0) {
		return false;
		}
		param_1 = puVar1;
		iVar2 = SectionDataEntriesBlendSkin::FUN_00120490(&this->entries,(uint *)&param_1);
		return (uint *)(this->entries).elements[iVar2].id == puVar1;
		}
		
	*/
	return false;
}

TwinsanityBlendSkin* SectionDataBlendSkin::Get(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinsanityBlendSkin * __thiscall SectionDataBlendSkin::Get(SectionDataBlendSkin *this,uint *param_1){
		EntryDescriptorBlendSkin *pEVar1;
		uint *puVar2;
		EntryDescriptorBlendSkin *pEVar3;
		int iVar4;
		puVar2 = (uint *)*param_1;
		if ((this->entries).cnt != 0) {
		param_1 = puVar2;
		iVar4 = SectionDataEntriesBlendSkin::FUN_00120490(&this->entries,(uint *)&param_1);
		pEVar3 = (this->entries).elements;
		pEVar1 = pEVar3 + iVar4;
		if (((uint *)pEVar3[iVar4].id == puVar2) && (pEVar1 != (EntryDescriptorBlendSkin *)0x0)) {
		return pEVar1->skinPtr;
		}
		}
		return (TwinsanityBlendSkin *)0x0;
		}
		
	*/
	return null;
}

void SectionDataBlendSkin::EmptyFunction_11() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataBlendSkin::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataBlendSkin::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataBlendSkin::Construct(SectionDataBlendSkin *this){
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_BlendSkin;
		(this->entries).elements = (EntryDescriptorBlendSkin *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		(this->entries).field3_0x8 = 0x40;
		this->ids = (int *)0x0;
		this->blendSkinLlist = (ResourceListTwinsanityBlendSkin *)0x0;
		return;
		}
		
	*/
	return;
}

void SectionDataBlendSkin::Add(uint* param_1, TwinsanityBlendSkin* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataBlendSkin::Add(SectionDataBlendSkin *this,uint *param_1,TwinsanityBlendSkin *param_2){
		uint *puVar1;
		puVar1 = &(param_2->parent).field1_0x4;
		*puVar1 = (param_2->parent).field1_0x4 & 0xfffdffff;
		*(short *)puVar1 = *(short *)puVar1 + 1;
		SectionDataEntriesBlendSkin::Add(&this->entries,&param_2,*param_1);
		return;
		}
		
	*/
	return;
}

