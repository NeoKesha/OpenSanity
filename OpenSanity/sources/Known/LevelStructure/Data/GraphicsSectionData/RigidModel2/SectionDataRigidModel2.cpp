#include "headers/Known/LevelStructure/Data/GraphicsSectionData/RigidModel2/SectionDataRigidModel2.h"

#include "headers/Known/TwinString.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Texture/TwinsanityTexture.h"
#include "headers/Known/Graphics/Assets/TwinsanityRigidModel2.h"
#include "headers/Known/Game/GameResources/ResourceList/ResourceListTwinsanityRigidModel2.h"
TwinsanityRigidModel2* SectionDataRigidModel2::FUN_0011dc60(TwinString* fname, int index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinsanityRigidModel2 * __thiscall SectionDataRigidModel2::FUN_0011dc60(SectionDataRigidModel2 *this,TwinString *fname,int index){
		EntryDescriptorRigidModel2 *pEVar1;
		int chrLowered;
		TwinsanityRigidModel2 *pTVar2;
		TwinsanityRigidModel2 *pTVar3;
		int i;
		int local_1c;
		TwinString tmpStr1;
		FileStream stream;
		SectionDataEntriesTexture *this_00;
		SectionDataEntriesRigidModel2 *entries;
		i = index;
		entries = &this->entries;
		local_1c = index;
		if ((this->entries).cnt != 0) {
		chrLowered = SectionDataEntriesRigidModel2::FUN_0011b050(entries,(uint *)&local_1c);
		pEVar1 = entries->elements + chrLowered;
		if ((pEVar1->id == i) && (pEVar1 != (EntryDescriptorRigidModel2 *)0x0)) {
		pTVar3 = pEVar1->modelPtr;
		goto LAB_0011dc9d;
		}
		}
		pTVar3 = (TwinsanityRigidModel2 *)0x0;
		LAB_0011dc9d:tmpStr1.value = (char *)0x0;
		tmpStr1.strLength = 0;
		tmpStr1.strSize = 0;
		TwinString::Copy(&tmpStr1,(char *)this[1].parent.vtable);
		local_1c = CONCAT22(local_1c._2_2_,0x5c);
		TwinString::Append(&tmpStr1,(char *)&local_1c);
		if (fname->strLength != 0) {
		TwinString::Append(&tmpStr1,fname->value);
		}
		i = 0;
		if (0 < tmpStr1.strLength) {
		do {
		chrLowered = _tolower((int)tmpStr1.value[i]);
		tmpStr1.value[i] = (char)chrLowered;
		i = i + 1;
		}
		 while (i < tmpStr1.strLength);
		}
		if (pTVar3 != (TwinsanityRigidModel2 *)0x0) {
		pTVar3->field1_0x4 = pTVar3->field1_0x4 & 0xfffdffff;
		*(short *)&pTVar3->field1_0x4 = *(short *)&pTVar3->field1_0x4 + 1;
		TwinString::Dispose(&tmpStr1);
		return pTVar3;
		}
		FileStream::Construct(&stream);
		pTVar2 = (TwinsanityRigidModel2 *)VirtualPool::AllocateMemory(0x24);
		if (pTVar2 == (TwinsanityRigidModel2 *)0x0) {
		pTVar2 = (TwinsanityRigidModel2 *)0x0;
		}
		else {
		*(undefined2 *)&pTVar2->field1_0x4 = 0;
		pTVar2->id = index;
		pTVar2->field1_0x4 = pTVar2->field1_0x4 & 0xfffcffff;
		pTVar2->vtable = &TwinsanityGraphics_VT_RigidModel2;
		pTVar2->materialIds = (TwinsanityMaterial **)0x0;
		pTVar2->model = (TwinsanityModel *)0x0;
		*(undefined4 *)&pTVar2->field_0x14 = 0;
		pTVar2->field_0x18 = 0;
		pTVar2->field_0x19 = 0;
		pTVar2->cnt = 0;
		}
		pTVar2->field1_0x4 = pTVar2->field1_0x4 & 0xfffdffff;
		*(short *)&pTVar2->field1_0x4 = *(short *)&pTVar2->field1_0x4 + 1;
		fname = (TwinString *)pTVar2;
		SectionDataEntriesRigidModel2::Add(entries,(TwinsanityRigidModel2 **)&fname,index);
		FileStream::OpenFile(&stream,tmpStr1.value,1);
		(*(code *)pTVar2->vtable[1])(&stream);
		FileStream::Dispose((FileStream *)&tmpStr1.strSize);
		TwinString::Dispose((TwinString *)&local_1c);
		return pTVar2;
		}
		
	*/
	return null;
}

void SectionDataRigidModel2::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataRigidModel2::CleanUp(SectionDataRigidModel2 *this){
		TwinsanityRigidModel *this_00;
		EntryDescriptorRigidModel2 *pEVar1;
		uint uVar2;
		uVar2 = 0;
		if ((this->entries).cnt != 0) {
		do {
		this_00 = (TwinsanityRigidModel *)(this->entries).elements[uVar2].modelPtr;
		*(undefined2 *)&this_00->field1_0x4 = 0;
		this_00->field1_0x4 = this_00->field1_0x4 & 0xfffcffff;
		if (this_00 != (TwinsanityRigidModel *)0x0) {
		TwinsanityRigidModel::Dispose(this_00);
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
		if (this->rigidModelList == (ResourceListTwinsanityRigidModel2 *)0x0) {
		return;
		}
		FUN_00121600(&this->rigidModelList->capacity);
		return;
		}
		
	*/
	return;
}

void SectionDataRigidModel2::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataRigidModel2::Dispose(SectionDataRigidModel2 *this){
		EntryDescriptorRigidModel2 *pEVar1;
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel2;
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

void SectionDataRigidModel2::Dispose_3(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataRigidModel2 * __thiscall SectionDataRigidModel2::Dispose(SectionDataRigidModel2 *this,byte param_1){
		EntryDescriptorRigidModel2 *pEVar1;
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel2;
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

void SectionDataRigidModel2::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataRigidModel2::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataRigidModel2::Add(uint* param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataRigidModel2::Add(SectionDataRigidModel2 *this,uint *param_1,uint param_2){
		uint *puVar1;
		puVar1 = (uint *)(param_2 + 4);
		*puVar1 = *(uint *)(param_2 + 4) & 0xfffdffff;
		*(short *)puVar1 = *(short *)puVar1 + 1;
		SectionDataEntriesRigidModel::Add((SectionDataEntriesRigidModel *)&this->entries,(TwinsanityRigidModel **)&param_2,*param_1);
		return;
		}
		
	*/
	return;
}

TwinsanityTexture* SectionDataRigidModel2::Create(TwinsanityTexture* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinsanityTexture * __thiscall SectionDataRigidModel2::Create(SectionDataRigidModel2 *this,TwinsanityTexture *param_1,int param_2){
		SectionDataEntriesRigidModel2 *this_00;
		EntryDescriptorRigidModel2 *pEVar1;
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
		iVar5 = SectionDataEntriesRigidModel::FUN_00120a40((SectionDataEntriesRigidModel *)this_00,(uint *)&param_1);
		pEVar1 = this_00->elements + iVar5;
		if (((TwinsanityTexture *)pEVar1->id == pTVar2) && (pEVar1 != (EntryDescriptorRigidModel2 *)0x0)) {
		param_1 = (TwinsanityTexture *)pEVar1->modelPtr;
		goto LAB_00120bfe;
		}
		}
		param_1 = (TwinsanityTexture *)0x0;
		LAB_00120bfe:if (param_2 != 0) {
		*(bool *)param_2 = param_1 == (TwinsanityTexture *)0x0;
		}
		if (param_1 == (TwinsanityTexture *)0x0) {
		param_1 = (TwinsanityTexture *)VirtualPool::AllocateMemory(0x24);
		if (param_1 == (TwinsanityTexture *)0x0) {
		param_1 = (TwinsanityTexture *)0x0;
		}
		else {
		uVar3 = pTVar4->index;
		*(undefined2 *)&param_1->id = 0;
		param_1->size = uVar3;
		param_1->id = param_1->id & 0xfffcffff;
		param_1->index = (uint)&TwinsanityGraphics_VT_RigidModel;
		*(undefined4 *)&param_1->field_0xc = 0;
		*(undefined4 *)&param_1->field_0x10 = 0;
		*(undefined4 *)&param_1->field_0x14 = 0;
		param_1->field_0x18 = 0;
		param_1->field_0x19 = 0;
		*(undefined4 *)&param_1->field_0x1c = 0;
		}
		puVar6 = &param_1->id;
		*puVar6 = param_1->id & 0xfffdffff;
		*(short *)puVar6 = *(short *)puVar6 + 1;
		(**(code **)local_4->index)(pTVar4,param_1);
		SectionDataEntriesRigidModel::Add((SectionDataEntriesRigidModel *)this_00,(TwinsanityRigidModel **)&local_4,pTVar4->index);
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

void SectionDataRigidModel2::Method5(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataRigidModel2::Method5(SectionDataRigidModel2 *this,uint *param_1){
		SectionDataEntriesRigidModel2 *this_00;
		EntryDescriptorRigidModel2 *pEVar1;
		uint *puVar2;
		uint *puVar3;
		int iVar4;
		uint uVar5;
		TwinsanityRigidModel *this_01;
		puVar3 = param_1;
		puVar2 = (uint *)*param_1;
		this_00 = &this->entries;
		param_1 = puVar2;
		if ((this->entries).cnt != 0) {
		iVar4 = SectionDataEntriesRigidModel::FUN_00120a40((SectionDataEntriesRigidModel *)this_00,(uint *)&param_1);
		pEVar1 = this_00->elements + iVar4;
		if (((uint *)pEVar1->id == puVar2) && (pEVar1 != (EntryDescriptorRigidModel2 *)0x0)) {
		this_01 = (TwinsanityRigidModel *)pEVar1->modelPtr;
		goto LAB_00120ceb;
		}
		}
		this_01 = (TwinsanityRigidModel *)0x0;
		LAB_00120ceb:*(short *)&this_01->field1_0x4 = *(short *)&this_01->field1_0x4 + -1;
		uVar5 = this_01->field1_0x4 & 0xffff;
		if (uVar5 == 0) {
		uVar5 = this_01->field1_0x4 & 0x20000;
		}
		if (uVar5 == 0) {
		FUN_00120d80(this_00,*puVar3);
		if (this->rigidModelList == (ResourceListTwinsanityRigidModel2 *)0x0) {
		if (this_01 != (TwinsanityRigidModel *)0x0) {
		TwinsanityRigidModel::Dispose(this_01);
		VirtualPool::FreeMemory(this_01);
		return;
		}
		}
		else {
		FUN_00120d50(this->rigidModelList,this_01);
		}
		}
		return;
		}
		
	*/
	return;
}

void SectionDataRigidModel2::Method4(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataRigidModel2::Method4(SectionDataRigidModel2 *this,undefined4 *param_1){
		ResourceListTwinsanityRigidModel2 *pRVar1;
		uint uVar2;
		*(short *)(param_1 + 1) = *(short *)(param_1 + 1) + -1;
		uVar2 = param_1[1] & 0xffff;
		if (uVar2 == 0) {
		uVar2 = param_1[1] & 0x20000;
		}
		if (uVar2 == 0) {
		FUN_00120d80(&this->entries,param_1[2]);
		pRVar1 = this->rigidModelList;
		if (pRVar1 == (ResourceListTwinsanityRigidModel2 *)0x0) {
		TwinsanityRigidModel::Dispose((TwinsanityRigidModel *)param_1);
		VirtualPool::FreeMemory(param_1);
		return;
		}
		uVar2 = (uint)(ushort)pRVar1->count + (uint)pRVar1->capacity;
		if (0x2fe < uVar2) {
		uVar2 = uVar2 - 0x2ff;
		}
		pRVar1->rigidModelArray[uVar2] = (TwinsanityRigidModel2 *)param_1;
		pRVar1->count = pRVar1->count + 1;
		}
		return;
		}
		
	*/
	return;
}

uint SectionDataRigidModel2::Check(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall SectionDataRigidModel2::Check(SectionDataRigidModel2 *this,uint *param_1){
		uint *puVar1;
		uint uVar2;
		puVar1 = (uint *)*param_1;
		if ((this->entries).cnt == 0) {
		return (uint)param_1 & 0xffffff00;
		}
		param_1 = puVar1;
		uVar2 = SectionDataEntriesRigidModel::FUN_00120a40((SectionDataEntriesRigidModel *)&this->entries,(uint *)&param_1);
		return uVar2 & 0xffffff00 | (uint)((uint *)(this->entries).elements[uVar2].id == puVar1);
		}
		
	*/
	return 0;
}

uint SectionDataRigidModel2::Get(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall SectionDataRigidModel2::Get(SectionDataRigidModel2 *this,uint *param_1){
		EntryDescriptorRigidModel2 *pEVar1;
		uint *puVar2;
		EntryDescriptorRigidModel2 *pEVar3;
		int iVar4;
		puVar2 = (uint *)*param_1;
		if ((this->entries).cnt != 0) {
		param_1 = puVar2;
		iVar4 = SectionDataEntriesRigidModel::FUN_00120a40((SectionDataEntriesRigidModel *)&this->entries,(uint *)&param_1);
		pEVar3 = (this->entries).elements;
		pEVar1 = pEVar3 + iVar4;
		if (((uint *)pEVar3[iVar4].id == puVar2) && (pEVar1 != (EntryDescriptorRigidModel2 *)0x0)) {
		return pEVar1->modelPtr;
		}
		}
		return 0;
		}
		
	*/
	return 0;
}

void SectionDataRigidModel2::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataRigidModel2::Construct(SectionDataRigidModel2 *this){
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel2;
		(this->entries).elements = (EntryDescriptorRigidModel2 *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		(this->entries).field3_0x8 = 0x40;
		this->field3_0x10 = 0;
		this->rigidModelList = (ResourceListTwinsanityRigidModel2 *)0x0;
		return;
		}
		
	*/
	return;
}

