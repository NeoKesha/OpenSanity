#include "headers/Known/LevelStructure/Data/CodeSectionData/GameObject/SectionDataGameObjectBase.h"

#include "headers/Unknown/IndexToIdList.h"
#include "headers/Known/GameData/GameObject/GameObject.h"
#include "headers/Known/Game/GameResources/ResourceList/ResourceListGameObject.h"
GameObject* SectionDataGameObjectBase::InitGameObject(ushort index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameObject * __thiscall SectionDataGameObjectBase::InitGameObject(SectionDataGameObjectBase *this,ushort index){
		uint _index;
		GameObject *puVar1;
		GameObject *element;
		if (index != 0xffff) {
		_index = index & 0x7fff;
		element = this->elements[_index];
		if (element == (GameObject *)0x0) {
		puVar1 = (GameObject *)VirtualPool::AllocateMemory(0x60);
		if (puVar1 == (GameObject *)0x0) {
		element = (GameObject *)0x0;
		}
		else {
		element = (GameObject *)GameObject::Construct(puVar1);
		}
		element->index = _index;
		}
		element->field0_0x0 = (int *)((uint)element->field0_0x0 & 0xfffdffff);
		*(short *)&element->field0_0x0 = *(short *)&element->field0_0x0 + 1;
		this->elements[_index] = element;
		return element;
		}
		return (GameObject *)0x0;
		}
		
	*/
	return null;
}

void SectionDataGameObjectBase::Construct(uint elementCount, byte param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataGameObjectBase * __thiscall SectionDataGameObjectBase::Construct(SectionDataGameObjectBase *this,uint elementCount,byte param_2){
		GameObject **ppGVar1;
		short *psVar2;
		uint i;
		(this->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_GameObject_Base;
		this->field4_0x10 = 0;
		this->gameObjectList = (ResourceListGameObject *)0x0;
		this->elementsCount = 0;
		this->elementsCount =(param_2 & 1) << 0xf | this->elementsCount & 0xffff4000 | elementCount & 0x3fff;
		ppGVar1 = (GameObject **)VirtualPool::AllocateMemory(elementCount * 4);
		this->elements = ppGVar1;
		psVar2 = (short *)VirtualPool::AllocateMemory(elementCount * 2);
		this->indexes = psVar2;
		i = 0;
		if (elementCount != 0) {
		do {
		this->elements[i] = (GameObject *)0x0;
		i = i + 1;
		}
		 while (i < elementCount);
		}
		return this;
		}
		
	*/
	return;
}

void SectionDataGameObjectBase::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataGameObjectBase::CleanUp(SectionDataGameObject *this){
		GameObject *this_00;
		uint i;
		i = 0;
		if (((this->parent).elementsCount & 0x3fff) != 0) {
		do {
		this_00 = (this->parent).elements[i];
		if (this_00 != (GameObject *)0x0) {
		GameObject::Dispose(this_00);
		VirtualPool::FreeMemory(this_00);
		(this->parent).elements[i] = (GameObject *)0x0;
		}
		i = i + 1;
		}
		 while (i < ((this->parent).elementsCount & 0x3fff));
		}
		return;
		}
		
	*/
	return;
}

void SectionDataGameObjectBase::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataGameObjectBase::Dispose(SectionDataGameObjectBase *this){
		(this->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_GameObject_Base;
		CleanUp((SectionDataGameObject *)this);
		VirtualPool::FreeMemory(this->elements);
		VirtualPool::FreeMemory(this->indexes);
		return;
		}
		
	*/
	return;
}

void SectionDataGameObjectBase::Dispose_4(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataGameObjectBase * __thiscall SectionDataGameObjectBase::Dispose(SectionDataGameObjectBase *this,byte param_1){
		(this->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_GameObject_Base;
		CleanUp((SectionDataGameObject *)this);
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

void SectionDataGameObjectBase::Dispose_5() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataGameObjectBase::Dispose(SectionDataGameObjectBase *this){
		(this->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_GameObject_Base;
		CleanUp((SectionDataGameObject *)this);
		VirtualPool::FreeMemory(this->elements);
		VirtualPool::FreeMemory(this->indexes);
		return;
		}
		
	*/
	return;
}

uint SectionDataGameObjectBase::AddElement(GameObject* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps uint __thiscall SectionDataGameObjectBase::AddElement(SectionDataGameObjectBase *this,GameObject *element){
		CodeSectionDataAbstract_VTable *pCVar1;
		byte bVar2;
		ushort uVar3;
		PhysicalPool *pool;
		int *piVar4;
		MemoryStream *stream2;
		uint uVar5;
		uint i;
		GameObject **elements;
		byte bVar6;
		undefined4 unaff_EBX;
		MemoryStream *stream1;
		undefined4 unaff_EDI;
		int iVar7;
		size_t sVar8;
		bool bVar9;
		GameObject *unaff_retaddr;
		uint *ptr;
		int **bufferOut;
		bool bVar10;
		bool bVar11;
		char cVar12;
		char cVar13;
		GameObject *pGStack56;
		int occupiedSlots;
		size_t size;
		GameObject *pGStack44;
		uint uStack40;
		MemoryStream *stream3;
		MemoryStream *stream4;
		int *local_1c;
		GameObject *local_18;
		int iStack20;
		int *local_10;
		int local_c [3];
		stream1 = (MemoryStream *)0x0;
		bVar9 = element->index == 0;
		occupiedSlots = 0;
		size = 0x4000;
		pGStack56 = (GameObject *)CONCAT13(bVar9,pGStack56._0_3_);
		bVar6 = 1;
		local_18 = (GameObject *)0xffffffff;
		this->elementsCount = this->elementsCount | 0x4000;
		if (bVar9) {
		i = FUN_00119660(element,&size,0x904);
		bVar11 = false;
		bVar10 = false;
		bufferOut = &local_10;
		sVar8 = size;
		pool = PhysicalPool::GetPool();
		PhysicalPool::CreateBuffer(pool,(int *)bufferOut,sVar8,bVar10,bVar11);
		local_18 = (GameObject *)pool->alignedStart;
		elements = &local_18;
		pool = PhysicalPool::GetPool();
		piVar4 = PhysicalPool::GetBufferPointerByIndex(pool,(int *)elements);
		stream2 = (MemoryStream *)VirtualPool::AllocateMemory(0x14);
		if (stream2 != (MemoryStream *)0x0) {
		stream1 = MemoryStream::Construct(stream2,piVar4,size,0,1);
		}
		stream4 = stream1;
		uVar5 = GameObject::FUN_0015c960(element,piVar4,&size,0x903);
		bVar6 = (byte)i & 1 & (byte)uVar5;
		}
		else {
		stream2 = (MemoryStream *)VirtualPool::AllocateMemory(0x14);
		if (stream2 != (MemoryStream *)0x0) {
		stream1 = MemoryStream::Contruct2(stream2,size,1,1);
		}
		stream4 = stream1;
		if ((this->elementsCount & 0x3fff) != 0) {
		elements = this->elements;
		i = this->elementsCount & 0x3fff;
		do {
		if (*elements != (GameObject *)0x0) {
		occupiedSlots = occupiedSlots + 1;
		}
		elements = elements + 1;
		i = i - 1;
		}
		 while (i != 0);
		}
		}
		FUN_0020f9d0(local_c,stream1,&element->field0_0x0);
		iVar7 = 0;
		local_1c = (int *)0x0;
		local_10 = (int *)0x0;
		i = FUN_00119660(local_c,&occupiedSlots,0x900);
		pCVar1 = (this->parent).vtable;
		bVar6 = bVar6 & (byte)i;
		if (bVar9) {
		(*pCVar1->Stub1)();
		cVar12 = (char)((uint)unaff_EDI >> 0x18);
		cVar13 = (char)((uint)unaff_EBX >> 0x18);
		local_18 = (GameObject *)0x0;
		sVar8 = size;
		if (pGStack56 != (GameObject *)0x0) {
		do {
		i = FUN_00119660(&local_10,&uStack40,0x901);
		piVar4 = (int *)this->field4_0x10;
		bVar6 = bVar6 & (byte)i;
		uVar3 = (ushort)uStack40 & 0x7fff;
		this->indexes[(int)stream4] = uVar3;
		if (piVar4 != (int *)0x0) {
		*(ushort *)((int)piVar4 + *piVar4 * 2 + 4) = uVar3;
		*piVar4 = *piVar4 + 1;
		}
		pGStack44 = this->elements[uStack40];
		if (pGStack44 == (GameObject *)0x0) {
		if (local_c[0] == 0) {
		i = FUN_001c13b0(local_10,&pGStack44,0x902,1);
		bVar2 = (byte)i;
		}
		else if (local_c[0] == 1) {
		i = FUN_001c11a0(local_10,0,0x902,1);
		bVar2 = (byte)i;
		}
		else {
		bVar2 = 0;
		}
		bVar6 = bVar6 & bVar2;
		pGStack44->index = uStack40;
		this->elements[uStack40] = pGStack44;
		stream4 = (MemoryStream *)((int)&stream4->vtable + 1);
		}
		else if ((char)(this->elementsCount >> 8) < '\0') {
		bVar2 = (**(code **)(*local_10 + 0xe4))(0x902);
		bVar6 = bVar6 & bVar2;
		}
		else {
		if (local_c[0] == 0) {
		i = FUN_001c13b0(local_10,&size,0x902,1);
		bVar2 = (byte)i;
		sVar8 = size;
		}
		else if (local_c[0] == 1) {
		i = FUN_001c11a0(local_10,sVar8,0x902,1);
		bVar2 = (byte)i;
		sVar8 = size;
		}
		else {
		bVar2 = 0;
		}
		bVar6 = bVar6 & bVar2;
		FUN_001a77b0((int)pGStack44,sVar8);
		sVar8 = size;
		if (size != 0) {
		GameObject::Dispose((GameObject *)size);
		VirtualPool::FreeMemory((void *)sVar8);
		sVar8 = size;
		}
		}
		cVar12 = (char)((uint)unaff_EDI >> 0x18);
		cVar13 = (char)((uint)unaff_EBX >> 0x18);
		if (((uint)pGStack44->field0_0x0 & 0x20000) == 0) {
		pGStack44->field0_0x0 = (int *)((uint)pGStack44->field0_0x0 | 0x20000);
		}
		local_18 = (GameObject *)((int)&local_18->field0_0x0 + 1);
		stream1 = stream3;
		iVar7 = iStack20;
		}
		 while (local_18 < pGStack56);
		}
		}
		else {
		(*pCVar1->Stub3)(occupiedSlots);
		cVar12 = (char)((uint)unaff_EDI >> 0x18);
		cVar13 = (char)((uint)unaff_EBX >> 0x18);
		stream3 = (MemoryStream *)0x0;
		if ((this->elementsCount & 0x3fff) != 0) {
		do {
		local_18 = this->elements[(int)stream3];
		if (local_18 != (GameObject *)0x0) {
		piVar4 = (int *)this->field4_0x10;
		uVar3 = (ushort)stream3 & 0x7fff;
		this->indexes[iVar7] = uVar3;
		if (piVar4 != (int *)0x0) {
		*(ushort *)((int)piVar4 + *piVar4 * 2 + 4) = uVar3;
		*piVar4 = *piVar4 + 1;
		}
		i = FUN_00119660(&local_10,&stream3,0x901);
		if (local_c[0] == 0) {
		uVar5 = FUN_001c13b0(local_10,&local_18,0x902,1);
		bVar2 = (byte)uVar5;
		}
		else if (local_c[0] == 1) {
		uVar5 = FUN_001c11a0(local_10,local_18,0x902,1);
		bVar2 = (byte)uVar5;
		}
		else {
		bVar2 = 0;
		}
		bVar6 = bVar6 & (byte)i & bVar2;
		iVar7 = iVar7 + 1;
		}
		cVar12 = (char)((uint)unaff_EDI >> 0x18);
		cVar13 = (char)((uint)unaff_EBX >> 0x18);
		stream3 = (MemoryStream *)((int)&stream3->vtable + 1);
		}
		 while (stream3 < (MemoryStream *)(this->elementsCount & 0x3fff));
		}
		}
		FUN_0020d1c0(&local_10);
		if (cVar13 == '\0') {
		local_18 = (GameObject *)(*stream1->vtable->GetPosition)(stream1);
		(*stream1->vtable->Rewind)(stream1);
		i = FUN_00119660(unaff_retaddr,&local_18,0x904);
		(*stream1->vtable->Rewind)(stream1);
		uVar5 = GameObject::FUN_0015c960(unaff_retaddr,stream1->startPtr,&local_18,0x903);
		bVar6 = bVar6 & (byte)i & (byte)uVar5;
		(*((this->parent).vtable)->Stub4)(iVar7,0);
		}
		else {
		(*((this->parent).vtable)->Stub2)(stream4,pGStack56,0);
		}
		if (stream1 != (MemoryStream *)0x0) {
		(*stream1->vtable->Dispose)(stream1,1);
		}
		if (cVar12 != '\0') {
		ptr = &uStack40;
		pool = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pool,ptr);
		}
		this->elementsCount = this->elementsCount & 0xffffbfff;
		i = FUN_0020d1c0(&local_1c);
		return i & 0xffffff00 | (uint)bVar6;
		}
		
	*/
	return 0;
}

void SectionDataGameObjectBase::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataGameObjectBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataGameObjectBase::EmptyFunction_8() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataGameObjectBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataGameObjectBase::EmptyFunction_9() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataGameObjectBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataGameObjectBase::EmptyFunction_10() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataGameObjectBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataGameObjectBase::Add(int id, uint index, GameObject* element, IndexToIdList* unk404) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataGameObjectBase::Add(SectionDataGameObjectBase *this,int id,uint index,GameObject *element,IndexToIdList *unk404){
		ushort uVar1;
		this->elements[index & 0x7fff] = element;
		uVar1 = (ushort)index & 0x7fff;
		this->indexes[id] = uVar1;
		if (unk404 != (IndexToIdList *)0x0) {
		unk404->ids[unk404->cnt] = uVar1;
		unk404->cnt = unk404->cnt + 1;
		}
		return;
		}
		
	*/
	return;
}

