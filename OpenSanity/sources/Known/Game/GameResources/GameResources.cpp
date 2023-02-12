#include "headers/Known/Game/GameResources/GameResources.h"

#include "headers/Unknown/IndexToIdList.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/OGI/SectionDataOGIBase.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/CodeModel/SectionDataCodeModelBase.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/Sfx/SfxData/SectionDataSfx.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/Script/SectionDataScriptBase.h"
void GameResources::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameResources * __fastcall GameResources::Construct(GameResources *this){
		GameResourcesBase::Construct(&this->parent,5,"Import\\LevelAgents.axp");
		(this->parent).vtable = (GameResourcesBase_VTable *)&GameResources_VT;
		AllocCollectionGameObjects(this,1500);
		AllocCollectionAnimations(this,2500);
		AllocCollectionScripts(this,8000);
		AllocCollectionCodeModels(this,200);
		AllocCollectionOGIs(this,1500);
		AllocSfxCollection(this,2000);
		AllocVoCollections(this,2000);
		GameResources = this;
		return this;
		}
		
	*/
	return;
}

void GameResources::DisposeCodeSection() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameResources::DisposeCodeSection(GameResources *this){
		CodeSectionDataAbstract *unaff_EDI;
		uint i;
		(*((((this->parent).gameObjects)->parent).vtable)->CleanUp)(unaff_EDI);
		(*((((this->parent).scripts)->parent).vtable)->CleanUp)(unaff_EDI);
		(*((((this->parent).animations)->parent).vtable)->CleanUp)(unaff_EDI);
		(*((((this->parent).ogis)->parent).vtable)->CleanUp)(unaff_EDI);
		(*((((this->parent).codeModels)->parent).vtable)->CleanUp)(unaff_EDI);
		(*((((this->parent).sounds)->parent).parent.vtable)->CleanUp)(unaff_EDI);
		i = 0;
		if ((this->parent).languages != 0) {
		do {
		(*(((this->parent).voices[i]->parent).parent.vtable)->CleanUp)(unaff_EDI);
		i = i + 1;
		}
		 while (i < (this->parent).languages);
		}
		return;
		}
		
	*/
	return;
}

void GameResources::LoadGameObjects(IndexToIdList* indexToId) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameResources::LoadGameObjects(GameResources *this,IndexToIdList *indexToId){
		GameObject *gameObject;
		short *startIndex;
		uint i;
		ushort index;
		i = 0;
		if (indexToId->cnt != 0) {
		startIndex = indexToId->ids;
		do {
		index = *startIndex;
		if (index == 0xffff) {
		gameObject = (GameObject *)0x0;
		}
		else {
		gameObject = ((this->parent).gameObjects)->elements[index & 0x7fff];
		}
		GameObjectResourceReferences::LoadDependencies(gameObject->references,(uint)gameObject & 0xffff0000 | (uint)index,this);
		i = i + 1;
		startIndex = startIndex + 1;
		}
		 while (i < indexToId->cnt);
		}
		return;
		}
		
	*/
	return;
}

bool GameResources::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall GameResources::DisposeResources(GameResources *this){
		bool result;
		byte bVar1;
		bool hasMaterials;
		bool hasTextures;
		bool hasModels;
		bool hasRigidModels1;
		bool hasSkins;
		bool hasBlendSkins;
		bool hasSkydomes;
		bool hasRigidModels2;
		uint local_4;
		ResourceListAnimation *animationList;
		TwinsanityBlendSkin *blendSkin;
		ResourceListCodeModel *codeModelList;
		ResourceListGameObject *gameObjectList;
		TwinsanityLod *lod;
		TwinsanityMaterial *material;
		TwinsanityModel *model;
		ushort newCapacity;
		ResourceListOGI *ogiList;
		TwinsanityRigidModel *rigidModel;
		TwinsanityRigidModel2 *rigidModel2;
		ResourceListScript *scriptList;
		Sfx *sfx;
		TwinsanitySkin *skin;
		TwinsanitySkydome *skydome;
		ResourceListSound *soundList;
		TwinsanityTexture *texture;
		gameObjectList = (this->parent).gameObjectList;
		result = false;
		if ((((((gameObjectList != (ResourceListGameObject *)0x0) &&(result = ResourceListGameObject::DisposeGameObject(gameObjectList), result != false)) ||((scriptList = (this->parent).scriptList, scriptList != (ResourceListScript *)0x0 &&(result = ResourceListGameObject::DisposeScript(scriptList), result != false)))) ||((animationList = (this->parent).animationList, animationList != (ResourceListAnimation *)0x0&& (result = ResourceListAnimation::DisposeAnimation(animationList), result != false)))) ||((ogiList = (this->parent).ogiList, ogiList != (ResourceListOGI *)0x0 &&(result = ResourceListOGI::DisposeOGI(ogiList), result != false)))) ||(((codeModelList = (this->parent).codeModelList, codeModelList != (ResourceListCodeModel *)0x0&& (result = ResourceListCodeModel::DisposeCodeModel(codeModelList), result != false)) ||((soundList = (this->parent).sfxList, soundList != (ResourceListSound *)0x0 &&(result = ResourceListSound::DisposeSound(soundList), result != false)))))) {
		return result;
		}
		if (((this->parent).voList != (ResourceListSound **)0x0) &&(local_4 = 0, (this->parent).languages != 0)) {
		do {
		soundList = (this->parent).voList[local_4];
		if (soundList->count == 0) {
		bVar1 = 0;
		}
		else {
		sfx = soundList->sfxArray[soundList->capacity];
		if (sfx != (Sfx *)0x0) {
		Sfx::Dispose(sfx);
		VirtualPool::FreeMemory(sfx);
		}
		soundList->capacity = soundList->capacity + 1;
		soundList->count = soundList->count + -1;
		if (0x2fe < soundList->capacity) {
		soundList->capacity = soundList->capacity - 0x2ff;
		}
		bVar1 = 1;
		}
		result = (bool)(result | bVar1);
		local_4 = local_4 + 1;
		}
		 while (local_4 < (this->parent).languages);
		if (result != false) {
		return result;
		}
		}
		if (MATERIAL_LIST.count == 0) {
		hasMaterials = false;
		}
		else {
		material = MATERIAL_LIST.materialArray[MATERIAL_LIST.capacity];
		if (material != (TwinsanityMaterial *)0x0) {
		TwinsanityMaterial::FreeMaterial(material);
		VirtualPool::FreeMemory(material);
		}
		MATERIAL_LIST.count = MATERIAL_LIST.count + -1;
		newCapacity = MATERIAL_LIST.capacity + 1;
		if (0x2fe < (ushort)(MATERIAL_LIST.capacity + 1)) {
		MATERIAL_LIST.capacity = MATERIAL_LIST.capacity - 0x2fe;
		newCapacity = MATERIAL_LIST.capacity;
		}
		MATERIAL_LIST.capacity = newCapacity;
		hasMaterials = true;
		}
		if (TEXTURE_LIST.count == 0) {
		hasTextures = false;
		}
		else {
		texture = TEXTURE_LIST.textureArray[TEXTURE_LIST.capacity];
		if (texture != (TwinsanityTexture *)0x0) {
		TwinsanityTexture::Dispose(texture);
		VirtualPool::FreeMemory(texture);
		}
		TEXTURE_LIST.count = TEXTURE_LIST.count + -1;
		newCapacity = TEXTURE_LIST.capacity + 1;
		if (0x2fe < (ushort)(TEXTURE_LIST.capacity + 1)) {
		TEXTURE_LIST.capacity = TEXTURE_LIST.capacity - 0x2fe;
		newCapacity = TEXTURE_LIST.capacity;
		}
		TEXTURE_LIST.capacity = newCapacity;
		hasTextures = true;
		}
		if (MODEL_LIST.count == 0) {
		hasModels = false;
		}
		else {
		model = MODEL_LIST.modelArray[MODEL_LIST.capacity];
		if (model != (TwinsanityModel *)0x0) {
		TwinsanityModel::Dispose(model);
		VirtualPool::FreeMemory(model);
		}
		MODEL_LIST.count = MODEL_LIST.count + -1;
		newCapacity = MODEL_LIST.capacity + 1;
		if (0x2fe < (ushort)(MODEL_LIST.capacity + 1)) {
		MODEL_LIST.capacity = MODEL_LIST.capacity - 0x2fe;
		newCapacity = MODEL_LIST.capacity;
		}
		MODEL_LIST.capacity = newCapacity;
		hasModels = true;
		}
		if (RIGID_MODEL_LIST.count == 0) {
		hasRigidModels1 = false;
		}
		else {
		rigidModel = RIGID_MODEL_LIST.rigidModelArray[RIGID_MODEL_LIST.capacity];
		if (rigidModel != (TwinsanityRigidModel *)0x0) {
		TwinsanityRigidModel::Dispose(rigidModel);
		VirtualPool::FreeMemory(rigidModel);
		}
		RIGID_MODEL_LIST.count = RIGID_MODEL_LIST.count + -1;
		newCapacity = RIGID_MODEL_LIST.capacity + 1;
		if (0x2fe < (ushort)(RIGID_MODEL_LIST.capacity + 1)) {
		RIGID_MODEL_LIST.capacity = RIGID_MODEL_LIST.capacity - 0x2fe;
		newCapacity = RIGID_MODEL_LIST.capacity;
		}
		RIGID_MODEL_LIST.capacity = newCapacity;
		hasRigidModels1 = true;
		}
		if (SKIN_LIST.count == 0) {
		hasSkins = false;
		}
		else {
		skin = SKIN_LIST.skinArray[SKIN_LIST.capacity];
		if (skin != (TwinsanitySkin *)0x0) {
		TwinsanitySkin::Dispose(skin);
		VirtualPool::FreeMemory(skin);
		}
		SKIN_LIST.count = SKIN_LIST.count + -1;
		newCapacity = SKIN_LIST.capacity + 1;
		if (0x2fe < (ushort)(SKIN_LIST.capacity + 1)) {
		SKIN_LIST.capacity = SKIN_LIST.capacity - 0x2fe;
		newCapacity = SKIN_LIST.capacity;
		}
		SKIN_LIST.capacity = newCapacity;
		hasSkins = true;
		}
		if (BLEND_SKIN_LIST.count == 0) {
		hasBlendSkins = false;
		}
		else {
		blendSkin = BLEND_SKIN_LIST.blendSkinArray[BLEND_SKIN_LIST.capacity];
		if (blendSkin != (TwinsanityBlendSkin *)0x0) {
		TwinsanityBlendSkin::Dispose(blendSkin);
		VirtualPool::FreeMemory(blendSkin);
		}
		BLEND_SKIN_LIST.count = BLEND_SKIN_LIST.count + -1;
		newCapacity = BLEND_SKIN_LIST.capacity + 1;
		if (0x2fe < (ushort)(BLEND_SKIN_LIST.capacity + 1)) {
		BLEND_SKIN_LIST.capacity = BLEND_SKIN_LIST.capacity - 0x2fe;
		newCapacity = BLEND_SKIN_LIST.capacity;
		}
		BLEND_SKIN_LIST.capacity = newCapacity;
		hasBlendSkins = true;
		}
		if (SKYDOME_LIST.count == 0) {
		hasSkydomes = false;
		}
		else {
		skydome = SKYDOME_LIST.skydomeArray[SKYDOME_LIST.capacity];
		if (skydome != (TwinsanitySkydome *)0x0) {
		TwinsanitySkydome::Dispose(skydome);
		VirtualPool::FreeMemory(skydome);
		}
		SKYDOME_LIST.count = SKYDOME_LIST.count + -1;
		newCapacity = SKYDOME_LIST.capacity + 1;
		if (0x2fe < (ushort)(SKYDOME_LIST.capacity + 1)) {
		SKYDOME_LIST.capacity = SKYDOME_LIST.capacity - 0x2fe;
		newCapacity = SKYDOME_LIST.capacity;
		}
		SKYDOME_LIST.capacity = newCapacity;
		hasSkydomes = true;
		}
		if (RIGID_MODEL_2_LIST.count == 0) {
		hasRigidModels2 = false;
		}
		else {
		rigidModel2 = RIGID_MODEL_2_LIST.rigidModelArray[RIGID_MODEL_2_LIST.capacity];
		if (rigidModel2 != (TwinsanityRigidModel2 *)0x0) {
		TwinsanityRigidModel2::Dispose(rigidModel2);
		VirtualPool::FreeMemory(rigidModel2);
		}
		RIGID_MODEL_2_LIST.count = RIGID_MODEL_2_LIST.count + -1;
		newCapacity = RIGID_MODEL_2_LIST.capacity + 1;
		if (0x2fe < (ushort)(RIGID_MODEL_2_LIST.capacity + 1)) {
		RIGID_MODEL_2_LIST.capacity = RIGID_MODEL_2_LIST.capacity - 0x2fe;
		newCapacity = RIGID_MODEL_2_LIST.capacity;
		}
		RIGID_MODEL_2_LIST.capacity = newCapacity;
		hasRigidModels2 = true;
		}
		if (LOD_LIST.count == 0) {
		return (bool)(hasMaterials | hasTextures | hasModels | hasRigidModels1 | hasSkins |hasBlendSkins | hasSkydomes | hasRigidModels2);
		}
		lod = LOD_LIST.lodArray[LOD_LIST.capacity];
		if (lod != (TwinsanityLod *)0x0) {
		TwinsanityLod::Dispose(lod);
		VirtualPool::FreeMemory(lod);
		}
		LOD_LIST.count = LOD_LIST.count + -1;
		newCapacity = LOD_LIST.capacity + 1;
		if (0x2fe < (ushort)(LOD_LIST.capacity + 1)) {
		LOD_LIST.capacity = LOD_LIST.capacity - 0x2fe;
		newCapacity = LOD_LIST.capacity;
		}
		LOD_LIST.capacity = newCapacity;
		return true;
		}
		
	*/
	return false;
}

SectionDataScriptBase* GameResources::AllocCollectionScripts(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataScriptBase * __thiscall GameResources::AllocCollectionScripts(GameResources *this,uint param_1){
		SectionDataScriptBase *this_00;
		short *psVar1;
		ResourceListScript *scriptList;
		this_00 = (SectionDataScriptBase *)VirtualPool::AllocateMemory(0x18);
		if (this_00 == (SectionDataScriptBase *)0x0) {
		this_00 = (SectionDataScriptBase *)0x0;
		}
		else {
		SectionDataScriptBase::Construct(this_00,param_1,1);
		(this_00->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Script;
		psVar1 = (short *)VirtualPool::AllocateMemory(param_1 * 2);
		this_00->indexes = psVar1;
		}
		(this->parent).scripts = this_00;
		scriptList = (ResourceListScript *)VirtualPool::AllocateMemory(0xc00);
		if (scriptList == (ResourceListScript *)0x0) {
		scriptList = (ResourceListScript *)0x0;
		}
		else {
		scriptList->capacity = 0;
		scriptList->count = 0;
		}
		(this->parent).scriptList = scriptList;
		((this->parent).scripts)->scriptList = scriptList;
		SCRIPTS = (this->parent).scripts;
		return (this->parent).scripts;
		}
		
	*/
	return null;
}

uint GameResources::AllocCollectionGameObjects(uint count) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataGameObjectBase * __thiscall GameResources::AllocCollectionGameObjects(GameResources *this,uint count){
		SectionDataGameObject *data;
		ResourceListGameObject *gameObjectList;
		data = (SectionDataGameObject *)VirtualPool::AllocateMemory(0x18);
		if (data == (SectionDataGameObject *)0x0) {
		data = (SectionDataGameObject *)0x0;
		}
		else {
		SectionDataGameObjectBase::Construct((SectionDataGameObjectBase *)data,count,0);
		(data->parent).parent.vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_GameObject;
		}
		(this->parent).gameObjects = &data->parent;
		gameObjectList = (ResourceListGameObject *)VirtualPool::AllocateMemory(0xc00);
		if (gameObjectList != (ResourceListGameObject *)0x0) {
		gameObjectList->capacity = 0;
		gameObjectList->count = 0;
		(this->parent).gameObjectList = gameObjectList;
		((this->parent).gameObjects)->gameObjectList = gameObjectList;
		return (this->parent).gameObjects;
		}
		(this->parent).gameObjectList = (ResourceListGameObject *)0x0;
		((this->parent).gameObjects)->gameObjectList = (ResourceListGameObject *)0x0;
		return (this->parent).gameObjects;
		}
		
	*/
	return 0;
}

SectionDataCodeModelBase* GameResources::AllocCollectionCodeModels(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataCodeModelBase * __thiscall GameResources::AllocCollectionCodeModels(GameResources *this,uint param_1){
		SectionDataCodeModelBase *this_00;
		ResourceListCodeModel *codeModelList;
		this_00 = (SectionDataCodeModelBase *)VirtualPool::AllocateMemory(0x18);
		if (this_00 == (SectionDataCodeModelBase *)0x0) {
		this_00 = (SectionDataCodeModelBase *)0x0;
		}
		else {
		SectionDataCodeModelBase::Construct(this_00,param_1,1);
		(this_00->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_CodeModel;
		}
		(this->parent).codeModels = this_00;
		codeModelList = (ResourceListCodeModel *)VirtualPool::AllocateMemory(0xc00);
		if (codeModelList != (ResourceListCodeModel *)0x0) {
		codeModelList->capacity = 0;
		codeModelList->count = 0;
		(this->parent).codeModelList = codeModelList;
		((this->parent).codeModels)->codeModelList = codeModelList;
		return (this->parent).codeModels;
		}
		(this->parent).codeModelList = (ResourceListCodeModel *)0x0;
		((this->parent).codeModels)->codeModelList = (ResourceListCodeModel *)0x0;
		return (this->parent).codeModels;
		}
		
	*/
	return null;
}

uint GameResources::AllocCollectionAnimations(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataAnimationBase * __thiscall GameResources::AllocCollectionAnimations(GameResources *this,uint param_1){
		SectionDataAnimationBase *this_00;
		ResourceListAnimation *puVar1;
		this_00 = (SectionDataAnimationBase *)VirtualPool::AllocateMemory(0x18);
		if (this_00 == (SectionDataAnimationBase *)0x0) {
		this_00 = (SectionDataAnimationBase *)0x0;
		}
		else {
		SectionDataAnimationBase::Construct(this_00,param_1,1);
		(this_00->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Animation;
		}
		(this->parent).animations = this_00;
		puVar1 = (ResourceListAnimation *)VirtualPool::AllocateMemory(0xc00);
		if (puVar1 != (ResourceListAnimation *)0x0) {
		puVar1->capacity = 0;
		puVar1->count = 0;
		(this->parent).animationList = puVar1;
		((this->parent).animations)->animationList = puVar1;
		return (this->parent).animations;
		}
		(this->parent).animationList = (ResourceListAnimation *)0x0;
		((this->parent).animations)->animationList = (ResourceListAnimation *)0x0;
		return (this->parent).animations;
		}
		
	*/
	return 0;
}

SectionDataSfx* GameResources::AllocSfxCollection(uint count) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataSfx * __thiscall GameResources::AllocSfxCollection(GameResources *this,uint count){
		SectionDataSfx *this_00;
		short *psVar1;
		ResourceListSound *sfxList;
		this_00 = (SectionDataSfx *)VirtualPool::AllocateMemory(0x20);
		if (this_00 == (SectionDataSfx *)0x0) {
		this_00 = (SectionDataSfx *)0x0;
		}
		else {
		SectionDataSfxBase::Construct((SectionDataSfxBase *)this_00,count,1);
		(this_00->parent).parent.vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Sfx;
		this_00->field2_0x1c = 0xffffffff;
		psVar1 = (short *)VirtualPool::AllocateMemory(count * 2);
		(this_00->parent).indexes = psVar1;
		this_00->waveData = (MemoryStream *)0x0;
		}
		(this->parent).sounds = this_00;
		sfxList = (ResourceListSound *)VirtualPool::AllocateMemory(0xc00);
		if (sfxList != (ResourceListSound *)0x0) {
		sfxList->capacity = 0;
		sfxList->count = 0;
		(this->parent).sfxList = sfxList;
		(((this->parent).sounds)->parent).sfxList = sfxList;
		return (this->parent).sounds;
		}
		(this->parent).sfxList = (ResourceListSound *)0x0;
		(((this->parent).sounds)->parent).sfxList = (ResourceListSound *)0x0;
		return (this->parent).sounds;
		}
		
	*/
	return null;
}

uint GameResources::AllocVoCollections(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataSfx ** __thiscall GameResources::AllocVoCollections(GameResources *this,uint param_1){
		SectionDataSfx **voDataArray;
		ResourceListSound **ppRVar1;
		SectionDataSfx *voData;
		short *psVar2;
		ResourceListSound *voList;
		uint i;
		voDataArray = (SectionDataSfx **)VirtualPool::AllocateMemory((this->parent).languages << 2);
		(this->parent).voices = voDataArray;
		ppRVar1 = (ResourceListSound **)VirtualPool::AllocateMemory((this->parent).languages << 2);
		(this->parent).voList = ppRVar1;
		i = 0;
		if ((this->parent).languages != 0) {
		do {
		voData = (SectionDataSfx *)VirtualPool::AllocateMemory(0x20);
		if (voData == (SectionDataSfx *)0x0) {
		voData = (SectionDataSfx *)0x0;
		}
		else {
		SectionDataSfxBase::Construct((SectionDataSfxBase *)voData,param_1,1);
		(voData->parent).parent.vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Sfx;
		voData->field2_0x1c = 0xffffffff;
		psVar2 = (short *)VirtualPool::AllocateMemory(param_1 * 2);
		(voData->parent).indexes = psVar2;
		voData->waveData = (MemoryStream *)0x0;
		}
		(this->parent).voices[i] = voData;
		voList = (ResourceListSound *)VirtualPool::AllocateMemory(0xc00);
		if (voList == (ResourceListSound *)0x0) {
		voList = (ResourceListSound *)0x0;
		}
		else {
		voList->capacity = 0;
		voList->count = 0;
		}
		(this->parent).voList[i] = voList;
		((this->parent).voices[i]->parent).sfxList = (this->parent).voList[i];
		i = i + 1;
		}
		 while (i < (this->parent).languages);
		}
		return (this->parent).voices;
		}
		
	*/
	return 0;
}

SectionDataOGIBase* GameResources::AllocCollectionOGIs(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataOGIBase * __thiscall GameResources::AllocCollectionOGIs(GameResources *this,uint param_1){
		SectionDataOGIBase *this_00;
		ResourceListOGI *ogiList;
		this_00 = (SectionDataOGIBase *)VirtualPool::AllocateMemory(0x18);
		if (this_00 == (SectionDataOGIBase *)0x0) {
		this_00 = (SectionDataOGIBase *)0x0;
		}
		else {
		SectionDataOGIBase::Construct(this_00,param_1,1);
		(this_00->parent).vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_OGI;
		}
		(this->parent).ogis = this_00;
		ogiList = (ResourceListOGI *)VirtualPool::AllocateMemory(0xc00);
		if (ogiList != (ResourceListOGI *)0x0) {
		ogiList->capacity = 0;
		ogiList->count = 0;
		(this->parent).ogiList = ogiList;
		((this->parent).ogis)->ogiList = ogiList;
		return (this->parent).ogis;
		}
		(this->parent).ogiList = (ResourceListOGI *)0x0;
		((this->parent).ogis)->ogiList = (ResourceListOGI *)0x0;
		return (this->parent).ogis;
		}
		
	*/
	return null;
}

void GameResources::Dispose(byte flag) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	GameResources * __thiscall GameResources::Dispose(GameResources *this,byte flag){
		(this->parent).vtable = (GameResourcesBase_VTable *)&GameResources_VT;
		GameResourcesBase::CleanUp(&this->parent);
		if ((flag & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void GameResources::FreeArray1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void GameResources::FreeArray1(void){
		int index;
		float *pfVar1;
		float fVar2;
		int i;
		float *element;
		index = 0;
		i = 5;
		do {
		if (*(void **)((int)Float5Array + index) != (void *)0x0) {
		VirtualPool::FreeMemory(*(void **)((int)Float5Array + index));
		}
		element = *(float **)((int)SCRIPT_PACK_ARRAY_1 + index);
		if (element != (float *)0x0) {
		fVar2 = element[-1];
		pfVar1 = element + (int)fVar2 * 2;
		if (-1 < (int)fVar2 + -1) {
		do {
		pfVar1 = pfVar1 + -2;
		FUN_0015cf30((int)pfVar1);
		fVar2 = (float)((int)fVar2 + -1);
		}
		 while (fVar2 != 0.0);
		}
		VirtualPool::FreeMemory(element + -1);
		}
		if (*(undefined4 **)((int)ACTION_ARRAY_1 + index) != (undefined4 *)0x0) {
		(**(code **)**(undefined4 **)((int)ACTION_ARRAY_1 + index))(1);
		}
		index = index + 4;
		i = i + -1;
		}
		 while (i != 0);
		UINT_003cfea0 = 0;
		DAT_003cfea4 = 0;
		ACTION_ARRAY_1[0] = (ActionAbstract *)0x0;
		ACTION_ARRAY_1[1] = (ActionAbstract *)0x0;
		ACTION_ARRAY_1[2] = (ActionAbstract *)0x0;
		ACTION_ARRAY_1[3] = (ActionAbstract *)0x0;
		ACTION_ARRAY_1[4] = (ActionAbstract *)0x0;
		Float5Array[0] = 0.0;
		Float5Array[1] = 0.0;
		Float5Array[2] = 0.0;
		Float5Array[3] = 0.0;
		Float5Array[4] = 0.0;
		SCRIPT_PACK_ARRAY_1[0] = (GameObjectScriptPack *)0x0;
		SCRIPT_PACK_ARRAY_1[1] = (GameObjectScriptPack *)0x0;
		SCRIPT_PACK_ARRAY_1[2] = (GameObjectScriptPack *)0x0;
		SCRIPT_PACK_ARRAY_1[3] = (GameObjectScriptPack *)0x0;
		SCRIPT_PACK_ARRAY_1[4] = (GameObjectScriptPack *)0x0;
		return;
		}
		
	*/
	return;
}

void GameResources::FreeArray2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void GameResources::FreeArray2(void){
		int iVar2;
		float *pfVar3;
		float fVar4;
		int local_4;
		float *iVar1;
		iVar2 = 0;
		local_4 = 9;
		do {
		if (*(void **)((int)Float9Array + iVar2) != (void *)0x0) {
		VirtualPool::FreeMemory(*(void **)((int)Float9Array + iVar2));
		}
		iVar1 = *(float **)((int)SCRIPT_PACK_ARRAY_2 + iVar2);
		if (iVar1 != (float *)0x0) {
		fVar4 = iVar1[-1];
		pfVar3 = iVar1 + (int)fVar4 * 2;
		if (-1 < (int)fVar4 + -1) {
		do {
		pfVar3 = pfVar3 + -2;
		FUN_0015cf30((int)pfVar3);
		fVar4 = (float)((int)fVar4 + -1);
		}
		 while (fVar4 != 0.0);
		}
		VirtualPool::FreeMemory(iVar1 + -1);
		}
		if (*(undefined4 **)((int)ACTION_ARRAY_2 + iVar2) != (undefined4 *)0x0) {
		(**(code **)**(undefined4 **)((int)ACTION_ARRAY_2 + iVar2))(1);
		}
		iVar2 = iVar2 + 4;
		local_4 = local_4 + -1;
		}
		 while (local_4 != 0);
		InitScriptPack2Array();
		return;
		}
		
	*/
	return;
}

void GameResources::InitCodeModels(byte flag) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameResources::InitCodeModels(GameResources *this,byte flag){
		int i;
		CodeModel *element;
		if (flag != 0) {
		FreeArray1();
		FreeArray2();
		}
		i = 0;
		do {
		if (((short)i != -1) &&(element = ((this->parent).codeModels)->elements[i & 0x7fff], element != (CodeModel *)0x0)) {
		if (*(char *)&element->header == '\x11') {
		CodeModel::InitCodeModel(element);
		}
		else if (*(char *)&element->header == '\x12') {
		CodeModel::InitCodeModel(element);
		}
		}
		i = i + 1;
		}
		 while (i < 200);
		return;
		}
		
	*/
	return;
}

void GameResources::Dispose_15() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameResources::Dispose(GameResources *this){
		(this->parent).vtable = (GameResourcesBase_VTable *)&GameResources_VT;
		GameResourcesBase::CleanUp(&this->parent);
		return;
		}
		
	*/
	return;
}

