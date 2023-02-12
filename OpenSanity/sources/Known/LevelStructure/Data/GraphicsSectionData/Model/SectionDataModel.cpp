#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Model/SectionDataModel.h"

#include "headers/Known/TwinString.h"
#include "headers/Known/Game/GameResources/ResourceList/ResourceListTwinsanityModel.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Model/TwinsanityModel.h"
void SectionDataModel::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataModel::Dispose(SectionDataModel *this){
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

uint* SectionDataModel::FUN_0011ddf0(TwinString* fname, uint index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint * __thiscall SectionDataModel::FUN_0011ddf0(SectionDataModel *this,TwinString *fname,uint index){
		SectionDataEntriesModel *this_00;
		EntryDescriptorModel *pEVar1;
		uint uVar2;
		int iVar3;
		int iVar4;
		TwinsanityModel *pTVar5;
		undefined4 local_1c;
		TwinString local_18;
		FileStream local_c;
		uVar2 = index;
		this_00 = &this->entries;
		local_1c = index;
		if ((this->entries).cnt != 0) {
		iVar3 = SectionDataEntriesModel::FUN_0011b1d0(this_00,&local_1c);
		pEVar1 = this_00->elements + iVar3;
		if ((pEVar1->id == uVar2) && (pEVar1 != (EntryDescriptorModel *)0x0)) {
		pTVar5 = pEVar1->modelPtr;
		goto LAB_0011de2d;
		}
		}
		pTVar5 = (TwinsanityModel *)0x0;
		LAB_0011de2d:local_18.value = (char *)0x0;
		local_18.strLength = 0;
		local_18.strSize = 0;
		TwinString::Copy(&local_18,(char *)this[1].parent.vtable);
		local_1c = CONCAT22(local_1c._2_2_,0x5c);
		TwinString::Append(&local_18,(char *)&local_1c);
		if (fname->strLength != 0) {
		TwinString::Append(&local_18,fname->value);
		}
		iVar3 = 0;
		if (0 < local_18.strLength) {
		do {
		iVar4 = _tolower((int)local_18.value[iVar3]);
		local_18.value[iVar3] = (char)iVar4;
		iVar3 = iVar3 + 1;
		}
		 while (iVar3 < local_18.strLength);
		}
		if (pTVar5 != (TwinsanityModel *)0x0) {
		pTVar5->field0_0x0 = pTVar5->field0_0x0 & 0xfffdffff;
		*(short *)&pTVar5->field0_0x0 = *(short *)&pTVar5->field0_0x0 + 1;
		TwinString::Dispose(&local_18);
		return &pTVar5->field0_0x0;
		}
		FileStream::Construct(&local_c);
		pTVar5 = (TwinsanityModel *)VirtualPool::AllocateMemory(0x28);
		if (pTVar5 == (TwinsanityModel *)0x0) {
		pTVar5 = (TwinsanityModel *)0x0;
		}
		else {
		*(undefined2 *)&pTVar5->field0_0x0 = 0;
		pTVar5->field0_0x0 = pTVar5->field0_0x0 & 0xfffcffff;
		pTVar5->id = index;
		pTVar5->submodels = 0;
		pTVar5->someCnt2 = (uint *)0x0;
		pTVar5->dataArray1 = (int **)0x0;
		pTVar5->field9_0x24 = (int *)0x0;
		}
		pTVar5->field0_0x0 = pTVar5->field0_0x0 & 0xfffdffff;
		*(short *)&pTVar5->field0_0x0 = *(short *)&pTVar5->field0_0x0 + 1;
		fname = (TwinString *)pTVar5;
		SectionDataEntriesModel::Add(this_00,(TwinsanityModel **)&fname,index);
		FileStream::OpenFile(&local_c,local_18.value,1);
		TwinsanityModel::ReadFromStream(pTVar5,(MemoryStream *)&local_c);
		FileStream::Dispose(&local_c);
		TwinString::Dispose(&local_18);
		return &pTVar5->field0_0x0;
		}
		
	*/
	return null;
}

void SectionDataModel::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataModel::CleanUp(SectionDataModel *this){
		TwinsanityModel *this_00;
		EntryDescriptorModel *pEVar1;
		uint uVar2;
		uVar2 = 0;
		if ((this->entries).cnt != 0) {
		do {
		this_00 = (this->entries).elements[uVar2].modelPtr;
		*(undefined2 *)&this_00->field0_0x0 = 0;
		this_00->field0_0x0 = this_00->field0_0x0 & 0xfffcffff;
		TwinsanityModel::Dispose(this_00);
		VirtualPool::FreeMemory(this_00);
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < (this->entries).cnt);
		}
		pEVar1 = (this->entries).elements;
		if (pEVar1 != (EntryDescriptorModel *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->entries).elements = (EntryDescriptorModel *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		if (this->modeList == (ResourceListTwinsanityModel *)0x0) {
		return;
		}
		FUN_0011e340(&this->modeList->capacity);
		return;
		}
		
	*/
	return;
}

void SectionDataModel::Dispose_3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataModel::Dispose(SectionDataModel *this){
		EntryDescriptorModel *pEVar1;
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Model;
		CleanUp(this);
		pEVar1 = (this->entries).elements;
		if (pEVar1 != (EntryDescriptorModel *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->entries).elements = (EntryDescriptorModel *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void SectionDataModel::Dispose_4(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataModel * __thiscall SectionDataModel::Dispose(SectionDataModel *this,byte param_1){
		EntryDescriptorModel *pEVar1;
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Model;
		CleanUp(this);
		pEVar1 = (this->entries).elements;
		if (pEVar1 != (EntryDescriptorModel *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->entries).elements = (EntryDescriptorModel *)0x0;
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

void SectionDataModel::FUN_0011bcb0(TwinsanityModel* model) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataModel::FUN_0011bcb0(SectionDataModel *this,TwinsanityModel *model){
		int *piVar1;
		piVar1 = (int *)this->pool;
		if (piVar1 != (int *)0x0) {
		piVar1[*piVar1 + 1] = model->id;
		*piVar1 = *piVar1 + 1;
		model->field0_0x0 = model->field0_0x0 & 0xfffdffff;
		*(short *)&model->field0_0x0 = *(short *)&model->field0_0x0 + 1;
		}
		return;
		}
		
	*/
	return;
}

void SectionDataModel::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataModel::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataModel::Add(uint* param_1, uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataModel::Add(SectionDataModel *this,uint *param_1,uint *param_2){
		*param_2 = *param_2 & 0xfffdffff;
		*(short *)param_2 = *(short *)param_2 + 1;
		SectionDataEntriesModel::Add(&this->entries,(TwinsanityModel **)&param_2,*param_1);
		return;
		}
		
	*/
	return;
}

uint* SectionDataModel::Create(uint** param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint * __thiscall SectionDataModel::Create(SectionDataModel *this,uint **param_1,int param_2){
		SectionDataEntriesModel *this_00;
		EntryDescriptorModel *pEVar1;
		uint *puVar2;
		uint **ppuVar3;
		int iVar4;
		TwinsanityModel *pTVar5;
		uint **ppuVar6;
		uint **ppuVar7;
		TwinsanityModel *local_4;
		ppuVar3 = param_1;
		ppuVar7 = (uint **)*param_1;
		this_00 = &this->entries;
		param_1 = ppuVar7;
		local_4 = (TwinsanityModel *)this;
		if ((this->entries).cnt != 0) {
		iVar4 = SectionDataEntriesModel::FUN_0011b1d0(this_00,(uint *)&param_1);
		pEVar1 = this_00->elements + iVar4;
		if (((uint **)pEVar1->id == ppuVar7) && (pEVar1 != (EntryDescriptorModel *)0x0)) {
		pTVar5 = pEVar1->modelPtr;
		goto LAB_00120f8f;
		}
		}
		pTVar5 = (TwinsanityModel *)0x0;
		LAB_00120f8f:if (param_2 != 0) {
		*(bool *)param_2 = pTVar5 == (TwinsanityModel *)0x0;
		}
		if (pTVar5 == (TwinsanityModel *)0x0) {
		ppuVar6 = (uint **)VirtualPool::AllocateMemory(0x28);
		ppuVar7 = (uint **)0x0;
		if (ppuVar6 != (uint **)0x0) {
		puVar2 = *ppuVar3;
		*(short *)ppuVar6 = 0;
		ppuVar6[2] = (uint *)0x0;
		ppuVar6[6] = (uint *)0x0;
		ppuVar6[7] = (uint *)0x0;
		ppuVar6[9] = (uint *)0x0;
		*ppuVar6 = (uint *)((uint)*ppuVar6 & 0xfffcffff);
		ppuVar6[1] = puVar2;
		ppuVar7 = ppuVar6;
		}
		*ppuVar7 = (uint *)((uint)*ppuVar7 & 0xfffdffff);
		*(short *)ppuVar7 = *(short *)ppuVar7 + 1;
		param_1 = ppuVar7;
		(*((GraphicsSectionDataAbstract *)&local_4->field0_0x0)->vtable->EmptyFunction)(ppuVar3,ppuVar7);
		SectionDataEntriesModel::Add(this_00,&local_4,(uint)*ppuVar3);
		return (uint *)ppuVar7;
		}
		pTVar5->field0_0x0 = pTVar5->field0_0x0 & 0xfffdffff;
		*(short *)&pTVar5->field0_0x0 = *(short *)&pTVar5->field0_0x0 + 1;
		return &pTVar5->field0_0x0;
		}
		
	*/
	return null;
}

void SectionDataModel::Method5(uint** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataModel::Method5(SectionDataModel *this,uint **param_1){
		SectionDataEntriesModel *this_00;
		EntryDescriptorModel *pEVar1;
		uint **ppuVar2;
		uint **ppuVar3;
		int iVar4;
		uint uVar5;
		TwinsanityModel *this_01;
		ppuVar3 = param_1;
		ppuVar2 = (uint **)*param_1;
		this_00 = &this->entries;
		param_1 = ppuVar2;
		if ((this->entries).cnt != 0) {
		iVar4 = SectionDataEntriesModel::FUN_0011b1d0(this_00,(uint *)&param_1);
		pEVar1 = this_00->elements + iVar4;
		if (((uint **)pEVar1->id == ppuVar2) && (pEVar1 != (EntryDescriptorModel *)0x0)) {
		this_01 = pEVar1->modelPtr;
		goto LAB_0012105b;
		}
		}
		this_01 = (TwinsanityModel *)0x0;
		LAB_0012105b:*(short *)&this_01->field0_0x0 = *(short *)&this_01->field0_0x0 + -1;
		uVar5 = this_01->field0_0x0 & 0xffff;
		if (uVar5 == 0) {
		uVar5 = this_01->field0_0x0 & 0x20000;
		}
		if (uVar5 == 0) {
		FUN_001210e0(this_00,(uint)*ppuVar3);
		if (this->modeList == (ResourceListTwinsanityModel *)0x0) {
		TwinsanityModel::Dispose(this_01);
		VirtualPool::FreeMemory(this_01);
		return;
		}
		FUN_001210b0(this->modeList,this_01);
		}
		return;
		}
		
	*/
	return;
}

void SectionDataModel::Method4(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataModel::Method4(SectionDataModel *this,uint *param_1){
		ResourceListTwinsanityModel *pRVar1;
		uint uVar2;
		*(short *)param_1 = *(short *)param_1 + -1;
		uVar2 = *param_1 & 0xffff;
		if (uVar2 == 0) {
		uVar2 = *param_1 & 0x20000;
		}
		if (uVar2 == 0) {
		FUN_001210e0(&this->entries,param_1[1]);
		pRVar1 = this->modeList;
		if (pRVar1 == (ResourceListTwinsanityModel *)0x0) {
		TwinsanityModel::Dispose((TwinsanityModel *)param_1);
		VirtualPool::FreeMemory(param_1);
		return;
		}
		uVar2 = (uint)pRVar1->capacity + (uint)(ushort)pRVar1->count;
		if (0x2fe < uVar2) {
		uVar2 = uVar2 - 0x2ff;
		}
		pRVar1->modelArray[uVar2] = (TwinsanityModel *)param_1;
		pRVar1->count = pRVar1->count + 1;
		}
		return;
		}
		
	*/
	return;
}

uint SectionDataModel::Check(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall SectionDataModel::Check(SectionDataModel *this,uint *param_1){
		uint *puVar1;
		uint uVar2;
		puVar1 = (uint *)*param_1;
		if ((this->entries).cnt == 0) {
		return (uint)param_1 & 0xffffff00;
		}
		param_1 = puVar1;
		uVar2 = SectionDataEntriesModel::FUN_0011b1d0(&this->entries,(uint *)&param_1);
		return uVar2 & 0xffffff00 | (uint)((uint *)(this->entries).elements[uVar2].id == puVar1);
		}
		
	*/
	return 0;
}

uint SectionDataModel::Get(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall SectionDataModel::Get(SectionDataModel *this,uint *param_1){
		EntryDescriptorModel *pEVar1;
		uint *puVar2;
		EntryDescriptorModel *pEVar3;
		int iVar4;
		puVar2 = (uint *)*param_1;
		if ((this->entries).cnt != 0) {
		param_1 = puVar2;
		iVar4 = SectionDataEntriesModel::FUN_0011b1d0(&this->entries,(uint *)&param_1);
		pEVar3 = (this->entries).elements;
		pEVar1 = pEVar3 + iVar4;
		if (((uint *)pEVar3[iVar4].id == puVar2) && (pEVar1 != (EntryDescriptorModel *)0x0)) {
		return pEVar1->modelPtr;
		}
		}
		return 0;
		}
		
	*/
	return 0;
}

void SectionDataModel::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataModel::Construct(SectionDataModel *this){
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Model;
		(this->entries).elements = (EntryDescriptorModel *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		(this->entries).field3_0x8 = 0x40;
		this->pool = (undefined *)0x0;
		this->modeList = (ResourceListTwinsanityModel *)0x0;
		return;
		}
		
	*/
	return;
}

