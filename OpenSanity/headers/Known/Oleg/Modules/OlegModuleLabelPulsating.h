#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/Modules/OlegModuleA.h"

class OlegModuleLabelPulsating : public OlegModuleA {
	public:
		Font * font;
		int index2;
		int index1;

		void Construct(float param_1, Font* font, int index1, int index2);
		virtual void Render(FontRenderer* fontRenderer);
		void Construct_2(uint param_1, uint param_2, uint param_3);
		void Dispose(byte param_1);

};
