#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/Modules/OlegModuleA.h"

class OlegModuleAH : public OlegModuleA {
	public:
		UIElementImage* field1_0x88;
		ChunkDesc* field_0x8c;

		OlegModuleAH(float x);
		OlegModuleAH(float x, UIElementImage* param_2, ChunkDesc* param_3);

		virtual void Render(FontRenderer* renderer);
};
