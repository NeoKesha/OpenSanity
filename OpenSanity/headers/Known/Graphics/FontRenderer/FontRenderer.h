#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/Color.h"
#include "headers/SortLater/FontCollection.h"

class FontRenderer {
	public:
		Renderer * renderer;
		AutoClass25* field1_0x4;
		ScreenInfoExt * screenInfoExt;
		int flags;
		Color color;
		int reserved;
		FontCollection fontCollection;
		Font * font;
		float originX;
		float originY;

		int field13_0x34;
		int field14_0x38;
		int field20_0x50;
		int field15_0x3c;
		int field21_0x54;
		int field16_0x40;
		int field22_0x58;
		int field17_0x44;
		int field23_0x5c;
		int field18_0x48;
		int field24_0x60;
		int field19_0x4c;
		int field25_0x64;

		void DrawAll();
		void Render();
		void DrawText_Twins(float x, float y, char* str);
		FontRenderer();
		FontRenderer(Renderer* renderer, ScreenInfo* screen);

};
