#pragma once

#include "headers/OpenSanityGlobal.h"

//TODO: Resource system implemented required
class UIElementAbstract {
	public:
		TwinsanityMaterialShader * shader;
		TwinsanityMaterial * material;
		int field3_0xc;

		UIElementAbstract();
		UIElementAbstract(TwinsanityMaterialShader* shader);
		UIElementAbstract(uint param_2, uint param_3);
		~UIElementAbstract();

		virtual void FUN_00102210(TwinsanityMaterialShader* shader);
		virtual void ReplaceMaterial(uint id);
		virtual void CleanUp();
		
		virtual void FreeMaterial();
		
		virtual void Read(MemoryStream* stream);
		static void EmptyFunction();
		

};
