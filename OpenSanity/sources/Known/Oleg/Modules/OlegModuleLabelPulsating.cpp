#include "headers/Known/Oleg/Modules/OlegModuleLabelPulsating.h"

#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"
#include "headers/Known/Graphics/Font/Font.h"

OlegModuleLabelPulsating::OlegModuleLabelPulsating(Font* font, int index1, int index2) : OlegModuleA()
{
	this->font = font;
	this->index1 = index1;
	this->index2 = index2;
}

OlegModuleLabelPulsating::OlegModuleLabelPulsating(float x, Font* font, int index1, int index2) : OlegModuleA(x)
{
	this->font = font;
	this->index1 = index1;
	this->index2 = index2;
}

void OlegModuleLabelPulsating::Render(FontRenderer* fontRenderer) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleLabelPulsating::Render(OlegModuleLabelPulsating *this,FontRenderer *fontRenderer){
		float fVar1;
		uint uVar2;
		char *str;
		Color CVar3;
		int iVar4;
		OlegModuleAbstract *this_00;
		Vector2 local_10;
		Vector2 local_8;
		 Pulsating Label uVar2 = (this->parent).parent.flags;
		if (((~(byte)(uVar2 >> 9) & 1) != 0) && (1 < ((byte)uVar2 & 0xf))) {
		local_8.x = (this->parent).array[2].x;
		str = LOCAL_MSG1[this->index1];
		local_8.y = (this->parent).array[2].y;
		local_10.x = (this->parent).array[6].x;
		local_10.y = (this->parent).array[6].y;
		CVar3 = (Color)(this->parent).array[0].x;
		if ((uVar2 & 0x400) != 0) {
		FUN_00104540(false,&(this->parent).parent.field2_0x8,&local_8);
		}
		if (((this->parent).parent.flags & 0x400) != 0) {
		FUN_001045b0(false,&local_10);
		}
		iVar4 = *(int *)&(this->parent).parent.field_0x28;
		if (iVar4 != 0) {
		fVar1 = *(float *)(iVar4 + 0x10);
		local_10.x = fVar1 * local_10.x;
		local_10.y = local_10.y * fVar1;
		}
		fontRenderer->font = this->font;
		fontRenderer->field13_0x34 = this->index2;
		fontRenderer->originX = local_10.x;
		fontRenderer->originY = local_10.y;
		fontRenderer->color = CVar3;
		FontRenderer::DrawText(fontRenderer,local_8.x,local_8.y,str);
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
