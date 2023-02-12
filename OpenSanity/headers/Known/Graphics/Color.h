#pragma once

#include "headers/OpenSanityGlobal.h"

class Color {
	public:
		byte R;
		byte B;
		byte G;
		byte A;

		void SetFromFloat(float r, float g, float b, float a);
		Color();
		Color(float r, float g, float b, float a);

};
