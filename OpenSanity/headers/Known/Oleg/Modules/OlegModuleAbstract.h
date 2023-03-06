#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector2.h"
#include "headers/Known/Graphics/Color.h"


class OlegModuleAbstract {
	public:
		uint flags;
		int startTime;
		int fadeInLength;
		int fadeOutLength;
		float value;
		OlegModuleAbstract * next;
		SplineA * spline;
		Vector2 field2_0x8;
		uint* field_0x28;
		Color field13_0x2c;
		Vector2 field14_0x30;

		OlegModuleAbstract();
		OlegModuleAbstract(float x);
		~OlegModuleAbstract();

		void SetSplineToAll(uint spline);
		virtual void CallOther1();
		virtual void Render(FontRenderer* renderer);
		virtual void Process(SomeState* timeState);
		virtual void Reset();
		virtual void CallOther2();


};
