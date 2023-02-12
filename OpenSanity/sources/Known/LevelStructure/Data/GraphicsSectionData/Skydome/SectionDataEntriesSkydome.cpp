#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Skydome/SectionDataEntriesSkydome.h"

#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Skydome/TwinsanitySkydome.h"
bool SectionDataEntriesSkydome::Add(TwinsanitySkydome** element, uint id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionDataEntriesSkydome::Add(SectionDataEntriesSkydome *this,TwinsanitySkydome **element,uint id){
		TwinsanitySkydome **ppTVar1;
		TwinsanitySkydome *pTVar2;
		uint *puVar3;
		int iVar4;
		uint *startPtr;
		uint uVar5;
		if (this->cnt == 0) {
		this->cnt = 1;
		if (this->elements == (undefined *)0x0) {
		uVar5 = (uint)this->field3_0x8;
		this->field2_0x6 = this->field3_0x8;
		puVar3 = (uint *)VirtualPool::AllocateMemory(uVar5 * 8 + 4);
		if (puVar3 == (uint *)0x0) {
		startPtr = (uint *)0x0;
		}
		else {
		startPtr = puVar3 + 1;
		*puVar3 = uVar5;
		ForEach(startPtr,8,uVar5,(IntFunction *)&LAB_0011f3a0);
		}
		this->elements = (undefined *)startPtr;
		}
		ppTVar1 = (TwinsanitySkydome **)this->elements;
		pTVar2 = *element;
		ppTVar1[1] = (TwinsanitySkydome *)id;
		*ppTVar1 = pTVar2;
		return false;
		}
		iVar4 = FUN_0011f3b0(this,&id);
		uVar5 = *(uint *)(this->elements + iVar4 * 8 + 4);
		ppTVar1 = (TwinsanitySkydome **)(this->elements + iVar4 * 8);
		if (uVar5 == id) {
		*ppTVar1 = *element;
		ppTVar1[1] = (TwinsanitySkydome *)id;
		return true;
		}
		if (id <= uVar5) {
		iVar4 = iVar4 + 1;
		}
		FUN_0011f400(this,iVar4,element,id);
		return false;
		}
		
	*/
	return false;
}

void SectionDataEntriesSkydome::FUN_0011f3b0(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataEntriesSkydome::FUN_0011f3b0(SectionDataEntriesSkydome *this,uint *param_1){
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		bool bVar5;
		uint local_4;
		uVar4 = (uint)this->cnt;
		uVar3 = 0;
		local_4 = 0xffffffff;
		do {
		uVar2 = (int)(uVar4 - uVar3) / 2 + uVar3;
		if (*(uint *)(this->elements + uVar2 * 8 + 4) == *param_1) {
		return;
		}
		uVar1 = uVar2;
		if (*param_1 <= *(uint *)(this->elements + uVar2 * 8 + 4)) {
		uVar3 = uVar2;
		uVar1 = uVar4;
		}
		uVar4 = uVar1;
		bVar5 = local_4 != uVar2;
		local_4 = uVar2;
		}
		 while (bVar5);
		return;
		}
		
	*/
	return;
}

void SectionDataEntriesSkydome::FUN_0011f400(int param_1, TwinsanitySkydome** element, uint id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataEntriesSkydome::FUN_0011f400(SectionDataEntriesSkydome *this,int param_1,TwinsanitySkydome **element,uint id){
		undefined *puVar1;
		ushort uVar2;
		uint *puVar3;
		uint *puVar4;
		int iVar5;
		int iVar6;
		uint uVar7;
		uint *startPtr;
		if (this->field2_0x6 <= this->cnt) {
		uVar2 = this->field3_0x8 + this->field2_0x6;
		uVar7 = (uint)uVar2;
		this->field2_0x6 = uVar2;
		puVar3 = (uint *)VirtualPool::AllocateMemory(uVar7 * 8 + 4);
		if (puVar3 == (uint *)0x0) {
		startPtr = (uint *)0x0;
		}
		else {
		startPtr = puVar3 + 1;
		*puVar3 = uVar7;
		ForEach(startPtr,8,uVar7,(IntFunction *)&LAB_0011f3a0);
		}
		iVar5 = 0;
		if (0 < param_1) {
		do {
		puVar1 = this->elements;
		startPtr[iVar5 * 2] = *(uint *)(puVar1 + iVar5 * 8);
		iVar6 = iVar5 + 1;
		startPtr[iVar5 * 2 + 1] = *(uint *)(puVar1 + iVar5 * 8 + 4);
		iVar5 = iVar6;
		}
		 while (iVar6 < param_1);
		}
		startPtr[param_1 * 2] = (uint)*element;
		startPtr[param_1 * 2 + 1] = id;
		if (param_1 < (int)(uint)this->cnt) {
		puVar3 = startPtr + param_1 * 2 + 2;
		do {
		puVar4 = (uint *)((int)puVar3 + (int)(this->elements + (-8 - (int)startPtr)));
		*puVar3 = *puVar4;
		puVar3[1] = puVar4[1];
		param_1 = param_1 + 1;
		puVar3 = puVar3 + 2;
		}
		 while (param_1 < (int)(uint)this->cnt);
		}
		if (this->elements != (undefined *)0x0) {
		VirtualPool::FreeMemory(this->elements + -4);
		}
		this->cnt = this->cnt + 1;
		this->elements = (undefined *)startPtr;
		return;
		}
		uVar7 = (uint)this->cnt;
		while (uVar7 = uVar7 - 1, param_1 <= (int)uVar7) {
		puVar1 = this->elements;
		*(undefined4 *)(puVar1 + uVar7 * 8 + 8) = *(undefined4 *)(puVar1 + uVar7 * 8);
		*(undefined4 *)(puVar1 + uVar7 * 8 + 0xc) = *(undefined4 *)(puVar1 + uVar7 * 8 + 4);
		}
		puVar1 = this->elements;
		*(TwinsanitySkydome **)(puVar1 + param_1 * 8) = *element;
		*(uint *)((int)(puVar1 + param_1 * 8) + 4) = id;
		this->cnt = this->cnt + 1;
		return;
		}
		
	*/
	return;
}

