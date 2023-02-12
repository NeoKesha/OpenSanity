#include "headers/Known/Graphics/Color.h"

void Color::SetFromFloat(float r, float g, float b, float a) {
	this->R = (byte)(r * 255.0);
	this->G = (byte)(g * 255.0);
	this->B = (byte)(b * 255.0);
	this->A = (byte)(a * 255.0);
	return;
}

Color::Color() {
	this->R = 0;
	this->G = 0;
	this->B = 0;
	this->A = 0;
}

Color::Color(float r, float g, float b, float a) {
	this->R = (byte)(r * 255.0);
	this->G = (byte)(g * 255.0);
	this->B = (byte)(b * 255.0);
	this->A = (byte)(a * 255.0);
	return;
}

