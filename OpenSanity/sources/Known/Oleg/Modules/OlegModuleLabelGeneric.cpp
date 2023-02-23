#include "headers/Known/Oleg/Modules/OlegModuleLabelGeneric.h"

#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"
#include "headers/Known/Math/Vector2.h"
#include "headers/Known/Graphics/Font/Font.h"
#include "headers/Known/Oleg/UIElement/UIElementImage.h"

OlegModuleLabelGeneric::OlegModuleLabelGeneric(float x, Font* font, int index) : OlegModuleA(x)
{
	this->font = font;
	this->index = index;
	(this->str).value = (char*)0x0;
	(this->str).strLength = 0;
	(this->str).strSize = 0;
}

OlegModuleLabelGeneric::OlegModuleLabelGeneric(Font* font, int index) : OlegModuleA()
{
	this->font = font;
	this->index = index;
	(this->str).value = (char*)0x0;
	(this->str).strLength = 0;
	(this->str).strSize = 0;
}

OlegModuleLabelGeneric::OlegModuleLabelGeneric(Font* font, char* str, int index) : OlegModuleA()
{
	this->font = font;
	this->index = index;
	this->str.Set(str);
}

OlegModuleLabelGeneric::OlegModuleLabelGeneric(float x, Font* font, char* str, int index) : OlegModuleA(x)
{
	this->font = font;
	this->index = index;
	this->str.Set(str);
}

void OlegModuleLabelGeneric::Render(FontRenderer* fontRenderer) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleLabelGeneric::Render(OlegModuleLabelGeneric *this,FontRenderer *fontRenderer){
		float fVar1;
		uint uVar2;
		Color CVar3;
		int iVar4;
		OlegModuleAbstract *this_00;
		Vector2 pos;
		Vector2 local_8;
		 Onscreen Label (like your disk dirty, three years later, etc) uVar2 = (this->parent).parent.flags;
		if (((~(byte)(uVar2 >> 9) & 1) != 0) && (1 < ((byte)uVar2 & 0xf))) {
		local_8.x = (this->parent).array[2].x;
		local_8.y = (this->parent).array[2].y;
		pos.x = (this->parent).array[6].x;
		pos.y = (this->parent).array[6].y;
		CVar3 = (Color)(this->parent).array[0].x;
		if ((uVar2 & 0x400) != 0) {
		FUN_00104540(false,&(this->parent).parent.field2_0x8,&local_8);
		}
		if (((this->parent).parent.flags & 0x400) != 0) {
		FUN_001045b0(false,&pos);
		}
		iVar4 = *(int *)&(this->parent).parent.field_0x28;
		if (iVar4 != 0) {
		fVar1 = *(float *)(iVar4 + 0x10);
		pos.x = fVar1 * pos.x;
		pos.y = pos.y * fVar1;
		}
		fontRenderer->font = this->font;
		fontRenderer->field13_0x34 = this->index;
		fontRenderer->originX = pos.x;
		fontRenderer->originY = pos.y;
		fontRenderer->color = CVar3;
		FontRenderer::DrawText(fontRenderer,local_8.x,local_8.y,(this->str).value);
		}
		this_00 = (this->parent).parent.next;
		if (this_00 != (OlegModuleAbstract *)0x0) {
		(*this_00->vtable->Render)(this_00,fontRenderer);
		}
		return;
		}
		
	*/
	return;
}
