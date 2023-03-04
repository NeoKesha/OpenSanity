#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/Color.h"
#include "headers/Known/Oleg/Modules/OlegModuleAbstract.h"
#include "headers/Known/Math/Vector2.h"

class OlegModuleA : public OlegModuleAbstract {
	public:
		Color color0;
		Color color4;
		Color color1;
		Color color2;
		Vector2 array[8];

		OlegModuleA();
		OlegModuleA(float x);

		void FUN_001a4010(Color color , Vector2* v1, Vector2* v2);

		static void LerpColor(Color* color, float t, Color c1, Color c2);
		virtual void Show(int appearTime, uint disappearTime);
		void Hide(int appearTime, int disappearTime);
		void FUN_001a2e30(Color color, Vector2* vec1, Vector2* vec2);
		virtual void FUN_001a2e90(Color color, Vector2* v1, Vector2* v2, Vector2* v3);
		virtual void UnkFun(Color color, Vector2* v1, Vector2* v2, Vector2* v3);
		void FUN_001a40a0(Color color, Vector2* v1, Vector2* v2, Vector2* v3);
		void FUN_001a41b0(Color color, Vector2* v1, Vector2* v2, Vector2* v3);
		virtual void Interpolate1();
		virtual void Interpolate2();
		virtual void Shift1();
		virtual void Shift2();
		virtual void Shift3();
		virtual void Shift4();
		virtual void Shift5();
		virtual void Shift6();
};
