#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/Modules/OlegModuleA.h"

class OlegModuleAC : public OlegModuleA {
	public:

		void Construct(float param_1, UIElementImage* param_2);
		virtual void Render(FontRenderer* renderer);
		void Construct_2(uint param_1);

};
