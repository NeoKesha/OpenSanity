#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/GraphicsSectionDataAbstract.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/RigidModel2/SectionDataEntriesRigidModel2.h"

class SectionDataRigidModel : public GraphicsSectionDataAbstract {
	public:
		SectionDataEntriesRigidModel2 entries;
		void * pool;
		ResourceListTwinsanityRigidModel * rigidModelList;

		void Dispose();
		void Dispose_1();
		virtual void CleanUp();
		void Dispose_3();
		void Dispose_4(byte param_1);
		virtual void FUN_0011be00(TwinsanityRigidModel* rigidModel);
		virtual void FUN_0011c300(TwinsanityRigidModel2* rigidModel);
		static void EmptyFunction();
		virtual void Add(uint* param_1, void** param_2);
		virtual TwinsanityTexture* Create(TwinsanityTexture* param_1, int param_2);
		virtual void Method4(uint* param_1);
		virtual void Method5(uint* param_1);
		virtual uint Check(uint* param_1);
		virtual TwinsanityTexture* Get(uint* param_1);
		static void EmptyFunction_14();
		void Construct();

};
