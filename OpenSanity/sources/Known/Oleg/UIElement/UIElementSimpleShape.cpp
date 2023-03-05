#include "headers/Known/Oleg/UIElement/UIElementSimpleShape.h"

#include "headers/Known/Oleg/UIElement/UIElementBColor.h"
#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Oleg/UIElement/UIElementBTransform.h"

UIElementSimpleShape::UIElementSimpleShape() : UIElementAbstract()
{
	this->cnt = 0;
}

UIElementSimpleShape::UIElementSimpleShape(int cnt) : UIElementAbstract()
{
	this->cnt = 0;
	FUN_00101ff0(cnt);
}

UIElementSimpleShape::UIElementSimpleShape(int cnt, Vector2* param_2, Vector4* param_3) : UIElementAbstract()
{
	this->field2_0x14 = param_2;
	this->cnt = cnt;
	this->field3_0x18 = param_3;
}

UIElementSimpleShape::~UIElementSimpleShape()
{
	/*
void __fastcall UIElementSimpleShape::CleanUp(UIElementSimpleShape *this){
	uint uVar1;
	TwinsanityMaterial *section;
	uVar1 = this->cnt;
	(this->parent).vtable = (UIElementAbstract_VTable *)&UIElement_VT_B;
	if ((uVar1 & 0x100) != 0) {
	VirtualPool::FreeMemory(this->field2_0x14);
	VirtualPool::FreeMemory(this->field3_0x18);
	}
	this->cnt = 0;
	section = (this->parent).material;
	this->field2_0x14 = (Vector2 *)0x0;
	this->field3_0x18 = (undefined *)0x0;
	(this->parent).vtable = (UIElementAbstract_VTable *)&UIElement_VT_Abstract;
	if (section != (TwinsanityMaterial *)0x0) {
	if (section->id == 0xffffffff) {
	TwinsanityMaterial::FreeMaterial(section);
	VirtualPool::FreeMemory(section);
	(this->parent).material = (TwinsanityMaterial *)0x0;
	return;
	}
	(*(ENV_CLASS_187_SECTION_MATERIALS.parent)->Method4)(&ENV_CLASS_187_SECTION_MATERIALS.parent,(undefined *)section);
	(this->parent).material = (TwinsanityMaterial *)0x0;
	}
	return;
	}

*/
}
void UIElementSimpleShape::FUN_00101f20(Matrix4* transform, UIElementBTransform* transformStruct) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UIElementSimpleShape::FUN_00101f20(UIElementSimpleShape *this,Matrix4 *transform,UIElementBTransform *transformStruct){
		uint i;
		Vector4 local_30;
		Vector4 local_20;
		i = 0;
		if ((this->cnt & 0xffU) != 0) {
		do {
		local_30.y = this->field2_0x14[i].y;
		local_30.x = this->field2_0x14[i].x;
		local_30.z = 0.0;
		local_30.w = FLOAT_0038639c;
		Matrix4::FUN_000d4000(transform,&local_30,&local_20);
		transformStruct->array[i].x = local_20.x;
		transformStruct->array[i].y = local_20.y;
		i = i + 1;
		}
		 while (i < (this->cnt & 0xffU));
		}
		return;
		}
		
	*/
	return;
}

void UIElementSimpleShape::FUN_00101ff0(int cnt) {
	if ((this->cnt & 0x100U) != 0) {
		delete this->field2_0x14;
		delete this->field3_0x18;
	}
	this->cnt = 0;
	this->cnt = cnt;
	this->field2_0x14 = null;
	this->field3_0x18 = null;
	this->cnt = this->cnt | 0x100;
	this->field2_0x14 = new Vector2[cnt];
	this->field3_0x18 = new Vector4[cnt];
	return;
}

void UIElementSimpleShape::FUN_001090b0(Color color, UIElementBColor* colorStruct) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UIElementSimpleShape::FUN_001090b0(UIElementSimpleShape *this,Color color,UIElementBColor *colorStruct){
		byte *pbVar1;
		float fVar2;
		float fVar3;
		long lVar4;
		undefined *array;
		uint i;
		float10 extraout_ST0;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		fVar5 = (float)(color & 0xff) * FLOAT_0038dedc;
		fVar6 = (float)(color >> 8 & 0xff) * FLOAT_0038dedc;
		fVar7 = (float)(color >> 0x10 & 0xff) * FLOAT_0038dedc;
		i = 0;
		fVar8 = (float)(color >> 0x18) * FLOAT_0038dedc;
		if ((this->cnt & 0xffU) != 0) {
		array = (undefined *)((int)colorStruct->field0_0x0 + 2);
		do {
		pbVar1 = this->field3_0x18 + i * 4;
		fVar2 = (float)(uint)(byte)this->field3_0x18[i * 4 + 2] * FLOAT_0038dedc;
		fVar3 = (float)(uint)pbVar1[3] * FLOAT_0038dedc;
		lVar4 = __ftol2((float)(uint)*pbVar1 * FLOAT_0038dedc * fVar5 * FLOAT_00386448);
		array[-2] = (char)lVar4;
		lVar4 = __ftol2((float)(extraout_ST0 * (float10)fVar6 * (float10)FLOAT_00386448));
		array[-1] = (char)lVar4;
		lVar4 = __ftol2(fVar2 * fVar7 * FLOAT_00386448);
		*array = (char)lVar4;
		lVar4 = __ftol2(fVar3 * fVar8 * FLOAT_00386448);
		array[1] = (char)lVar4;
		i = i + 1;
		array = array + 4;
		}
		 while (i < (this->cnt & 0xffU));
		}
		return;
		}
		
	*/
	return;
}

void UIElementSimpleShape::FUN_0010eac0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UIElementSimpleShape::FUN_0010eac0(UIElementSimpleShape *this){
		::Render(&this->field2_0x14->x,this->field3_0x18,this->cnt & 0xff,(this->parent).shader);
		return;
		}
		
	*/
	return;
}

void UIElementSimpleShape::FUN_0010eae0(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UIElementSimpleShape::FUN_0010eae0(UIElementSimpleShape *this,uint param_1){
		UIElementBColor local_3fc;
		FUN_001090b0(this,(Color)param_1,&local_3fc);
		::Render(&this->field2_0x14->x,(undefined *)&local_3fc,this->cnt & 0xff,(this->parent).shader);
		return;
		}
		
	*/
	return;
}

void UIElementSimpleShape::FUN_0010eb30(void* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UIElementSimpleShape::FUN_0010eb30(UIElementSimpleShape *this,void *param_1){
		UIElementBTransform local_7f8;
		FUN_00101f20(this,(Matrix4 *)param_1,&local_7f8);
		::Render((undefined4 *)&local_7f8,this->field3_0x18,this->cnt & 0xff,(this->parent).shader);
		return;
		}
		
	*/
	return;
}

void UIElementSimpleShape::FUN_0010eb80(Matrix4* transform, Color color) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UIElementSimpleShape::FUN_0010eb80(UIElementSimpleShape *this,Matrix4 *transform,Color color){
		UIElementBColor colorStruct;
		UIElementBTransform transformStruct;
		FUN_001090b0(this,color,&colorStruct);
		FUN_00101f20(this,transform,&transformStruct);
		::Render((undefined4 *)&transformStruct,(undefined *)&colorStruct,this->cnt & 0xff,(this->parent).shader);
		return;
		}
		
	*/
	return;
}