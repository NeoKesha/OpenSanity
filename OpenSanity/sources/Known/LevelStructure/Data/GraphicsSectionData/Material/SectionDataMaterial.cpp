#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Material/SectionDataMaterial.h"

#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Texture/TwinsanityTexture.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Material/TwinsanityMaterial.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/Material/SectionMaterial.h"
#include "headers/Known/Game/GameResources/ResourceList/ResourceListTwinsanityMaterial.h"
void SectionDataMaterial::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataMaterial::Dispose(SectionDataMaterial *this){
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

void SectionDataMaterial::FreeElements() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataMaterial::FreeElements(SectionDataMaterial *this){
		TwinsanityMaterial *ptr;
		TwinsanityMaterialShader *ptr_00;
		ShaderProgramAbstract *this_00;
		EntryDescriptorMaterial *pEVar1;
		uint uVar2;
		uint i;
		i = 0;
		if ((this->entries).cnt != 0) {
		do {
		uVar2 = 0;
		ptr = (this->entries).elements[i].matPtr;
		ptr->field0_0x0 = 0;
		*(uint *)ptr = *(uint *)ptr & 0xfffcffff;
		ptr_00 = ptr->shader;
		if (ptr_00 != (TwinsanityMaterialShader *)0x0) {
		if (ptr_00->shaderProgramCnt != 0) {
		do {
		this_00 = ptr_00->shaderPrograms[uVar2];
		if (this_00 != (ShaderProgramAbstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		}
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < ptr_00->shaderProgramCnt);
		}
		VirtualPool::FreeMemory(ptr_00);
		}
		VirtualPool::FreeMemory(ptr);
		i = i + 1;
		}
		 while (i < (this->entries).cnt);
		}
		pEVar1 = (this->entries).elements;
		if (pEVar1 != (EntryDescriptorMaterial *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->entries).elements = (EntryDescriptorMaterial *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		if (this->materialList == (ResourceListTwinsanityMaterial *)0x0) {
		return;
		}
		FUN_0011c770(&this->materialList->capacity);
		return;
		}
		
	*/
	return;
}

TwinsanityMaterial* SectionDataMaterial::ReadMaterialToSection(MemoryStream* stream, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinsanityMaterial * __thiscall SectionDataMaterial::ReadMaterialToSection(SectionDataMaterial *this,MemoryStream *stream,uint param_2){
		EntryDescriptorMaterial *pEVar1;
		int iVar2;
		TwinsanityMaterial *newMaterialHolder;
		TwinsanityMaterialShader *newMaterial;
		SectionDataEntriesMaterial *entries;
		uint id;
		id = param_2;
		entries = &this->entries;
		if ((this->entries).cnt != 0) {
		iVar2 = SectionDataEntriesAbstract::FindIndexMaterial((SectionDataEntriesAbstract *)entries,&param_2);
		pEVar1 = entries->elements + iVar2;
		if ((((TwinsanityMaterial *)pEVar1->id == (TwinsanityMaterial *)id) &&(pEVar1 != (EntryDescriptorMaterial *)0x0)) && (pEVar1->matPtr != (TwinsanityMaterial *)0x0)) {
		return pEVar1->matPtr;
		}
		}
		newMaterialHolder = (TwinsanityMaterial *)VirtualPool::AllocateMemory(0x10);
		if (newMaterialHolder == (TwinsanityMaterial *)0x0) {
		newMaterialHolder = (TwinsanityMaterial *)0x0;
		}
		else {
		newMaterialHolder->field0_0x0 = 0;
		*(uint *)newMaterialHolder = *(uint *)newMaterialHolder & 0xfffcffff;
		newMaterialHolder->id = id;
		newMaterialHolder->shader = (TwinsanityMaterialShader *)0x0;
		*(undefined *)&newMaterialHolder->field4_0xc = 0;
		}
		*(uint *)newMaterialHolder = *(uint *)newMaterialHolder & 0xfffdffff;
		newMaterialHolder->field0_0x0 = newMaterialHolder->field0_0x0 + 1;
		param_2 = (uint)newMaterialHolder;
		SectionDataEntriesMaterial::Add(entries,(TwinsanityMaterial **)&param_2,id);
		newMaterial = (TwinsanityMaterialShader *)VirtualPool::AllocateMemory(0x28);
		if (newMaterial == (TwinsanityMaterialShader *)0x0) {
		newMaterialHolder->shader = (TwinsanityMaterialShader *)0x0;
		return newMaterialHolder;
		}
		TwinsanityMaterialShader::ReadFromStream(newMaterial,stream);
		newMaterialHolder->shader = newMaterial;
		return newMaterialHolder;
		}
		
	*/
	return null;
}

void SectionDataMaterial::Dispose_3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataMaterial::Dispose(SectionDataMaterial *this){
		EntryDescriptorMaterial *pEVar1;
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Material;
		FreeElements(this);
		pEVar1 = (this->entries).elements;
		if (pEVar1 != (EntryDescriptorMaterial *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->entries).elements = (EntryDescriptorMaterial *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void SectionDataMaterial::Dispose_4(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataMaterial * __thiscall SectionDataMaterial::Dispose(SectionDataMaterial *this,byte param_1){
		EntryDescriptorMaterial *pEVar1;
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Material;
		FreeElements(this);
		pEVar1 = (this->entries).elements;
		if (pEVar1 != (EntryDescriptorMaterial *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->entries).elements = (EntryDescriptorMaterial *)0x0;
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

void SectionDataMaterial::FUN_0011ba20(TwinsanityMaterial* material) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataMaterial::FUN_0011ba20(SectionDataMaterial *this,TwinsanityMaterial *material){
		int *piVar1;
		piVar1 = (int *)this->pool;
		if (piVar1 != (int *)0x0) {
		piVar1[*piVar1 + 1] = material->id;
		*piVar1 = *piVar1 + 1;
		*(uint *)material = *(uint *)material & 0xfffdffff;
		material->field0_0x0 = material->field0_0x0 + 1;
		}
		return;
		}
		
	*/
	return;
}

void SectionDataMaterial::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataMaterial::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataMaterial::Add(uint* param_1, TwinsanityTexture* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataMaterial::Add(SectionDataMaterial *this,uint *param_1,TwinsanityTexture *param_2){
		param_2->index = param_2->index & 0xfffdffff;
		*(short *)&param_2->index = *(short *)&param_2->index + 1;
		SectionDataEntriesMaterial::Add(&this->entries,(TwinsanityMaterial **)&param_2,*param_1);
		return;
		}
		
	*/
	return;
}

TwinsanityTexture* SectionDataMaterial::Create(TwinsanityTexture* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinsanityTexture * __thiscall SectionDataMaterial::Create(SectionDataMaterial *this,TwinsanityTexture *param_1,int param_2){
		SectionDataEntriesMaterial *this_00;
		EntryDescriptorMaterial *pEVar1;
		uint uVar2;
		TwinsanityTexture *pTVar3;
		int iVar4;
		TwinsanityTexture *pTVar5;
		TwinsanityTexture *pTVar6;
		pTVar3 = param_1;
		pTVar5 = (TwinsanityTexture *)param_1->index;
		this_00 = &this->entries;
		param_1 = pTVar5;
		if ((this->entries).cnt != 0) {
		iVar4 = SectionDataEntriesAbstract::FindIndexMaterial((SectionDataEntriesAbstract *)this_00,(uint *)&param_1);
		pEVar1 = this_00->elements + iVar4;
		if (((TwinsanityTexture *)pEVar1->id == pTVar5) && (pEVar1 != (EntryDescriptorMaterial *)0x0)) {
		pTVar5 = (TwinsanityTexture *)pEVar1->matPtr;
		goto LAB_0011efbb;
		}
		}
		pTVar5 = (TwinsanityTexture *)0x0;
		LAB_0011efbb:if (param_2 != 0) {
		*(bool *)param_2 = pTVar5 == (TwinsanityTexture *)0x0;
		}
		if (pTVar5 == (TwinsanityTexture *)0x0) {
		pTVar6 = (TwinsanityTexture *)VirtualPool::AllocateMemory(0x10);
		pTVar5 = (TwinsanityTexture *)0x0;
		if (pTVar6 != (TwinsanityTexture *)0x0) {
		uVar2 = pTVar3->index;
		*(undefined2 *)&pTVar6->index = 0;
		pTVar6->size = 0;
		pTVar6->index = pTVar6->index & 0xfffcffff;
		pTVar6->id = uVar2;
		pTVar6->field_0xc = 0;
		pTVar5 = pTVar6;
		}
		pTVar5->index = pTVar5->index & 0xfffdffff;
		*(short *)&pTVar5->index = *(short *)&pTVar5->index + 1;
		param_1 = pTVar5;
		(*((this->parent).vtable)->EmptyFunction)(pTVar3,pTVar5);
		SectionDataEntriesMaterial::Add(this_00,(TwinsanityMaterial **)&stack0xfffffffc,pTVar3->index);
		return pTVar5;
		}
		pTVar5->index = pTVar5->index & 0xfffdffff;
		*(short *)&pTVar5->index = *(short *)&pTVar5->index + 1;
		return pTVar5;
		}
		
	*/
	return null;
}

void* SectionDataMaterial::Method4(SectionMaterial* section) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined * __thiscall SectionDataMaterial::Method4(SectionDataMaterial *this,SectionMaterial *section){
		SectionAbstract_VTable *pSVar1;
		ResourceListTwinsanityMaterial *pRVar2;
		ResourceListTwinsanityMaterial *pRVar3;
		undefined *puVar4;
		uint uVar5;
		*(short *)&(section->parent).vtable = *(short *)&(section->parent).vtable + -1;
		pSVar1 = (section->parent).vtable;
		pRVar3 = (ResourceListTwinsanityMaterial *)((uint)pSVar1 & 0xffff);
		pRVar2 = pRVar3;
		if (pRVar3 == (ResourceListTwinsanityMaterial *)0x0) {
		pRVar2 = (ResourceListTwinsanityMaterial *)((uint)pSVar1 & 0x20000);
		}
		if (pRVar2 == (ResourceListTwinsanityMaterial *)0x0) {
		SectionDataEntriesMaterial::FUN_0011f100(&this->entries,(uint)section->data);
		pRVar3 = this->materialList;
		if (pRVar3 == (ResourceListTwinsanityMaterial *)0x0) {
		TwinsanityMaterial::FreeMaterial((TwinsanityMaterial *)section);
		puVar4 = (undefined *)VirtualPool::FreeMemory(section);
		return puVar4;
		}
		uVar5 = (uint)pRVar3->capacity + (uint)(ushort)pRVar3->count;
		if (0x2fe < uVar5) {
		uVar5 = uVar5 - 0x2ff;
		}
		pRVar3->materialArray[uVar5] = (TwinsanityMaterial *)section;
		pRVar3->count = pRVar3->count + 1;
		}
		return (undefined *)pRVar3;
		}
		
	*/
	return null;
}

void SectionDataMaterial::Method5(uint* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataMaterial::Method5(SectionDataMaterial *this,uint *other){
		SectionDataEntriesMaterial *this_00;
		EntryDescriptorMaterial *pEVar1;
		uint *puVar2;
		uint *puVar3;
		int iVar4;
		uint uVar5;
		TwinsanityMaterial *this_01;
		puVar3 = other;
		puVar2 = (uint *)*other;
		this_00 = &this->entries;
		other = puVar2;
		if ((this->entries).cnt != 0) {
		iVar4 = SectionDataEntriesAbstract::FindIndexMaterial((SectionDataEntriesAbstract *)this_00,(uint *)&other);
		pEVar1 = this_00->elements + iVar4;
		if (((uint *)pEVar1->id == puVar2) && (pEVar1 != (EntryDescriptorMaterial *)0x0)) {
		this_01 = pEVar1->matPtr;
		goto LAB_0011f07b;
		}
		}
		this_01 = (TwinsanityMaterial *)0x0;
		LAB_0011f07b:this_01->field0_0x0 = this_01->field0_0x0 + -1;
		uVar5 = *(uint *)this_01 & 0xffff;
		if (uVar5 == 0) {
		uVar5 = *(uint *)this_01 & 0x20000;
		}
		if (uVar5 == 0) {
		SectionDataEntriesMaterial::FUN_0011f100(this_00,*puVar3);
		if (this->materialList == (ResourceListTwinsanityMaterial *)0x0) {
		TwinsanityMaterial::FreeMaterial(this_01);
		VirtualPool::FreeMemory(this_01);
		return;
		}
		FUN_0011f0d0(this->materialList,this_01);
		}
		return;
		}
		
	*/
	return;
}

uint SectionDataMaterial::Check(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall SectionDataMaterial::Check(SectionDataMaterial *this,uint *param_1){
		uint *puVar1;
		uint uVar2;
		puVar1 = (uint *)*param_1;
		if ((this->entries).cnt == 0) {
		return (uint)param_1 & 0xffffff00;
		}
		param_1 = puVar1;
		uVar2 = SectionDataEntriesAbstract::FindIndexMaterial((SectionDataEntriesAbstract *)&this->entries,(uint *)&param_1);
		return uVar2 & 0xffffff00 | (uint)((uint *)(this->entries).elements[uVar2].id == puVar1);
		}
		
	*/
	return 0;
}

uint SectionDataMaterial::Get(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall SectionDataMaterial::Get(SectionDataMaterial *this,uint *param_1){
		EntryDescriptorMaterial *pEVar1;
		uint *puVar2;
		EntryDescriptorMaterial *pEVar3;
		int iVar4;
		puVar2 = (uint *)*param_1;
		if ((this->entries).cnt != 0) {
		param_1 = puVar2;
		iVar4 = SectionDataEntriesAbstract::FindIndexMaterial((SectionDataEntriesAbstract *)&this->entries,(uint *)&param_1);
		pEVar3 = (this->entries).elements;
		pEVar1 = pEVar3 + iVar4;
		if (((uint *)pEVar3[iVar4].id == puVar2) && (pEVar1 != (EntryDescriptorMaterial *)0x0)) {
		return (uint)pEVar1->matPtr;
		}
		}
		return 0;
		}
		
	*/
	return 0;
}

void SectionDataMaterial::EmptyFunction_13() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataMaterial::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataMaterial::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataMaterial::Construct(SectionDataMaterial *this){
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Material;
		(this->entries).elements = (EntryDescriptorMaterial *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		(this->entries).field3_0x8 = 0x40;
		this->pool = (undefined *)0x0;
		this->materialList = (ResourceListTwinsanityMaterial *)0x0;
		return;
		}
		
	*/
	return;
}

