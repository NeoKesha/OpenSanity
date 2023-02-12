#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/SectionGraphics.h"

#include "headers/Known/LevelStructure/Sections/RM/SectionAbstract/SectionAbstract.h"
#include "headers/Known/LevelStructure/Readers/Known/SectionReaderGraphics.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void SectionGraphics::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionGraphics::Construct(SectionGraphics *this){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Graphics;
		(this->materials).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Material;
		(this->materials).data = &ENV_CLASS_187_SECTION_MATERIALS;
		(this->textures).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Texture;
		(this->textures).data = &ENV_CLASS_183_SECTION_TEXTURES;
		(this->models).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Model;
		(this->models).data = &ENV_CLASS_182_SECTION_MODELS;
		(this->rigidModels).parent.vtable = (SectionAbstract_VTable *)&Section_VT_RigidModel;
		(this->rigidModels).data = &ENV_CLASS_181_SECTION_RMODELS;
		(this->skins).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Skin;
		(this->skins).data = &ENV_CLASS_179_SECTION_SKINS;
		(this->blendSkins).parent.vtable = (SectionAbstract_VTable *)&Section_VT_BlendSkin;
		(this->blendSkins).data = &ENV_CLASS_180_SECTION_BSKINS;
		(this->skydomes).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Skydome;
		(this->skydomes).data = &ENV_CLASS_203_SECTION_SKYDOMES;
		(this->rigidModels2).parent.vtable = (SectionAbstract_VTable *)&Section_VT_RigidModel2;
		(this->rigidModels2).data = (SectionDataRigidModel *)&ENV_CLASS_178_SECTION_RMODELS2;
		(this->lods).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Lod;
		(this->lods).data = &ENV_CLASS_177_SECTION_LODS;
		this->memptrArray[0] = (undefined *)0x0;
		this->memptrArray[1] = (undefined *)0x0;
		this->memptrArray[2] = (undefined *)0x0;
		this->memptrArray[3] = (undefined *)0x0;
		this->memptrArray[4] = (undefined *)0x0;
		this->memptrArray[5] = (undefined *)0x0;
		this->memptrArray[6] = (undefined *)0x0;
		this->memptrArray[7] = (undefined *)0x0;
		this->memptrArray[8] = (undefined *)0x0;
		return;
		}
		
	*/
	return;
}

void SectionGraphics::CleanUpMe() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionGraphics::CleanUpMe(SectionGraphics *this){
		undefined **ppuVar1;
		int iVar2;
		SectionDataMaterial::Dispose(&ENV_CLASS_187_SECTION_MATERIALS);
		SectionDataTexture::Dispose(&ENV_CLASS_183_SECTION_TEXTURES);
		SectionDataModel::Dispose(&ENV_CLASS_182_SECTION_MODELS);
		SectionDataRigidModel::Dispose(&ENV_CLASS_181_SECTION_RMODELS);
		SectionDataSkin::Dispose(&ENV_CLASS_179_SECTION_SKINS);
		SectionDataBlendSkin::Dispose(&ENV_CLASS_180_SECTION_BSKINS);
		SectionDataSkydome::Dispose(&ENV_CLASS_203_SECTION_SKYDOMES);
		SectionDataRigidModel::Dispose((SectionDataRigidModel *)&ENV_CLASS_178_SECTION_RMODELS2);
		SectionDataLod::Dispose(&ENV_CLASS_177_SECTION_LODS);
		ppuVar1 = this->memptrArray;
		iVar2 = 9;
		do {
		VirtualPool::FreeMemory(*ppuVar1);
		*ppuVar1 = (undefined *)0x0;
		ppuVar1 = ppuVar1 + 1;
		iVar2 = iVar2 + -1;
		}
		 while (iVar2 != 0);
		return;
		}
		
	*/
	return;
}

void SectionGraphics::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionGraphics::CleanUp(SectionGraphics *this){
		SectionDataLod *this_00;
		SectionDataRigidModel *pSVar1;
		SectionDataSkydome *this_01;
		SectionDataBlendSkin *this_02;
		SectionDataSkin *this_03;
		SectionDataModel *this_04;
		SectionDataTexture *this_05;
		SectionDataMaterial *this_06;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Graphics;
		CleanUpMe(this);
		this_00 = (this->lods).data;
		(this->lods).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Lod;
		SectionDataLod::Dispose(this_00);
		(this->lods).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		pSVar1 = (this->rigidModels2).data;
		(this->rigidModels2).parent.vtable = (SectionAbstract_VTable *)&Section_VT_RigidModel2;
		SectionDataRigidModel::Dispose(pSVar1);
		(this->rigidModels2).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		this_01 = (this->skydomes).data;
		(this->skydomes).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Skydome;
		SectionDataSkydome::Dispose(this_01);
		(this->skydomes).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		this_02 = (this->blendSkins).data;
		(this->blendSkins).parent.vtable = (SectionAbstract_VTable *)&Section_VT_BlendSkin;
		SectionDataBlendSkin::Dispose(this_02);
		(this->blendSkins).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		this_03 = (this->skins).data;
		(this->skins).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Skin;
		SectionDataSkin::Dispose(this_03);
		(this->skins).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		pSVar1 = (this->rigidModels).data;
		(this->rigidModels).parent.vtable = (SectionAbstract_VTable *)&Section_VT_RigidModel;
		SectionDataRigidModel::Dispose(pSVar1);
		(this->rigidModels).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		this_04 = (this->models).data;
		(this->models).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Model;
		SectionDataModel::Dispose(this_04);
		(this->models).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		this_05 = (this->textures).data;
		(this->textures).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Texture;
		SectionDataTexture::Dispose(this_05);
		(this->textures).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		this_06 = (this->materials).data;
		(this->materials).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Material;
		SectionDataMaterial::Dispose(this_06);
		(this->materials).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

SectionGraphics* SectionGraphics::Read(char* param_1, SectionAbstract* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address SectionGraphics * __thiscall SectionGraphics::Read(SectionGraphics *this,char *param_1,SectionAbstract *param_2){
		GameReaderStorage *this_00;
		TwinString *pTVar1;
		TwinString *pTVar2;
		SectionReaderUnknownI *reader;
		FileResourceDescG *pFVar3;
		char *pcVar4;
		TwinString local_60;
		TwinString local_54;
		TwinString local_48;
		TwinString local_3c;
		TwinString local_30;
		TwinString local_24;
		TwinString local_18;
		TwinString local_c;
		(this->parent).vtable = (SectionAbstract_VTable *)param_2;
		(this->materials).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Material;
		(this->materials).data = &ENV_CLASS_187_SECTION_MATERIALS;
		(this->textures).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Texture;
		(this->textures).data = &ENV_CLASS_183_SECTION_TEXTURES;
		(this->models).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Model;
		(this->models).data = &ENV_CLASS_182_SECTION_MODELS;
		(this->rigidModels).parent.vtable = (SectionAbstract_VTable *)&Section_VT_RigidModel;
		(this->rigidModels).data = &ENV_CLASS_181_SECTION_RMODELS;
		(this->skins).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Skin;
		(this->skins).data = &ENV_CLASS_179_SECTION_SKINS;
		(this->blendSkins).parent.vtable = (SectionAbstract_VTable *)&Section_VT_BlendSkin;
		(this->blendSkins).data = &ENV_CLASS_180_SECTION_BSKINS;
		this_00 = GAME_READER_STORAGE[0];
		local_54.value = (char *)0x0;
		local_54.strLength = 0;
		local_54.strSize = 0;
		local_60.value = (char *)0x0;
		local_60.strLength = 0;
		local_60.strSize = 0;
		local_3c.value = (char *)0x0;
		local_3c.strLength = 0;
		local_3c.strSize = 0;
		TwinString::Set(&local_24,param_1);
		TwinString::ReplaceByStrBeforeC(&local_24,&local_54,'\\');
		TwinString::Dispose(&local_24);
		TwinString::Set(&local_24,param_1);
		TwinString::FUN_0015a9a0(&local_24,&local_60);
		TwinString::Dispose(&local_24);
		TwinString::Copy(&local_3c,local_60.value);
		TwinString::Append(&local_60,".dat");
		TwinString::Append(&local_3c,"DIR.dat");
		local_24.value = (char *)0x0;
		local_24.strLength = 0;
		local_24.strSize = 0;
		TwinString::Copy(&local_24,TEXTURES_XBOX_STR.value);
		local_48.value = (char *)0x0;
		local_48.strLength = 0;
		local_48.strSize = 0;
		TwinString::Copy(&local_48,local_54.value);
		TwinString::Append(&local_48,"\\");
		local_30.value = (char *)0x0;
		local_30.strLength = 0;
		local_30.strSize = 0;
		TwinString::Copy(&local_30,local_48.value);
		TwinString::Dispose(&local_48);
		pTVar2 = &local_18;
		pcVar4 = local_60.value;
		pTVar1 = TwinString::Concatenate(&local_30,&local_c,local_24.value);
		pTVar2 = TwinString::Concatenate(pTVar1,pTVar2,pcVar4);
		SectionAbstract::AddToReader(&(this->textures).parent,pTVar2->value,false);
		TwinString::Dispose(&local_18);
		TwinString::Dispose(&local_c);
		TwinString::Dispose(&local_30);
		TwinString::Dispose(&local_24);
		local_30.value = (char *)0x0;
		local_30.strLength = 0;
		local_30.strSize = 0;
		TwinString::Copy(&local_30,MATERIALS_XBOX_STR.value);
		local_48.value = (char *)0x0;
		local_48.strLength = 0;
		local_48.strSize = 0;
		TwinString::Copy(&local_48,local_54.value);
		TwinString::Append(&local_48,"\\");
		local_24.value = (char *)0x0;
		local_24.strLength = 0;
		local_24.strSize = 0;
		TwinString::Copy(&local_24,local_48.value);
		TwinString::Dispose(&local_48);
		pTVar2 = &local_c;
		pcVar4 = local_60.value;
		pTVar1 = TwinString::Concatenate(&local_24,&local_18,local_30.value);
		pTVar2 = TwinString::Concatenate(pTVar1,pTVar2,pcVar4);
		SectionAbstract::AddToReader(&(this->materials).parent,pTVar2->value,false);
		TwinString::Dispose(&local_c);
		TwinString::Dispose(&local_18);
		TwinString::Dispose(&local_24);
		TwinString::Dispose(&local_30);
		local_30.value = (char *)0x0;
		local_30.strLength = 0;
		local_30.strSize = 0;
		TwinString::Copy(&local_30,TwinString_004028f8.value);
		local_48.value = (char *)0x0;
		local_48.strLength = 0;
		local_48.strSize = 0;
		TwinString::Copy(&local_48,local_54.value);
		TwinString::Append(&local_48,"\\");
		local_24.value = (char *)0x0;
		local_24.strLength = 0;
		local_24.strSize = 0;
		TwinString::Copy(&local_24,local_48.value);
		TwinString::Dispose(&local_48);
		pTVar2 = &local_c;
		pcVar4 = local_3c.value;
		pTVar1 = TwinString::Concatenate(&local_24,&local_18,local_30.value);
		pTVar2 = TwinString::Concatenate(pTVar1,pTVar2,pcVar4);
		SectionAbstract::AddToReader(&(this->models).parent,pTVar2->value,false);
		TwinString::Dispose(&local_c);
		TwinString::Dispose(&local_18);
		TwinString::Dispose(&local_24);
		TwinString::Dispose(&local_30);
		local_30.value = (char *)0x0;
		local_30.strLength = 0;
		local_30.strSize = 0;
		TwinString::Copy(&local_30,_DAT_003ec5b0);
		local_48.value = (char *)0x0;
		local_48.strLength = 0;
		local_48.strSize = 0;
		TwinString::Copy(&local_48,local_54.value);
		TwinString::Append(&local_48,"\\");
		local_24.value = (char *)0x0;
		local_24.strLength = 0;
		local_24.strSize = 0;
		TwinString::Copy(&local_24,local_48.value);
		TwinString::Dispose(&local_48);
		pTVar2 = &local_c;
		pcVar4 = local_60.value;
		pTVar1 = TwinString::Concatenate(&local_24,&local_18,local_30.value);
		pTVar2 = TwinString::Concatenate(pTVar1,pTVar2,pcVar4);
		SectionAbstract::AddToReader(&(this->rigidModels).parent,pTVar2->value,false);
		TwinString::Dispose(&local_c);
		TwinString::Dispose(&local_18);
		TwinString::Dispose(&local_24);
		TwinString::Dispose(&local_30);
		local_30.value = (char *)0x0;
		local_30.strLength = 0;
		local_30.strSize = 0;
		TwinString::Copy(&local_30,_DAT_00402c44);
		local_48.value = (char *)0x0;
		local_48.strLength = 0;
		local_48.strSize = 0;
		TwinString::Copy(&local_48,local_54.value);
		TwinString::Append(&local_48,"\\");
		local_24.value = (char *)0x0;
		local_24.strLength = 0;
		local_24.strSize = 0;
		TwinString::Copy(&local_24,local_48.value);
		TwinString::Dispose(&local_48);
		pTVar2 = &local_c;
		pcVar4 = local_60.value;
		pTVar1 = TwinString::Concatenate(&local_24,&local_18,local_30.value);
		pTVar2 = TwinString::Concatenate(pTVar1,pTVar2,pcVar4);
		SectionAbstract::AddToReader(&(this->skins).parent,pTVar2->value,false);
		TwinString::Dispose(&local_c);
		TwinString::Dispose(&local_18);
		TwinString::Dispose(&local_24);
		TwinString::Dispose(&local_30);
		local_30.value = (char *)0x0;
		local_30.strLength = 0;
		local_30.strSize = 0;
		TwinString::Copy(&local_30,_DAT_00402a24);
		local_48.value = (char *)0x0;
		local_48.strLength = 0;
		local_48.strSize = 0;
		TwinString::Copy(&local_48,local_54.value);
		TwinString::Append(&local_48,"\\");
		local_24.value = (char *)0x0;
		local_24.strLength = 0;
		local_24.strSize = 0;
		TwinString::Copy(&local_24,local_48.value);
		TwinString::Dispose(&local_48);
		pTVar2 = &local_c;
		pcVar4 = local_60.value;
		pTVar1 = TwinString::Concatenate(&local_24,&local_18,local_30.value);
		pTVar2 = TwinString::Concatenate(pTVar1,pTVar2,pcVar4);
		SectionAbstract::AddToReader(&(this->blendSkins).parent,pTVar2->value,false);
		TwinString::Dispose(&local_c);
		TwinString::Dispose(&local_18);
		TwinString::Dispose(&local_24);
		TwinString::Dispose(&local_30);
		TwinString::Copy(&local_60,param_1);
		TwinString::Append(&local_60,".chr");
		reader = (SectionReaderUnknownI *)VirtualPool::AllocateMemory(8);
		if (reader == (SectionReaderUnknownI *)0x0) {
		reader = (SectionReaderUnknownI *)0x0;
		}
		else {
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_I;
		reader->field1_0x4 = (OGI *)param_2;
		}
		pFVar3 = (FileResourceDescG *)VirtualPool::AllocateMemory(0x30);
		if (pFVar3 == (FileResourceDescG *)0x0) {
		pFVar3 = (FileResourceDescG *)0x0;
		}
		else {
		pFVar3 = FileResourceDescG::Construct(pFVar3,local_60.value,&reader->parent,0xd);
		}
		GameReaderStorage::AddFileDesc(this_00,&pFVar3->parent,0);
		TwinString::Dispose(&local_3c);
		TwinString::Dispose(&local_60);
		TwinString::Dispose(&local_54);
		return this;
		}
		
	*/
	return null;
}

void SectionGraphics::DisposeData() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionGraphics::DisposeData(SectionGraphics *this){
		SectionDataBlendSkin *blendSkinsData;
		SectionDataMaterial *materialsData;
		SectionDataModel *modelsData;
		SectionDataRigidModel *rigidModelsData;
		SectionDataSkin *skinsData;
		SectionDataTexture *texturesData;
		blendSkinsData = (this->blendSkins).data;
		(this->blendSkins).parent.vtable = (SectionAbstract_VTable *)&Section_VT_BlendSkin;
		SectionDataBlendSkin::Dispose(blendSkinsData);
		(this->blendSkins).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		skinsData = (this->skins).data;
		(this->skins).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Skin;
		SectionDataSkin::Dispose(skinsData);
		(this->skins).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		rigidModelsData = (this->rigidModels).data;
		(this->rigidModels).parent.vtable = (SectionAbstract_VTable *)&Section_VT_RigidModel;
		SectionDataRigidModel::Dispose(rigidModelsData);
		(this->rigidModels).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		modelsData = (this->models).data;
		(this->models).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Model;
		SectionDataModel::Dispose(modelsData);
		(this->models).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		texturesData = (this->textures).data;
		(this->textures).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Texture;
		SectionDataTexture::Dispose(texturesData);
		(this->textures).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		materialsData = (this->materials).data;
		(this->materials).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Material;
		SectionDataMaterial::Dispose(materialsData);
		(this->materials).parent.vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionGraphics::ReadUnpacked1(char* chunkName, bool param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionGraphics::ReadUnpacked1(SectionGraphics *this,char *chunkName,bool param_2){
		TwinString *pTVar1;
		TwinString *fname;
		char *pcVar2;
		TwinString dirFileName;
		TwinString local_60;
		TwinString local_54;
		TwinString geoFileName;
		TwinString rootName;
		TwinString local_30;
		TwinString tmpStr;
		TwinString local_18;
		TwinString local_c;
		local_60.value = (char *)0x0;
		local_60.strLength = 0;
		local_60.strSize = 0;
		rootName.value = (char *)0x0;
		rootName.strLength = 0;
		rootName.strSize = 0;
		dirFileName.value = (char *)0x0;
		dirFileName.strLength = 0;
		dirFileName.strSize = 0;
		geoFileName.value = (char *)0x0;
		geoFileName.strLength = 0;
		geoFileName.strSize = 0;
		TwinString::Set(&tmpStr,chunkName);
		TwinString::ReplaceByStrBeforeC(&tmpStr,&local_60,'\\');
		TwinString::Dispose(&tmpStr);
		TwinString::Set(&tmpStr,chunkName);
		TwinString::FUN_0015a9a0(&tmpStr,&rootName);
		TwinString::Dispose(&tmpStr);
		TwinString::Copy(&dirFileName,rootName.value);
		TwinString::Append(&dirFileName,".dir");
		TwinString::Copy(&geoFileName,rootName.value);
		TwinString::Append(&geoFileName,".geo");
		tmpStr.value = (char *)0x0;
		tmpStr.strLength = 0;
		tmpStr.strSize = 0;
		TwinString::Copy(&tmpStr,TEXTURES_XBOX_STR.value);
		local_54.value = (char *)0x0;
		local_54.strLength = 0;
		local_54.strSize = 0;
		TwinString::Copy(&local_54,local_60.value);
		TwinString::Append(&local_54,"\\");
		local_30.value = (char *)0x0;
		local_30.strLength = 0;
		local_30.strSize = 0;
		TwinString::Copy(&local_30,local_54.value);
		TwinString::Dispose(&local_54);
		fname = &local_18;
		pcVar2 = dirFileName.value;
		pTVar1 = TwinString::Concatenate(&local_30,&local_c,tmpStr.value);
		fname = TwinString::Concatenate(pTVar1,fname,pcVar2);
		SectionAbstract::AddToReader(&(this->textures).parent,fname->value,param_2);
		TwinString::Dispose(&local_18);
		TwinString::Dispose(&local_c);
		TwinString::Dispose(&local_30);
		TwinString::Dispose(&tmpStr);
		local_30.value = (char *)0x0;
		local_30.strLength = 0;
		local_30.strSize = 0;
		TwinString::Copy(&local_30,MATERIALS_XBOX_STR.value);
		local_54.value = (char *)0x0;
		local_54.strLength = 0;
		local_54.strSize = 0;
		TwinString::Copy(&local_54,local_60.value);
		TwinString::Append(&local_54,"\\");
		tmpStr.value = (char *)0x0;
		tmpStr.strLength = 0;
		tmpStr.strSize = 0;
		TwinString::Copy(&tmpStr,local_54.value);
		TwinString::Dispose(&local_54);
		fname = &local_c;
		pcVar2 = dirFileName.value;
		pTVar1 = TwinString::Concatenate(&tmpStr,&local_18,local_30.value);
		fname = TwinString::Concatenate(pTVar1,fname,pcVar2);
		SectionAbstract::AddToReader(&(this->materials).parent,fname->value,param_2);
		TwinString::Dispose(&local_c);
		TwinString::Dispose(&local_18);
		TwinString::Dispose(&tmpStr);
		TwinString::Dispose(&local_30);
		local_30.value = (char *)0x0;
		local_30.strLength = 0;
		local_30.strSize = 0;
		TwinString::Copy(&local_30,MODELS_XBOX_STR.value);
		local_54.value = (char *)0x0;
		local_54.strLength = 0;
		local_54.strSize = 0;
		TwinString::Copy(&local_54,local_60.value);
		TwinString::Append(&local_54,"\\");
		tmpStr.value = (char *)0x0;
		tmpStr.strLength = 0;
		tmpStr.strSize = 0;
		TwinString::Copy(&tmpStr,local_54.value);
		TwinString::Dispose(&local_54);
		fname = &local_c;
		pcVar2 = dirFileName.value;
		pTVar1 = TwinString::Concatenate(&tmpStr,&local_18,local_30.value);
		fname = TwinString::Concatenate(pTVar1,fname,pcVar2);
		SectionAbstract::AddToReader(&(this->models).parent,fname->value,param_2);
		TwinString::Dispose(&local_c);
		TwinString::Dispose(&local_18);
		TwinString::Dispose(&tmpStr);
		TwinString::Dispose(&local_30);
		local_30.value = (char *)0x0;
		local_30.strLength = 0;
		local_30.strSize = 0;
		TwinString::Copy(&local_30,MODELS_XBOX_STR.value);
		local_54.value = (char *)0x0;
		local_54.strLength = 0;
		local_54.strSize = 0;
		TwinString::Copy(&local_54,local_60.value);
		TwinString::Append(&local_54,"\\");
		tmpStr.value = (char *)0x0;
		tmpStr.strLength = 0;
		tmpStr.strSize = 0;
		TwinString::Copy(&tmpStr,local_54.value);
		TwinString::Dispose(&local_54);
		fname = &local_c;
		pcVar2 = geoFileName.value;
		pTVar1 = TwinString::Concatenate(&tmpStr,&local_18,local_30.value);
		fname = TwinString::Concatenate(pTVar1,fname,pcVar2);
		SectionAbstract::AddToReader(&(this->rigidModels2).parent,fname->value,param_2);
		TwinString::Dispose(&local_c);
		TwinString::Dispose(&local_18);
		TwinString::Dispose(&tmpStr);
		TwinString::Dispose(&local_30);
		local_30.value = (char *)0x0;
		local_30.strLength = 0;
		local_30.strSize = 0;
		TwinString::Copy(&local_30,LODS_STR.value);
		local_54.value = (char *)0x0;
		local_54.strLength = 0;
		local_54.strSize = 0;
		TwinString::Copy(&local_54,local_60.value);
		TwinString::Append(&local_54,"\\");
		tmpStr.value = (char *)0x0;
		tmpStr.strLength = 0;
		tmpStr.strSize = 0;
		TwinString::Copy(&tmpStr,local_54.value);
		TwinString::Dispose(&local_54);
		fname = &local_c;
		pcVar2 = dirFileName.value;
		pTVar1 = TwinString::Concatenate(&tmpStr,&local_18,local_30.value);
		fname = TwinString::Concatenate(pTVar1,fname,pcVar2);
		SectionAbstract::AddToReader(&(this->lods).parent,fname->value,param_2);
		TwinString::Dispose(&local_c);
		TwinString::Dispose(&local_18);
		TwinString::Dispose(&tmpStr);
		TwinString::Dispose(&local_30);
		TwinString::Dispose(&geoFileName);
		TwinString::Dispose(&dirFileName);
		TwinString::Dispose(&rootName);
		TwinString::Dispose(&local_60);
		return;
		}
		
	*/
	return;
}

void SectionGraphics::ReadUnpacked2(char* param_1, bool param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionGraphics::ReadUnpacked2(SectionGraphics *this,char *param_1,bool param_2){
		TwinString *pTVar1;
		TwinString *fname;
		char *pcVar2;
		TwinString local_54;
		TwinString local_48;
		TwinString local_3c;
		TwinString local_30;
		TwinString local_24;
		TwinString local_18;
		TwinString local_c;
		local_54.value = (char *)0x0;
		local_54.strLength = 0;
		local_54.strSize = 0;
		local_24.value = (char *)0x0;
		local_24.strLength = 0;
		local_24.strSize = 0;
		TwinString::Set(&local_30,param_1);
		TwinString::ReplaceByStrBeforeC(&local_30,&local_54,'\\');
		TwinString::Dispose(&local_30);
		TwinString::Set(&local_30,param_1);
		TwinString::FUN_0015a9a0(&local_30,&local_24);
		TwinString::Dispose(&local_30);
		local_30.value = (char *)0x0;
		local_30.strLength = 0;
		local_30.strSize = 0;
		TwinString::Copy(&local_30,TEXTURES_XBOX_STR.value);
		local_48.value = (char *)0x0;
		local_48.strLength = 0;
		local_48.strSize = 0;
		TwinString::Copy(&local_48,local_54.value);
		TwinString::Append(&local_48,"\\");
		local_3c.value = (char *)0x0;
		local_3c.strLength = 0;
		local_3c.strSize = 0;
		TwinString::Copy(&local_3c,local_48.value);
		TwinString::Dispose(&local_48);
		pcVar2 = "Sky.dat";
		fname = &local_18;
		pTVar1 = TwinString::Concatenate(&local_3c,&local_c,local_30.value);
		fname = TwinString::Concatenate(pTVar1,fname,pcVar2);
		SectionAbstract::AddToReader(&(this->textures).parent,fname->value,param_2);
		TwinString::Dispose(&local_18);
		TwinString::Dispose(&local_c);
		TwinString::Dispose(&local_3c);
		TwinString::Dispose(&local_30);
		local_3c.value = (char *)0x0;
		local_3c.strLength = 0;
		local_3c.strSize = 0;
		TwinString::Copy(&local_3c,MATERIALS_XBOX_STR.value);
		local_48.value = (char *)0x0;
		local_48.strLength = 0;
		local_48.strSize = 0;
		TwinString::Copy(&local_48,local_54.value);
		TwinString::Append(&local_48,"\\");
		local_30.value = (char *)0x0;
		local_30.strLength = 0;
		local_30.strSize = 0;
		TwinString::Copy(&local_30,local_48.value);
		TwinString::Dispose(&local_48);
		pcVar2 = "Sky.dat";
		fname = &local_c;
		pTVar1 = TwinString::Concatenate(&local_30,&local_18,local_3c.value);
		fname = TwinString::Concatenate(pTVar1,fname,pcVar2);
		SectionAbstract::AddToReader(&(this->materials).parent,fname->value,param_2);
		TwinString::Dispose(&local_c);
		TwinString::Dispose(&local_18);
		TwinString::Dispose(&local_30);
		TwinString::Dispose(&local_3c);
		local_3c.value = (char *)0x0;
		local_3c.strLength = 0;
		local_3c.strSize = 0;
		TwinString::Copy(&local_3c,MODELS_XBOX_STR.value);
		local_48.value = (char *)0x0;
		local_48.strLength = 0;
		local_48.strSize = 0;
		TwinString::Copy(&local_48,local_54.value);
		TwinString::Append(&local_48,"\\");
		local_30.value = (char *)0x0;
		local_30.strLength = 0;
		local_30.strSize = 0;
		TwinString::Copy(&local_30,local_48.value);
		TwinString::Dispose(&local_48);
		pcVar2 = "Sky.dat";
		fname = &local_c;
		pTVar1 = TwinString::Concatenate(&local_30,&local_18,local_3c.value);
		fname = TwinString::Concatenate(pTVar1,fname,pcVar2);
		SectionAbstract::AddToReader(&(this->models).parent,fname->value,param_2);
		TwinString::Dispose(&local_c);
		TwinString::Dispose(&local_18);
		TwinString::Dispose(&local_30);
		TwinString::Dispose(&local_3c);
		local_3c.value = (char *)0x0;
		local_3c.strLength = 0;
		local_3c.strSize = 0;
		TwinString::Copy(&local_3c,MODELS_XBOX_STR.value);
		local_48.value = (char *)0x0;
		local_48.strLength = 0;
		local_48.strSize = 0;
		TwinString::Copy(&local_48,local_54.value);
		TwinString::Append(&local_48,"\\");
		local_30.value = (char *)0x0;
		local_30.strLength = 0;
		local_30.strSize = 0;
		TwinString::Copy(&local_30,local_48.value);
		TwinString::Dispose(&local_48);
		pcVar2 = "SkyGeom.dat";
		fname = &local_c;
		pTVar1 = TwinString::Concatenate(&local_30,&local_18,local_3c.value);
		fname = TwinString::Concatenate(pTVar1,fname,pcVar2);
		SectionAbstract::AddToReader(&(this->rigidModels2).parent,fname->value,param_2);
		TwinString::Dispose(&local_c);
		TwinString::Dispose(&local_18);
		TwinString::Dispose(&local_30);
		TwinString::Dispose(&local_3c);
		TwinString::Dispose(&local_24);
		TwinString::Dispose(&local_54);
		return;
		}
		
	*/
	return;
}

void SectionGraphics::InitPools() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionGraphics::InitPools(SectionGraphics *this){
		int *puVar1;
		int i;
		undefined **ppuVar1;
		i = 9;
		ppuVar1 = this->memptrArray;
		do {
		puVar1 = (int *)VirtualPool::AllocateMemory(0x800);
		if (puVar1 == (int *)0x0) {
		puVar1 = (int *)0x0;
		}
		else {
		*puVar1 = 0;
		}
		*ppuVar1 = (undefined *)puVar1;
		ppuVar1 = ppuVar1 + 1;
		i = i + -1;
		}
		 while (i != 0);
		ENV_CLASS_181_SECTION_RMODELS.pool = this->memptrArray[3];
		ENV_CLASS_178_SECTION_RMODELS2.field3_0x10 = (int)this->memptrArray[6];
		ENV_CLASS_180_SECTION_BSKINS.ids = (int *)this->memptrArray[5];
		ENV_CLASS_177_SECTION_LODS.pool = this->memptrArray[7];
		ENV_CLASS_182_SECTION_MODELS.pool = this->memptrArray[2];
		ENV_CLASS_203_SECTION_SKYDOMES.pool = this->memptrArray[8];
		ENV_CLASS_187_SECTION_MATERIALS.pool = this->memptrArray[1];
		ENV_CLASS_179_SECTION_SKINS.pool = this->memptrArray[4];
		ENV_CLASS_183_SECTION_TEXTURES.pool = this->memptrArray[0];
		return;
		}
		
	*/
	return;
}

void SectionGraphics::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionGraphics * __thiscall SectionGraphics::Dispose(SectionGraphics *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionGraphics::Write(uint _int, MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionGraphics::Write(SectionGraphics *this,undefined4 int,MemoryStream *stream){
		switch(int) {
		case 0:SectionAbstract::Write(&(this->textures).parent,stream);
		return;
		case 1:SectionAbstract::Write(&(this->materials).parent,stream);
		return;
		case 2:SectionAbstract::Write(&(this->models).parent,stream);
		return;
		case 3:SectionAbstract::Write(&(this->rigidModels).parent,stream);
		return;
		case 4:SectionAbstract::Write(&(this->skins).parent,stream);
		return;
		case 5:SectionAbstract::Write(&(this->blendSkins).parent,stream);
		return;
		case 6:SectionAbstract::Write(&(this->rigidModels2).parent,stream);
		return;
		case 7:SectionAbstract::Write(&(this->lods).parent,stream);
		break;
		case 8:SectionAbstract::Write(&(this->skydomes).parent,stream);
		return;
		}
		return;
		}
		
	*/
	return;
}

int SectionGraphics::GetElementCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionGraphics::GetElementCount(SectionGraphics *this){
		return 9;
		}
		
	*/
	return 0;
}

byte SectionGraphics::ReturnNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte SectionGraphics::ReturnNum(void){
		return 1;
		}
		
	*/
	return 0;
}

bool SectionGraphics::IsOne(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SectionGraphics::IsOne(int param_1){
		return param_1 == 1;
		}
		
	*/
	return false;
}

SectionReaderGraphics* SectionGraphics::GetReader(uint param_1, uint* param_2, int* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Switch with 1 destination removed at 0x001025f2 : 9 cases all go to same destination SectionReaderGraphics * __thiscall SectionGraphics::GetReader(SectionGraphics *this,undefined4 param_1,undefined4 *param_2,int *param_3){
		uint uVar1;
		int iVar2;
		SectionReaderGraphics *pSVar3;
		if (*param_3 == 0) {
		return (SectionReaderGraphics *)0x0;
		}
		uVar1 = param_2[2];
		iVar2 = *param_2;
		if (uVar1 < 9) {
		*param_3 = 0xc;
		}
		pSVar3 = (SectionReaderGraphics *)VirtualPool::AllocateMemory(0x10);
		if (pSVar3 == (SectionReaderGraphics *)0x0) {
		return (SectionReaderGraphics *)0x0;
		}
		pSVar3->size = iVar2;
		pSVar3->sectionId = uVar1;
		pSVar3->section = this;
		(pSVar3->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Graphics;
		return pSVar3;
		}
		
	*/
	return null;
}

void SectionGraphics::ReadInternal(int id, uint size) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionGraphics::ReadInternal(SectionGraphics *this,int id,int size){
		switch(id) {
		case 0:SectionAbstract::AddToReadQueue(&(this->textures).parent,size);
		return;
		case 1:SectionAbstract::AddToReadQueue(&(this->materials).parent,size);
		return;
		case 2:SectionAbstract::AddToReadQueue(&(this->models).parent,size);
		return;
		case 3:SectionAbstract::AddToReadQueue(&(this->rigidModels).parent,size);
		return;
		case 4:SectionAbstract::AddToReadQueue(&(this->skins).parent,size);
		return;
		case 5:SectionAbstract::AddToReadQueue(&(this->blendSkins).parent,size);
		return;
		case 6:SectionAbstract::AddToReadQueue(&(this->rigidModels2).parent,size);
		return;
		case 7:SectionAbstract::AddToReadQueue(&(this->lods).parent,size);
		break;
		case 8:SectionAbstract::AddToReadQueue(&(this->skydomes).parent,size);
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionGraphics::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionGraphics::DisposeResources(void){
		SectionDataSkydome::CleanUp(&ENV_CLASS_203_SECTION_SKYDOMES);
		SectionDataLod::CleanUp(&ENV_CLASS_177_SECTION_LODS);
		SectionDataRigidModel::CleanUp((SectionDataRigidModel *)&ENV_CLASS_178_SECTION_RMODELS2);
		SectionDataBlendSkin::CleanUp(&ENV_CLASS_180_SECTION_BSKINS);
		SectionDataSkin::CleanUp(&ENV_CLASS_179_SECTION_SKINS);
		SectionDataRigidModel2::CleanUp((SectionDataRigidModel2 *)&ENV_CLASS_181_SECTION_RMODELS);
		SectionDataModel::CleanUp(&ENV_CLASS_182_SECTION_MODELS);
		SectionDataMaterial::FreeElements(&ENV_CLASS_187_SECTION_MATERIALS);
		SectionDataTexture::Dispose(&ENV_CLASS_183_SECTION_TEXTURES);
		return;
		}
		
	*/
	return;
}

void SectionGraphics::InitPools_16() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionGraphics::InitPools(SectionGraphics *this){
		InitPools(this);
		return;
		}
		
	*/
	return;
}

bool SectionGraphics::Write_17(MemoryStream* stream, uint* param_2, uint* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionGraphics::Write(SectionGraphics *this,MemoryStream *stream,uint *param_2,uint *param_3){
		uint int;
		int = *param_2;
		if (int < 9) {
		Write(this,int,stream);
		*param_3 = int;
		*param_2 = *param_2 + 1;
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

