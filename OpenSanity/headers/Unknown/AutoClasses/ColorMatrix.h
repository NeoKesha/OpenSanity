#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Graphics/Color.h"

class ColorMatrix {
	public:
		byte unkFiled1;
		byte unkFiled2;
		byte unkFiled3;
		byte unkFiled4;
		Matrix4 matrix;
		Color color1;
		Color color2;
		Color color3;
		Color color4;
		int unkFiled5;
		uint * unkFiled6;

		ColorMatrix();
		ColorMatrix(float scale);

};
