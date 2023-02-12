#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/Font/FontAbstract.h"

class Font : public FontAbstract {
	public:
		int cnt;
		void * next;
		void* field2_0x1c;
		void* field5_0x28;
		int field6_0x2c;
		int field4_0x24;
		int field7_0x30;

		Font();
		Font(char* fname);
		~Font();

		virtual void FUN_00104a80(Vector2* vec, TwinString* str, float param_3, float param_4);
		virtual int DrawFontPlane(TwinString* param_2, int param_3, int param_4, float param_5, float param_6, float param_7);
		virtual void CleanUp();
		void ReadFont(char* fname);
		virtual void DrawText(RendererText* renderer);
		static void EmptyFunction();
		static void EmptyFunction_9();

};
