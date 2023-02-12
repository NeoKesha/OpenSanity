#include "headers/Known/Graphics/Font/FontAbstract.h"

#include "headers/Known/Graphics/FontRenderer/RendererText.h"

FontAbstract::FontAbstract() {
	this->field1_0x4 = 0;
	this->field2_0x8 = 0;
	this->data = null;
	(this->scale).x = 1.0f;
	(this->scale).y = 1.0f;
}

FontAbstract::~FontAbstract(){
	if (data != null) {
		delete data;
	}
}