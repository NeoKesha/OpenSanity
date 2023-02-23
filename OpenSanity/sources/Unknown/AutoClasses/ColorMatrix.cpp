#include "headers/Unknown/AutoClasses/ColorMatrix.h"

ColorMatrix::ColorMatrix() {
	ColorMatrix(1.0f);
}

ColorMatrix::ColorMatrix(float scale) {
	this->unkFiled5 = 0;
	this->unkFiled6 = null;
	this->unkFiled3 = 6;
	this->unkFiled4 = 3;
	(this->matrix).m11 = 0.0;
	(this->matrix).m12 = 0.0;
	(this->matrix).m13 = 1.0;
	(this->matrix).m14 = 1.0;
	(this->matrix).m21 = 0.0;
	(this->matrix).m22 = 0.1;
	(this->matrix).m23 = 0.5;
	(this->matrix).m24 = 0.5;
	(this->matrix).m32 = 0.5;
	(this->matrix).m33 = 0.5;
	(this->matrix).m31 = 0.05;
	(this->matrix).m34 = 0.05;
	(this->matrix).m41 = scale;
	this->color1 = Color(1.0f, 1.0f, 1.0f, 1.0f);
	(this->matrix).m42 = scale;
	this->color2 = Color(1.0f, 1.0f, 1.0f, 1.0f);
	(this->matrix).m43 = scale;
	this->color3 = Color(0.5f, 0.5f, 0.5f, 0.5f);;
	(this->matrix).m44 = scale;
	this->color4 = Color(0.25f, 0.25f, 0.25f, 0.25f);;
}

