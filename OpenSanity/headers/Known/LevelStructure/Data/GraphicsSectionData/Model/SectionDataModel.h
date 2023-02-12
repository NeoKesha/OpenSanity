#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/GraphicsSectionDataAbstract.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Model/SectionDataEntriesModel.h"

class SectionDataModel : public GraphicsSectionDataAbstract {
	public:
		SectionDataEntriesModel entries;
		void * pool;
		ResourceListTwinsanityModel * modeList;

		void Dispose();
		uint* FUN_0011ddf0(TwinString* fname, uint index);
		virtual void CleanUp();
		void Dispose_3();
		void Dispose_4(byte param_1);
		virtual void FUN_0011bcb0(TwinsanityModel* model);
		static void EmptyFunction();
		virtual void Add(uint* param_1, uint* param_2);
		virtual uint* Create(uint** param_1, int param_2);
		virtual void Method5(uint** param_1);
		virtual void Method4(uint* param_1);
		virtual uint Check(uint* param_1);
		virtual uint Get(uint* param_1);
		void Construct();

};
