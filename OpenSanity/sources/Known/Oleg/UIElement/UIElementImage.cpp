#include "headers/Known/Oleg/UIElement/UIElementImage.h"

#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Graphics/Shader/TwinsanityMaterialShader.h"


UIElementImage::UIElementImage() : UIElementAbstract()
{

}

UIElementImage::UIElementImage(TwinsanityMaterialShader* shader) : UIElementAbstract(shader)
{
	this->pos.x = 0.0f;
	this->pos.y = 0.0f;
	this->size.x = 1.0f;
	this->size.y = 1.0f;
}

UIElementImage::UIElementImage(TwinsanityMaterialShader* shader, Vector2* pos, Vector2* size) : UIElementAbstract(shader)
{
	this->pos.x = pos->x;
	this->pos.y = pos->y;
	this->size.x = size->x - pos->x;
	this->size.y = size->y - pos->y;
}

UIElementImage::UIElementImage(uint param_2, uint param_3) : UIElementAbstract(param_2, param_3)
{
	this->pos.x = 0.0f;
	this->pos.y = 0.0f;
	this->size.x = 1.0f;
	this->size.y = 1.0f;
}

UIElementImage::UIElementImage(uint param_2, uint param_3, Vector2* pos, Vector2* size) : UIElementAbstract(param_2, param_3)
{
	this->pos.x = pos->x;
	this->pos.y = pos->y;
	this->size.x = size->x - pos->x;
	this->size.y = size->y - pos->y;
}

UIElementImage::~UIElementImage()
{
	CleanUp();
}

void UIElementImage::RenderColorTransfomed(Matrix4* transform, Color color) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UIElementImage::RenderColorTransfomed(UIElementImage *this,Matrix4 *transform,Color color){
		float fVar1;
		float fVar2;
		Vector4 local_a0;
		Vector4 local_90;
		float local_80;
		float local_7c;
		float local_78;
		float local_74;
		Vector4 local_70;
		Vector4 local_60;
		Vector4 local_50;
		Vector4 local_40;
		float local_30;
		float local_2c;
		float local_28;
		float local_24;
		float local_20;
		float local_1c;
		float local_18;
		float local_14;
		if ((this->parent).field3_0xc == 0) {
		Matrix4::FUN_000d4000(transform,&Vector4_0039f610,&local_90);
		Matrix4::FUN_000d4000(transform,&Vector4_0039f620,&local_a0);
		::Render((float)SCREEN_WIDTH * local_90.x,local_90.y * (float)SCREEN_HEIGHT,(float)SCREEN_WIDTH * (local_a0.x - local_90.x),(local_a0.y - local_90.y) * (float)SCREEN_HEIGHT,(this->pos).x,(this->pos).y,(this->size).x + (this->pos).x,(this->size).y + (this->pos).y,color,(this->parent).shader);
		return;
		}
		Matrix4::FUN_000d4000(transform,&Vector4_0039f630,&local_70);
		Matrix4::FUN_000d4000(transform,&Vector4_0039f640,&local_60);
		Matrix4::FUN_000d4000(transform,&Vector4_0039f650,&local_50);
		Matrix4::FUN_000d4000(transform,&Vector4_0039f660,&local_40);
		local_90.x = (this->pos).x;
		fVar1 = (float)SCREEN_WIDTH;
		fVar2 = (float)SCREEN_HEIGHT;
		local_90.y = (this->pos).y;
		local_90.z = (this->pos).x;
		local_90.w = (this->size).y + (this->pos).y;
		local_78 = (this->pos).x;
		local_7c = (this->pos).y;
		local_80 = (this->size).x + local_78;
		local_78 = (this->size).x + local_78;
		local_74 = (this->size).y + (this->pos).y;
		local_70.x = local_70.x * fVar1;
		local_60.x = local_60.x * fVar1;
		local_70.y = local_70.y * fVar2;
		local_50.x = local_50.x * fVar1;
		local_60.y = local_60.y * fVar2;
		local_40.x = local_40.x * fVar1;
		local_50.y = local_50.y * fVar2;
		local_40.y = local_40.y * fVar2;
		local_a0.x = (float)color;
		local_a0.y = (float)color;
		local_a0.z = (float)color;
		local_a0.w = (float)color;
		local_30 = local_70.x;
		local_2c = local_70.y;
		local_28 = local_60.x;
		local_24 = local_60.y;
		local_20 = local_50.x;
		local_1c = local_50.y;
		local_18 = local_40.x;
		local_14 = local_40.y;
		FUN_0010c810((int)&local_30,(int)&local_90,(undefined *)&local_a0,4,(int *)(this->parent).shader);
		return;
		}
		
	*/
	return;
}

void UIElementImage::ReplaceMaterial(uint id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UIElementImage::ReplaceMaterial(UIElementImage *this,uint id){
		float fVar1;
		(this->pos).x = 0.0;
		(this->pos).y = 0.0;
		fVar1 = FLOAT_0038639c;
		(this->size).x = FLOAT_0038639c;
		(this->size).y = fVar1;
		UIElementAbstract::ReplaceMaterial(&this->parent,id);
		return;
		}
		
	*/
	return;
}

void UIElementImage::ReplaceShader(TwinsanityMaterialShader* shader) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UIElementImage::ReplaceShader(UIElementImage *this,TwinsanityMaterialShader *shader){
		float fVar1;
		(this->pos).x = 0.0;
		(this->pos).y = 0.0;
		fVar1 = FLOAT_0038639c;
		(this->size).x = FLOAT_0038639c;
		(this->size).y = fVar1;
		(*((this->parent).vtable)->FreeMaterial)(&this->parent);
		(this->parent).shader = shader;
		return;
		}
		
	*/
	return;
}

void UIElementImage::RenderTransfomed(Matrix4* transform) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UIElementImage::RenderTransfomed(UIElementImage *this,Matrix4 *transform){
		(*((this->parent).vtable)->RenderColorTransformed)(&this->parent,transform,COLOR_WHITE);
		return;
		}
		
	*/
	return;
}

void UIElementImage::RenderColor(Color color) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UIElementImage::RenderColor(UIElementImage *this,Color color){
		::Render(Vector4_0039f610.x * (float)SCREEN_WIDTH,Vector4_0039f610.y * (float)SCREEN_HEIGHT,(Vector4_0039f620.x - Vector4_0039f610.x) * (float)SCREEN_WIDTH,(Vector4_0039f620.y - Vector4_0039f610.y) * (float)SCREEN_HEIGHT,(this->pos).x,(this->pos).y,(this->size).x + (this->pos).x,(this->size).y + (this->pos).y,color,(this->parent).shader);
		return;
		}
		
	*/
	return;
}

void UIElementImage::Render() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UIElementImage::Render(UIElementImage *this){
		::Render(Vector4_0039f610.x * (float)SCREEN_WIDTH,Vector4_0039f610.y * (float)SCREEN_HEIGHT,(Vector4_0039f620.x - Vector4_0039f610.x) * (float)SCREEN_WIDTH,(Vector4_0039f620.y - Vector4_0039f610.y) * (float)SCREEN_HEIGHT,(this->pos).x,(this->pos).y,(this->size).x + (this->pos).x,(this->size).y + (this->pos).y,COLOR_WHITE,(this->parent).shader);
		return;
		}
		
	*/
	return;
}
