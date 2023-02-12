#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/Modules/OlegModuleA.h"

class OlegModuleMenuBubble : public OlegModuleA {
	public:
		byte cnt;
		byte index1;
		int index2;
		UIElementSimpleShapeA * * imageArray;

		UIElementSimpleShapeA* FUN_001a0fd0(int i, TwinsanityMaterialShader* param_2);
		static void Dispose(OlegModuleMenuBubble* param_1);
		void Construct(float k, uint arrayLength, byte param_3, byte index1, int index2);
		virtual void Render(int param_1);

};
