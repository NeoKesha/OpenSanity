#pragma once

#include "headers/OpenSanityGlobal.h"

class GameResourcesBase {
	public:
		uint languages;
		char * agents;
		SectionDataGameObjectBase * gameObjects;
		SectionDataScriptBase * scripts;
		SectionDataAnimationBase * animations;
		SectionDataOGIBase * ogis;
		SectionDataCodeModelBase * codeModels;
		SectionDataSfx * sounds;
		SectionDataSfx * * voices;
		ResourceListGameObject * gameObjectList;
		ResourceListScript * scriptList;
		ResourceListAnimation * animationList;
		ResourceListOGI * ogiList;
		ResourceListCodeModel * codeModelList;
		ResourceListSound * sfxList;
		ResourceListSound * * voList;

		void Construct(uint languages, char* agents);
		virtual void CleanUp();
		void Dispose(byte param_1);
		virtual uint FreeResources(int** param_1);
		static void EmptyFunction();
		static void EmptyFunction_5();

};
