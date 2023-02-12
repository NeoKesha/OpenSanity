#include "headers/Known/LevelStructure/Data/CodeSectionData/CodeModel/SectionDataCodeModelBase.h"

#include "headers/Known/Game/GameResources/ResourceList/ResourceListCodeModel.h"
#include "headers/Known/GameData/CodeModel/CodeModel.h"
void SectionDataCodeModelBase::Construct(uint cnt, byte param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataCodeModelBase * __thiscall SectionDataCodeModelBase::Construct(SectionDataCodeModelBase *this,uint cnt,byte param_2){
		CodeModel **ppCVar1;
		short *psVar2;
		uint i;
		(this->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_CodeModel_Base;
		this->field4_0x10 = 0;
		this->codeModelList = (ResourceListCodeModel *)0x0;
		this->flags = 0;
		this->flags = (param_2 & 1) << 0xf | this->flags & 0xffff4000 | cnt & 0x3fff;
		ppCVar1 = (CodeModel **)VirtualPool::AllocateMemory(cnt * 4);
		this->elements = ppCVar1;
		psVar2 = (short *)VirtualPool::AllocateMemory(cnt * 2);
		this->indexes = psVar2;
		i = 0;
		if (cnt != 0) {
		do {
		this->elements[i] = (CodeModel *)0x0;
		i = i + 1;
		}
		 while (i < cnt);
		}
		return this;
		}
		
	*/
	return;
}

void SectionDataCodeModelBase::CleanUp(SectionDataCodeModelBase* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataCodeModelBase::CleanUp(SectionDataCodeModelBase *param_1){
		CodeModel *this;
		uint uVar1;
		uVar1 = 0;
		if ((param_1->flags & 0x3fff) != 0) {
		do {
		this = param_1->elements[uVar1];
		if (this != (CodeModel *)0x0) {
		CodeModel::CleanUp(this);
		VirtualPool::FreeMemory(this);
		param_1->elements[uVar1] = (CodeModel *)0x0;
		}
		uVar1 = uVar1 + 1;
		}
		 while (uVar1 < (param_1->flags & 0x3fff));
		}
		return;
		}
		
	*/
	return;
}

void SectionDataCodeModelBase::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataCodeModelBase::Dispose(SectionDataCodeModelBase *this){
		(this->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_CodeModel_Base;
		CleanUp(this);
		VirtualPool::FreeMemory(this->elements);
		VirtualPool::FreeMemory(this->indexes);
		return;
		}
		
	*/
	return;
}

void SectionDataCodeModelBase::Dispose_3(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataCodeModelBase * __thiscall SectionDataCodeModelBase::Dispose(SectionDataCodeModelBase *this,byte param_1){
		(this->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_CodeModel_Base;
		CleanUp(this);
		VirtualPool::FreeMemory(this->elements);
		VirtualPool::FreeMemory(this->indexes);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionDataCodeModelBase::Dispose_4() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataCodeModelBase::Dispose(SectionDataCodeModelBase *this){
		(this->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_CodeModel_Base;
		CleanUp(this);
		VirtualPool::FreeMemory(this->elements);
		VirtualPool::FreeMemory(this->indexes);
		return;
		}
		
	*/
	return;
}

uint SectionDataCodeModelBase::UnkMethod(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps uint __thiscall SectionDataCodeModelBase::UnkMethod(SectionDataCodeModelBase *this,int **param_1){
		bool bVar1;
		byte bVar2;
		byte bVar3;
		ushort uVar4;
		PhysicalPool *pPVar5;
		int *piVar6;
		MemoryStream *pMVar7;
		uint uVar8;
		size_t sVar9;
		uint uVar10;
		CodeModel **ppCVar11;
		byte bVar12;
		undefined4 unaff_EBX;
		CodeModel *pCVar13;
		CodeModel *this_00;
		undefined4 unaff_EDI;
		bool bVar14;
		UnkFamily27A **unaff_retaddr;
		UnkFamily27A **bufferOut;
		bool bVar15;
		char cVar16;
		char cVar17;
		CodeModel *pCStack52;
		int local_30;
		MemoryStream *local_2c;
		MemoryStream *local_28;
		CodeModel *pCStack36;
		CodeModel *pCStack32;
		int *piStack28;
		undefined4 uStack24;
		CodeModel *local_14;
		UnkFamily27A *local_10;
		UnkFamily27A *local_c;
		int iStack8;
		bVar14 = param_1[1] == (int *)0x0;
		local_30 = 0;
		local_2c = (MemoryStream *)0x4000;
		pCStack52 = (CodeModel *)CONCAT13(bVar14,pCStack52._0_3_);
		bVar12 = 1;
		local_14 = (CodeModel *)0xffffffff;
		this->flags = this->flags | 0x4000;
		if (bVar14) {
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 == false) {
		LAB_001c2ee3:bVar2 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar2 = (**(code **)(**param_1 + 0x74))(0x904,&local_2c);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c2ee3;
		bVar2 = (**(code **)(**param_1 + 0x24))(0x904,local_2c);
		}
		bVar15 = false;
		bVar1 = false;
		bufferOut = &local_10;
		pMVar7 = local_2c;
		pPVar5 = PhysicalPool::GetPool();
		PhysicalPool::CreateBuffer(pPVar5,(int *)bufferOut,(uint)pMVar7,bVar1,bVar15);
		local_14 = (CodeModel *)pPVar5->alignedStart;
		ppCVar11 = &local_14;
		pPVar5 = PhysicalPool::GetPool();
		piVar6 = PhysicalPool::GetBufferPointerByIndex(pPVar5,(int *)ppCVar11);
		pMVar7 = (MemoryStream *)VirtualPool::AllocateMemory(0x14);
		if (pMVar7 == (MemoryStream *)0x0) {
		local_28 = (MemoryStream *)0x0;
		}
		else {
		local_28 = MemoryStream::Construct(pMVar7,piVar6,(size_t)local_2c,0,1);
		}
		if (param_1[1] == (int *)0x0) {
		bVar12 = (**(code **)(**param_1 + 0x90))(0x903,&local_2c,piVar6);
		bVar12 = bVar2 & 1 & bVar12;
		}
		else if (param_1[1] == (int *)0x1) {
		bVar12 = (**(code **)(**param_1 + 0x40))(0x903,local_2c,piVar6);
		bVar12 = bVar2 & 1 & bVar12;
		}
		else {
		bVar12 = 0;
		}
		}
		else {
		pMVar7 = (MemoryStream *)VirtualPool::AllocateMemory(0x14);
		if (pMVar7 == (MemoryStream *)0x0) {
		local_28 = (MemoryStream *)0x0;
		}
		else {
		local_28 = MemoryStream::Contruct2(pMVar7,(uint)local_2c,1,1);
		}
		if ((this->flags & 0x3fff) != 0) {
		ppCVar11 = this->elements;
		uVar10 = this->flags & 0x3fff;
		do {
		if (*ppCVar11 != (CodeModel *)0x0) {
		local_30 = local_30 + 1;
		}
		ppCVar11 = ppCVar11 + 1;
		uVar10 = uVar10 - 1;
		}
		 while (uVar10 != 0);
		}
		}
		pMVar7 = local_28;
		FUN_0020f9d0(&local_c,local_28,param_1);
		piStack28 = (int *)0x0;
		uStack24 = 0;
		bVar1 = UnkFamily27A::FUN_0020c0a0(local_c);
		if (bVar1 == false) {
		LAB_001c3044:bVar2 = 0;
		}
		else if (iStack8 == 0) {
		bVar2 = (*(code *)((local_c->parent).vtable)->somethingTemplate)(0x900,&local_30);
		}
		else {
		if (iStack8 != 1) goto LAB_001c3044;
		bVar2 = (*(code *)((local_c->parent).vtable)->field9_0x24)(0x900,local_30);
		}
		bVar12 = bVar12 & bVar2;
		if (bVar14) {
		(*((this->parent).vtable)->Stub1)(local_30);
		cVar16 = (char)((uint)unaff_EDI >> 0x18);
		cVar17 = (char)((uint)unaff_EBX >> 0x18);
		local_14 = (CodeModel *)0x0;
		pCVar13 = pCStack32;
		this_00 = pCStack36;
		if (pCStack52 != (CodeModel *)0x0) {
		do {
		bVar14 = UnkFamily27A::FUN_0020c0a0(local_10);
		if (bVar14 == false) {
		LAB_001c30c3:bVar2 = 0;
		param_1 = (int **)unaff_retaddr;
		}
		else if (local_c == (UnkFamily27A *)0x0) {
		bVar2 = (*(code *)((local_10->parent).vtable)->somethingTemplate)(0x901,&local_28);
		param_1 = (int **)unaff_retaddr;
		}
		else {
		if (local_c != (UnkFamily27A *)0x1) goto LAB_001c30c3;
		bVar2 = (*(code *)((local_10->parent).vtable)->field9_0x24)(0x901,local_28);
		param_1 = (int **)unaff_retaddr;
		}
		piVar6 = (int *)this->field4_0x10;
		bVar12 = bVar12 & bVar2;
		uVar4 = (ushort)local_28 & 0x7fff;
		this->indexes[(int)pCVar13] = uVar4;
		if (piVar6 != (int *)0x0) {
		*(ushort *)((int)piVar6 + *piVar6 * 2 + 4) = uVar4;
		*piVar6 = *piVar6 + 1;
		}
		pCStack32 = this->elements[(int)local_28];
		if (pCStack32 == (CodeModel *)0x0) {
		if (local_c == (UnkFamily27A *)0x0) {
		uVar10 = FUN_001c3620(local_10,&pCStack32,0x902,1);
		bVar2 = (byte)uVar10;
		}
		else if (local_c == (UnkFamily27A *)0x1) {
		uVar10 = FUN_001c3410(local_10,0,0x902,1);
		bVar2 = (byte)uVar10;
		}
		else {
		bVar2 = 0;
		}
		bVar12 = bVar12 & bVar2;
		pCStack32->index = (uint)local_28;
		this->elements[(int)local_28] = pCStack32;
		pCVar13 = (CodeModel *)((int)&pCVar13->field0_0x0 + 1);
		}
		else if ((char)(this->flags >> 8) < '\0') {
		bVar2 = (*(code *)((local_10->parent).vtable)->field57_0xe4)(0x902);
		bVar12 = bVar12 & bVar2;
		}
		else {
		if (local_c == (UnkFamily27A *)0x0) {
		uVar10 = FUN_001c3620(local_10,&pCStack36,0x902,1);
		bVar2 = (byte)uVar10;
		this_00 = pCStack36;
		}
		else if (local_c == (UnkFamily27A *)0x1) {
		uVar10 = FUN_001c3410(local_10,this_00,0x902,1);
		bVar2 = (byte)uVar10;
		this_00 = pCStack36;
		}
		else {
		bVar2 = 0;
		}
		bVar12 = bVar12 & bVar2;
		if (this_00 != (CodeModel *)0x0) {
		CodeModel::CleanUp(this_00);
		VirtualPool::FreeMemory(this_00);
		this_00 = pCStack36;
		}
		}
		cVar16 = (char)((uint)unaff_EDI >> 0x18);
		cVar17 = (char)((uint)unaff_EBX >> 0x18);
		if ((pCStack32->field0_0x0 & 0x20000) == 0) {
		pCStack32->field0_0x0 = pCStack32->field0_0x0 | 0x20000;
		}
		local_14 = (CodeModel *)((int)&local_14->field0_0x0 + 1);
		pMVar7 = local_2c;
		unaff_retaddr = (UnkFamily27A **)param_1;
		}
		 while (local_14 < pCStack52);
		}
		}
		else {
		(*((this->parent).vtable)->Stub3)(local_30);
		cVar16 = (char)((uint)unaff_EDI >> 0x18);
		cVar17 = (char)((uint)unaff_EBX >> 0x18);
		uVar10 = 0;
		pCVar13 = pCStack32;
		if ((this->flags & 0x3fff) != 0) {
		do {
		local_14 = this->elements[uVar10];
		if (local_14 != (CodeModel *)0x0) {
		piVar6 = (int *)this->field4_0x10;
		uVar4 = (ushort)uVar10 & 0x7fff;
		this->indexes[(int)piStack28] = uVar4;
		if (piVar6 != (int *)0x0) {
		*(ushort *)((int)piVar6 + *piVar6 * 2 + 4) = uVar4;
		*piVar6 = *piVar6 + 1;
		}
		bVar14 = UnkFamily27A::FUN_0020c0a0(local_10);
		if (bVar14 == false) {
		LAB_001c3295:bVar2 = 0;
		}
		else if (local_c == (UnkFamily27A *)0x0) {
		bVar2 = (*(code *)((local_10->parent).vtable)->somethingTemplate)(0x901,register0x00000010);
		}
		else {
		if (local_c != (UnkFamily27A *)0x1) goto LAB_001c3295;
		bVar2 = (*(code *)((local_10->parent).vtable)->field9_0x24)(0x901,uVar10);
		}
		if (local_c == (UnkFamily27A *)0x0) {
		uVar8 = FUN_001c3620(local_10,&local_14,0x902,1);
		bVar3 = (byte)uVar8;
		}
		else if (local_c == (UnkFamily27A *)0x1) {
		uVar8 = FUN_001c3410(local_10,local_14,0x902,1);
		bVar3 = (byte)uVar8;
		}
		else {
		bVar3 = 0;
		}
		bVar12 = bVar12 & bVar2 & bVar3;
		piStack28 = (int *)((int)piStack28 + 1);
		pMVar7 = local_2c;
		}
		cVar16 = (char)((uint)unaff_EDI >> 0x18);
		cVar17 = (char)((uint)unaff_EBX >> 0x18);
		uVar10 = uVar10 + 1;
		pCVar13 = pCStack32;
		}
		 while (uVar10 < (this->flags & 0x3fff));
		}
		}
		pCStack32 = pCVar13;
		FUN_0020d1c0((int **)&local_10);
		if (cVar17 != '\0') {
		(*((this->parent).vtable)->Stub2)(pCStack32,pCStack52,0);
		goto LAB_001c33cb;
		}
		sVar9 = (*pMVar7->vtable->GetPosition)(pMVar7);
		(*pMVar7->vtable->Rewind)(pMVar7);
		bVar14 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar14 == false) {
		LAB_001c3373:bVar2 = 0;
		}
		else if (((UnkFamily27A **)param_1)[1] == (UnkFamily27A *)0x0) {
		bVar2 = (*(code *)((((UnkFamily27A *)*param_1)->parent).vtable)->somethingTemplate)(0x904,register0x00000010);
		}
		else {
		if (((UnkFamily27A **)param_1)[1] != (UnkFamily27A *)0x1) goto LAB_001c3373;
		bVar2 = (*(code *)((((UnkFamily27A *)*param_1)->parent).vtable)->field9_0x24)(0x904,sVar9);
		}
		(*pMVar7->vtable->Rewind)(pMVar7);
		if (((UnkFamily27A **)param_1)[1] == (UnkFamily27A *)0x0) {
		bVar3 = (*(code *)((((UnkFamily27A *)*param_1)->parent).vtable)->field36_0x90)(0x903,register0x00000010,pMVar7->startPtr);
		}
		else if (((UnkFamily27A **)param_1)[1] == (UnkFamily27A *)0x1) {
		bVar3 = (*(code *)((((UnkFamily27A *)*param_1)->parent).vtable)->field16_0x40)(0x903,sVar9,pMVar7->startPtr);
		}
		else {
		bVar3 = 0;
		}
		bVar12 = bVar12 & bVar2 & bVar3;
		(*((this->parent).vtable)->Stub4)(piStack28,0);
		LAB_001c33cb:if (pMVar7 != (MemoryStream *)0x0) {
		(*pMVar7->vtable->Dispose)(pMVar7,1);
		}
		if (cVar16 != '\0') {
		ppCVar11 = &pCStack36;
		pPVar5 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar5,ppCVar11);
		}
		this->flags = this->flags & 0xffffbfff;
		uVar10 = FUN_0020d1c0(&piStack28);
		return uVar10 & 0xffffff00 | (uint)bVar12;
		}
		
	*/
	return 0;
}

void SectionDataCodeModelBase::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataCodeModelBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataCodeModelBase::EmptyFunction_7() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataCodeModelBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataCodeModelBase::EmptyFunction_8() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataCodeModelBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataCodeModelBase::EmptyFunction_9() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataCodeModelBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataCodeModelBase::Add(int param_1, uint param_2, CodeModel* element, int* param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataCodeModelBase::Add(SectionDataCodeModelBase *this,int param_1,uint param_2,CodeModel *element,int *param_4){
		ushort uVar1;
		this->elements[param_2 & 0x7fff] = element;
		uVar1 = (ushort)param_2 & 0x7fff;
		this->indexes[param_1] = uVar1;
		if (param_4 != (int *)0x0) {
		*(ushort *)((int)param_4 + *param_4 * 2 + 4) = uVar1;
		*param_4 = *param_4 + 1;
		}
		return;
		}
		
	*/
	return;
}

