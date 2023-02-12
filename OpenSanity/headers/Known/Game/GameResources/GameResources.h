#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/GameResources/GameResourcesBase.h"

class GameResources : public GameResourcesBase {
	public:

		void Construct();
		virtual void DisposeCodeSection();
		void LoadGameObjects(IndexToIdList* indexToId);
		bool DisposeResources();
		SectionDataScriptBase* AllocCollectionScripts(uint param_1);
		uint AllocCollectionGameObjects(uint count);
		SectionDataCodeModelBase* AllocCollectionCodeModels(uint param_1);
		uint AllocCollectionAnimations(uint param_1);
		SectionDataSfx* AllocSfxCollection(uint count);
		uint AllocVoCollections(uint param_1);
		SectionDataOGIBase* AllocCollectionOGIs(uint param_1);
		void Dispose(byte flag);
		static void FreeArray1();
		static void FreeArray2();
		virtual void InitCodeModels(byte flag);
		void Dispose_15();

};
