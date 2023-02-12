#include "headers/Known/Graphics/ScreenInfo.h"

#include "headers/Known/Graphics/Renderer/Renderer.h"

ScreenInfo::ScreenInfo() {
	this->renderer = null;
	this->field1_0x4 = 0;
	this->field2_0x8 = 0;
	this->width2 = 0;
	this->height2 = 0;
	this->color = Color(0, 0, 0, 0);
	this->width1 = 0;
	this->height1 = 0;
}

ScreenInfo::ScreenInfo(Renderer* renderer) {
		this->renderer = renderer;
		this->field1_0x4 = 0;
		this->field2_0x8 = 0;
		this->width2 = 0;
		this->height2 = 0;
		this->color = Color(0,0,0,0);
		this->width1 = 0;
		this->height1 = 0;

	return;
}

