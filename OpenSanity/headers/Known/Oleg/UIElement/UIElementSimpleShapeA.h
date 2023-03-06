#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Oleg/UIElement/UIElementSimpleShape.h"
#include "headers/Known/Math/Vector2.h"
#include "headers/Known/Graphics/Color.h"

class UIElementSimpleShapeA : public UIElementSimpleShape {
	public:
		Vector2 field11_0x2c;
		Color field1_0x1c;
		Color field2_0x20;
		int* field16_0x38;
		int field3_0x24;
		int field4_0x28;
		Vector2 field5_0x2c;
		int field6_0x34;
		Color field7_0x38;
		int field8_0x3c;
		int field9_0x40;
		Color field10_0x44;
		float field11_0x48;
		float field12_0x4c;
		float field13_0x50;
		Vector2* field14_0x54;
		Vector4* field15_0x58;


		UIElementSimpleShapeA(int param_1, TwinsanityMaterialShader* param_2);
		~UIElementSimpleShapeA();

		void FUN_00102060(byte param_1,Vector4* param_2, Vector2* param_3);

};
