#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/GraphicsSectionDataAbstract.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Material/SectionDataEntriesMaterial.h"

class SectionDataMaterial : public GraphicsSectionDataAbstract {
	public:
		SectionDataEntriesMaterial entries;
		void * pool;
		ResourceListTwinsanityMaterial * materialList;

		void Dispose();
		virtual void FreeElements();
		virtual TwinsanityMaterial* ReadMaterialToSection(MemoryStream* stream, uint param_2);
		void Dispose_3();
		void Dispose_4(byte param_1);
		virtual void FUN_0011ba20(TwinsanityMaterial* material);
		static void EmptyFunction();
		virtual void Add(uint* param_1, TwinsanityTexture* param_2);
		virtual TwinsanityTexture* Create(TwinsanityTexture* param_1, int param_2);
		virtual void* Method4(SectionMaterial* section);
		virtual void Method5(uint* other);
		virtual uint Check(uint* param_1);
		virtual uint Get(uint* param_1);
		static void EmptyFunction_13();
		void Construct();

};
