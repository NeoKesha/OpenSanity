#pragma once

#include "headers/OpenSanityGlobal.h"

class UIElementAbstract {
	public:
		TwinsanityMaterialShader * shader;
		TwinsanityMaterial * material;

		virtual void FUN_00102210(int cnt);
		virtual void ReplaceMaterial(uint id);
		virtual void CleanUp();
		void Construct(int cnt);
		virtual void FreeMaterial();
		void Construct_5(byte param_2, byte param_3);
		virtual void Read(MemoryStream* stream);
		void Dispose(byte param_1);
		static void EmptyFunction();
		void Construct_9();

};
