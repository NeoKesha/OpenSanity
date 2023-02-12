#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Texture/SectionDataTexture.h"

#include "headers/Known/Game/GameResources/ResourceList/ResourceListTwinsanityTexture.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Texture/TwinsanityTexture.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void SectionDataTexture::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataTexture::Dispose(SectionDataTexture *this){
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

void SectionDataTexture::Dispose_1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataTexture::Dispose(SectionDataTexture *this){
		TwinsanityTexture *ptr;
		EntryDescriptorTexture *pEVar1;
		ResourceListTwinsanityTexture *pRVar2;
		uint uVar3;
		uint *local_8;
		void *local_4;
		uVar3 = 0;
		if ((this->entries).cnt != 0) {
		do {
		ptr = (this->entries).elements[uVar3].texPtr;
		*(undefined2 *)&ptr->index = 0;
		ptr->index = ptr->index & 0xfffcffff;
		_D3DDevice_SetTexture@8(0,(D3DTexture *)0x0);
		_D3DTexture_LockRect@20(ptr->d3dTexture,0,&local_8,(int *)0x0,(uint *)&DAT_000000a0);
		XMemFree(local_4);
		if (ptr->d3dTexture != (D3DTexture *)0x0) {
		VirtualPool::FreeMemory(ptr->d3dTexture);
		}
		VirtualPool::FreeMemory(ptr);
		uVar3 = uVar3 + 1;
		}
		 while (uVar3 < (this->entries).cnt);
		}
		pEVar1 = (this->entries).elements;
		if (pEVar1 != (EntryDescriptorTexture *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->entries).elements = (EntryDescriptorTexture *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		pRVar2 = this->textureList;
		if (pRVar2 != (ResourceListTwinsanityTexture *)0x0) {
		do {
		uVar3 = FUN_0011ae30(&pRVar2->capacity);
		}
		 while ((char)uVar3 != '\0');
		}
		return;
		}
		
	*/
	return;
}

void SectionDataTexture::Dispose_2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataTexture::Dispose(SectionDataTexture *this){
		EntryDescriptorTexture *pEVar1;
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Texture;
		Dispose(this);
		pEVar1 = (this->entries).elements;
		if (pEVar1 != (EntryDescriptorTexture *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->entries).elements = (EntryDescriptorTexture *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void SectionDataTexture::Dispose_3(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataTexture * __thiscall SectionDataTexture::Dispose(SectionDataTexture *this,byte param_1){
		EntryDescriptorTexture *pEVar1;
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Texture;
		Dispose(this);
		pEVar1 = (this->entries).elements;
		if (pEVar1 != (EntryDescriptorTexture *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->entries).elements = (EntryDescriptorTexture *)0x0;
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

void SectionDataTexture::FUN_0011bb70(TwinsanityTexture* texture) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataTexture::FUN_0011bb70(SectionDataTexture *this,TwinsanityTexture *texture){
		int *piVar1;
		piVar1 = (int *)this->pool;
		if (piVar1 != (int *)0x0) {
		piVar1[*piVar1 + 1] = texture->id;
		*piVar1 = *piVar1 + 1;
		texture->index = texture->index & 0xfffdffff;
		*(short *)&texture->index = *(short *)&texture->index + 1;
		}
		return;
		}
		
	*/
	return;
}

TwinsanityTexture* SectionDataTexture::Create(TwinsanityTexture* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinsanityTexture * __thiscall SectionDataTexture::Create(SectionDataTexture *this,TwinsanityTexture *param_1,int param_2){
		EntryDescriptorTexture *pEVar1;
		TwinsanityTexture *pTVar2;
		uint uVar3;
		TwinsanityTexture *pTVar4;
		TwinsanityTexture *pTVar5;
		TwinsanityTexture *local_4;
		SectionDataEntriesTexture *entries;
		pTVar2 = param_1;
		pTVar4 = (TwinsanityTexture *)param_1->index;
		entries = &this->entries;
		param_1 = pTVar4;
		local_4 = (TwinsanityTexture *)this;
		if ((this->entries).cnt != 0) {
		uVar3 = SectionDataEntriesTexture::FindIndexTextures(entries,(uint *)&param_1);
		pEVar1 = entries->elements + uVar3;
		if (((TwinsanityTexture *)pEVar1->id == pTVar4) && (pEVar1 != (EntryDescriptorTexture *)0x0)) {
		pTVar4 = pEVar1->texPtr;
		goto LAB_0011eb8f;
		}
		}
		pTVar4 = (TwinsanityTexture *)0x0;
		LAB_0011eb8f:if (param_2 != 0) {
		*(bool *)param_2 = pTVar4 == (TwinsanityTexture *)0x0;
		}
		if (pTVar4 == (TwinsanityTexture *)0x0) {
		pTVar5 = (TwinsanityTexture *)VirtualPool::AllocateMemory(0x74);
		pTVar4 = (TwinsanityTexture *)0x0;
		if (pTVar5 != (TwinsanityTexture *)0x0) {
		uVar3 = pTVar2->index;
		*(undefined2 *)&pTVar5->index = 0;
		pTVar5->id = uVar3;
		pTVar5->index = pTVar5->index & 0xfffcffff;
		pTVar5->field91_0x68 = -1;
		pTVar5->field93_0x70 = 0;
		pTVar5->field92_0x6c = 0;
		pTVar5->field94_0x72 = 0;
		pTVar5->d3dTexture = (D3DTexture *)0x0;
		pTVar5->field5_0xe = 2;
		pTVar4 = pTVar5;
		}
		pTVar4->index = pTVar4->index & 0xfffdffff;
		*(short *)&pTVar4->index = *(short *)&pTVar4->index + 1;
		param_1 = pTVar4;
		(*((GraphicsSectionDataAbstract *)&local_4->index)->vtable->EmptyFunction)(pTVar2,pTVar4);
		SectionDataEntriesTexture::Add(entries,&local_4,pTVar2->index);
		return pTVar4;
		}
		pTVar4->index = pTVar4->index & 0xfffdffff;
		*(short *)&pTVar4->index = *(short *)&pTVar4->index + 1;
		return pTVar4;
		}
		
	*/
	return null;
}

void SectionDataTexture::Add(uint* param_1, TwinsanityTexture* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataTexture::Add(SectionDataTexture *this,uint *param_1,TwinsanityTexture *param_2){
		param_2->index = param_2->index & 0xfffdffff;
		*(short *)&param_2->index = *(short *)&param_2->index + 1;
		SectionDataEntriesTexture::Add(&this->entries,&param_2,*param_1);
		return;
		}
		
	*/
	return;
}

void SectionDataTexture::Method4(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataTexture::Method4(SectionDataTexture *this,uint *param_1){
		ResourceListTwinsanityTexture *pRVar1;
		uint uVar2;
		*(short *)param_1 = *(short *)param_1 + -1;
		uVar2 = *param_1 & 0xffff;
		if (uVar2 == 0) {
		uVar2 = *param_1 & 0x20000;
		}
		if (uVar2 == 0) {
		FUN_0011ecf0(&this->entries,param_1[1]);
		pRVar1 = this->textureList;
		if (pRVar1 == (ResourceListTwinsanityTexture *)0x0) {
		FUN_0011a160(param_1,1);
		return;
		}
		uVar2 = (uint)pRVar1->capacity + (uint)(ushort)pRVar1->count;
		if (0x2fe < uVar2) {
		uVar2 = uVar2 - 0x2ff;
		}
		pRVar1->textureArray[uVar2] = (TwinsanityTexture *)param_1;
		pRVar1->count = pRVar1->count + 1;
		}
		return;
		}
		
	*/
	return;
}

void SectionDataTexture::Method5(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataTexture::Method5(SectionDataTexture *this,uint *param_1){
		EntryDescriptorTexture *pEVar1;
		uint *puVar2;
		uint *puVar3;
		uint uVar4;
		TwinsanityTexture *this_00;
		SectionDataEntriesTexture *entries;
		puVar3 = param_1;
		puVar2 = (uint *)*param_1;
		entries = &this->entries;
		param_1 = puVar2;
		if ((this->entries).cnt != 0) {
		uVar4 = SectionDataEntriesTexture::FindIndexTextures(entries,(uint *)&param_1);
		pEVar1 = entries->elements + uVar4;
		if (((uint *)pEVar1->id == puVar2) && (pEVar1 != (EntryDescriptorTexture *)0x0)) {
		this_00 = pEVar1->texPtr;
		goto LAB_0011ec6b;
		}
		}
		this_00 = (TwinsanityTexture *)0x0;
		LAB_0011ec6b:*(short *)&this_00->index = *(short *)&this_00->index + -1;
		uVar4 = this_00->index & 0xffff;
		if (uVar4 == 0) {
		uVar4 = this_00->index & 0x20000;
		}
		if (uVar4 == 0) {
		FUN_0011ecf0(entries,*puVar3);
		if (this->textureList == (ResourceListTwinsanityTexture *)0x0) {
		FUN_0011a160(this_00,1);
		return;
		}
		FUN_0011ecc0(this->textureList,this_00);
		}
		return;
		}
		
	*/
	return;
}

uint SectionDataTexture::Check(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall SectionDataTexture::Check(SectionDataTexture *this,uint *param_1){
		uint *puVar1;
		uint uVar2;
		puVar1 = (uint *)*param_1;
		if ((this->entries).cnt == 0) {
		return (uint)param_1 & 0xffffff00;
		}
		param_1 = puVar1;
		uVar2 = SectionDataEntriesTexture::FindIndexTextures(&this->entries,(uint *)&param_1);
		return uVar2 & 0xffffff00 | (uint)((uint *)(this->entries).elements[uVar2].id == puVar1);
		}
		
	*/
	return 0;
}

int SectionDataTexture::Get(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionDataTexture::Get(SectionDataTexture *this,uint *param_1){
		EntryDescriptorTexture *pEVar1;
		uint *puVar2;
		EntryDescriptorTexture *pEVar3;
		uint uVar4;
		puVar2 = (uint *)*param_1;
		if ((this->entries).cnt != 0) {
		param_1 = puVar2;
		uVar4 = SectionDataEntriesTexture::FindIndexTextures(&this->entries,(uint *)&param_1);
		pEVar3 = (this->entries).elements;
		pEVar1 = pEVar3 + uVar4;
		if (((uint *)pEVar3[uVar4].id == puVar2) && (pEVar1 != (EntryDescriptorTexture *)0x0)) {
		return (int)pEVar1->texPtr;
		}
		}
		return 0;
		}
		
	*/
	return 0;
}

void SectionDataTexture::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataTexture::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataTexture::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataTexture::Construct(SectionDataTexture *this){
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Texture;
		(this->entries).elements = (EntryDescriptorTexture *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		(this->entries).field3_0x8 = 0x40;
		this->pool = (undefined *)0x0;
		this->textureList = (ResourceListTwinsanityTexture *)0x0;
		return;
		}
		
	*/
	return;
}

TwinsanityTexture* SectionDataTexture::ReadTextureToSection(MemoryStream* param_1, uint _id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinsanityTexture * __thiscall SectionDataTexture::ReadTextureToSection(SectionDataTexture *this,MemoryStream *param_1,uint _id){
		EntryDescriptorTexture *pEVar1;
		uint id;
		uint uVar2;
		TwinsanityTexture *pTVar3;
		TwinsanityTexture *texture;
		SectionDataEntriesTexture *entries;
		id = _id;
		entries = &this->entries;
		if ((this->entries).cnt != 0) {
		uVar2 = SectionDataEntriesTexture::FindIndexTextures(entries,&_id);
		pEVar1 = entries->elements + uVar2;
		if ((((TwinsanityTexture *)pEVar1->id == (TwinsanityTexture *)id) &&(pEVar1 != (EntryDescriptorTexture *)0x0)) && (pEVar1->texPtr != (TwinsanityTexture *)0x0)){
		return pEVar1->texPtr;
		}
		}
		pTVar3 = (TwinsanityTexture *)VirtualPool::AllocateMemory(0x74);
		texture = (TwinsanityTexture *)0x0;
		if (pTVar3 != (TwinsanityTexture *)0x0) {
		*(undefined2 *)&pTVar3->index = 0;
		pTVar3->id = id;
		pTVar3->index = pTVar3->index & 0xfffcffff;
		pTVar3->field91_0x68 = -1;
		pTVar3->field93_0x70 = 0;
		pTVar3->field92_0x6c = 0;
		pTVar3->field94_0x72 = 0;
		pTVar3->d3dTexture = (D3DTexture *)0x0;
		pTVar3->field5_0xe = 2;
		texture = pTVar3;
		}
		texture->index = texture->index & 0xfffdffff;
		*(short *)&texture->index = *(short *)&texture->index + 1;
		_id = (uint)texture;
		SectionDataEntriesTexture::Add(entries,(TwinsanityTexture **)&_id,id);
		TwinsanityTexture::ReadFromStream(texture,param_1);
		return texture;
		}
		
	*/
	return null;
}

