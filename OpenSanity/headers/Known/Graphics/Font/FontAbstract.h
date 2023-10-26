#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector2.h"

class FontAbstract {
	public:
		int field1_0x4;
		int field2_0x8;
		RendererText * data;
		Vector2 scale;

		FontAbstract();
		~FontAbstract();

		virtual void FUN_00104a80(Vector2* vec, TwinString* str, float param_3, float param_4) = 0;
		virtual int DrawFontPlane(TwinString* param_2, int param_3, int param_4, float param_5, float param_6, float param_7) = 0;
		virtual void CleanUp() = 0;
		virtual void DrawText(RendererText* renderer) = 0;
};
