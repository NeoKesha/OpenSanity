#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/GraphicsSectionDataAbstract.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/BlendSkin/SectionDataEntriesBlendSkin.h"

class SectionDataBlendSkin : public GraphicsSectionDataAbstract {
	public:
		SectionDataEntriesBlendSkin entries;
		int * ids;
		ResourceListTwinsanityBlendSkin * blendSkinLlist;

		void Dispose();
		virtual void CleanUp();
		void Dispose_2();
		void Dispose_3(byte param_1);
		virtual void FUN_0011c090(TwinsanityBlendSkin* element);
		static void EmptyFunction();
		virtual TwinsanityBlendSkin* Create(TwinsanityBlendSkin* param_1, int param_2);
		virtual void UnkMethod3(TwinsanityBlendSkin* param_1);
		virtual void UnkMethod4(uint* param_1);
		virtual bool Check(uint* param_1);
		virtual TwinsanityBlendSkin* Get(uint* param_1);
		static void EmptyFunction_11();
		void Construct();
		virtual void Add(uint* param_1, TwinsanityBlendSkin* param_2);

};
