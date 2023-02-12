#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/Color.h"
#include "headers/Known/Oleg/Modules/OlegModuleAbstract.h"
#include "headers/Known/Math/Vector2.h"

class OlegModuleA : public OlegModuleAbstract {
	public:
		Vector2 array[10];

		static void FUN_00108ea0(Vector2* vector, uint time, uint val1, uint val2);
		virtual void Show(int appearTime, uint disappearTime);
		void Hide(int appearTime, int disappearTime);
		void FUN_001a2e30(uint param_1, Vector2* vec1, Vector2* vec2);
		virtual void FUN_001a2e90(Color color, ColorTransparent* color2, ColorTransparent* color3, ColorTransparent* color4);
		virtual void UnkFun(Color color1, ColorTransparent* color2, ColorTransparent* color3, ColorTransparent* color4);
		void FUN_001a40a0(uint color1, ColorTransparent* param_2, ColorTransparent* param_3, ColorTransparent* param_4);
		void FUN_001a41b0(Color param_1, ColorTransparent* param_2, ColorTransparent* param_3, ColorTransparent* param_4);
		void Construct();
		void Construct_9(float k);
		virtual void Interpolate1();
		virtual void Interpolate2();
		virtual void Shift1();
		virtual void Shift2();
		virtual void Shift3();
		virtual void Shift4();
		virtual void Shift5();
		virtual void Shift6();
		void Dispose(byte flag);
		void Dispose_19(byte param_1);

};
