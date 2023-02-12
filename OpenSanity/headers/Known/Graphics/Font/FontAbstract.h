#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector2.h"

class FontAbstract {
	public:
		RendererText * data;
		Vector2 scale;
		int field1_0x4;
		int field2_0x8;

		FontAbstract();
		~FontAbstract();
};
