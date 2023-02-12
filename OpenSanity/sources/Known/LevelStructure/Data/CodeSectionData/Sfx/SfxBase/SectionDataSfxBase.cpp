#include "headers/Known/LevelStructure/Data/CodeSectionData/Sfx/SfxBase/SectionDataSfxBase.h"

#include "headers/Known/Game/GameResources/ResourceList/ResourceListSound.h"
#include "headers/Known/GameData/Sfx/Sfx.h"

SectionDataSfxBase::SectionDataSfxBase() {
	this->field4_0x10 = 0;
	this->sfxList = null;
	this->flags = 0;
	this->elements = null;
	this->indexes = null;
}

SectionDataSfxBase::SectionDataSfxBase(uint elementCount, byte param_2) {
	this->field4_0x10 = 0;
	this->sfxList = null;
	this->flags = 0;
	this->flags = (param_2 & 1) << 0xf | this->flags & 0xffff4000 | elementCount & 0x3fff;
	this->elements = new Sfx * [elementCount];
	this->indexes = new short[elementCount];
	for (int i = 0; i < elementCount; ++i) {
		this->elements[i] = null;
	}
}

SectionDataSfxBase::~SectionDataSfxBase() {
	CleanUp();
	delete indexes;
	delete elements;
}

void SectionDataSfxBase::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataSfxBase::CleanUp(SectionDataSfxBase *this){
		uint i;
		Sfx *snd;
		i = 0;
		if ((this->flags & 0x3fff) != 0) {
		do {
		snd = this->elements[i];
		if (snd != (Sfx *)0x0) {
		Sfx::Dispose(snd);
		VirtualPool::FreeMemory(snd);
		this->elements[i] = (Sfx *)0x0;
		}
		i = i + 1;
		}
		 while (i < (this->flags & 0x3fff));
		}
		return;
		}
		
	*/
	return;
}

uint SectionDataSfxBase::AddElement(Sfx* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall SectionDataSfxBase::AddElement(SectionDataSfxBase *this,Sfx *element){
		byte bVar1;
		byte bVar2;
		ushort uVar3;
		PhysicalPool *pool;
		int *piVar4;
		MemoryStream *stream;
		MemoryStream *memptrStream2;
		uint i;
		uint uVar5;
		size_t sVar6;
		Sfx **elementsArray;
		byte bVar7;
		undefined4 unaff_EBX;
		Sfx *pSVar8;
		Sfx *this_00;
		undefined4 unaff_EDI;
		bool bVar9;
		Sfx *unaff_retaddr;
		UnkFamily27A **bufferOut;
		char cVar10;
		char cVar11;
		uint pSStack52;
		int occupiedSpace;
		int _length;
		MemoryStream *stream2;
		Sfx *pSStack36;
		Sfx *pSStack32;
		int *piStack28;
		undefined4 uStack24;
		int poolStart;
		UnkFamily27A *local_10;
		UnkFamily27A *local_c;
		int iStack8;
		int length;
		bool flag1;
		bool flag2;
		bVar9 = element->index == 0;
		occupiedSpace = 0;
		_length = 0x4000;
		pSStack52 = pSStack52 & 0xffffff | (uint)bVar9 << 0x18;
		bVar7 = 1;
		poolStart = -1;
		this->flags = this->flags | 0x4000;
		if (bVar9) {
		flag2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)element->flags);
		if (flag2 == false) {
		LAB_001c3773:bVar1 = 0;
		}
		else if (element->index == 0) {
		bVar1 = (**(code **)(*(int *)element->flags + 0x74))(0x904,&_length);
		}
		else {
		if (element->index != 1) goto LAB_001c3773;
		bVar1 = (**(code **)(*(int *)element->flags + 0x24))(0x904,_length);
		}
		flag1 = false;
		flag2 = false;
		bufferOut = &local_10;
		length = _length;
		pool = PhysicalPool::GetPool();
		PhysicalPool::CreateBuffer(pool,(int *)bufferOut,length,flag2,flag1);
		poolStart = (int)pool->alignedStart;
		piVar4 = &poolStart;
		pool = PhysicalPool::GetPool();
		piVar4 = PhysicalPool::GetBufferPointerByIndex(pool,piVar4);
		stream = (MemoryStream *)VirtualPool::AllocateMemory(0x14);
		if (stream == (MemoryStream *)0x0) {
		stream2 = (MemoryStream *)0x0;
		}
		else {
		stream2 = MemoryStream::Construct(stream,piVar4,_length,0,1);
		}
		if (element->index == 0) {
		bVar7 = (**(code **)(*(int *)element->flags + 0x90))(0x903,&_length,piVar4);
		bVar7 = bVar1 & 1 & bVar7;
		}
		else if (element->index == 1) {
		bVar7 = (**(code **)(*(int *)element->flags + 0x40))(0x903,_length,piVar4);
		bVar7 = bVar1 & 1 & bVar7;
		}
		else {
		bVar7 = 0;
		}
		}
		else {
		memptrStream2 = (MemoryStream *)VirtualPool::AllocateMemory(0x14);
		if (memptrStream2 == (MemoryStream *)0x0) {
		stream2 = (MemoryStream *)0x0;
		}
		else {
		stream2 = MemoryStream::Contruct2(memptrStream2,_length,1,1);
		}
		if ((this->flags & 0x3fff) != 0) {
		elementsArray = this->elements;
		i = this->flags & 0x3fff;
		do {
		if (*elementsArray != (Sfx *)0x0) {
		occupiedSpace = occupiedSpace + 1;
		}
		elementsArray = elementsArray + 1;
		i = i - 1;
		}
		 while (i != 0);
		}
		}
		memptrStream2 = stream2;
		FUN_0020f9d0(&local_c,stream2,(int **)element);
		piStack28 = (int *)0x0;
		uStack24 = 0;
		flag2 = UnkFamily27A::FUN_0020c0a0(local_c);
		if (flag2 == false) {
		LAB_001c38d4:bVar1 = 0;
		}
		else if (iStack8 == 0) {
		bVar1 = (*(code *)((local_c->parent).vtable)->somethingTemplate)(0x900,&occupiedSpace);
		}
		else {
		if (iStack8 != 1) goto LAB_001c38d4;
		bVar1 = (*(code *)((local_c->parent).vtable)->field9_0x24)(0x900,occupiedSpace);
		}
		bVar7 = bVar7 & bVar1;
		if (bVar9) {
		(*((this->parent).vtable)->Stub1)(occupiedSpace);
		cVar10 = (char)((uint)unaff_EDI >> 0x18);
		cVar11 = (char)((uint)unaff_EBX >> 0x18);
		poolStart = 0;
		pSVar8 = pSStack32;
		this_00 = pSStack36;
		if (pSStack52 != 0) {
		do {
		bVar9 = UnkFamily27A::FUN_0020c0a0(local_10);
		if (bVar9 == false) {
		LAB_001c3953:bVar1 = 0;
		element = unaff_retaddr;
		}
		else if (local_c == (UnkFamily27A *)0x0) {
		bVar1 = (*(code *)((local_10->parent).vtable)->somethingTemplate)(0x901,&stream2);
		element = unaff_retaddr;
		}
		else {
		if (local_c != (UnkFamily27A *)0x1) goto LAB_001c3953;
		bVar1 = (*(code *)((local_10->parent).vtable)->field9_0x24)(0x901,stream2);
		element = unaff_retaddr;
		}
		piVar4 = (int *)this->field4_0x10;
		bVar7 = bVar7 & bVar1;
		uVar3 = (ushort)stream2 & 0x7fff;
		this->indexes[(int)pSVar8] = uVar3;
		if (piVar4 != (int *)0x0) {
		*(ushort *)((int)piVar4 + *piVar4 * 2 + 4) = uVar3;
		*piVar4 = *piVar4 + 1;
		}
		pSStack32 = this->elements[(int)stream2];
		if (pSStack32 == (Sfx *)0x0) {
		if (local_c == (UnkFamily27A *)0x0) {
		i = FUN_001c3eb0(local_10,&pSStack32,0x902,1);
		bVar1 = (byte)i;
		}
		else if (local_c == (UnkFamily27A *)0x1) {
		i = FUN_001c3ca0(local_10,0,0x902,1);
		bVar1 = (byte)i;
		}
		else {
		bVar1 = 0;
		}
		bVar7 = bVar7 & bVar1;
		pSStack32->index = stream2;
		this->elements[(int)stream2] = pSStack32;
		pSVar8 = (Sfx *)((int)&pSVar8->flags + 1);
		}
		else if ((char)(this->flags >> 8) < '\0') {
		bVar1 = (*(code *)((local_10->parent).vtable)->field57_0xe4)(0x902);
		bVar7 = bVar7 & bVar1;
		}
		else {
		if (local_c == (UnkFamily27A *)0x0) {
		i = FUN_001c3eb0(local_10,&pSStack36,0x902,1);
		bVar1 = (byte)i;
		this_00 = pSStack36;
		}
		else if (local_c == (UnkFamily27A *)0x1) {
		i = FUN_001c3ca0(local_10,this_00,0x902,1);
		bVar1 = (byte)i;
		this_00 = pSStack36;
		}
		else {
		bVar1 = 0;
		}
		bVar7 = bVar7 & bVar1;
		if (this_00 != (Sfx *)0x0) {
		Sfx::Dispose(this_00);
		VirtualPool::FreeMemory(this_00);
		this_00 = pSStack36;
		}
		}
		cVar10 = (char)((uint)unaff_EDI >> 0x18);
		cVar11 = (char)((uint)unaff_EBX >> 0x18);
		if ((pSStack32->flags & 0x20000) == 0) {
		pSStack32->flags = pSStack32->flags | 0x20000;
		}
		poolStart = poolStart + 1;
		memptrStream2 = (MemoryStream *)_length;
		unaff_retaddr = element;
		}
		 while ((uint)poolStart < pSStack52);
		}
		}
		else {
		(*((this->parent).vtable)->Stub3)(occupiedSpace);
		cVar10 = (char)((uint)unaff_EDI >> 0x18);
		cVar11 = (char)((uint)unaff_EBX >> 0x18);
		i = 0;
		pSVar8 = pSStack32;
		if ((this->flags & 0x3fff) != 0) {
		do {
		poolStart = (int)this->elements[i];
		if ((Sfx *)poolStart != (Sfx *)0x0) {
		piVar4 = (int *)this->field4_0x10;
		uVar3 = (ushort)i & 0x7fff;
		this->indexes[(int)piStack28] = uVar3;
		if (piVar4 != (int *)0x0) {
		*(ushort *)((int)piVar4 + *piVar4 * 2 + 4) = uVar3;
		*piVar4 = *piVar4 + 1;
		}
		bVar9 = UnkFamily27A::FUN_0020c0a0(local_10);
		if (bVar9 == false) {
		LAB_001c3b25:bVar1 = 0;
		}
		else if (local_c == (UnkFamily27A *)0x0) {
		bVar1 = (*(code *)((local_10->parent).vtable)->somethingTemplate)(0x901,register0x00000010);
		}
		else {
		if (local_c != (UnkFamily27A *)0x1) goto LAB_001c3b25;
		bVar1 = (*(code *)((local_10->parent).vtable)->field9_0x24)(0x901,i);
		}
		if (local_c == (UnkFamily27A *)0x0) {
		uVar5 = FUN_001c3eb0(local_10,&poolStart,0x902,1);
		bVar2 = (byte)uVar5;
		}
		else if (local_c == (UnkFamily27A *)0x1) {
		uVar5 = FUN_001c3ca0(local_10,poolStart,0x902,1);
		bVar2 = (byte)uVar5;
		}
		else {
		bVar2 = 0;
		}
		bVar7 = bVar7 & bVar1 & bVar2;
		piStack28 = (int *)((int)piStack28 + 1);
		memptrStream2 = (MemoryStream *)_length;
		}
		cVar10 = (char)((uint)unaff_EDI >> 0x18);
		cVar11 = (char)((uint)unaff_EBX >> 0x18);
		i = i + 1;
		pSVar8 = pSStack32;
		}
		 while (i < (this->flags & 0x3fff));
		}
		}
		pSStack32 = pSVar8;
		FUN_0020d1c0((int **)&local_10);
		if (cVar11 != '\0') {
		(*((this->parent).vtable)->Stub2)(pSStack32,pSStack52,0);
		goto LAB_001c3c5b;
		}
		sVar6 = (*memptrStream2->vtable->GetPosition)(memptrStream2);
		(*memptrStream2->vtable->Rewind)(memptrStream2);
		bVar9 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)element->flags);
		if (bVar9 == false) {
		LAB_001c3c03:bVar1 = 0;
		}
		else if (element->index == 0) {
		bVar1 = (**(code **)(*(int *)element->flags + 0x74))(0x904,register0x00000010);
		}
		else {
		if (element->index != 1) goto LAB_001c3c03;
		bVar1 = (**(code **)(*(int *)element->flags + 0x24))(0x904,sVar6);
		}
		(*memptrStream2->vtable->Rewind)(memptrStream2);
		if (element->index == 0) {
		bVar2 = (**(code **)(*(int *)element->flags + 0x90))(0x903,register0x00000010,memptrStream2->startPtr);
		}
		else if (element->index == 1) {
		bVar2 = (**(code **)(*(int *)element->flags + 0x40))(0x903,sVar6,memptrStream2->startPtr);
		}
		else {
		bVar2 = 0;
		}
		bVar7 = bVar7 & bVar1 & bVar2;
		(*((this->parent).vtable)->Stub4)(piStack28,0);
		LAB_001c3c5b:if (memptrStream2 != (MemoryStream *)0x0) {
		(*memptrStream2->vtable->Dispose)(memptrStream2,1);
		}
		if (cVar10 != '\0') {
		elementsArray = &pSStack36;
		pool = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pool,elementsArray);
		}
		this->flags = this->flags & 0xffffbfff;
		i = FUN_0020d1c0(&piStack28);
		return i & 0xffffff00 | (uint)bVar7;
		}
		
	*/
	return 0;
}

void SectionDataSfxBase::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataSfxBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataSfxBase::EmptyFunction_6() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataSfxBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataSfxBase::EmptyFunction_7() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataSfxBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataSfxBase::EmptyFunction_8() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataSfxBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

