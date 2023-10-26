#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/Graphics/Color.h"

class RendererText {
	public:
		float x;
		float y;
		float originX;
		float originY;
		Color color;
		int reserved;
		TwinString str;


};
