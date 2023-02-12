#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Skin/SectionDataSkin.h"

#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Texture/TwinsanityTexture.h"
#include "headers/Known/Graphics/Assets/TwinsanitySkin.h"
#include "headers/Known/Game/GameResources/ResourceList/ResourceListTwinsanitySkin.h"
void SectionDataSkin::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataSkin::Dispose(SectionDataSkin *this){
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

void SectionDataSkin::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataSkin::CleanUp(SectionDataSkin *this){
		TwinsanitySkin *this_00;
		EntryDescriptorSkin *pEVar1;
		uint uVar2;
		uVar2 = 0;
		if ((this->entries).cnt != 0) {
		do {
		this_00 = (this->entries).elements[uVar2].skinPtr;
		*(undefined2 *)&this_00->field1_0x4 = 0;
		this_00->field1_0x4 = this_00->field1_0x4 & 0xfffcffff;
		if (this_00 != (TwinsanitySkin *)0x0) {
		TwinsanitySkin::Dispose(this_00);
		VirtualPool::FreeMemory(this_00);
		}
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < (this->entries).cnt);
		}
		pEVar1 = (this->entries).elements;
		if (pEVar1 != (EntryDescriptorSkin *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->entries).elements = (EntryDescriptorSkin *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		if (this->skinList == (ResourceListTwinsanitySkin *)0x0) {
		return;
		}
		FUN_0011e390(&this->skinList->capacity);
		return;
		}
		
	*/
	return;
}

void SectionDataSkin::Dispose_2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataSkin::Dispose(SectionDataSkin *this){
		EntryDescriptorSkin *pEVar1;
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skin;
		CleanUp(this);
		pEVar1 = (this->entries).elements;
		if (pEVar1 != (EntryDescriptorSkin *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->entries).elements = (EntryDescriptorSkin *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void SectionDataSkin::Dispose_3(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataSkin * __thiscall SectionDataSkin::Dispose(SectionDataSkin *this,byte param_1){
		EntryDescriptorSkin *pEVar1;
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skin;
		CleanUp(this);
		pEVar1 = (this->entries).elements;
		if (pEVar1 != (EntryDescriptorSkin *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->entries).elements = (EntryDescriptorSkin *)0x0;
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

void SectionDataSkin::FUN_0011bf60(TwinsanitySkin* skin) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataSkin::FUN_0011bf60(SectionDataSkin *this,TwinsanitySkin *skin){
		int *piVar1;
		piVar1 = (int *)this->pool;
		if (piVar1 != (int *)0x0) {
		piVar1[*piVar1 + 1] = skin->id;
		*piVar1 = *piVar1 + 1;
		skin->field1_0x4 = skin->field1_0x4 & 0xfffdffff;
		*(short *)&skin->field1_0x4 = *(short *)&skin->field1_0x4 + 1;
		}
		return;
		}
		
	*/
	return;
}

void SectionDataSkin::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataSkin::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataSkin::Add(uint* param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataSkin::Add(SectionDataSkin *this,uint *param_1,uint param_2){
		uint *puVar1;
		puVar1 = (uint *)(param_2 + 4);
		*puVar1 = *(uint *)(param_2 + 4) & 0xfffdffff;
		*(short *)puVar1 = *(short *)puVar1 + 1;
		SectionDataEntriesSkin::Add(&this->entries,(TwinsanitySkin **)&param_2,*param_1);
		return;
		}
		
	*/
	return;
}

TwinsanityTexture* SectionDataSkin::Create(TwinsanityTexture* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinsanityTexture * __thiscall SectionDataSkin::Create(SectionDataSkin *this,TwinsanityTexture *param_1,int param_2){
		SectionDataEntriesSkin *this_00;
		EntryDescriptorSkin *pEVar1;
		TwinsanityTexture *pTVar2;
		uint uVar3;
		TwinsanityTexture *pTVar4;
		int iVar5;
		uint *puVar6;
		TwinsanityTexture *local_4;
		pTVar4 = param_1;
		pTVar2 = (TwinsanityTexture *)param_1->index;
		this_00 = &this->entries;
		local_4 = (TwinsanityTexture *)this;
		if ((this->entries).cnt != 0) {
		param_1 = pTVar2;
		iVar5 = SectionDataEntriesSkin::FUN_0011fea0(this_00,(uint *)&param_1);
		pEVar1 = this_00->elements + iVar5;
		if (((TwinsanityTexture *)pEVar1->id == pTVar2) && (pEVar1 != (EntryDescriptorSkin *)0x0)) {
		param_1 = (TwinsanityTexture *)pEVar1->skinPtr;
		goto LAB_0012005e;
		}
		}
		param_1 = (TwinsanityTexture *)0x0;
		LAB_0012005e:if (param_2 != 0) {
		*(bool *)param_2 = param_1 == (TwinsanityTexture *)0x0;
		}
		if (param_1 == (TwinsanityTexture *)0x0) {
		param_1 = (TwinsanityTexture *)VirtualPool::AllocateMemory(0x4c);
		if (param_1 == (TwinsanityTexture *)0x0) {
		param_1 = (TwinsanityTexture *)0x0;
		}
		else {
		uVar3 = pTVar4->index;
		*(undefined2 *)&param_1->id = 0;
		param_1->size = uVar3;
		param_1->id = param_1->id & 0xfffcffff;
		param_1->index = (uint)&TwinsanityGraphics_VT_Skin;
		*(undefined4 *)&param_1->field_0xc = 0;
		*(undefined4 *)&param_1->field_0x10 = 0;
		param_1->field_0x14 = 0;
		param_1->field_0x15 = 0;
		*(undefined4 *)&param_1->field_0x18 = 0;
		*(undefined4 *)&param_1->field_0x1c = 0;
		*(undefined4 *)&param_1->field_0x20 = 0;
		*(undefined4 *)&param_1->field_0x28 = 0;
		*(undefined4 *)&param_1->field_0x2c = 0;
		*(undefined4 *)&param_1->field_0x3c = 0;
		*(undefined4 *)&param_1->field_0x40 = 0;
		}
		puVar6 = &param_1->id;
		*puVar6 = param_1->id & 0xfffdffff;
		*(short *)puVar6 = *(short *)puVar6 + 1;
		(**(code **)local_4->index)(pTVar4,param_1);
		SectionDataEntriesSkin::Add(this_00,(TwinsanitySkin **)&local_4,pTVar4->index);
		return local_4;
		}
		puVar6 = &param_1->id;
		*puVar6 = param_1->id & 0xfffdffff;
		*(short *)puVar6 = *(short *)puVar6 + 1;
		return param_1;
		}
		
	*/
	return null;
}

void SectionDataSkin::Method4(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataSkin::Method4(SectionDataSkin *this,undefined4 *param_1){
		ResourceListTwinsanitySkin *pRVar1;
		uint uVar2;
		*(short *)(param_1 + 1) = *(short *)(param_1 + 1) + -1;
		uVar2 = param_1[1] & 0xffff;
		if (uVar2 == 0) {
		uVar2 = param_1[1] & 0x20000;
		}
		if (uVar2 == 0) {
		FUN_00120200(&this->entries,param_1[2]);
		pRVar1 = this->skinList;
		if (pRVar1 == (ResourceListTwinsanitySkin *)0x0) {
		TwinsanitySkin::Dispose((TwinsanitySkin *)param_1);
		VirtualPool::FreeMemory(param_1);
		return;
		}
		uVar2 = (uint)(ushort)pRVar1->count + (uint)pRVar1->capacity;
		if (0x2fe < uVar2) {
		uVar2 = uVar2 - 0x2ff;
		}
		pRVar1->skinArray[uVar2] = (TwinsanitySkin *)param_1;
		pRVar1->count = pRVar1->count + 1;
		}
		return;
		}
		
	*/
	return;
}

void SectionDataSkin::Method5(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataSkin::Method5(SectionDataSkin *this,uint *param_1){
		SectionDataEntriesSkin *this_00;
		EntryDescriptorSkin *pEVar1;
		uint *puVar2;
		uint *puVar3;
		int iVar4;
		uint uVar5;
		TwinsanitySkin *this_01;
		puVar3 = param_1;
		puVar2 = (uint *)*param_1;
		this_00 = &this->entries;
		param_1 = puVar2;
		if ((this->entries).cnt != 0) {
		iVar4 = SectionDataEntriesSkin::FUN_0011fea0(this_00,(uint *)&param_1);
		pEVar1 = this_00->elements + iVar4;
		if (((uint *)pEVar1->id == puVar2) && (pEVar1 != (EntryDescriptorSkin *)0x0)) {
		this_01 = pEVar1->skinPtr;
		goto LAB_0012016b;
		}
		}
		this_01 = (TwinsanitySkin *)0x0;
		LAB_0012016b:*(short *)&this_01->field1_0x4 = *(short *)&this_01->field1_0x4 + -1;
		uVar5 = this_01->field1_0x4 & 0xffff;
		if (uVar5 == 0) {
		uVar5 = this_01->field1_0x4 & 0x20000;
		}
		if (uVar5 == 0) {
		FUN_00120200(this_00,*puVar3);
		if (this->skinList == (ResourceListTwinsanitySkin *)0x0) {
		if (this_01 != (TwinsanitySkin *)0x0) {
		TwinsanitySkin::Dispose(this_01);
		VirtualPool::FreeMemory(this_01);
		return;
		}
		}
		else {
		FUN_001201d0(this->skinList,this_01);
		}
		}
		return;
		}
		
	*/
	return;
}

uint SectionDataSkin::Check(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall SectionDataSkin::Check(SectionDataSkin *this,uint *param_1){
		uint *puVar1;
		uint uVar2;
		puVar1 = (uint *)*param_1;
		if ((this->entries).cnt == 0) {
		return (uint)param_1 & 0xffffff00;
		}
		param_1 = puVar1;
		uVar2 = SectionDataEntriesSkin::FUN_0011fea0(&this->entries,(uint *)&param_1);
		return uVar2 & 0xffffff00 | (uint)((uint *)(this->entries).elements[uVar2].id == puVar1);
		}
		
	*/
	return 0;
}

TwinsanityTexture* SectionDataSkin::Get(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinsanityTexture * __thiscall SectionDataSkin::Get(SectionDataSkin *this,uint *param_1){
		EntryDescriptorSkin *pEVar1;
		uint *puVar2;
		EntryDescriptorSkin *pEVar3;
		int iVar4;
		puVar2 = (uint *)*param_1;
		if ((this->entries).cnt != 0) {
		param_1 = puVar2;
		iVar4 = SectionDataEntriesSkin::FUN_0011fea0(&this->entries,(uint *)&param_1);
		pEVar3 = (this->entries).elements;
		pEVar1 = pEVar3 + iVar4;
		if (((uint *)pEVar3[iVar4].id == puVar2) && (pEVar1 != (EntryDescriptorSkin *)0x0)) {
		return (TwinsanityTexture *)pEVar1->skinPtr;
		}
		}
		return (TwinsanityTexture *)0x0;
		}
		
	*/
	return null;
}

void SectionDataSkin::EmptyFunction_12() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataSkin::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataSkin::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataSkin::Construct(SectionDataSkin *this){
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skin;
		(this->entries).elements = (EntryDescriptorSkin *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		(this->entries).field3_0x8 = 0x40;
		this->pool = (undefined *)0x0;
		this->skinList = (ResourceListTwinsanitySkin *)0x0;
		return;
		}
		
	*/
	return;
}

