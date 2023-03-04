#include "headers/Known/Oleg/Modules/OlegModuleA.h"

#include "headers/Known/Math/Vector2.h"
#include "headers/Known/ColorTransparent.h"

OlegModuleA::OlegModuleA() : OlegModuleAbstract()
{
	this->color1 = Color();
	this->color2 = Color();
	this->array[2].x = 0.5f;
	this->array[2].y = 0.5f;
	this->array[3].x = 0.5f;
	this->array[3].y = 0.5f;
	this->array[6].x = 1.0f;
	this->array[6].y = 1.0f;
	this->array[7].x = 1.0f;
	this->array[7].y = 1.0f;
}

OlegModuleA::OlegModuleA(float x) : OlegModuleAbstract(x)
{
	this->color1 = Color();
	this->color2 = Color();
	this->array[2].x = 0.5f;
	this->array[2].y = 0.5f;
	this->array[3].x = 0.5f;
	this->array[3].y = 0.5f;
	this->array[6].x = 1.0f;
	this->array[6].y = 1.0f;
	this->array[7].x = 1.0f;
	this->array[7].y = 1.0f;
}

void OlegModuleA::FUN_001a4010(Color color, Vector2* v1, Vector2* v2) {
	float x2 = v2->x * 0.5 * 0.7501876;
	float y2 = v2->y * 0.5;
	float x1 = v1->x;
	float y1 = v1->y;
	float width = x1 - x2;
	float height = y1 - y2;
	this->color2 = color;
	this->color1 = color;
	this->array[3].x = width;
	this->array[3].y = height;
	this->array[2].x = width;
	this->array[2].y = height;
	x1 = x1 + x2;
	y1 = y1 + y2;
	this->array[7].x = x1;
	this->array[7].y = y1;
	this->array[6].x = x1;
	this->array[6].y = y1;
	return;
}

void OlegModuleA::LerpColor(Color* color, float t, Color c1, Color c2) {
	float c1R = c1.R * 0.003921569f;
	float c1G = c1.G * 0.003921569f;
	float c1B = c1.B * 0.003921569f;
	float c1A = c1.A * 0.003921569f;

	float c2R = c2.R * 0.003921569f;
	float c2G = c2.G * 0.003921569f;
	float c2B = c2.B * 0.003921569f;
	float c2A = c2.A * 0.003921569f;

	color->R = ((c2R - c1R) * t + c1R) * 255;
	color->G = ((c2G - c1G) * t + c1G) * 255;
	color->B = ((c2B - c1B) * t + c1B) * 255;
	color->A = c2A * t + (1.0f - t) * c1A;
	return;
}

void OlegModuleA::Show(int appearTime, uint disappearTime) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleA::Show(OlegModuleA *this,int appearTime,int disappearTime){
		uint state;
		uint flags;
		do {
		flags = (this->parent).flags;
		state = flags;
		if ((flags & 0x100) != 0) {
		state = flags >> 4;
		}
		switch(state & 0xf) {
		case 0:(*((this->parent).vtable)->Shift1)(&this->parent);
		case 1:(this->parent).fadeInLength = appearTime;
		(this->parent).fadeOutLength = disappearTime;
		(this->parent).flags =(3 - (appearTime != 0) & 0xf | 0x10) << 4 | (this->parent).flags & 0xffffff0f;
		break;
		case 2:if (appearTime == 0) {
		(this->parent).flags = flags & 0xffffff3f | 0x130;
		}
		break;
		case 3:(this->parent).fadeInLength = appearTime;
		(this->parent).fadeOutLength = disappearTime;
		(this->parent).flags = (this->parent).flags & 0xffffff3f | 0x130;
		break;
		case 4:(this->parent).fadeInLength = appearTime;
		(this->parent).fadeInLength =(int)((float)appearTime * TimePerTick1 * (this->parent).value * TicksPerTime);
		(this->parent).fadeOutLength = disappearTime;
		(this->parent).flags =(3 - (appearTime != 0) & 0xf | 0x10) << 4 | (this->parent).flags & 0xffffff0f;
		}
		this = (OlegModuleA *)(this->parent).next;
		}
		 while (this != (OlegModuleA *)0x0);
		return;
		}
		
	*/
	return;
}

void OlegModuleA::Hide(int appearTime, int disappearTime) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleA::Hide(OlegModuleA *this,int appearTime,int disappearTime){
		uint flags2;
		uint flags1;
		do {
		flags1 = (this->parent).flags;
		flags2 = flags1;
		if ((flags1 & 0x100) != 0) {
		flags2 = flags1 >> 4;
		}
		switch(flags2 & 0xf) {
		case 1:(this->parent).fadeInLength = appearTime;
		(this->parent).fadeOutLength = disappearTime;
		flags1 = (this->parent).flags;
		LAB_001a2837:flags1 = flags1 & 0xffffff1f | 0x110;
		goto LAB_001a2841;
		case 2:(this->parent).fadeInLength = appearTime;
		(this->parent).fadeInLength =(int)((float)appearTime * TimePerTick1 * (this->parent).value * TicksPerTime);
		goto LAB_001a2810;
		case 3:(this->parent).fadeInLength = appearTime;
		LAB_001a2810:(this->parent).fadeOutLength = disappearTime;
		flags1 = ((-(uint)(appearTime != 0) & 3) + 1 | 0x10) << 4 | (this->parent).flags & 0xffffff0f;
		LAB_001a2841:(this->parent).flags = flags1;
		break;
		case 4:if (appearTime == 0) goto LAB_001a2837;
		}
		this = (OlegModuleA *)(this->parent).next;
		if (this == (OlegModuleA *)0x0) {
		return;
		}
		}
		 while( true );
		}
		
	*/
	return;
}

void OlegModuleA::FUN_001a2e30(Color color, Vector2* vec1, Vector2* vec2) {
	this->color2 = color;
	this->color1 = color;
	this->array[3].x = vec1->x;
	this->array[3].y = vec1->y;
	this->array[2].x = vec1->x;
	this->array[2].y = vec1->y;
	this->array[7].x = vec2->x;
	this->array[7].y = vec2->y;
	this->array[6].x = vec2->x;
	this->array[6].y = vec2->y;
	return;
}

void OlegModuleA::FUN_001a2e90(Color color, Vector2* v1, Vector2* v2, Vector2* v3) {
	float a1;
	float a2;
	float c1;
	float c2;

	a1 = v1->x;
	c1 = v1->y;
	a2 = v3->x;
	c2 = v3->y;
	this->color2 = color;
	this->color1 = color;
	this->array[3].x = v1->x;
	this->array[3].y = v1->y;
	this->array[2].x = a2 + a1;
	this->array[2].y = c2 + c1;
	this->array[7].x = v2->x;
	this->array[7].y = v2->y;
	this->array[6].x = v2->x;
	this->array[6].y = v2->y;
	return;
}

void OlegModuleA::UnkFun(Color color, Vector2* v1, Vector2* v2, Vector2* v3) {
	this->color2 = color1;
	this->color1 = color1;
	this->array[3].x = v1->x;
	this->array[3].y = v1->y;
	this->array[2].x = v3->x;
	this->array[2].y = v3->y;
	this->array[7].x = v2->x;
	this->array[7].y = v2->y;
	this->array[6].x = 0.0;
	this->array[6].y = 0.0;
	return;
}

void OlegModuleA::FUN_001a40a0(Color color, Vector2* v1, Vector2* v2, Vector2* v3) {
	float y1 = v1->y;
	float x1 = v1->x;
	float x3 = v3->x;
	float y3 = v3->y;
	float fVar5 = v3->x;
	float fVar6 = v3->y;
	float y2 = v2->y * 0.5;
	float x2 = v2->x * 0.5 * 0.7501876;

	this->color2 = color;
	this->color1 = color;
	this->array[3].x = x1 - x2;
	this->array[3].y = y1 - y2;
	this->array[2].x = x3 + (x1 - x2);
	this->array[2].y = y3 + (y1 - y2);
	this->array[7].x = x1 + x2;
	this->array[7].y = y1 + y2;
	this->array[6].x = fVar5 + x1 + x2;
	this->array[6].y = fVar6 + y1 + y2;
	return;
}

void OlegModuleA::FUN_001a41b0(Color color, Vector2* v1, Vector2* v2, Vector2* v3) {
	float x1 = v1->x;
	float y1 = v1->y;
	float x2 = v2->x * 0.5 * 0.7501876;
	float y2 = v2->y * 0.5;

	this->color2 = color;
	this->color1 = color;
	this->array[3].x = x1 - x2;
	this->array[3].y = y1 - y2;
	this->array[2].x = v3->x;
	this->array[2].y = v3->y;
	this->array[7].x = x1 + x2;
	this->array[7].y = y1 + y2;
	this->array[6].x = v3->x;
	this->array[6].y = v3->y;
	return;
}

void OlegModuleA::Interpolate1() {
	float T;

	LerpColor(&this->color0, this->value, this->color4, this->color2);
	T = this->value;
	this->array[0].x = (1.0 - T) * this->array[1].x + T * this->array[3].x;
	this->array[0].y = this->array[1].y * (1.0 - T) + this->array[3].y * T;
	T = this->value;
	this->array[4].x = this->array[7].x * T + this->array[5].x * (1.0 - T);
	this->array[4].y = this->array[5].y * (1.0 - T) + this->array[7].y * T;
	return;
}

void OlegModuleA::Interpolate2() {
	float T;

	LerpColor(&this->color0, this->value, this->color4, this->color1);
	T = this->value;
	this->array[0].x = (1.0 - T) * this->array[1].x + T * this->array[2].x;
	this->array[0].y = this->array[1].y * (1.0 - T) + this->array[2].y * T;
	T = this->value;
	this->array[4].x = this->array[6].x * T + this->array[5].x * (1.0 - T);
	this->array[4].y = this->array[5].y * (1.0 - T) + this->array[6].y * T;
	return;
}

void OlegModuleA::Shift1() {
	this->color0 = this->color1;
	this->array[0].x = this->array[2].x;
	this->array[0].y = this->array[2].y;
	this->array[4].x = this->array[6].x;
	this->array[4].y = this->array[6].y;
}

void OlegModuleA::Shift2() {
	this->color4 = this->color0;
	this->array[1].x = this->array[0].x;
	this->array[1].y = this->array[0].y;
	this->array[5].x = this->array[4].x;
	this->array[5].y = this->array[4].y;
}

void OlegModuleA::Shift3() {
	this->color0 = this->color2;
	this->array[0].x = this->array[3].x;
	this->array[0].y = this->array[3].y;
	this->array[4].x = this->array[7].x;
	this->array[4].y = this->array[7].y;
}

void OlegModuleA::Shift4() {
	this->color4 = this->color0;
	this->array[1].x = this->array[0].x;
	this->array[1].y = this->array[0].y;
	this->array[5].x = this->array[4].x;
	this->array[5].y = this->array[4].y;
}

void OlegModuleA::Shift5() {
	this->color0 = this->color1;
	this->array[0].x = this->array[2].x;
	this->array[0].y = this->array[2].y;
	this->array[4].x = this->array[6].x;
	this->array[4].y = this->array[6].y;
}

void OlegModuleA::Shift6() {
	this->color0 = this->color2;
	this->array[0].x = this->array[3].x;
	this->array[0].y = this->array[3].y;
	this->array[4].x = this->array[7].x;
	this->array[4].y = this->array[7].y;
}