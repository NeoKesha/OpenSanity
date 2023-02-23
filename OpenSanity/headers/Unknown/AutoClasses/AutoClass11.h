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
		int field1_0x4;
		int field6_0x2c;
		int field5_0x28;

		AutoClass11();
		AutoClass11(Font* font);

		void DrawOnScreenText(SomeState* param_1);
		void DrawMessage(FontRenderer* fontRenderer);

};
