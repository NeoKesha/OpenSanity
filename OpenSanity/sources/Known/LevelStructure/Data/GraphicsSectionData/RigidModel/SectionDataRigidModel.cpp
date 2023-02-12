#include "headers/Known/LevelStructure/Data/GraphicsSectionData/RigidModel/SectionDataRigidModel.h"

#include "headers/Known/Graphics/Assets/TwinsanityRigidModel.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Texture/TwinsanityTexture.h"
#include "headers/Known/Graphics/Assets/TwinsanityRigidModel2.h"
#include "headers/Known/Game/GameResources/ResourceList/ResourceListTwinsanityRigidModel.h"
void SectionDataRigidModel::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataRigidModel::Dispose(SectionDataRigidModel *this){
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

void SectionDataRigidModel::Dispose_1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataRigidModel::Dispose(SectionDataRigidModel *this){
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

void SectionDataRigidModel::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataRigidModel::CleanUp(SectionDataRigidModel *this){
		TwinsanityRigidModel2 *this_00;
		EntryDescriptorRigidModel2 *pEVar1;
		uint uVar2;
		uVar2 = 0;
		if ((this->entries).cnt != 0) {
		do {
		this_00 = (this->entries).elements[uVar2].modelPtr;
		*(undefined2 *)&this_00->field1_0x4 = 0;
		this_00->field1_0x4 = this_00->field1_0x4 & 0xfffcffff;
		if (this_00 != (TwinsanityRigidModel2 *)0x0) {
		TwinsanityRigidModel2::Dispose(this_00);
		VirtualPool::FreeMemory(this_00);
		}
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < (this->entries).cnt);
		}
		pEVar1 = (this->entries).elements;
		if (pEVar1 != (EntryDescriptorRigidModel2 *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->entries).elements = (EntryDescriptorRigidModel2 *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		if (this->rigidModelList == (ResourceListTwinsanityRigidModel *)0x0) {
		return;
		}
		FUN_00121650(&this->rigidModelList->capacity);
		return;
		}
		
	*/
	return;
}

void SectionDataRigidModel::Dispose_3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataRigidModel::Dispose(SectionDataRigidModel *this){
		EntryDescriptorRigidModel2 *pEVar1;
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel;
		CleanUp(this);
		pEVar1 = (this->entries).elements;
		if (pEVar1 != (EntryDescriptorRigidModel2 *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->entries).elements = (EntryDescriptorRigidModel2 *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void SectionDataRigidModel::Dispose_4(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataRigidModel * __thiscall SectionDataRigidModel::Dispose(SectionDataRigidModel *this,byte param_1){
		EntryDescriptorRigidModel2 *pEVar1;
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel;
		CleanUp(this);
		pEVar1 = (this->entries).elements;
		if (pEVar1 != (EntryDescriptorRigidModel2 *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->entries).elements = (EntryDescriptorRigidModel2 *)0x0;
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

void SectionDataRigidModel::FUN_0011be00(TwinsanityRigidModel* rigidModel) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataRigidModel::FUN_0011be00(SectionDataRigidModel *this,TwinsanityRigidModel *rigidModel){
		int *piVar1;
		piVar1 = (int *)this->pool;
		if (piVar1 != (int *)0x0) {
		piVar1[*piVar1 + 1] = rigidModel->id;
		*piVar1 = *piVar1 + 1;
		rigidModel->field1_0x4 = rigidModel->field1_0x4 & 0xfffdffff;
		*(short *)&rigidModel->field1_0x4 = *(short *)&rigidModel->field1_0x4 + 1;
		}
		return;
		}
		
	*/
	return;
}

void SectionDataRigidModel::FUN_0011c300(TwinsanityRigidModel2* rigidModel) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataRigidModel::FUN_0011c300(SectionDataRigidModel *this,TwinsanityRigidModel2 *rigidModel){
		int *piVar1;
		piVar1 = (int *)this->pool;
		if (piVar1 != (int *)0x0) {
		piVar1[*piVar1 + 1] = rigidModel->id;
		*piVar1 = *piVar1 + 1;
		rigidModel->field1_0x4 = rigidModel->field1_0x4 & 0xfffdffff;
		*(short *)&rigidModel->field1_0x4 = *(short *)&rigidModel->field1_0x4 + 1;
		}
		return;
		}
		
	*/
	return;
}

void SectionDataRigidModel::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataRigidModel::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataRigidModel::Add(uint* param_1, void** param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataRigidModel::Add(SectionDataRigidModel *this,uint *param_1,undefined **param_2){
		param_2[1] = (undefined *)((uint)param_2[1] & 0xfffdffff);
		*(short *)(param_2 + 1) = *(short *)(param_2 + 1) + 1;
		SectionDataEntriesRigidModel2::Add(&this->entries,(TwinsanityRigidModel2 **)&param_2,*param_1);
		return;
		}
		
	*/
	return;
}

TwinsanityTexture* SectionDataRigidModel::Create(TwinsanityTexture* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinsanityTexture * __thiscall SectionDataRigidModel::Create(SectionDataRigidModel *this,TwinsanityTexture *param_1,int param_2){
		SectionDataEntriesRigidModel2 *this_00;
		EntryDescriptorRigidModel2 *pEVar1;
		uint uVar2;
		TwinsanityTexture *pTVar3;
		int iVar4;
		TwinsanityTexture *pTVar5;
		TwinsanityRigidModel2 *local_4;
		pTVar3 = param_1;
		pTVar5 = (TwinsanityTexture *)param_1->index;
		this_00 = &this->entries;
		param_1 = pTVar5;
		local_4 = (TwinsanityRigidModel2 *)this;
		if ((this->entries).cnt != 0) {
		iVar4 = SectionDataEntriesRigidModel2::FUN_0011b050(this_00,(uint *)&param_1);
		pEVar1 = this_00->elements + iVar4;
		if (((TwinsanityTexture *)pEVar1->id == pTVar5) && (pEVar1 != (EntryDescriptorRigidModel2 *)0x0)) {
		pTVar5 = (TwinsanityTexture *)pEVar1->modelPtr;
		goto LAB_0011fa8f;
		}
		}
		pTVar5 = (TwinsanityTexture *)0x0;
		LAB_0011fa8f:if (param_2 != 0) {
		*(bool *)param_2 = pTVar5 == (TwinsanityTexture *)0x0;
		}
		if (pTVar5 == (TwinsanityTexture *)0x0) {
		pTVar5 = (TwinsanityTexture *)VirtualPool::AllocateMemory(0x24);
		if (pTVar5 == (TwinsanityTexture *)0x0) {
		pTVar5 = (TwinsanityTexture *)0x0;
		}
		else {
		uVar2 = pTVar3->index;
		*(undefined2 *)&pTVar5->id = 0;
		pTVar5->size = uVar2;
		pTVar5->id = pTVar5->id & 0xfffcffff;
		pTVar5->index = (uint)&TwinsanityGraphics_VT_RigidModel2;
		*(undefined4 *)&pTVar5->field_0xc = 0;
		*(undefined4 *)&pTVar5->field_0x10 = 0;
		*(undefined4 *)&pTVar5->field_0x14 = 0;
		pTVar5->field_0x18 = 0;
		pTVar5->field_0x19 = 0;
		*(undefined4 *)&pTVar5->field_0x1c = 0;
		}
		pTVar5->id = pTVar5->id & 0xfffdffff;
		*(short *)&pTVar5->id = *(short *)&pTVar5->id + 1;
		param_1 = pTVar5;
		(*((GraphicsSectionDataAbstract *)&local_4->vtable)->vtable->EmptyFunction)(pTVar3,pTVar5);
		SectionDataEntriesRigidModel2::Add(this_00,&local_4,pTVar3->index);
		return pTVar5;
		}
		pTVar5->id = pTVar5->id & 0xfffdffff;
		*(short *)&pTVar5->id = *(short *)&pTVar5->id + 1;
		return pTVar5;
		}
		
	*/
	return null;
}

void SectionDataRigidModel::Method4(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataRigidModel::Method4(SectionDataRigidModel *this,undefined4 *param_1){
		ResourceListTwinsanityRigidModel *pRVar1;
		uint uVar2;
		*(short *)(param_1 + 1) = *(short *)(param_1 + 1) + -1;
		uVar2 = param_1[1] & 0xffff;
		if (uVar2 == 0) {
		uVar2 = param_1[1] & 0x20000;
		}
		if (uVar2 == 0) {
		FUN_0011fc10(&this->entries,param_1[2]);
		pRVar1 = this->rigidModelList;
		if (pRVar1 == (ResourceListTwinsanityRigidModel *)0x0) {
		TwinsanityRigidModel2::Dispose((TwinsanityRigidModel2 *)param_1);
		VirtualPool::FreeMemory(param_1);
		return;
		}
		uVar2 = (uint)(ushort)pRVar1->count + (uint)pRVar1->capacity;
		if (0x2fe < uVar2) {
		uVar2 = uVar2 - 0x2ff;
		}
		pRVar1->rigidModelArray[uVar2] = (TwinsanityRigidModel *)param_1;
		pRVar1->count = pRVar1->count + 1;
		}
		return;
		}
		
	*/
	return;
}

void SectionDataRigidModel::Method5(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataRigidModel::Method5(SectionDataRigidModel *this,uint *param_1){
		SectionDataEntriesRigidModel2 *this_00;
		EntryDescriptorRigidModel2 *pEVar1;
		uint *puVar2;
		uint *puVar3;
		int iVar4;
		uint uVar5;
		TwinsanityRigidModel2 *this_01;
		puVar3 = param_1;
		puVar2 = (uint *)*param_1;
		this_00 = &this->entries;
		param_1 = puVar2;
		if ((this->entries).cnt != 0) {
		iVar4 = SectionDataEntriesRigidModel2::FUN_0011b050(this_00,(uint *)&param_1);
		pEVar1 = this_00->elements + iVar4;
		if (((uint *)pEVar1->id == puVar2) && (pEVar1 != (EntryDescriptorRigidModel2 *)0x0)) {
		this_01 = pEVar1->modelPtr;
		goto LAB_0011fb7b;
		}
		}
		this_01 = (TwinsanityRigidModel2 *)0x0;
		LAB_0011fb7b:*(short *)&this_01->field1_0x4 = *(short *)&this_01->field1_0x4 + -1;
		uVar5 = this_01->field1_0x4 & 0xffff;
		if (uVar5 == 0) {
		uVar5 = this_01->field1_0x4 & 0x20000;
		}
		if (uVar5 == 0) {
		FUN_0011fc10(this_00,*puVar3);
		if (this->rigidModelList == (ResourceListTwinsanityRigidModel *)0x0) {
		if (this_01 != (TwinsanityRigidModel2 *)0x0) {
		TwinsanityRigidModel2::Dispose(this_01);
		VirtualPool::FreeMemory(this_01);
		return;
		}
		}
		else {
		FUN_0011fbe0(this->rigidModelList,this_01);
		}
		}
		return;
		}
		
	*/
	return;
}

uint SectionDataRigidModel::Check(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall SectionDataRigidModel::Check(SectionDataRigidModel *this,uint *param_1){
		uint *puVar1;
		uint uVar2;
		puVar1 = (uint *)*param_1;
		if ((this->entries).cnt == 0) {
		return (uint)param_1 & 0xffffff00;
		}
		param_1 = puVar1;
		uVar2 = SectionDataEntriesRigidModel2::FUN_0011b050(&this->entries,(uint *)&param_1);
		return uVar2 & 0xffffff00 | (uint)((uint *)(this->entries).elements[uVar2].id == puVar1);
		}
		
	*/
	return 0;
}

TwinsanityTexture* SectionDataRigidModel::Get(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinsanityTexture * __thiscall SectionDataRigidModel::Get(SectionDataRigidModel *this,uint *param_1){
		EntryDescriptorRigidModel2 *pEVar1;
		uint *puVar2;
		EntryDescriptorRigidModel2 *pEVar3;
		int iVar4;
		puVar2 = (uint *)*param_1;
		if ((this->entries).cnt != 0) {
		param_1 = puVar2;
		iVar4 = SectionDataEntriesRigidModel2::FUN_0011b050(&this->entries,(uint *)&param_1);
		pEVar3 = (this->entries).elements;
		pEVar1 = pEVar3 + iVar4;
		if (((uint *)pEVar3[iVar4].id == puVar2) && (pEVar1 != (EntryDescriptorRigidModel2 *)0x0)) {
		return (TwinsanityTexture *)pEVar1->modelPtr;
		}
		}
		return (TwinsanityTexture *)0x0;
		}
		
	*/
	return null;
}

void SectionDataRigidModel::EmptyFunction_14() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataRigidModel::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataRigidModel::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataRigidModel::Construct(SectionDataRigidModel *this){
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel;
		(this->entries).elements = (EntryDescriptorRigidModel2 *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		(this->entries).field3_0x8 = 0x40;
		this->pool = (undefined *)0x0;
		this->rigidModelList = (ResourceListTwinsanityRigidModel *)0x0;
		return;
		}
		
	*/
	return;
}

