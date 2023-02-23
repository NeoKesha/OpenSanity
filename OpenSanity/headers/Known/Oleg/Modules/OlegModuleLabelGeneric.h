#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/Modules/OlegModuleA.h"
#include "headers/Known/TwinString.h"

class OlegModuleLabelGeneric : public OlegModuleA {
	public:
		Font * font;
		int index;
		TwinString str;

		OlegModuleLabelGeneric(float x, Font* font, int index);
		OlegModuleLabelGeneric(Font* font, int param_2);
		OlegModuleLabelGeneric(Font* font, char* str, int index);
		OlegModuleLabelGeneric(float x, Font* font, char* str, int index);

		virtual void Render(FontRenderer* renderer);
};
