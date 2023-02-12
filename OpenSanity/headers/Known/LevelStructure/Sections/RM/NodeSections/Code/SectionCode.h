#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Sections/RM/SectionAbstract/SectionAbstract.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Code/Animation/SectionAnimation.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Code/OGI/SectionOGI.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Code/Script/SectionScript.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Code/Sfx/SectionSfx.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Code/CodeModel/SectionCodeModel.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Code/GameObject/SectionGameObject.h"

class SectionCode : public SectionAbstract {
	public:
		GameResources * gameResources;
		SectionGameObject sectionUnk1;
		SectionScript sectionUnk2;
		SectionAnimation sectionUnk3;
		SectionOGI sectionUnk4;
		SectionCodeModel sectionUnk5;
		SectionSfx sectionSfx;
		SectionSfx sectionVoEng;
		SectionSfx sectionVoFre;
		SectionSfx sectionVoGer;
		SectionSfx sectionVoSpa;
		SectionSfx sectionVoIta;
		SectionSfx sectionVoJpn;

		void Construct(GameResources* gameResources, IndexToIdList* memptr);
		virtual void Write(uint index, MemoryStream* stream);
		void Dispose(byte param_1);
		virtual int GetElementCount();
		static byte ReturnNum();
		static bool IsOne(int numb);
		virtual SectionReaderCode* GetReader(uint param_1, uint* param_2, uint* param_3);
		virtual void DisposeResources();
		virtual bool Write_8(MemoryStream* stream, uint* indexOut1, uint* indexOut2);
		virtual void ReadInternal(int index, uint param_2);
		void Dispose_10();

};
