#include "headers/Known/Game/GameResources/GameResourcesBase.h"

#include "headers/Known/Game/GameResources/ResourceList/ResourceListScript.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/GameObject/SectionDataGameObjectBase.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/OGI/SectionDataOGIBase.h"
#include "headers/Known/Game/GameResources/ResourceList/ResourceListOGI.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/Animation/SectionDataAnimationBase.h"
#include "headers/Known/Game/GameResources/ResourceList/ResourceListCodeModel.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/CodeModel/SectionDataCodeModelBase.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/Sfx/SfxData/SectionDataSfx.h"
#include "headers/Known/Game/GameResources/ResourceList/ResourceListSound.h"
#include "headers/Known/Game/GameResources/ResourceList/ResourceListGameObject.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/Script/SectionDataScriptBase.h"
#include "headers/Known/Game/GameResources/ResourceList/ResourceListAnimation.h"
void GameResourcesBase::Construct(uint languages, char* agents) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameResourcesBase::Construct(GameResourcesBase *this,uint languages,char *agents){
		this->languages = languages;
		this->vtable = (GameResourcesBase_VTable *)&GameResources_VT_Base;
		this->agents = agents;
		ENV_CLASS_187_SECTION_MATERIALS.materialList = &MATERIAL_LIST;
		ENV_CLASS_183_SECTION_TEXTURES.textureList = &TEXTURE_LIST;
		ENV_CLASS_182_SECTION_MODELS.modeList = &MODEL_LIST;
		ENV_CLASS_181_SECTION_RMODELS.rigidModelList = &RIGID_MODEL_LIST;
		ENV_CLASS_179_SECTION_SKINS.skinList = &SKIN_LIST;
		ENV_CLASS_180_SECTION_BSKINS.blendSkinLlist = &BLEND_SKIN_LIST;
		ENV_CLASS_203_SECTION_SKYDOMES.skydomeList = &SKYDOME_LIST;
		ENV_CLASS_178_SECTION_RMODELS2.rigidModelList = &RIGID_MODEL_2_LIST;
		ENV_CLASS_177_SECTION_LODS.lodList = &LOD_LIST;
		this->gameObjects = (SectionDataGameObjectBase *)0x0;
		this->scripts = (SectionDataScriptBase *)0x0;
		this->animations = (SectionDataAnimationBase *)0x0;
		this->ogis = (SectionDataOGIBase *)0x0;
		this->codeModels = (SectionDataCodeModelBase *)0x0;
		this->sounds = (SectionDataSfx *)0x0;
		this->voices = (SectionDataSfx **)0x0;
		this->gameObjectList = (ResourceListGameObject *)0x0;
		this->scriptList = (ResourceListScript *)0x0;
		this->animationList = (ResourceListAnimation *)0x0;
		this->ogiList = (ResourceListOGI *)0x0;
		this->codeModelList = (ResourceListCodeModel *)0x0;
		this->sfxList = (ResourceListSound *)0x0;
		this->voList = (ResourceListSound **)0x0;
		return;
		}
		
	*/
	return;
}

void GameResourcesBase::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameResourcesBase::CleanUp(GameResourcesBase *this){
		SectionDataGameObjectBase *this_00;
		SectionDataScriptBase *this_01;
		SectionDataAnimationBase *this_02;
		SectionDataOGIBase *this_03;
		SectionDataCodeModelBase *this_04;
		SectionDataSfx *pSVar1;
		ResourceListGameObject *ptr;
		ResourceListScript *ptr_00;
		ResourceListAnimation *ptr_01;
		ResourceListOGI *ptr_02;
		ResourceListCodeModel *ptr_03;
		ResourceListSound *pRVar2;
		uint uVar3;
		this_00 = this->gameObjects;
		this->vtable = (GameResourcesBase_VTable *)&GameResources_VT_Base;
		if (this_00 != (SectionDataGameObjectBase *)0x0) {
		(*((this_00->parent).vtable)->Dispose)(&this_00->parent,1);
		}
		this_01 = this->scripts;
		if (this_01 != (SectionDataScriptBase *)0x0) {
		(*((this_01->parent).vtable)->Dispose)(&this_01->parent,1);
		}
		this_02 = this->animations;
		if (this_02 != (SectionDataAnimationBase *)0x0) {
		(*((this_02->parent).vtable)->Dispose)(&this_02->parent,1);
		}
		this_03 = this->ogis;
		if (this_03 != (SectionDataOGIBase *)0x0) {
		(*((this_03->parent).vtable)->Dispose)(&this_03->parent,1);
		}
		this_04 = this->codeModels;
		if (this_04 != (SectionDataCodeModelBase *)0x0) {
		(*((this_04->parent).vtable)->Dispose)(&this_04->parent,1);
		}
		pSVar1 = this->sounds;
		if (pSVar1 != (SectionDataSfx *)0x0) {
		(*((pSVar1->parent).parent.vtable)->Dispose)((CodeSectionDataAbstract *)pSVar1,1);
		}
		ptr = this->gameObjectList;
		if (ptr != (ResourceListGameObject *)0x0) {
		FUN_001bd9e0(&ptr->capacity);
		VirtualPool::FreeMemory(ptr);
		}
		ptr_00 = this->scriptList;
		if (ptr_00 != (ResourceListScript *)0x0) {
		FUN_001bb1e0(&ptr_00->capacity);
		VirtualPool::FreeMemory(ptr_00);
		}
		ptr_01 = this->animationList;
		if (ptr_01 != (ResourceListAnimation *)0x0) {
		FUN_001bda30(&ptr_01->capacity);
		VirtualPool::FreeMemory(ptr_01);
		}
		ptr_02 = this->ogiList;
		if (ptr_02 != (ResourceListOGI *)0x0) {
		FUN_001bda80(&ptr_02->capacity);
		VirtualPool::FreeMemory(ptr_02);
		}
		ptr_03 = this->codeModelList;
		if (ptr_03 != (ResourceListCodeModel *)0x0) {
		FUN_001bdad0(&ptr_03->capacity);
		VirtualPool::FreeMemory(ptr_03);
		}
		pRVar2 = this->sfxList;
		if (pRVar2 != (ResourceListSound *)0x0) {
		FUN_001bdb20(&pRVar2->capacity);
		VirtualPool::FreeMemory(pRVar2);
		}
		if (this->voices != (SectionDataSfx **)0x0) {
		uVar3 = 0;
		if (this->languages != 0) {
		do {
		pSVar1 = this->voices[uVar3];
		if (pSVar1 != (SectionDataSfx *)0x0) {
		(*((pSVar1->parent).parent.vtable)->Dispose)((CodeSectionDataAbstract *)pSVar1,1);
		}
		uVar3 = uVar3 + 1;
		}
		 while (uVar3 < this->languages);
		}
		VirtualPool::FreeMemory(this->voices);
		}
		if (this->voList != (ResourceListSound **)0x0) {
		uVar3 = 0;
		if (this->languages != 0) {
		do {
		pRVar2 = this->voList[uVar3];
		if (pRVar2 != (ResourceListSound *)0x0) {
		FUN_001bdb20(&pRVar2->capacity);
		VirtualPool::FreeMemory(pRVar2);
		}
		uVar3 = uVar3 + 1;
		}
		 while (uVar3 < this->languages);
		}
		VirtualPool::FreeMemory(this->voList);
		}
		return;
		}
		
	*/
	return;
}

void GameResourcesBase::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameResourcesBase * __thiscall GameResourcesBase::Dispose(GameResourcesBase *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

uint GameResourcesBase::FreeResources(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall GameResourcesBase::FreeResources(GameResourcesBase *this,int **param_1){
		int *piVar1;
		ScriptAbstract *this_00;
		bool bVar2;
		byte bVar3;
		byte bVar4;
		byte bVar5;
		byte bVar6;
		byte bVar7;
		byte bVar8;
		SectionDataScriptBase *collection3;
		uint uVar10;
		PhysicalPool *pPVar11;
		SectionDataGameObjectBase *collection1;
		SectionDataAnimationBase *collection2;
		void *ptr;
		SectionDataCodeModelBase *collection4;
		SectionDataOGIBase *collection5;
		SectionDataScriptBase unkData3;
		SectionDataSfx sfxData;
		SectionDataAnimationBase unkData2;
		SectionDataGameObjectBase unkData1;
		SectionDataCodeModelBase unkData4;
		SectionDataOGIBase unkData5;
		SectionDataSfx local_20;
		uint uVar9;
		SectionDataSfx *collection6sfx;
		SectionDataGameObjectBase::Construct(&unkData1,0,0);
		unkData1.parent = (CodeSectionDataAbstract_VTable *)&SectionData_VT_GameObject;
		SectionDataAnimationBase::Construct(&unkData2,0,1);
		unkData2.parent = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Animation;
		SectionDataScriptBase::Construct(&unkData3,0,1);
		unkData3.parent = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Script;
		unkData3.indexes = (short *)VirtualPool::AllocateMemory(0);
		SectionDataCodeModelBase::Construct(&unkData4,0,1);
		unkData4.parent = (CodeSectionDataAbstract_VTable *)&SectionData_VT_CodeModel;
		SectionDataOGIBase::Construct(&unkData5,0,1);
		unkData5.parent = (CodeSectionDataAbstract_VTable *)&SectionData_VT_OGI;
		SectionDataSfxBase::Construct(&sfxData.parent,0,1);
		sfxData.parent.parent = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Sfx;
		sfxData.field2_0x1c = 0xffffffff;
		sfxData.parent.indexes = (short *)VirtualPool::AllocateMemory(0);
		sfxData.waveData = (MemoryStream *)0x0;
		collection1 = &unkData1;
		if (this->gameObjects != (SectionDataGameObjectBase *)0x0) {
		collection1 = this->gameObjects;
		}
		collection2 = &unkData2;
		if (this->animations != (SectionDataAnimationBase *)0x0) {
		collection2 = this->animations;
		}
		collection3 = this->scripts;
		if (collection3 == (SectionDataScriptBase *)0x0) {
		collection3 = &unkData3;
		}
		collection4 = this->codeModels;
		if (collection4 == (SectionDataCodeModelBase *)0x0) {
		collection4 = &unkData4;
		}
		collection5 = this->ogis;
		if (collection5 == (SectionDataOGIBase *)0x0) {
		collection5 = &unkData5;
		}
		collection6sfx = this->sounds;
		if (collection6sfx == (SectionDataSfx *)0x0) {
		collection6sfx = &sfxData;
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 == false) {
		LAB_001b637d:bVar3 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		uVar9 = FUN_001be5c0(*param_1,collection1,0x917,0);
		bVar3 = (byte)uVar9;
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001b637d;
		uVar9 = FUN_001be610(*param_1,collection1,0x917,0);
		bVar3 = (byte)uVar9;
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 == false) {
		LAB_001b63bb:bVar4 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		uVar9 = FUN_001be660(*param_1,collection2,0x918,0);
		bVar4 = (byte)uVar9;
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001b63bb;
		uVar9 = FUN_001be6b0(*param_1,collection2,0x918,0);
		bVar4 = (byte)uVar9;
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 == false) {
		LAB_001b63ff:bVar5 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		uVar9 = FUN_001be700(*param_1,collection3,0x919,0);
		bVar5 = (byte)uVar9;
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001b63ff;
		uVar9 = FUN_001be750(*param_1,collection3,0x919,0);
		bVar5 = (byte)uVar9;
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 == false) {
		LAB_001b6443:bVar6 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		uVar9 = FUN_001be7a0(*param_1,collection4,0x959,0);
		bVar6 = (byte)uVar9;
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001b6443;
		uVar9 = FUN_001be7f0(*param_1,collection4,0x959,0);
		bVar6 = (byte)uVar9;
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 == false) {
		LAB_001b6487:bVar7 = 0;
		}
		else if (param_1[1] == (int *)0x0) {
		uVar9 = FUN_001be840(*param_1,collection5,0x91b,0);
		bVar7 = (byte)uVar9;
		}
		else {
		if (param_1[1] != (int *)0x1) goto LAB_001b6487;
		uVar9 = FUN_001be890(*param_1,collection5,0x91b,0);
		bVar7 = (byte)uVar9;
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		uVar9 = FUN_001be8e0(*param_1,collection6sfx,0x91d,0);
		bVar8 = (byte)uVar9;
		goto LAB_001b64cd;
		}
		if (param_1[1] == (int *)0x1) {
		uVar9 = FUN_001be930(*param_1,collection6sfx,0x91d,0);
		bVar8 = (byte)uVar9;
		goto LAB_001b64cd;
		}
		}
		bVar8 = 0;
		LAB_001b64cd:if (DAT_004964c8 == '\0') {
		SectionDataSfxBase::Construct(&local_20.parent,0,1);
		local_20.parent.parent = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Sfx;
		local_20.field2_0x1c = 0xffffffff;
		local_20.parent.indexes = (short *)VirtualPool::AllocateMemory(0);
		local_20.waveData = (MemoryStream *)0x0;
		if (this->voices == (SectionDataSfx **)0x0) {
		collection6sfx = &local_20;
		}
		else {
		collection6sfx = this->voices[LNG_INDEX];
		}
		FUN_001bffb0(param_1,collection6sfx,0x91e,0);
		SectionDataSfx::CleanUp(&local_20);
		}
		else {
		uVar9 = 0;
		if (this->languages != 0) {
		do {
		collection6sfx = this->voices[uVar9];
		SetLanguage(uVar9);
		bVar2 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar2 != false) {
		if (param_1[1] == (int *)0x0) {
		FUN_001be8e0(*param_1,collection6sfx,0x91e,0);
		}
		else if (param_1[1] == (int *)0x1) {
		piVar1 = *param_1;
		uVar10 = (**(code **)(*piVar1 + 0x44))(0x91e,0x1b00,0);
		if ((uVar10 & 1) != 0) {
		(*((collection6sfx->parent).parent.vtable)->AddElement)((CodeSectionDataAbstract *)collection6sfx,(undefined *)piVar1[0x6b]);
		(**(code **)(*piVar1 + 0x48))(0x91e,0x1b00);
		}
		}
		}
		uVar9 = uVar9 + 1;
		}
		 while (uVar9 < this->languages);
		}
		}
		sfxData.parent.parent = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Sfx;
		if (sfxData.waveData != (MemoryStream *)0x0) {
		(*(sfxData.waveData)->vtable->Dispose)(sfxData.waveData,1);
		ptr = &sfxData.field2_0x1c;
		sfxData.waveData = (MemoryStream *)0x0;
		pPVar11 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar11,ptr);
		pPVar11 = PhysicalPool::GetPool();
		PhysicalPool::UnkMethod2(pPVar11);
		}
		sfxData.parent.parent = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Sfx_Base;
		SectionDataSfxBase::CleanUp(&sfxData.parent);
		VirtualPool::FreeMemory(sfxData.parent.elements);
		VirtualPool::FreeMemory(sfxData.parent.indexes);
		unkData5.parent = (CodeSectionDataAbstract_VTable *)&SectionData_VT_OGI_Base;
		SectionDataOGIBase::CleanUp(&unkData5);
		VirtualPool::FreeMemory(unkData5.elements);
		VirtualPool::FreeMemory(unkData5.indexes);
		unkData4.parent = (CodeSectionDataAbstract_VTable *)&SectionData_VT_CodeModel_Base;
		SectionDataCodeModelBase::CleanUp(&unkData4);
		VirtualPool::FreeMemory(unkData4.elements);
		VirtualPool::FreeMemory(unkData4.indexes);
		uVar9 = 0;
		unkData3.parent = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Script_Base;
		if ((unkData3.flags & 0x3fff) != 0) {
		do {
		this_00 = unkData3.elements[uVar9];
		if (this_00 != (ScriptAbstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		unkData3.elements[uVar9] = (ScriptAbstract *)0x0;
		}
		uVar9 = uVar9 + 1;
		}
		 while (uVar9 < (unkData3.flags & 0x3fff));
		}
		VirtualPool::FreeMemory(unkData3.elements);
		VirtualPool::FreeMemory(unkData3.indexes);
		unkData2.parent = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Animation_Base;
		SectionDataAnimationBase::CleanUp(&unkData2);
		VirtualPool::FreeMemory(unkData2.elements);
		VirtualPool::FreeMemory(unkData2.indexes);
		unkData1.parent = (CodeSectionDataAbstract_VTable *)&SectionData_VT_GameObject_Base;
		SectionDataGameObjectBase::CleanUp((SectionDataGameObject *)&unkData1);
		VirtualPool::FreeMemory(unkData1.elements);
		uVar9 = VirtualPool::FreeMemory(unkData1.indexes);
		return uVar9 & 0xffffff00 | (uint)(bVar3 & 1 & bVar4 & bVar5 & bVar6 & bVar7 & bVar8);
		}
		
	*/
	return 0;
}

void GameResourcesBase::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void GameResourcesBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void GameResourcesBase::EmptyFunction_5() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void GameResourcesBase::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

