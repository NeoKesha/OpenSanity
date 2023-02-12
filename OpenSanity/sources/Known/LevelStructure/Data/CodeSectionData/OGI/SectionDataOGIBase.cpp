#include "headers/Known/LevelStructure/Data/CodeSectionData/OGI/SectionDataOGIBase.h"

#include "headers/Known/Game/GameResources/ResourceList/ResourceListOGI.h"
#include "headers/Known/GameData/OGI/OGI.h"
void SectionDataOGIBase::Construct(uint cnt, byte param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataOGIBase * __thiscall SectionDataOGIBase::Construct(SectionDataOGIBase *this,uint cnt,byte param_2){
		OGI **ppOVar1;
		short *psVar2;
		uint i;
		(this->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_OGI_Base;
		this->field4_0x10 = 0;
		this->ogiList = (ResourceListOGI *)0x0;
		this->flags = 0;
		this->flags = (param_2 & 1) << 0xf | this->flags & 0xffff4000 | cnt & 0x3fff;
		ppOVar1 = (OGI **)VirtualPool::AllocateMemory(cnt * 4);
		this->elements = ppOVar1;
		psVar2 = (short *)VirtualPool::AllocateMemory(cnt * 2);
		this->indexes = psVar2;
		i = 0;
		if (cnt != 0) {
		do {
		this->elements[i] = (OGI *)0x0;
		i = i + 1;
		}
		 while (i < cnt);
		}
		return this;
		}
		
	*/
	return;
}

void SectionDataOGIBase::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataOGIBase::CleanUp(SectionDataOGIBase *this){
		OGI *this_00;
		uint uVar1;
		uVar1 = 0;
		if ((this->flags & 0x3fff) != 0) {
		do {
		this_00 = this->elements[uVar1];
		if (this_00 != (OGI *)0x0) {
		OGI::CleanUp(this_00);
		VirtualPool::FreeMemory(this_00);
		this->elements[uVar1] = (OGI *)0x0;
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

void SectionDataOGIBase::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataOGIBase::Dispose(SectionDataOGIBase *this){
		(this->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_OGI_Base;
		CleanUp(this);
		VirtualPool::FreeMemory(this->elements);
		VirtualPool::FreeMemory(this->indexes);
		return;
		}
		
	*/
	return;
}

void SectionDataOGIBase::Dispose_3(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataOGIBase * __thiscall SectionDataOGIBase::Dispose(SectionDataOGIBase *this,byte param_1){
		(this->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_OGI_Base;
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

void SectionDataOGIBase::Dispose_4() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataOGIBase::Dispose(SectionDataOGIBase *this){
		(this->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_OGI_Base;
		CleanUp(this);
		VirtualPool::FreeMemory(this->elements);
		VirtualPool::FreeMemory(this->indexes);
		return;
		}
		
	*/
	return;
}

uint SectionDataOGIBase::AddElement(OGI* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps uint __thiscall SectionDataOGIBase::AddElement(SectionDataOGIBase *this,OGI *element){
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
		OGI **ppOVar11;
		byte bVar12;
		undefined4 unaff_EBX;
		OGI *pOVar13;
		OGI *this_00;
		undefined4 unaff_EDI;
		bool bVar14;
		OGI *unaff_retaddr;
		UnkFamily27A **bufferOut;
		bool bVar15;
		char cVar16;
		char cVar17;
		OGI *pOStack52;
		int local_30;
		MemoryStream *local_2c;
		MemoryStream *local_28;
		OGI *pOStack36;
		OGI *pOStack32;
		int *piStack28;
		undefined4 uStack24;
		OGI *local_14;
		UnkFamily27A *local_10;
		UnkFamily27A *local_c;
		int iStack8;
		bVar14 = element->index == 0;
		local_30 = 0;
		local_2c = (MemoryStream *)0x4000;
		pOStack52 = (OGI *)CONCAT13(bVar14,pOStack52._0_3_);
		bVar12 = 1;
		local_14 = (OGI *)0xffffffff;
		this->flags = this->flags | 0x4000;
		if (bVar14) {
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)element->field0_0x0);
		if (bVar1 == false) {
		LAB_001c2653:bVar2 = 0;
		}
		else if (element->index == 0) {
		bVar2 = (**(code **)(*(int *)element->field0_0x0 + 0x74))(0x904,&local_2c);
		}
		else {
		if (element->index != 1) goto LAB_001c2653;
		bVar2 = (**(code **)(*(int *)element->field0_0x0 + 0x24))(0x904,local_2c);
		}
		bVar15 = false;
		bVar1 = false;
		bufferOut = &local_10;
		pMVar7 = local_2c;
		pPVar5 = PhysicalPool::GetPool();
		PhysicalPool::CreateBuffer(pPVar5,(int *)bufferOut,(uint)pMVar7,bVar1,bVar15);
		local_14 = (OGI *)pPVar5->alignedStart;
		ppOVar11 = &local_14;
		pPVar5 = PhysicalPool::GetPool();
		piVar6 = PhysicalPool::GetBufferPointerByIndex(pPVar5,(int *)ppOVar11);
		pMVar7 = (MemoryStream *)VirtualPool::AllocateMemory(0x14);
		if (pMVar7 == (MemoryStream *)0x0) {
		local_28 = (MemoryStream *)0x0;
		}
		else {
		local_28 = MemoryStream::Construct(pMVar7,piVar6,(size_t)local_2c,0,1);
		}
		if (element->index == 0) {
		bVar12 = (**(code **)(*(int *)element->field0_0x0 + 0x90))(0x903,&local_2c,piVar6);
		bVar12 = bVar2 & 1 & bVar12;
		}
		else if (element->index == 1) {
		bVar12 = (**(code **)(*(int *)element->field0_0x0 + 0x40))(0x903,local_2c,piVar6);
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
		ppOVar11 = this->elements;
		uVar10 = this->flags & 0x3fff;
		do {
		if (*ppOVar11 != (OGI *)0x0) {
		local_30 = local_30 + 1;
		}
		ppOVar11 = ppOVar11 + 1;
		uVar10 = uVar10 - 1;
		}
		 while (uVar10 != 0);
		}
		}
		pMVar7 = local_28;
		FUN_0020f9d0(&local_c,local_28,(int **)element);
		piStack28 = (int *)0x0;
		uStack24 = 0;
		bVar1 = UnkFamily27A::FUN_0020c0a0(local_c);
		if (bVar1 == false) {
		LAB_001c27b4:bVar2 = 0;
		}
		else if (iStack8 == 0) {
		bVar2 = (*(code *)((local_c->parent).vtable)->somethingTemplate)(0x900,&local_30);
		}
		else {
		if (iStack8 != 1) goto LAB_001c27b4;
		bVar2 = (*(code *)((local_c->parent).vtable)->field9_0x24)(0x900,local_30);
		}
		bVar12 = bVar12 & bVar2;
		if (bVar14) {
		(*((this->parent).vtable)->Stub1)(local_30);
		cVar16 = (char)((uint)unaff_EDI >> 0x18);
		cVar17 = (char)((uint)unaff_EBX >> 0x18);
		local_14 = (OGI *)0x0;
		pOVar13 = pOStack32;
		this_00 = pOStack36;
		if (pOStack52 != (OGI *)0x0) {
		do {
		bVar14 = UnkFamily27A::FUN_0020c0a0(local_10);
		if (bVar14 == false) {
		LAB_001c2833:bVar2 = 0;
		element = unaff_retaddr;
		}
		else if (local_c == (UnkFamily27A *)0x0) {
		bVar2 = (*(code *)((local_10->parent).vtable)->somethingTemplate)(0x901,&local_28);
		element = unaff_retaddr;
		}
		else {
		if (local_c != (UnkFamily27A *)0x1) goto LAB_001c2833;
		bVar2 = (*(code *)((local_10->parent).vtable)->field9_0x24)(0x901,local_28);
		element = unaff_retaddr;
		}
		piVar6 = (int *)this->field4_0x10;
		bVar12 = bVar12 & bVar2;
		uVar4 = (ushort)local_28 & 0x7fff;
		this->indexes[(int)pOVar13] = uVar4;
		if (piVar6 != (int *)0x0) {
		*(ushort *)((int)piVar6 + *piVar6 * 2 + 4) = uVar4;
		*piVar6 = *piVar6 + 1;
		}
		pOStack32 = this->elements[(int)local_28];
		if (pOStack32 == (OGI *)0x0) {
		if (local_c == (UnkFamily27A *)0x0) {
		uVar10 = FUN_001c2d90(local_10,&pOStack32,0x902,1);
		bVar2 = (byte)uVar10;
		}
		else if (local_c == (UnkFamily27A *)0x1) {
		uVar10 = FUN_001c2b80(local_10,0,0x902,1);
		bVar2 = (byte)uVar10;
		}
		else {
		bVar2 = 0;
		}
		bVar12 = bVar12 & bVar2;
		pOStack32->index = (int)local_28;
		this->elements[(int)local_28] = pOStack32;
		pOVar13 = (OGI *)((int)&pOVar13->field0_0x0 + 1);
		}
		else if ((char)(this->flags >> 8) < '\0') {
		bVar2 = (*(code *)((local_10->parent).vtable)->field57_0xe4)(0x902);
		bVar12 = bVar12 & bVar2;
		}
		else {
		if (local_c == (UnkFamily27A *)0x0) {
		uVar10 = FUN_001c2d90(local_10,&pOStack36,0x902,1);
		bVar2 = (byte)uVar10;
		this_00 = pOStack36;
		}
		else if (local_c == (UnkFamily27A *)0x1) {
		uVar10 = FUN_001c2b80(local_10,this_00,0x902,1);
		bVar2 = (byte)uVar10;
		this_00 = pOStack36;
		}
		else {
		bVar2 = 0;
		}
		bVar12 = bVar12 & bVar2;
		if (this_00 != (OGI *)0x0) {
		OGI::CleanUp(this_00);
		VirtualPool::FreeMemory(this_00);
		this_00 = pOStack36;
		}
		}
		cVar16 = (char)((uint)unaff_EDI >> 0x18);
		cVar17 = (char)((uint)unaff_EBX >> 0x18);
		if ((pOStack32->field0_0x0 & 0x20000) == 0) {
		pOStack32->field0_0x0 = pOStack32->field0_0x0 | 0x20000;
		}
		local_14 = (OGI *)((int)&local_14->field0_0x0 + 1);
		pMVar7 = local_2c;
		unaff_retaddr = element;
		}
		 while (local_14 < pOStack52);
		}
		}
		else {
		(*((this->parent).vtable)->Stub3)(local_30);
		cVar16 = (char)((uint)unaff_EDI >> 0x18);
		cVar17 = (char)((uint)unaff_EBX >> 0x18);
		uVar10 = 0;
		pOVar13 = pOStack32;
		if ((this->flags & 0x3fff) != 0) {
		do {
		local_14 = this->elements[uVar10];
		if (local_14 != (OGI *)0x0) {
		piVar6 = (int *)this->field4_0x10;
		uVar4 = (ushort)uVar10 & 0x7fff;
		this->indexes[(int)piStack28] = uVar4;
		if (piVar6 != (int *)0x0) {
		*(ushort *)((int)piVar6 + *piVar6 * 2 + 4) = uVar4;
		*piVar6 = *piVar6 + 1;
		}
		bVar14 = UnkFamily27A::FUN_0020c0a0(local_10);
		if (bVar14 == false) {
		LAB_001c2a05:bVar2 = 0;
		}
		else if (local_c == (UnkFamily27A *)0x0) {
		bVar2 = (*(code *)((local_10->parent).vtable)->somethingTemplate)(0x901,register0x00000010);
		}
		else {
		if (local_c != (UnkFamily27A *)0x1) goto LAB_001c2a05;
		bVar2 = (*(code *)((local_10->parent).vtable)->field9_0x24)(0x901,uVar10);
		}
		if (local_c == (UnkFamily27A *)0x0) {
		uVar8 = FUN_001c2d90(local_10,&local_14,0x902,1);
		bVar3 = (byte)uVar8;
		}
		else if (local_c == (UnkFamily27A *)0x1) {
		uVar8 = FUN_001c2b80(local_10,local_14,0x902,1);
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
		pOVar13 = pOStack32;
		}
		 while (uVar10 < (this->flags & 0x3fff));
		}
		}
		pOStack32 = pOVar13;
		FUN_0020d1c0((int **)&local_10);
		if (cVar17 != '\0') {
		(*((this->parent).vtable)->Stub2)(pOStack32,pOStack52,0);
		goto LAB_001c2b3b;
		}
		sVar9 = (*pMVar7->vtable->GetPosition)(pMVar7);
		(*pMVar7->vtable->Rewind)(pMVar7);
		bVar14 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)element->field0_0x0);
		if (bVar14 == false) {
		LAB_001c2ae3:bVar2 = 0;
		}
		else if (element->index == 0) {
		bVar2 = (**(code **)(*(int *)element->field0_0x0 + 0x74))(0x904,register0x00000010);
		}
		else {
		if (element->index != 1) goto LAB_001c2ae3;
		bVar2 = (**(code **)(*(int *)element->field0_0x0 + 0x24))(0x904,sVar9);
		}
		(*pMVar7->vtable->Rewind)(pMVar7);
		if (element->index == 0) {
		bVar3 = (**(code **)(*(int *)element->field0_0x0 + 0x90))(0x903,register0x00000010,pMVar7->startPtr);
		}
		else if (element->index == 1) {
		bVar3 = (**(code **)(*(int *)element->field0_0x0 + 0x40))(0x903,sVar9,pMVar7->startPtr);
		}
		else {
		bVar3 = 0;
		}
		bVar12 = bVar12 & bVar2 & bVar3;
		(*((this->parent).vtable)->Stub4)(piStack28,0);
		LAB_001c2b3b:if (pMVar7 != (MemoryStream *)0x0) {
		(*pMVar7->vtable->Dispose)(pMVar7,1);
		}
		if (cVar16 != '\0') {
		ppOVar11 = &pOStack36;
		pPVar5 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar5,ppOVar11);
		}
		this->flags = this->flags & 0xffffbfff;
		uVar10 = FUN_0020d1c0(&piStack28);
		return uVar10 & 0xffffff00 | (uint)bVar12;
		}
		
	*/
	return 0;
}

void SectionDataOGIBase::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataOGIBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataOGIBase::EmptyFunction_7() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataOGIBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataOGIBase::EmptyFunction_8() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataOGIBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataOGIBase::EmptyFunction_9() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataOGIBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

