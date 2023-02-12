#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/Color.h"

class ScreenInfo {
	public:
		Renderer * renderer;
		int width2;
		int height2;
		Color color;
		int width1;
		int height1;
		int field1_0x4;
		int field2_0x8;

		ScreenInfo();
		ScreenInfo(Renderer* renderer);

};
