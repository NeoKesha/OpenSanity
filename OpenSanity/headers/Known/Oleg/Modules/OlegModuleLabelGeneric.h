#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/Modules/OlegModuleA.h"
#include "headers/Known/TwinString.h"

class OlegModuleLabelGeneric : public OlegModuleA {
	public:
		Font * font;
		int index;
		TwinString str;

		void FUN_001a4010(uint param_1, Vector2* param_2, Vector2* param_3);
		void Construct(float k, Font* font, uint index);
		virtual void Render(FontRenderer* renderer);
		void Construct_3(uint param_1, uint param_2);
		void Construct_4(uint param_1, char* str, uint param_3);
		void Dispose(byte param_1);
		void Construct_6(float param_1, UIElementImage* param_2, char* param_3, uint param_4);

};
