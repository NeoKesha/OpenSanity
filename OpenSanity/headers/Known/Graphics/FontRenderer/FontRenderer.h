#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/Color.h"
#include "headers/SortLater/FontCollection.h"

class FontRenderer {
	public:
		Renderer * renderer;
		ScreenInfoExt * screenInfoExt;
		int flags;
		Color color;
		FontCollection fontCollection;
		Font * font;
		float originX;
		float originY;

		AutoClass25* field1_0x4;
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

		virtual void DrawAll();
		static void Render(FontRenderer* renderer);
		virtual void DrawText(float x, float y, char* str);
		FontRenderer();
		FontRenderer(Renderer* renderer, ScreenInfo* screen);

};
