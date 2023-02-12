#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/GraphicsSectionDataAbstract.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Skydome/SectionDataEntriesSkydome.h"

class SectionDataSkydome : public GraphicsSectionDataAbstract {
	public:
		SectionDataEntriesSkydome entries;
		void * pool;
		ResourceListTwinsanitySkydome * skydomeList;

		void Dispose();
		virtual void CleanUp();
		void Dispose_2();
		void Dispose_3(byte param_1);
		virtual void FUN_0011c1d0(TwinsanitySkydome* skydome);
		static void EmptyFunction();
		virtual void Add(uint* param_1, uint* param_2);
		virtual uint* Create(uint** param_1, int param_2);
		virtual uint Check(uint* param_1);
		virtual uint Get(uint* param_1);
		virtual void Method5(uint** param_1);
		virtual void Method4(uint* param_1);
		void Construct();

};
