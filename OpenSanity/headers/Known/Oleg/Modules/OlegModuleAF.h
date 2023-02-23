#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/Modules/OlegModuleA.h"

class OlegModuleAF : public OlegModuleA {
	public:
		UIElementImage * image1;
		UIElementImage * image2;
		float field1_0x88;
		UIElementImage* field2_0x8c;
		UIElementImage* field3_0x90;

		OlegModuleAF(float x, UIElementImage* param_2, UIElementImage* param_3);

		void FUN_001a0e30(bool param_1, Vector2* param_2);
		void FUN_001a0e60(bool param_1, Vector2* param_2);
		virtual void Render(FontRenderer* renderer);
};
