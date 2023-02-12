#include "headers/Known/LevelStructure/Data/CodeSectionData/Script/SectionDataScriptBase.h"

#include "headers/Known/Game/GameResources/ResourceList/ResourceListScript.h"
#include "headers/Known/GameData/Script/ScriptAbstract.h"
ScriptAbstract* SectionDataScriptBase::InitScript(ushort index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ScriptAbstract * __thiscall SectionDataScriptBase::InitScript(SectionDataScriptBase *this,ushort index){
		uint *puVar1;
		uint _index;
		ScriptHeader *this_00;
		ScriptMain *script;
		if (index == 0xffff) {
		return (ScriptAbstract *)0x0;
		}
		_index = index & 0x7fff;
		script = (ScriptMain *)this->elements[_index];
		if (script == (ScriptMain *)0x0) {
		if ((index & 1) == 0) {
		this_00 = (ScriptHeader *)VirtualPool::AllocateMemory(0x3c);
		if (this_00 == (ScriptHeader *)0x0) {
		script = (ScriptMain *)0x0;
		}
		else {
		script = (ScriptMain *)ScriptHeader::Construct(this_00);
		}
		}
		else {
		script = (ScriptMain *)VirtualPool::AllocateMemory(0x20);
		if (script == (ScriptMain *)0x0) {
		script = (ScriptMain *)0x0;
		}
		else {
		ScriptAbstract::Construct((ScriptAbstract *)script);
		(script->parent).vtable = (ScriptAbstract_VTable *)&Script_VT_Main;
		script->sub = (ScriptMainSub *)0x0;
		}
		}
		(script->parent).index = _index;
		}
		puVar1 = &(script->parent).field1_0x4;
		*puVar1 = *puVar1 & 0xfffdffff;
		puVar1 = &(script->parent).field1_0x4;
		*(short *)puVar1 = *(short *)puVar1 + 1;
		this->elements[_index] = &script->parent;
		return &script->parent;
		}
		
	*/
	return null;
}

void SectionDataScriptBase::Construct(uint param_1, byte param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataScriptBase * __thiscall SectionDataScriptBase::Construct(SectionDataScriptBase *this,uint param_1,byte param_2){
		ScriptAbstract **ppSVar1;
		short *psVar2;
		uint uVar3;
		(this->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Script_Base;
		this->field4_0x10 = 0;
		this->scriptList = (ResourceListScript *)0x0;
		this->flags = 0;
		this->flags = (param_2 & 1) << 0xf | this->flags & 0xffff4000 | param_1 & 0x3fff;
		ppSVar1 = (ScriptAbstract **)VirtualPool::AllocateMemory(param_1 * 4);
		this->elements = ppSVar1;
		psVar2 = (short *)VirtualPool::AllocateMemory(param_1 * 2);
		this->indexes = psVar2;
		uVar3 = 0;
		if (param_1 != 0) {
		do {
		this->elements[uVar3] = (ScriptAbstract *)0x0;
		uVar3 = uVar3 + 1;
		}
		 while (uVar3 < param_1);
		}
		return this;
		}
		
	*/
	return;
}

void SectionDataScriptBase::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataScriptBase::CleanUp(SectionDataScriptBase *this){
		ScriptAbstract *this_00;
		uint uVar1;
		uVar1 = 0;
		if ((this->flags & 0x3fff) != 0) {
		do {
		this_00 = this->elements[uVar1];
		if (this_00 != (ScriptAbstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		this->elements[uVar1] = (ScriptAbstract *)0x0;
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

void SectionDataScriptBase::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataScriptBase::Dispose(SectionDataScriptBase *this){
		(this->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Script_Base;
		CleanUp(this);
		VirtualPool::FreeMemory(this->elements);
		VirtualPool::FreeMemory(this->indexes);
		return;
		}
		
	*/
	return;
}

void SectionDataScriptBase::Dispose_4(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataScriptBase * __thiscall SectionDataScriptBase::Dispose(SectionDataScriptBase *this,byte param_1){
		(this->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Script_Base;
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

void SectionDataScriptBase::Dispose_5() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataScriptBase::Dispose(SectionDataScriptBase *this){
		(this->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Script_Base;
		CleanUp(this);
		VirtualPool::FreeMemory(this->elements);
		VirtualPool::FreeMemory(this->indexes);
		return;
		}
		
	*/
	return;
}

bool SectionDataScriptBase::AddElement(ScriptAbstract* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps bool __thiscall SectionDataScriptBase::AddElement(SectionDataScriptBase *this,ScriptAbstract *element){
		CodeSectionDataAbstract_VTable *pCVar1;
		bool bVar2;
		byte bVar3;
		ushort uVar4;
		PhysicalPool *pPVar5;
		int *piVar6;
		MemoryStream *pMVar7;
		uint uVar8;
		uint uVar9;
		size_t sVar10;
		ScriptAbstract **ppSVar11;
		byte bVar12;
		undefined4 unaff_EBX;
		ScriptAbstract *pSVar13;
		undefined4 *puVar14;
		undefined4 unaff_EDI;
		bool bVar15;
		ScriptAbstract *unaff_retaddr;
		undefined4 **ptr;
		UnkFamily27A **bufferOut;
		bool bVar16;
		char cVar17;
		char cVar18;
		ScriptAbstract *pSStack52;
		int local_30;
		MemoryStream *local_2c;
		MemoryStream *local_28;
		undefined4 *puStack36;
		ScriptAbstract *pSStack32;
		int *piStack28;
		undefined4 uStack24;
		ScriptAbstract *local_14;
		UnkFamily27A *local_10;
		UnkFamily27A *local_c;
		int iStack8;
		bVar15 = element->field1_0x4 == 0;
		local_30 = 0;
		local_2c = (MemoryStream *)0x4000;
		pSStack52 = (ScriptAbstract *)CONCAT13(bVar15,pSStack52._0_3_);
		bVar12 = 1;
		local_14 = (ScriptAbstract *)0xffffffff;
		this->flags = this->flags | 0x4000;
		if (bVar15) {
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)element->vtable);
		if (bVar2 == false) {
		LAB_001c1503:bVar3 = 0;
		}
		else if (element->field1_0x4 == 0) {
		bVar3 = (**(code **)(element->vtable->Dispose + 0x74))(0x904,&local_2c);
		}
		else {
		if (element->field1_0x4 != 1) goto LAB_001c1503;
		bVar3 = (**(code **)(element->vtable->Dispose + 0x24))(0x904,local_2c);
		}
		bVar16 = false;
		bVar2 = false;
		bufferOut = &local_10;
		pMVar7 = local_2c;
		pPVar5 = PhysicalPool::GetPool();
		PhysicalPool::CreateBuffer(pPVar5,(int *)bufferOut,(uint)pMVar7,bVar2,bVar16);
		local_14 = (ScriptAbstract *)pPVar5->alignedStart;
		ppSVar11 = &local_14;
		pPVar5 = PhysicalPool::GetPool();
		piVar6 = PhysicalPool::GetBufferPointerByIndex(pPVar5,(int *)ppSVar11);
		pMVar7 = (MemoryStream *)VirtualPool::AllocateMemory(0x14);
		if (pMVar7 == (MemoryStream *)0x0) {
		local_28 = (MemoryStream *)0x0;
		}
		else {
		local_28 = MemoryStream::Construct(pMVar7,piVar6,(size_t)local_2c,0,1);
		}
		if (element->field1_0x4 == 0) {
		bVar12 = (**(code **)(element->vtable->Dispose + 0x90))(0x903,&local_2c,piVar6);
		bVar12 = bVar3 & 1 & bVar12;
		}
		else if (element->field1_0x4 == 1) {
		bVar12 = (**(code **)(element->vtable->Dispose + 0x40))(0x903,local_2c,piVar6);
		bVar12 = bVar3 & 1 & bVar12;
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
		ppSVar11 = this->elements;
		uVar8 = this->flags & 0x3fff;
		do {
		if (*ppSVar11 != (ScriptAbstract *)0x0) {
		local_30 = local_30 + 1;
		}
		ppSVar11 = ppSVar11 + 1;
		uVar8 = uVar8 - 1;
		}
		 while (uVar8 != 0);
		}
		}
		pMVar7 = local_28;
		FUN_0020f9d0(&local_c,local_28,(int **)element);
		piStack28 = (int *)0x0;
		uStack24 = 0;
		bVar2 = UnkFamily27A::FUN_0020c0a0(local_c);
		if (bVar2 == false) {
		LAB_001c1664:bVar3 = 0;
		}
		else if (iStack8 == 0) {
		bVar3 = (*(code *)((local_c->parent).vtable)->somethingTemplate)(0x900,&local_30);
		}
		else {
		if (iStack8 != 1) goto LAB_001c1664;
		bVar3 = (*(code *)((local_c->parent).vtable)->field9_0x24)(0x900,local_30);
		}
		bVar2 = (bool)(bVar12 & bVar3);
		pCVar1 = (this->parent).vtable;
		if (bVar15) {
		(*pCVar1->Stub1)();
		cVar17 = (char)((uint)unaff_EDI >> 0x18);
		cVar18 = (char)((uint)unaff_EBX >> 0x18);
		local_14 = (ScriptAbstract *)0x0;
		pSVar13 = pSStack32;
		puVar14 = puStack36;
		if (pSStack52 != (ScriptAbstract *)0x0) {
		do {
		bVar15 = UnkFamily27A::FUN_0020c0a0(local_10);
		if (bVar15 == false) {
		LAB_001c16e3:bVar12 = 0;
		element = unaff_retaddr;
		}
		else if (local_c == (UnkFamily27A *)0x0) {
		bVar12 = (*(code *)((local_10->parent).vtable)->somethingTemplate)(0x901,&local_28);
		element = unaff_retaddr;
		}
		else {
		if (local_c != (UnkFamily27A *)0x1) goto LAB_001c16e3;
		bVar12 = (*(code *)((local_10->parent).vtable)->field9_0x24)(0x901,local_28);
		element = unaff_retaddr;
		}
		piVar6 = (int *)this->field4_0x10;
		bVar12 = bVar2 & bVar12;
		uVar4 = (ushort)local_28 & 0x7fff;
		this->indexes[(int)pSVar13] = uVar4;
		if (piVar6 != (int *)0x0) {
		*(ushort *)((int)piVar6 + *piVar6 * 2 + 4) = uVar4;
		*piVar6 = *piVar6 + 1;
		}
		pSStack32 = this->elements[(int)local_28];
		if (pSStack32 == (ScriptAbstract *)0x0) {
		if (local_c == (UnkFamily27A *)0x0) {
		uVar8 = FUN_001c1c70(local_10,&pSStack32,0x902,1);
		bVar3 = (byte)uVar8;
		}
		else if (local_c == (UnkFamily27A *)0x1) {
		uVar8 = FUN_001c1a20(local_10,0,0x902,1);
		bVar3 = (byte)uVar8;
		}
		else {
		bVar3 = 0;
		}
		bVar2 = (bool)(bVar12 & bVar3);
		pSStack32->index = (int)local_28;
		this->elements[(int)local_28] = pSStack32;
		pSVar13 = (ScriptAbstract *)((int)&pSVar13->vtable + 1);
		}
		else if ((char)(this->flags >> 8) < '\0') {
		bVar3 = (*(code *)((local_10->parent).vtable)->field57_0xe4)(0x902);
		bVar2 = (bool)(bVar12 & bVar3);
		}
		else {
		if (local_c == (UnkFamily27A *)0x0) {
		uVar8 = FUN_001c1c70(local_10,&puStack36,0x902,1);
		bVar3 = (byte)uVar8;
		puVar14 = puStack36;
		}
		else if (local_c == (UnkFamily27A *)0x1) {
		uVar8 = FUN_001c1a20(local_10,puVar14,0x902,1);
		bVar3 = (byte)uVar8;
		puVar14 = puStack36;
		}
		else {
		bVar3 = 0;
		}
		bVar2 = (bool)(bVar12 & bVar3);
		if (puVar14 != (undefined4 *)0x0) {
		(**(code **)*puVar14)(1);
		puVar14 = puStack36;
		}
		}
		cVar17 = (char)((uint)unaff_EDI >> 0x18);
		cVar18 = (char)((uint)unaff_EBX >> 0x18);
		if ((pSStack32->field1_0x4 & 0x20000) == 0) {
		pSStack32->field1_0x4 = pSStack32->field1_0x4 | 0x20000;
		}
		local_14 = (ScriptAbstract *)((int)&local_14->vtable + 1);
		pMVar7 = local_2c;
		unaff_retaddr = element;
		}
		 while (local_14 < pSStack52);
		}
		}
		else {
		(*pCVar1->Stub3)(local_30);
		cVar17 = (char)((uint)unaff_EDI >> 0x18);
		cVar18 = (char)((uint)unaff_EBX >> 0x18);
		uVar8 = 0;
		pSVar13 = pSStack32;
		if ((this->flags & 0x3fff) != 0) {
		do {
		local_14 = this->elements[uVar8];
		if (local_14 != (ScriptAbstract *)0x0) {
		piVar6 = (int *)this->field4_0x10;
		uVar4 = (ushort)uVar8 & 0x7fff;
		this->indexes[(int)piStack28] = uVar4;
		if (piVar6 != (int *)0x0) {
		*(ushort *)((int)piVar6 + *piVar6 * 2 + 4) = uVar4;
		*piVar6 = *piVar6 + 1;
		}
		bVar15 = UnkFamily27A::FUN_0020c0a0(local_10);
		if (bVar15 == false) {
		LAB_001c18a5:bVar12 = 0;
		}
		else if (local_c == (UnkFamily27A *)0x0) {
		bVar12 = (*(code *)((local_10->parent).vtable)->somethingTemplate)(0x901,register0x00000010);
		}
		else {
		if (local_c != (UnkFamily27A *)0x1) goto LAB_001c18a5;
		bVar12 = (*(code *)((local_10->parent).vtable)->field9_0x24)(0x901,uVar8);
		}
		if (local_c == (UnkFamily27A *)0x0) {
		uVar9 = FUN_001c1c70(local_10,&local_14,0x902,1);
		bVar3 = (byte)uVar9;
		}
		else if (local_c == (UnkFamily27A *)0x1) {
		uVar9 = FUN_001c1a20(local_10,local_14,0x902,1);
		bVar3 = (byte)uVar9;
		}
		else {
		bVar3 = 0;
		}
		bVar2 = (bool)(bVar2 & bVar12 & bVar3);
		piStack28 = (int *)((int)piStack28 + 1);
		pMVar7 = local_2c;
		}
		cVar17 = (char)((uint)unaff_EDI >> 0x18);
		cVar18 = (char)((uint)unaff_EBX >> 0x18);
		uVar8 = uVar8 + 1;
		pSVar13 = pSStack32;
		}
		 while (uVar8 < (this->flags & 0x3fff));
		}
		}
		pSStack32 = pSVar13;
		FUN_0020d1c0((int **)&local_10);
		if (cVar18 != '\0') {
		(*((this->parent).vtable)->Stub2)(pSStack32,pSStack52,0);
		goto LAB_001c19db;
		}
		sVar10 = (*pMVar7->vtable->GetPosition)(pMVar7);
		(*pMVar7->vtable->Rewind)(pMVar7);
		bVar15 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)element->vtable);
		if (bVar15 == false) {
		LAB_001c1983:bVar12 = 0;
		}
		else if (element->field1_0x4 == 0) {
		bVar12 = (**(code **)(element->vtable->Dispose + 0x74))(0x904,register0x00000010);
		}
		else {
		if (element->field1_0x4 != 1) goto LAB_001c1983;
		bVar12 = (**(code **)(element->vtable->Dispose + 0x24))(0x904,sVar10);
		}
		(*pMVar7->vtable->Rewind)(pMVar7);
		if (element->field1_0x4 == 0) {
		bVar3 = (**(code **)(element->vtable->Dispose + 0x90))(0x903,register0x00000010,pMVar7->startPtr);
		}
		else if (element->field1_0x4 == 1) {
		bVar3 = (**(code **)(element->vtable->Dispose + 0x40))(0x903,sVar10,pMVar7->startPtr);
		}
		else {
		bVar3 = 0;
		}
		bVar2 = (bool)(bVar2 & bVar12 & bVar3);
		(*((this->parent).vtable)->Stub4)(piStack28,0);
		LAB_001c19db:if (pMVar7 != (MemoryStream *)0x0) {
		(*pMVar7->vtable->Dispose)(pMVar7,1);
		}
		if (cVar17 != '\0') {
		ptr = &puStack36;
		pPVar5 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar5,ptr);
		}
		this->flags = this->flags & 0xffffbfff;
		FUN_0020d1c0(&piStack28);
		return bVar2;
		}
		
	*/
	return false;
}

void SectionDataScriptBase::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataScriptBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataScriptBase::UnkMethod1(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataScriptBase::UnkMethod1(SectionDataScriptBase *this,uint param_1){
		ScriptAbstract *pSVar1;
		uint i;
		i = 0;
		if (param_1 != 0) {
		do {
		pSVar1 = this->elements[(ushort)this->indexes[i]];
		if (pSVar1 != (ScriptAbstract *)0x0) {
		(*pSVar1->vtable->SetFlag)(pSVar1);
		}
		i = i + 1;
		}
		 while (i < param_1);
		}
		return;
		}
		
	*/
	return;
}

void SectionDataScriptBase::EmptyFunction_9() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataScriptBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataScriptBase::EmptyFunction_10() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataScriptBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataScriptBase::EmptyFunction_11() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataScriptBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataScriptBase::Add(int param_1, uint param_2, ScriptAbstract* element, int* param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataScriptBase::Add(SectionDataScriptBase *this,int param_1,uint param_2,ScriptAbstract *element,int *param_4){
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

