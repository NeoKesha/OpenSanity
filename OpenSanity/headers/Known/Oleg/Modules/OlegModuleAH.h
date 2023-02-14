#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/Modules/OlegModuleA.h"

class OlegModuleAH : public OlegModuleA {
	public:

		virtual void Render(FontRenderer* renderer);
		void Dispose(byte param_1);
		void Construct(float param_1, UIElementImage* param_2, uint param_3);

};
