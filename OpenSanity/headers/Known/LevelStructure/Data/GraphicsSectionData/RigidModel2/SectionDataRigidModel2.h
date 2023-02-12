#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/GraphicsSectionDataAbstract.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/RigidModel2/SectionDataEntriesRigidModel2.h"

class SectionDataRigidModel2 : public GraphicsSectionDataAbstract {
	public:
		SectionDataEntriesRigidModel2 entries;
		ResourceListTwinsanityRigidModel2 * rigidModelList;

		TwinsanityRigidModel2* FUN_0011dc60(TwinString* fname, int index);
		virtual void CleanUp();
		void Dispose();
		void Dispose_3(byte param_1);
		static void EmptyFunction();
		virtual void Add(uint* param_1, uint param_2);
		virtual TwinsanityTexture* Create(TwinsanityTexture* param_1, int param_2);
		virtual void Method5(uint* param_1);
		virtual void Method4(uint* param_1);
		virtual uint Check(uint* param_1);
		virtual uint Get(uint* param_1);
		void Construct();

};
