#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Lod/SectionDataEntriesLod.h"

#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Lod/TwinsanityLod.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Lod/EntryDescriptorLod.h"
bool SectionDataEntriesLod::Add(TwinsanityLod** element, uint id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionDataEntriesLod::Add(SectionDataEntriesLod *this,TwinsanityLod **element,uint id){
		TwinsanityLod *pTVar1;
		uint *puVar2;
		int iVar3;
		EntryDescriptorLod *pEVar4;
		uint uVar5;
		if (this->cnt == 0) {
		this->cnt = 1;
		if (this->elements == (EntryDescriptorLod *)0x0) {
		uVar5 = (uint)this->field3_0x8;
		this->field2_0x6 = this->field3_0x8;
		puVar2 = (uint *)VirtualPool::AllocateMemory(uVar5 * 8 + 4);
		if (puVar2 == (uint *)0x0) {
		pEVar4 = (EntryDescriptorLod *)0x0;
		}
		else {
		pEVar4 = (EntryDescriptorLod *)(puVar2 + 1);
		*puVar2 = uVar5;
		ForEach(pEVar4,8,uVar5,(IntFunction *)&LAB_0011f6f0);
		}
		this->elements = pEVar4;
		}
		pEVar4 = this->elements;
		pTVar1 = *element;
		pEVar4->id = id;
		pEVar4->lodPtr = pTVar1;
		return false;
		}
		iVar3 = SectionDataEntriesLodFUN_0011f700(this,&id);
		uVar5 = this->elements[iVar3].id;
		pEVar4 = this->elements + iVar3;
		if (uVar5 == id) {
		pEVar4->lodPtr = *element;
		pEVar4->id = id;
		return true;
		}
		if (id <= uVar5) {
		iVar3 = iVar3 + 1;
		}
		FUN_0011f750(this,iVar3,element,id);
		return false;
		}
		
	*/
	return false;
}

void SectionDataEntriesLod::FUN_0011f750(int param_1, TwinsanityLod** element, uint id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataEntriesLod::FUN_0011f750(SectionDataEntriesLod *this,int param_1,TwinsanityLod **element,uint id){
		uint uVar1;
		ushort uVar2;
		uint *puVar3;
		TwinsanityLod **ppTVar4;
		EntryDescriptorLod *pEVar5;
		int iVar6;
		int iVar7;
		uint uVar8;
		EntryDescriptorLod *pEVar9;
		if (this->field2_0x6 <= this->cnt) {
		uVar2 = this->field3_0x8 + this->field2_0x6;
		uVar8 = (uint)uVar2;
		this->field2_0x6 = uVar2;
		puVar3 = (uint *)VirtualPool::AllocateMemory(uVar8 * 8 + 4);
		if (puVar3 == (uint *)0x0) {
		pEVar9 = (EntryDescriptorLod *)0x0;
		}
		else {
		pEVar9 = (EntryDescriptorLod *)(puVar3 + 1);
		*puVar3 = uVar8;
		ForEach(pEVar9,8,uVar8,(IntFunction *)&LAB_0011f6f0);
		}
		iVar6 = 0;
		if (0 < param_1) {
		do {
		pEVar5 = this->elements;
		pEVar9[iVar6].lodPtr = pEVar5[iVar6].lodPtr;
		iVar7 = iVar6 + 1;
		pEVar9[iVar6].id = pEVar5[iVar6].id;
		iVar6 = iVar7;
		}
		 while (iVar7 < param_1);
		}
		pEVar9[param_1].lodPtr = *element;
		pEVar9[param_1].id = id;
		if (param_1 < (int)(uint)this->cnt) {
		pEVar5 = pEVar9 + param_1 + 1;
		do {
		ppTVar4 = (TwinsanityLod **)((int)pEVar5 + (int)this->elements + (-8 - (int)pEVar9));
		pEVar5->lodPtr = *ppTVar4;
		pEVar5->id = (int)ppTVar4[1];
		param_1 = param_1 + 1;
		pEVar5 = pEVar5 + 1;
		}
		 while (param_1 < (int)(uint)this->cnt);
		}
		if (this->elements != (EntryDescriptorLod *)0x0) {
		VirtualPool::FreeMemory(&this->elements[-1].id);
		}
		this->cnt = this->cnt + 1;
		this->elements = pEVar9;
		return;
		}
		uVar8 = (uint)this->cnt;
		while (uVar1 = uVar8 - 1, param_1 <= (int)uVar1) {
		pEVar9 = this->elements;
		pEVar9[uVar8].lodPtr = pEVar9[uVar1].lodPtr;
		pEVar9[uVar8].id = pEVar9[uVar1].id;
		uVar8 = uVar1;
		}
		pEVar9 = this->elements;
		pEVar9[param_1].lodPtr = *element;
		pEVar9[param_1].id = id;
		this->cnt = this->cnt + 1;
		return;
		}
		
	*/
	return;
}

