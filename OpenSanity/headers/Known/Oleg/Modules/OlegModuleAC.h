#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/Modules/OlegModuleA.h"

class OlegModuleAC : public OlegModuleA {
	public:
		UIElementImage* field1_0x88;

		OlegModuleAC(UIElementImage* param_1);
		OlegModuleAC(float x, UIElementImage* param_2);

		virtual void Render(FontRenderer* renderer);
};
