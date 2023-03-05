#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/Color.h"
#include "headers/Known/Oleg/UIElement/UIElementAbstract.h"

class UIElementSimpleShape : public UIElementAbstract {
	public:
		int cnt;
		Vector2* field2_0x14;
		Vector4* field3_0x18;

		UIElementSimpleShape();
		UIElementSimpleShape(int cnt);
		UIElementSimpleShape(int cnt, Vector2* param_2, Vector4* param_3);
		~UIElementSimpleShape();

		virtual void FUN_00101f20(Matrix4* transform, UIElementBTransform* transformStruct);
		void FUN_00101ff0(int param_1);
		virtual void FUN_001090b0(Color color, UIElementBColor* colorStruct);
		virtual void FUN_0010eac0();
		virtual void FUN_0010eae0(uint param_1);
		virtual void FUN_0010eb30(void* param_1);
		virtual void FUN_0010eb80(Matrix4* transform, Color color);

};
