#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/Color.h"
#include "headers/Known/Oleg/UIElement/UIElementAbstract.h"

class UIElementSimpleShape : public UIElementAbstract {
	public:
		int cnt;

		void Construct();
		virtual void CleanUp();
		virtual void FUN_00101f20(Matrix4* transform, UIElementBTransform* transformStruct);
		void FUN_00101ff0(int param_1);
		virtual void FUN_001090b0(Color color, UIElementBColor* colorStruct);
		void Dispose(byte param_1);
		virtual void FUN_0010eac0();
		virtual void FUN_0010eae0(uint param_1);
		virtual void FUN_0010eb30(void* param_1);
		virtual void FUN_0010eb80(Matrix4* transform, Color color);
		void Construct_10(int param_1);
		void Construct_11(byte param_1, uint param_2, uint param_3);

};
