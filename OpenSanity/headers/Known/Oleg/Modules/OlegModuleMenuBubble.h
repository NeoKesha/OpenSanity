#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/Modules/OlegModuleA.h"

class OlegModuleMenuBubble : public OlegModuleA {
	public:
		byte cnt;
		byte index1;
		int index2;
		UIElementSimpleShapeA * * imageArray;
		byte field_0x89;
		Vector2 field14_0x30;

		OlegModuleMenuBubble(float x, uint arrayLength, byte param_3, byte index1, int index2);
		~OlegModuleMenuBubble();

		UIElementSimpleShapeA* FUN_001a0fd0(int i, TwinsanityMaterialShader* param_2);
		virtual void Render(FontRenderer* renderer);

};
