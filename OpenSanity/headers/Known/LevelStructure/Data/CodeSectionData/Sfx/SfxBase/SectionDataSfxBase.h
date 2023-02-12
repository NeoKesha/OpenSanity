#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/CodeSectionDataAbstract.h"

class SectionDataSfxBase : public CodeSectionDataAbstract {
	public:
		uint flags;
		Sfx * * elements;
		short * indexes;
		ResourceListSound * sfxList;
		int field4_0x10;

		SectionDataSfxBase();
		SectionDataSfxBase(uint elementCount, byte param_2);
		~SectionDataSfxBase();

		virtual void CleanUp();
		virtual uint AddElement(Sfx* element);
		static void EmptyFunction();
		static void EmptyFunction_6();
		static void EmptyFunction_7();
		static void EmptyFunction_8();

};
