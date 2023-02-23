#include "headers/Unknown/AutoClasses/AutoClass11.h"

#include "headers/Known/Oleg/Modules/OlegModuleLabelGeneric.h"
#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"
#include "headers/Unknown/SomeState.h"
#include "headers/Known/Graphics/Font/Font.h"

AutoClass11::AutoClass11() : color(1.0f, 1.0f, 1.0f, 1.0f)
{
	this->font = null;
	this->field1_0x4 = 0x22;
	(this->message).value = null;
	(this->message).strLength = 0;
	(this->message).strSize = 0;
	(this->vec).x = 0.5;
	(this->vec).y = 0.5;
	(this->vec).z = 1.0;
	(this->vec).w = 1.0;
	this->module = null;
	this->field6_0x2c = 0;
	this->field5_0x28 = 0;
}

AutoClass11::AutoClass11(Font* font) : color(1.0f, 1.0f, 1.0f, 1.0f)
{
	this->font = font;
	this->field1_0x4 = 0x22;
	(this->message).value = null;
	(this->message).strLength = 0;
	(this->message).strSize = 0;
	(this->vec).x = 0.5;
	(this->vec).y = 0.5;
	(this->vec).z = 1.0;
	(this->vec).w = 1.0;
	this->module = null;
	this->field6_0x2c = 0;
	this->field5_0x28 = 0;
}

void AutoClass11::DrawOnScreenText(SomeState* param_1) {
	if ((this->message).strLength != 0) {
		if (this->field5_0x28 == 0) {
			this->field5_0x28 = param_1->currentTime;
		}
		else if (this->field6_0x2c <= param_1->currentTime - this->field5_0x28) {
			this->field6_0x2c = 0;
			this->field5_0x28 = 0;
		}
	}
	if (this->module != (OlegModuleLabelGeneric*)0x0) {
		module->str.Copy(message.value);
		return;
	}
	return;
}

void AutoClass11::DrawMessage(FontRenderer* fontRenderer) {
	if ((message.strLength != 0) && (this->module == null)) {
		fontRenderer->color = color;
		fontRenderer->originX = vec.z;
		fontRenderer->originY = vec.w;
		fontRenderer->field13_0x34 = field1_0x4;
		fontRenderer->font = font;
		fontRenderer->DrawText_Twins(vec.x, vec.y, message.value);
	}
}

