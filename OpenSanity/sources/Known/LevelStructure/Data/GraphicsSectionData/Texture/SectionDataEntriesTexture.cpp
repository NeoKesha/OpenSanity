#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Texture/SectionDataEntriesTexture.h"

#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Texture/EntryDescriptorTexture.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Texture/TwinsanityTexture.h"
uint SectionDataEntriesTexture::FindIndexTextures(uint* texId) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall SectionDataEntriesTexture::FindIndexTextures(SectionDataEntriesTexture *this,uint *texId){
		uint uVar1;
		uint index;
		uint start;
		uint end;
		bool condition;
		uint i;
		uint id;
		end = (uint)this->cnt;
		start = 0;
		i = 0xffffffff;
		do {
		index = (int)(end - start) / 2 + start;
		id = this->elements[index].id;
		if (id == *texId) {
		return index;
		}
		uVar1 = index;
		if (*texId <= id) {
		start = index;
		uVar1 = end;
		}
		end = uVar1;
		condition = i != index;
		i = index;
		}
		 while (condition);
		return index;
		}
		
	*/
	return 0;
}

void SectionDataEntriesTexture::FUN_0011b3a0(int index, TwinsanityTexture** tex, int id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataEntriesTexture::FUN_0011b3a0(SectionDataEntriesTexture *this,int index,TwinsanityTexture **tex,int id){
		uint uVar1;
		ushort uVar2;
		uint *puVar3;
		TwinsanityTexture **ppTVar4;
		EntryDescriptorTexture *pEVar5;
		int iVar6;
		int iVar7;
		uint uVar8;
		EntryDescriptorTexture *pEVar9;
		if (this->field2_0x6 <= this->cnt) {
		uVar2 = this->field3_0x8 + this->field2_0x6;
		uVar8 = (uint)uVar2;
		this->field2_0x6 = uVar2;
		puVar3 = (uint *)VirtualPool::AllocateMemory(uVar8 * 8 + 4);
		if (puVar3 == (uint *)0x0) {
		pEVar9 = (EntryDescriptorTexture *)0x0;
		}
		else {
		pEVar9 = (EntryDescriptorTexture *)(puVar3 + 1);
		*puVar3 = uVar8;
		ForEach(pEVar9,8,uVar8,::Passthrough);
		}
		iVar6 = 0;
		if (0 < index) {
		do {
		pEVar5 = this->elements;
		pEVar9[iVar6].texPtr = pEVar5[iVar6].texPtr;
		iVar7 = iVar6 + 1;
		pEVar9[iVar6].id = pEVar5[iVar6].id;
		iVar6 = iVar7;
		}
		 while (iVar7 < index);
		}
		pEVar9[index].texPtr = *tex;
		pEVar9[index].id = id;
		if (index < (int)(uint)this->cnt) {
		pEVar5 = pEVar9 + index + 1;
		do {
		ppTVar4 = (TwinsanityTexture **)((int)pEVar5 + (int)this->elements + (-8 - (int)pEVar9));
		pEVar5->texPtr = *ppTVar4;
		pEVar5->id = (int)ppTVar4[1];
		index = index + 1;
		pEVar5 = pEVar5 + 1;
		}
		 while (index < (int)(uint)this->cnt);
		}
		if (this->elements != (EntryDescriptorTexture *)0x0) {
		VirtualPool::FreeMemory(&this->elements[-1].id);
		}
		this->cnt = this->cnt + 1;
		this->elements = pEVar9;
		return;
		}
		uVar8 = (uint)this->cnt;
		while (uVar1 = uVar8 - 1, index <= (int)uVar1) {
		pEVar9 = this->elements;
		pEVar9[uVar8].texPtr = pEVar9[uVar1].texPtr;
		pEVar9[uVar8].id = pEVar9[uVar1].id;
		uVar8 = uVar1;
		}
		pEVar9 = this->elements;
		pEVar9[index].texPtr = *tex;
		pEVar9[index].id = id;
		this->cnt = this->cnt + 1;
		return;
		}
		
	*/
	return;
}

bool SectionDataEntriesTexture::Add(TwinsanityTexture** texture, uint id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionDataEntriesTexture::Add(SectionDataEntriesTexture *this,TwinsanityTexture **texture,uint id){
		TwinsanityTexture *pTVar1;
		uint *memptr;
		EntryDescriptorTexture *start;
		uint cnt;
		if (this->cnt == 0) {
		this->cnt = 1;
		if (this->elements == (EntryDescriptorTexture *)0x0) {
		cnt = (uint)this->field3_0x8;
		this->field2_0x6 = this->field3_0x8;
		memptr = (uint *)VirtualPool::AllocateMemory(cnt * 8 + 4);
		if (memptr == (uint *)0x0) {
		start = (EntryDescriptorTexture *)0x0;
		}
		else {
		start = (EntryDescriptorTexture *)(memptr + 1);
		*memptr = cnt;
		ForEach(start,8,cnt,::Passthrough);
		}
		this->elements = start;
		}
		start = this->elements;
		pTVar1 = *texture;
		start->id = id;
		start->texPtr = pTVar1;
		return false;
		}
		cnt = FindIndexTextures(this,&id);
		start = this->elements + cnt;
		if (start->id == id) {
		pTVar1 = *texture;
		start->id = id;
		start->texPtr = pTVar1;
		return true;
		}
		if (id <= (uint)start->id) {
		cnt = cnt + 1;
		}
		FUN_0011b3a0(this,cnt,texture,id);
		return false;
		}
		
	*/
	return false;
}

