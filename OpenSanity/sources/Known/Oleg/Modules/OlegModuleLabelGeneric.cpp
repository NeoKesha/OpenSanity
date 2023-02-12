#include "headers/Known/Oleg/Modules/OlegModuleLabelGeneric.h"

#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"
#include "headers/Known/Math/Vector2.h"
#include "headers/Known/Graphics/Font/Font.h"
#include "headers/Known/Oleg/UIElement/UIElementImage.h"
void OlegModuleLabelGeneric::FUN_001a4010(uint param_1, Vector2* param_2, Vector2* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleLabelGeneric::FUN_001a4010(OlegModuleLabelGeneric *this,uint param_1,Vector2 *param_2,Vector2 *param_3){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		fVar3 = FLOAT_00386ab4;
		fVar1 = param_3->x;
		fVar2 = param_3->y;
		fVar5 = param_2->x;
		fVar6 = param_2->y;
		(this->parent).array[1].y = (float)param_1;
		param_3 = (Vector2 *)(param_1 & 0xffffff);
		(this->parent).array[1].x = (float)param_3;
		fVar1 = fVar1 * fVar3 * FLOAT_0039456c;
		fVar2 = fVar2 * fVar3;
		fVar3 = fVar5 - fVar1;
		(this->parent).array[5].x = fVar3;
		fVar4 = fVar6 - fVar2;
		(this->parent).array[5].y = fVar4;
		(this->parent).array[4].x = fVar3;
		(this->parent).array[4].y = fVar4;
		fVar5 = fVar5 + fVar1;
		fVar6 = fVar6 + fVar2;
		(this->parent).array[9].x = fVar5;
		(this->parent).array[9].y = fVar6;
		(this->parent).array[8].x = fVar5;
		(this->parent).array[8].y = fVar6;
		return;
		}
		
	*/
	return;
}

void OlegModuleLabelGeneric::Construct(float k, Font* font, uint index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleLabelGeneric * __thiscall OlegModuleLabelGeneric::Construct(OlegModuleLabelGeneric *this,float k,Font *font,int index){
		OlegModuleA::Construct(&this->parent,k);
		(this->parent).parent.vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_LabelGeneric;
		this->font = font;
		this->index = index;
		(this->str).value = (char *)0x0;
		(this->str).strLength = 0;
		(this->str).strSize = 0;
		return this;
		}
		
	*/
	return;
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

void OlegModuleLabelGeneric::Construct_3(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleLabelGeneric * __thiscall OlegModuleLabelGeneric::Construct(OlegModuleLabelGeneric *this,Font *param_1,int param_2){
		OlegModuleA::Construct(&this->parent);
		this->font = param_1;
		(this->parent).parent.vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_LabelGeneric;
		this->index = param_2;
		(this->str).value = (char *)0x0;
		(this->str).strLength = 0;
		(this->str).strSize = 0;
		return this;
		}
		
	*/
	return;
}

void OlegModuleLabelGeneric::Construct_4(uint param_1, char* str, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleLabelGeneric * __thiscall OlegModuleLabelGeneric::Construct(OlegModuleLabelGeneric *this,Font *param_1,char *str,int param_3){
		OlegModuleA::Construct(&this->parent);
		this->index = param_3;
		(this->parent).parent.vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_LabelGeneric;
		this->font = param_1;
		TwinString::Set(&this->str,str);
		return this;
		}
		
	*/
	return;
}

void OlegModuleLabelGeneric::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleLabelGeneric * __thiscall OlegModuleLabelGeneric::Dispose(OlegModuleLabelGeneric *this,byte param_1){
		TwinString::Dispose(&this->str);
		(this->parent).parent.vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void OlegModuleLabelGeneric::Construct_6(float param_1, UIElementImage* param_2, char* param_3, uint param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleLabelGeneric * __thiscall OlegModuleLabelGeneric::Construct(OlegModuleLabelGeneric *this,float param_1,UIElementImage *param_2,char *param_3,int param_4){
		OlegModuleA::Construct(&this->parent,param_1);
		this->font = (Font *)param_2;
		(this->parent).parent.vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_LabelGeneric;
		this->index = param_4;
		TwinString::Set(&this->str,param_3);
		return this;
		}
		
	*/
	return;
}

