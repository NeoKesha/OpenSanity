#include "headers/Known/LevelStructure/Data/GraphicsSectionData/RigidModel/SectionDataEntriesRigidModel.h"

#include "headers/Known/Graphics/Assets/TwinsanityRigidModel.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/RigidModel/EntryDescriptorRigidModel.h"
bool SectionDataEntriesRigidModel::Add(TwinsanityRigidModel** element, uint id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionDataEntriesRigidModel::Add(SectionDataEntriesRigidModel *this,TwinsanityRigidModel **element,uint id){
		TwinsanityRigidModel *pTVar1;
		uint *puVar2;
		int iVar3;
		EntryDescriptorRigidModel *pEVar4;
		uint uVar5;
		if (this->cnt == 0) {
		this->cnt = 1;
		if (this->elements == (EntryDescriptorRigidModel *)0x0) {
		uVar5 = (uint)this->field3_0x8;
		this->field2_0x6 = this->field3_0x8;
		puVar2 = (uint *)VirtualPool::AllocateMemory(uVar5 * 8 + 4);
		if (puVar2 == (uint *)0x0) {
		pEVar4 = (EntryDescriptorRigidModel *)0x0;
		}
		else {
		pEVar4 = (EntryDescriptorRigidModel *)(puVar2 + 1);
		*puVar2 = uVar5;
		ForEach(pEVar4,8,uVar5,(IntFunction *)&LAB_00120a30);
		}
		this->elements = pEVar4;
		}
		pEVar4 = this->elements;
		pTVar1 = *element;
		pEVar4->id = id;
		pEVar4->modelPtr = pTVar1;
		return false;
		}
		iVar3 = FUN_00120a40(this,&id);
		uVar5 = this->elements[iVar3].id;
		pEVar4 = this->elements + iVar3;
		if (uVar5 == id) {
		pEVar4->modelPtr = *element;
		pEVar4->id = id;
		return true;
		}
		if (id <= uVar5) {
		iVar3 = iVar3 + 1;
		}
		FUN_00120a90(this,iVar3,element,id);
		return false;
		}
		
	*/
	return false;
}

void SectionDataEntriesRigidModel::FUN_00120a40(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataEntriesRigidModel::FUN_00120a40(SectionDataEntriesRigidModel *this,uint *param_1){
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		bool bVar6;
		uint local_4;
		uVar5 = (uint)this->cnt;
		uVar4 = 0;
		local_4 = 0xffffffff;
		do {
		uVar3 = (int)(uVar5 - uVar4) / 2 + uVar4;
		uVar1 = this->elements[uVar3].id;
		if (uVar1 == *param_1) {
		return;
		}
		uVar2 = uVar3;
		if (*param_1 <= uVar1) {
		uVar4 = uVar3;
		uVar2 = uVar5;
		}
		uVar5 = uVar2;
		bVar6 = local_4 != uVar3;
		local_4 = uVar3;
		}
		 while (bVar6);
		return;
		}
		
	*/
	return;
}

void SectionDataEntriesRigidModel::FUN_00120a90(int param_1, TwinsanityRigidModel** element, uint id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataEntriesRigidModel::FUN_00120a90(SectionDataEntriesRigidModel *this,int param_1,TwinsanityRigidModel **element,uint id){
		uint uVar1;
		ushort uVar2;
		uint *puVar3;
		TwinsanityRigidModel **ppTVar4;
		EntryDescriptorRigidModel *pEVar5;
		int iVar6;
		int iVar7;
		uint uVar8;
		EntryDescriptorRigidModel *pEVar9;
		if (this->field2_0x6 <= this->cnt) {
		uVar2 = this->field3_0x8 + this->field2_0x6;
		uVar8 = (uint)uVar2;
		this->field2_0x6 = uVar2;
		puVar3 = (uint *)VirtualPool::AllocateMemory(uVar8 * 8 + 4);
		if (puVar3 == (uint *)0x0) {
		pEVar9 = (EntryDescriptorRigidModel *)0x0;
		}
		else {
		pEVar9 = (EntryDescriptorRigidModel *)(puVar3 + 1);
		*puVar3 = uVar8;
		ForEach(pEVar9,8,uVar8,(IntFunction *)&LAB_00120a30);
		}
		iVar6 = 0;
		if (0 < param_1) {
		do {
		pEVar5 = this->elements;
		pEVar9[iVar6].modelPtr = pEVar5[iVar6].modelPtr;
		iVar7 = iVar6 + 1;
		pEVar9[iVar6].id = pEVar5[iVar6].id;
		iVar6 = iVar7;
		}
		 while (iVar7 < param_1);
		}
		pEVar9[param_1].modelPtr = *element;
		pEVar9[param_1].id = id;
		if (param_1 < (int)(uint)this->cnt) {
		pEVar5 = pEVar9 + param_1 + 1;
		do {
		ppTVar4 = (TwinsanityRigidModel **)((int)pEVar5 + (int)this->elements + (-8 - (int)pEVar9));
		pEVar5->modelPtr = *ppTVar4;
		pEVar5->id = (int)ppTVar4[1];
		param_1 = param_1 + 1;
		pEVar5 = pEVar5 + 1;
		}
		 while (param_1 < (int)(uint)this->cnt);
		}
		if (this->elements != (EntryDescriptorRigidModel *)0x0) {
		VirtualPool::FreeMemory(&this->elements[-1].id);
		}
		this->cnt = this->cnt + 1;
		this->elements = pEVar9;
		return;
		}
		uVar8 = (uint)this->cnt;
		while (uVar1 = uVar8 - 1, param_1 <= (int)uVar1) {
		pEVar9 = this->elements;
		pEVar9[uVar8].modelPtr = pEVar9[uVar1].modelPtr;
		pEVar9[uVar8].id = pEVar9[uVar1].id;
		uVar8 = uVar1;
		}
		pEVar9 = this->elements;
		pEVar9[param_1].modelPtr = *element;
		pEVar9[param_1].id = id;
		this->cnt = this->cnt + 1;
		return;
		}
		
	*/
	return;
}

