#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/GraphicsSectionDataAbstract.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Lod/SectionDataEntriesLod.h"

class SectionDataLod : public GraphicsSectionDataAbstract {
	public:
		SectionDataEntriesLod entries;
		void * pool;
		ResourceListTwinsanityLod * lodList;

		void Dispose();
		virtual void CleanUp();
		virtual uint* Create(uint** param_1, int param_2);
		void Dispose_3();
		void Dispose_4(byte param_1);
		virtual void FUN_0011c440(TwinsanityLod* lod);
		static void EmptyFunction();
		virtual void Add(uint* param_1, uint* param_2);
		virtual uint Check(uint* param_1);
		virtual uint Get(uint* param_1);
		virtual void Method5(uint** param_1);
		virtual void Method4(uint* param_1);
		void Construct();

};
