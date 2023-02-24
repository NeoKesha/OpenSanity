#include "headers/Known/Oleg/UIElement/UIElementAbstract.h"

#include "headers/Global.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Material/TwinsanityMaterial.h"
#include "headers/Known/Graphics/Shader/TwinsanityMaterialShader.h"

UIElementAbstract::UIElementAbstract()
{
	this->shader = null;
	this->material = null;
	this->field3_0xc = 0;
}

UIElementAbstract::UIElementAbstract(TwinsanityMaterialShader* shader)
{
	this->material = null;
	this->field3_0xc = 0;
	FreeMaterial();
	this->shader = shader;
}

UIElementAbstract::UIElementAbstract(uint param_2, uint param_3)
{
	Logging::LogUnimplemented(__FUNCSIG__);

	this->material = (TwinsanityMaterial*)0x0;
	this->field3_0xc = 0;
	//ReplaceMaterial(param_2, param_3);
}

UIElementAbstract::~UIElementAbstract()
{
	Global* GLOBAL = Global::Get();
	if (this->material != null) {
		if (this->material->id == 0xffffffff) {
			this->material->FreeMaterial();
			delete this->material;
		}
		else {
			//TODO: Resolve conflict - this->material is not TwinsanityMaterial but SectionMaterial?
			//GLOBAL->ENV_CLASS_187_SECTION_MATERIALS.Method4(this->material);
		}
		this->material = (TwinsanityMaterial*)0x0;
	}
}

void UIElementAbstract::FUN_00102210(int cnt) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UIElementAbstract::FUN_00102210(UIElementAbstract *this,int cnt){
		(*this->vtable->FreeMaterial)(this);
		this->shader = (TwinsanityMaterialShader *)cnt;
		return;
		}
		
	*/
	return;
}

void UIElementAbstract::ReplaceMaterial(uint id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UIElementAbstract::ReplaceMaterial(UIElementAbstract *this,uint id){
		TwinsanityMaterial *newMaterial;
		TwinsanityMaterial *section1;
		section1 = this->material;
		newMaterial = (TwinsanityMaterial *)(*(ENV_CLASS_187_SECTION_MATERIALS.parent)->Create)(&ENV_CLASS_187_SECTION_MATERIALS.parent,&stack0x00000004,0);
		this->material = newMaterial;
		this->shader = newMaterial->shader;
		if (section1 != (TwinsanityMaterial *)0x0) {
		if (section1->id == 0xffffffff) {
		TwinsanityMaterial::FreeMaterial(section1);
		VirtualPool::FreeMemory(section1);
		return;
		}
		(*(ENV_CLASS_187_SECTION_MATERIALS.parent)->Method4)(&ENV_CLASS_187_SECTION_MATERIALS.parent,(undefined *)section1);
		}
		return;
		}
		
	*/
	return;
}

void UIElementAbstract::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UIElementAbstract::CleanUp(UIElementAbstract *this){
		TwinsanityMaterial *section;
		section = this->material;
		this->vtable = (UIElementAbstract_VTable *)&UIElement_VT_Abstract;
		if (section != (TwinsanityMaterial *)0x0) {
		if (section->id == 0xffffffff) {
		TwinsanityMaterial::FreeMaterial(section);
		VirtualPool::FreeMemory(section);
		this->material = (TwinsanityMaterial *)0x0;
		return;
		}
		(*(ENV_CLASS_187_SECTION_MATERIALS.parent)->Method4)(&ENV_CLASS_187_SECTION_MATERIALS.parent,(undefined *)section);
		this->material = (TwinsanityMaterial *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void UIElementAbstract::FreeMaterial() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UIElementAbstract::FreeMaterial(UIElementAbstract *this){
		TwinsanityMaterial *section;
		section = this->material;
		if (section != (TwinsanityMaterial *)0x0) {
		if (section->id == 0xffffffff) {
		TwinsanityMaterial::FreeMaterial(section);
		VirtualPool::FreeMemory(section);
		this->material = (TwinsanityMaterial *)0x0;
		return;
		}
		(*(ENV_CLASS_187_SECTION_MATERIALS.parent)->Method4)(&ENV_CLASS_187_SECTION_MATERIALS.parent,(undefined *)section);
		this->material = (TwinsanityMaterial *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void UIElementAbstract::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UIElementAbstract::Read(UIElementAbstract *this,MemoryStream *stream){
		TwinsanityTexture *texture;
		TwinsanityMaterial *material;
		uint id;
		uint materialId;
		uint textureId;
		material = this->material;
		if (material != (TwinsanityMaterial *)0x0) {
		if (material->id == 0xffffffff) {
		TwinsanityMaterial::FreeMaterial(material);
		VirtualPool::FreeMemory(material);
		}
		else {
		(*(ENV_CLASS_187_SECTION_MATERIALS.parent)->Method4)(&ENV_CLASS_187_SECTION_MATERIALS.parent,(undefined *)material);
		}
		}
		(*stream->vtable->ReadUInt)(stream,&textureId);
		(*stream->vtable->ReadUInt)(stream,&materialId);
		texture = SectionDataTexture::ReadTextureToSection(&ENV_CLASS_183_SECTION_TEXTURES,stream,textureId);
		material = SectionDataMaterial::ReadMaterialToSection(&ENV_CLASS_187_SECTION_MATERIALS,stream,materialId);
		this->material = material;
		(*this->vtable->ReplaceMaterial)(this,id);
		TwinsanityTexture::FreeTexture(texture);
		return;
		}
		
	*/
	return;
}

void UIElementAbstract::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UIElementAbstract::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}
