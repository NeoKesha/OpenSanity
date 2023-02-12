#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Material/SectionDataEntriesMaterial.h"

#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Material/TwinsanityMaterial.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Material/EntryDescriptorMaterial.h"
void SectionDataEntriesMaterial::FUN_0011b520(int index, TwinsanityMaterial** mat, uint id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataEntriesMaterial::FUN_0011b520(SectionDataEntriesMaterial *this,int index,TwinsanityMaterial **mat,uint id){
		uint uVar1;
		ushort uVar2;
		uint *puVar3;
		TwinsanityMaterial **ppTVar4;
		EntryDescriptorMaterial *pEVar5;
		int iVar6;
		int iVar7;
		uint uVar8;
		EntryDescriptorMaterial *pEVar9;
		if (this->field2_0x6 <= this->cnt) {
		uVar2 = this->field3_0x8 + this->field2_0x6;
		uVar8 = (uint)uVar2;
		this->field2_0x6 = uVar2;
		puVar3 = (uint *)VirtualPool::AllocateMemory(uVar8 * 8 + 4);
		if (puVar3 == (uint *)0x0) {
		pEVar9 = (EntryDescriptorMaterial *)0x0;
		}
		else {
		pEVar9 = (EntryDescriptorMaterial *)(puVar3 + 1);
		*puVar3 = uVar8;
		ForEach(pEVar9,8,uVar8,::Passthrough);
		}
		iVar6 = 0;
		if (0 < index) {
		do {
		pEVar5 = this->elements;
		pEVar9[iVar6].matPtr = pEVar5[iVar6].matPtr;
		iVar7 = iVar6 + 1;
		pEVar9[iVar6].id = pEVar5[iVar6].id;
		iVar6 = iVar7;
		}
		 while (iVar7 < index);
		}
		pEVar9[index].matPtr = *mat;
		pEVar9[index].id = id;
		if (index < (int)(uint)this->cnt) {
		pEVar5 = pEVar9 + index + 1;
		do {
		ppTVar4 = (TwinsanityMaterial **)((int)pEVar5 + (int)this->elements + (-8 - (int)pEVar9));
		pEVar5->matPtr = *ppTVar4;
		pEVar5->id = (int)ppTVar4[1];
		index = index + 1;
		pEVar5 = pEVar5 + 1;
		}
		 while (index < (int)(uint)this->cnt);
		}
		if (this->elements != (EntryDescriptorMaterial *)0x0) {
		VirtualPool::FreeMemory(&this->elements[-1].id);
		}
		this->cnt = this->cnt + 1;
		this->elements = pEVar9;
		return;
		}
		uVar8 = (uint)this->cnt;
		while (uVar1 = uVar8 - 1, index <= (int)uVar1) {
		pEVar9 = this->elements;
		pEVar9[uVar8].matPtr = pEVar9[uVar1].matPtr;
		pEVar9[uVar8].id = pEVar9[uVar1].id;
		uVar8 = uVar1;
		}
		pEVar9 = this->elements;
		pEVar9[index].matPtr = *mat;
		pEVar9[index].id = id;
		this->cnt = this->cnt + 1;
		return;
		}
		
	*/
	return;
}

bool SectionDataEntriesMaterial::Add(TwinsanityMaterial** material, uint id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionDataEntriesMaterial::Add(SectionDataEntriesMaterial *this,TwinsanityMaterial **material,uint id){
		uint *puVar1;
		int index;
		EntryDescriptorMaterial *array;
		uint cnt;
		TwinsanityMaterial *mat;
		if (this->cnt == 0) {
		this->cnt = 1;
		if (this->elements == (EntryDescriptorMaterial *)0x0) {
		cnt = (uint)this->field3_0x8;
		this->field2_0x6 = this->field3_0x8;
		puVar1 = (uint *)VirtualPool::AllocateMemory(cnt * 8 + 4);
		if (puVar1 == (uint *)0x0) {
		array = (EntryDescriptorMaterial *)0x0;
		}
		else {
		array = (EntryDescriptorMaterial *)(puVar1 + 1);
		*puVar1 = cnt;
		ForEach(array,8,cnt,::Passthrough);
		}
		this->elements = array;
		}
		array = this->elements;
		mat = *material;
		array->id = id;
		array->matPtr = mat;
		return false;
		}
		index = SectionDataEntriesAbstract::FindIndexMaterial((SectionDataEntriesAbstract *)this,&id);
		array = this->elements + index;
		if (array->id == id) {
		mat = *material;
		array->id = id;
		array->matPtr = mat;
		return true;
		}
		if (id <= (uint)array->id) {
		index = index + 1;
		}
		FUN_0011b520(this,index,material,id);
		return false;
		}
		
	*/
	return false;
}

bool SectionDataEntriesMaterial::FUN_0011f100(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionDataEntriesMaterial::FUN_0011f100(SectionDataEntriesMaterial *this,uint param_1){
		EntryDescriptorMaterial *pEVar1;
		ushort uVar2;
		int iVar3;
		uVar2 = this->cnt;
		if (uVar2 != 0) {
		iVar3 = SectionDataEntriesAbstract::FindIndexMaterial((SectionDataEntriesAbstract *)this,&param_1);
		if (this->elements[iVar3].id == param_1) {
		uVar2 = uVar2 - 1;
		this->cnt = uVar2;
		if (iVar3 < (int)(uint)uVar2) {
		do {
		pEVar1 = this->elements + iVar3;
		pEVar1->matPtr = this->elements[iVar3 + 1].matPtr;
		pEVar1->id = pEVar1[1].id;
		iVar3 = iVar3 + 1;
		}
		 while (iVar3 < (int)(uint)this->cnt);
		}
		return true;
		}
		}
		return false;
		}
		
	*/
	return false;
}

