#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/GraphicsSectionDataAbstract.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Texture/SectionDataEntriesTexture.h"

class SectionDataTexture : public GraphicsSectionDataAbstract {
	public:
		SectionDataEntriesTexture entries;
		void * pool;
		ResourceListTwinsanityTexture * textureList;

		void Dispose();
		void Dispose_1();
		void Dispose_2();
		void Dispose_3(byte param_1);
		virtual void FUN_0011bb70(TwinsanityTexture* texture);
		virtual TwinsanityTexture* Create(TwinsanityTexture* param_1, int param_2);
		virtual void Add(uint* param_1, TwinsanityTexture* param_2);
		virtual void Method4(uint* param_1);
		virtual void Method5(uint* param_1);
		virtual uint Check(uint* param_1);
		virtual int Get(uint* param_1);
		static void EmptyFunction();
		void Construct();
		virtual TwinsanityTexture* ReadTextureToSection(MemoryStream* param_1, uint _id);

};
