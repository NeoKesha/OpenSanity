#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/Modules/OlegModuleA.h"

class OlegModuleAF : public OlegModuleA {
	public:
		UIElementImage * image1;
		UIElementImage * image2;

		void FUN_001a0e30(bool param_1, Vector2* param_2);
		void FUN_001a0e60(bool param_1, Vector2* param_2);
		virtual void Render(FontRenderer* renderer);
		void Dispose(byte param_1);
		void Construct(float param_1, uint param_2, uint param_3);

};
