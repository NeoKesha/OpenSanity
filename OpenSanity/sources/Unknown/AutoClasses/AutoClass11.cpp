#include "headers/Unknown/AutoClasses/AutoClass11.h"

#include "headers/Known/Oleg/Modules/OlegModuleLabelGeneric.h"
#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"
#include "headers/Unknown/SomeState.h"
#include "headers/Known/Graphics/Font/Font.h"
void AutoClass11::DrawOnScreenText(SomeState* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass11::DrawOnScreenText(AutoClass11 *this,SomeState *param_1){
		if ((this->message).strLength != 0) {
		if (this->field5_0x28 == 0) {
		this->field5_0x28 = param_1->currentTime;
		}
		else if (this->field6_0x2c <= param_1->currentTime - this->field5_0x28) {
		this->field6_0x2c = 0;
		this->field5_0x28 = 0;
		}
		}
		if (this->module != (OlegModuleLabelGeneric *)0x0) {
		TwinString::Copy(&this->module->str,(this->message).value);
		return;
		}
		return;
		}
		
	*/
	return;
}

void AutoClass11::Construct(Font* font) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass11::Construct(AutoClass11 *this,Font *font){
		float fVar1;
		fVar1 = FLOAT_00386ab4;
		this->font = font;
		this->field1_0x4 = 0x22;
		(this->message).value = (char *)0x0;
		(this->message).strLength = 0;
		(this->message).strSize = 0;
		this->color = COLOR_WHITE;
		(this->vec).x = fVar1;
		(this->vec).y = fVar1;
		fVar1 = FLOAT_0038639c;
		(this->vec).z = FLOAT_0038639c;
		(this->vec).w = fVar1;
		this->module = (OlegModuleLabelGeneric *)0x0;
		this->field6_0x2c = 0;
		this->field5_0x28 = 0;
		return;
		}
		
	*/
	return;
}

void AutoClass11::DrawMessage(FontRenderer* fontRenderer) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass11::DrawMessage(AutoClass11 *this,FontRenderer *fontRenderer){
		float y;
		if (((this->message).strLength != 0) && (this->module == (OlegModuleLabelGeneric *)0x0)) {
		fontRenderer->color = this->color;
		y = (this->vec).w;
		fontRenderer->originX = (this->vec).z;
		fontRenderer->originY = y;
		fontRenderer->field13_0x34 = this->field1_0x4;
		fontRenderer->font = this->font;
		FontRenderer::DrawText(fontRenderer,(this->vec).x,(this->vec).y,(this->message).value);
		}
		return;
		}
		
	*/
	return;
}

