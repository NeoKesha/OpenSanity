#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Sections/RM/SectionAbstract/SectionAbstract.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Code/SectionCode.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/SectionGraphics.h"

class SectionRM : public SectionAbstract {
	public:
		uint flags;
		TwinString levelName;
		GameResources * gameResources;
		IndexToIdList * indexToIdList;
		CollisionData * collisionData;
		SectionGraphics graphicsSection;
		SectionCode codeSection;
		InstanceSectionResources * instanceSectionResources[8];
		SectionInstance * instanceSection[8];

		virtual void FUN_001234b0();
		virtual void FUN_001b2460();
		virtual void FUN_001b2580();
		virtual void LoadPackedLevel();
		virtual void LoadDefaultDclPtl();
		void Construct(char* fname, GameResources* gameResources, IndexToIdList* memptr);
		virtual void FUN_001b4650(Sfx* param_1, char param_2);
		virtual void LoadUnpackedLevel(int num, char param_2, byte param_3);
		void CleanUp();
		virtual void CleanUp_9();
		virtual void UnkMethod3();
		void ReadParticleData(MemoryStream* stream);
		virtual void DisposeResources();
		void Dispose(byte param_1);
		virtual uint FUN_001b89a0(byte param_1, MemoryStream* stream);
		virtual void ReadRM(int sectionId, uint sectionOffset, MemoryStream* stream);
		void Construct_16(AutoClass16* param_1);
		virtual void Write(int index, MemoryStream* stream);
		virtual int GetElementCount();
		static byte ReturnNum();
		static bool IsOne(int numb);
		virtual SectionReaderRM* GetReader(uint param_1, uint* param_2, int* param_3);
		static void EmptyFunction();
		virtual bool Write_23(MemoryStream* stream, uint* param_2, int* param_3);
		static void EmptyFunction_24();
		static void EmptyFunction_25();

};
