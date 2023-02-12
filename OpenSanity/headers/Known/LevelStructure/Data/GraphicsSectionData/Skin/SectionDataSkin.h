#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/GraphicsSectionDataAbstract.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Skin/SectionDataEntriesSkin.h"

class SectionDataSkin : public GraphicsSectionDataAbstract {
	public:
		SectionDataEntriesSkin entries;
		void * pool;
		ResourceListTwinsanitySkin * skinList;

		void Dispose();
		virtual void CleanUp();
		void Dispose_2();
		void Dispose_3(byte param_1);
		virtual void FUN_0011bf60(TwinsanitySkin* skin);
		static void EmptyFunction();
		virtual void Add(uint* param_1, uint param_2);
		virtual TwinsanityTexture* Create(TwinsanityTexture* param_1, int param_2);
		virtual void Method4(uint* param_1);
		virtual void Method5(uint* param_1);
		virtual uint Check(uint* param_1);
		virtual TwinsanityTexture* Get(uint* param_1);
		static void EmptyFunction_12();
		void Construct();

};
