#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/Modules/OlegModuleA.h"

class OlegModuleAB : public OlegModuleA {
	public:
		UIElementImage * icons;

		virtual void Render(FontRenderer* renderer);
		void Construct(uint param_1);
		void Dispose(byte param_1);
		void Construct_3(float param_1, UIElementImage* param_2);

};
