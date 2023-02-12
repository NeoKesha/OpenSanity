#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/Texture/SectionTexture.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/RigidModel/SectionRigidModel.h"
#include "headers/Known/LevelStructure/Sections/RM/SectionAbstract/SectionAbstract.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/Skydome/SectionSkydome.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/Lod/SectionLod.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/Skin/SectionSkin.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/Model/SectionModel.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/Material/SectionMaterial.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/BlendSkin/SectionBlendSkin.h"

class SectionGraphics : public SectionAbstract {
	public:
		SectionMaterial materials;
		SectionTexture textures;
		SectionModel models;
		SectionRigidModel rigidModels;
		SectionSkin skins;
		SectionBlendSkin blendSkins;
		SectionSkydome skydomes;
		SectionRigidModel rigidModels2;
		SectionLod lods;
		void * memptrArray[9];

		void Construct();
		virtual void CleanUpMe();
		virtual void CleanUp();
		SectionGraphics* Read(char* param_1, SectionAbstract* param_2);
		virtual void DisposeData();
		void ReadUnpacked1(char* chunkName, bool param_2);
		void ReadUnpacked2(char* param_1, bool param_2);
		virtual void InitPools();
		void Dispose(byte param_1);
		virtual void Write(uint _int, MemoryStream* stream);
		virtual int GetElementCount();
		static byte ReturnNum();
		static bool IsOne(int param_1);
		virtual SectionReaderGraphics* GetReader(uint param_1, uint* param_2, int* param_3);
		virtual void ReadInternal(int id, uint size);
		static void DisposeResources();
		virtual void InitPools_16();
		virtual bool Write_17(MemoryStream* stream, uint* param_2, uint* param_3);

};
