#include "headers/Known/LevelStructure/Data/CodeSectionData/Animation/SectionDataAnimationBase.h"

#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Code/Animation/SectionAnimation.h"
#include "headers/Known/GameData/Animation/Animation.h"
#include "headers/Known/Game/GameResources/ResourceList/ResourceListAnimation.h"
void SectionDataAnimationBase::Construct(uint param_1, byte param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataAnimationBase * __thiscall SectionDataAnimationBase::Construct(SectionDataAnimationBase *this,uint param_1,byte param_2){
		Animation **ppAVar1;
		short *psVar2;
		uint i;
		(this->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Animation_Base;
		this->field4_0x10 = 0;
		this->animationList = (ResourceListAnimation *)0x0;
		this->flags = 0;
		this->flags = (param_2 & 1) << 0xf | this->flags & 0xffff4000 | param_1 & 0x3fff;
		ppAVar1 = (Animation **)VirtualPool::AllocateMemory(param_1 * 4);
		this->elements = ppAVar1;
		psVar2 = (short *)VirtualPool::AllocateMemory(param_1 * 2);
		this->indexes = psVar2;
		i = 0;
		if (param_1 != 0) {
		do {
		this->elements[i] = (Animation *)0x0;
		i = i + 1;
		}
		 while (i < param_1);
		}
		return this;
		}
		
	*/
	return;
}

void SectionDataAnimationBase::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataAnimationBase::CleanUp(SectionDataAnimationBase *this){
		Animation *this_00;
		uint uVar1;
		uVar1 = 0;
		if ((this->flags & 0x3fff) != 0) {
		do {
		this_00 = this->elements[uVar1];
		if (this_00 != (Animation *)0x0) {
		Animation::DisposeBlobs(this_00);
		VirtualPool::FreeMemory(this_00);
		this->elements[uVar1] = (Animation *)0x0;
		}
		uVar1 = uVar1 + 1;
		}
		 while (uVar1 < (this->flags & 0x3fff));
		}
		return;
		}
		
	*/
	return;
}

void SectionDataAnimationBase::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataAnimationBase::Dispose(SectionDataAnimationBase *this){
		(this->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Animation_Base;
		CleanUp(this);
		VirtualPool::FreeMemory(this->elements);
		VirtualPool::FreeMemory(this->indexes);
		return;
		}
		
	*/
	return;
}

void SectionDataAnimationBase::Dispose_3(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataAnimationBase * __thiscall SectionDataAnimationBase::Dispose(SectionDataAnimationBase *this,byte param_1){
		(this->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Animation_Base;
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

void SectionDataAnimationBase::Dispose_4() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataAnimationBase::Dispose(SectionDataAnimationBase *this){
		(this->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Animation_Base;
		CleanUp(this);
		VirtualPool::FreeMemory(this->elements);
		VirtualPool::FreeMemory(this->indexes);
		return;
		}
		
	*/
	return;
}

uint SectionDataAnimationBase::UnkMethod(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps uint __thiscall SectionDataAnimationBase::UnkMethod(SectionDataAnimationBase *this,int **param_1){
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
		Animation **ppAVar11;
		byte bVar12;
		undefined4 unaff_EBX;
		Animation *pAVar13;
		Animation *this_00;
		undefined4 unaff_EDI;
		bool bVar14;
		UnkFamily27A **unaff_retaddr;
		UnkFamily27A **bufferOut;
		bool bVar15;
		char cVar16;
		char cVar17;
		Animation *pAStack52;
		int local_30;
		MemoryStream *local_2c;
		MemoryStream *local_28;
		Animation *pAStack36;
		Animation *pAStack32;
		int *piStack28;
		undefined4 uStack24;
		Animation *local_14;
		UnkFamily27A *local_10;
		UnkFamily27A *local_c;
		int iStack8;
		bVar14 = param_1[1] == (int *)0x0;
		local_30 = 0;
		local_2c = (MemoryStream *)0x4000;
		pAStack52 = (Animation *)CONCAT13(bVar14,pAStack52._0_3_);
		bVar12 = 1;
		local_14 = (Animation *)0xffffffff;
		this->flags = this->flags | 0x4000;
		if (bVar14) {
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 == false) {
		LAB_001c1dc3:bVar2 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		bVar2 = (**(code **)(**param_1 + 0x74))(0x904,&local_2c);
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001c1dc3;
		bVar2 = (**(code **)(**param_1 + 0x24))(0x904,local_2c);
		}
		bVar15 = false;
		bVar1 = false;
		bufferOut = &local_10;
		pMVar7 = local_2c;
		pPVar5 = PhysicalPool::GetPool();
		PhysicalPool::CreateBuffer(pPVar5,(int *)bufferOut,(uint)pMVar7,bVar1,bVar15);
		local_14 = (Animation *)pPVar5->alignedStart;
		ppAVar11 = &local_14;
		pPVar5 = PhysicalPool::GetPool();
		piVar6 = PhysicalPool::GetBufferPointerByIndex(pPVar5,(int *)ppAVar11);
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
		ppAVar11 = this->elements;
		uVar10 = this->flags & 0x3fff;
		do {
		if (*ppAVar11 != (Animation *)0x0) {
		local_30 = local_30 + 1;
		}
		ppAVar11 = ppAVar11 + 1;
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
		LAB_001c1f24:bVar2 = 0;
		}
		else if (iStack8 == 0) {
		bVar2 = (*(code *)((local_c->parent).vtable)->somethingTemplate)(0x900,&local_30);
		}
		else {
		if (iStack8 != 1) goto LAB_001c1f24;
		bVar2 = (*(code *)((local_c->parent).vtable)->field9_0x24)(0x900,local_30);
		}
		bVar12 = bVar12 & bVar2;
		if (bVar14) {
		(*((this->parent).vtable)->Stub1)(local_30);
		cVar16 = (char)((uint)unaff_EDI >> 0x18);
		cVar17 = (char)((uint)unaff_EBX >> 0x18);
		local_14 = (Animation *)0x0;
		pAVar13 = pAStack32;
		this_00 = pAStack36;
		if (pAStack52 != (Animation *)0x0) {
		do {
		bVar14 = UnkFamily27A::FUN_0020c0a0(local_10);
		if (bVar14 == false) {
		LAB_001c1fa3:bVar2 = 0;
		param_1 = (int **)unaff_retaddr;
		}
		else if (local_c == (UnkFamily27A *)0x0) {
		bVar2 = (*(code *)((local_10->parent).vtable)->somethingTemplate)(0x901,&local_28);
		param_1 = (int **)unaff_retaddr;
		}
		else {
		if (local_c != (UnkFamily27A *)0x1) goto LAB_001c1fa3;
		bVar2 = (*(code *)((local_10->parent).vtable)->field9_0x24)(0x901,local_28);
		param_1 = (int **)unaff_retaddr;
		}
		piVar6 = (int *)this->field4_0x10;
		bVar12 = bVar12 & bVar2;
		uVar4 = (ushort)local_28 & 0x7fff;
		this->indexes[(int)pAVar13] = uVar4;
		if (piVar6 != (int *)0x0) {
		*(ushort *)((int)piVar6 + *piVar6 * 2 + 4) = uVar4;
		*piVar6 = *piVar6 + 1;
		}
		pAStack32 = this->elements[(int)local_28];
		if (pAStack32 == (Animation *)0x0) {
		if (local_c == (UnkFamily27A *)0x0) {
		uVar10 = FUN_001c2500(local_10,&pAStack32,0x902,1);
		bVar2 = (byte)uVar10;
		}
		else if (local_c == (UnkFamily27A *)0x1) {
		uVar10 = FUN_001c22f0(local_10,0,0x902,1);
		bVar2 = (byte)uVar10;
		}
		else {
		bVar2 = 0;
		}
		bVar12 = bVar12 & bVar2;
		pAStack32->index = local_28;
		this->elements[(int)local_28] = pAStack32;
		pAVar13 = (Animation *)((int)&pAVar13->field0_0x0 + 1);
		}
		else if ((char)(this->flags >> 8) < '\0') {
		bVar2 = (*(code *)((local_10->parent).vtable)->field57_0xe4)(0x902);
		bVar12 = bVar12 & bVar2;
		}
		else {
		if (local_c == (UnkFamily27A *)0x0) {
		uVar10 = FUN_001c2500(local_10,&pAStack36,0x902,1);
		bVar2 = (byte)uVar10;
		this_00 = pAStack36;
		}
		else if (local_c == (UnkFamily27A *)0x1) {
		uVar10 = FUN_001c22f0(local_10,this_00,0x902,1);
		bVar2 = (byte)uVar10;
		this_00 = pAStack36;
		}
		else {
		bVar2 = 0;
		}
		bVar12 = bVar12 & bVar2;
		if (this_00 != (Animation *)0x0) {
		Animation::DisposeBlobs(this_00);
		VirtualPool::FreeMemory(this_00);
		this_00 = pAStack36;
		}
		}
		cVar16 = (char)((uint)unaff_EDI >> 0x18);
		cVar17 = (char)((uint)unaff_EBX >> 0x18);
		if ((pAStack32->field0_0x0 & 0x20000) == 0) {
		pAStack32->field0_0x0 = pAStack32->field0_0x0 | 0x20000;
		}
		local_14 = (Animation *)((int)&local_14->field0_0x0 + 1);
		pMVar7 = local_2c;
		unaff_retaddr = (UnkFamily27A **)param_1;
		}
		 while (local_14 < pAStack52);
		}
		}
		else {
		(*((this->parent).vtable)->Stub3)(local_30);
		cVar16 = (char)((uint)unaff_EDI >> 0x18);
		cVar17 = (char)((uint)unaff_EBX >> 0x18);
		uVar10 = 0;
		pAVar13 = pAStack32;
		if ((this->flags & 0x3fff) != 0) {
		do {
		local_14 = this->elements[uVar10];
		if (local_14 != (Animation *)0x0) {
		piVar6 = (int *)this->field4_0x10;
		uVar4 = (ushort)uVar10 & 0x7fff;
		this->indexes[(int)piStack28] = uVar4;
		if (piVar6 != (int *)0x0) {
		*(ushort *)((int)piVar6 + *piVar6 * 2 + 4) = uVar4;
		*piVar6 = *piVar6 + 1;
		}
		bVar14 = UnkFamily27A::FUN_0020c0a0(local_10);
		if (bVar14 == false) {
		LAB_001c2175:bVar2 = 0;
		}
		else if (local_c == (UnkFamily27A *)0x0) {
		bVar2 = (*(code *)((local_10->parent).vtable)->somethingTemplate)(0x901,register0x00000010);
		}
		else {
		if (local_c != (UnkFamily27A *)0x1) goto LAB_001c2175;
		bVar2 = (*(code *)((local_10->parent).vtable)->field9_0x24)(0x901,uVar10);
		}
		if (local_c == (UnkFamily27A *)0x0) {
		uVar8 = FUN_001c2500(local_10,&local_14,0x902,1);
		bVar3 = (byte)uVar8;
		}
		else if (local_c == (UnkFamily27A *)0x1) {
		uVar8 = FUN_001c22f0(local_10,local_14,0x902,1);
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
		pAVar13 = pAStack32;
		}
		 while (uVar10 < (this->flags & 0x3fff));
		}
		}
		pAStack32 = pAVar13;
		FUN_0020d1c0((int **)&local_10);
		if (cVar17 != '\0') {
		(*((this->parent).vtable)->Stub2)(pAStack32,pAStack52,0);
		goto LAB_001c22ab;
		}
		sVar9 = (*pMVar7->vtable->GetPosition)(pMVar7);
		(*pMVar7->vtable->Rewind)(pMVar7);
		bVar14 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar14 == false) {
		LAB_001c2253:bVar2 = 0;
		}
		else if (((UnkFamily27A **)param_1)[1] == (UnkFamily27A *)0x0) {
		bVar2 = (*(code *)((((UnkFamily27A *)*param_1)->parent).vtable)->somethingTemplate)(0x904,register0x00000010);
		}
		else {
		if (((UnkFamily27A **)param_1)[1] != (UnkFamily27A *)0x1) goto LAB_001c2253;
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
		LAB_001c22ab:if (pMVar7 != (MemoryStream *)0x0) {
		(*pMVar7->vtable->Dispose)(pMVar7,1);
		}
		if (cVar16 != '\0') {
		ppAVar11 = &pAStack36;
		pPVar5 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar5,ppAVar11);
		}
		this->flags = this->flags & 0xffffbfff;
		uVar10 = FUN_0020d1c0(&piStack28);
		return uVar10 & 0xffffff00 | (uint)bVar12;
		}
		
	*/
	return 0;
}

void SectionDataAnimationBase::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataAnimationBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataAnimationBase::EmptyFunction_7() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataAnimationBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataAnimationBase::EmptyFunction_8() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataAnimationBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataAnimationBase::EmptyFunction_9() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataAnimationBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

int SectionDataAnimationBase::AddAnimation(int param_1, uint param_2, int param_3, SectionAnimation* param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionDataAnimationBase::AddAnimation(SectionDataAnimationBase *this,int param_1,uint param_2,int param_3,SectionAnimation *param_4){
		short sVar1;
		this->elements[param_2 & 0x7fff] = (Animation *)param_3;
		sVar1 = (short)(param_2 & 0x7fff);
		this->indexes[param_1] = sVar1;
		if (param_4 != (SectionAnimation *)0x0) {
		*(short *)((int)&param_4->collection + (int)(param_4->parent).vtable * 2) = sVar1;
		(param_4->parent).vtable =(SectionAbstract_VTable *)((int)&((param_4->parent).vtable)->Dispose + 1);
		}
		return param_2 & 0x7fff;
		}
		
	*/
	return 0;
}

