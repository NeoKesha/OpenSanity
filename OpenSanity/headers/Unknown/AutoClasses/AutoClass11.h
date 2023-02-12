#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Graphics/Color.h"

class AutoClass11 {
	public:
		Font * font;
		TwinString message;
		Color color;
		Vector4 vec;
		OlegModuleLabelGeneric * module;

		void DrawOnScreenText(SomeState* param_1);
		void Construct(Font* font);
		void DrawMessage(FontRenderer* fontRenderer);

};
