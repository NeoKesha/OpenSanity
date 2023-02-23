#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/Modules/OlegModuleA.h"

class OlegModuleLabelPulsating : public OlegModuleA {
	public:
		Font * font;
		int index2;
		int index1;

		OlegModuleLabelPulsating(Font* font, int index1, int index2);
		OlegModuleLabelPulsating(float x, Font* font, int index1, int index2);

		virtual void Render(FontRenderer* renderer);
};
