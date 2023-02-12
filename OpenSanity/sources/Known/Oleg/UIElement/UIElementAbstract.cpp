#include "headers/Known/Oleg/UIElement/UIElementAbstract.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Material/TwinsanityMaterial.h"
#include "headers/Known/Graphics/Shader/TwinsanityMaterialShader.h"
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

void UIElementAbstract::Construct(int cnt) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UIElementAbstract * __thiscall UIElementAbstract::Construct(UIElementAbstract *this,int cnt){
		this->vtable = (UIElementAbstract_VTable *)&UIElement_VT_Abstract;
		this->material = (TwinsanityMaterial *)0x0;
		this->field3_0xc = 0;
		(*(code *)PTR_FreeMaterial_00390624)();
		this->shader = (TwinsanityMaterialShader *)cnt;
		return this;
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

void UIElementAbstract::Construct_5(byte param_2, byte param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UIElementAbstract * __fastcall UIElementAbstract::Construct(UIElementAbstract *this,undefined param_2,undefined1 param_3){
		undefined3 in_register_00000009;
		this->material = (TwinsanityMaterial *)0x0;
		this->field3_0xc = 0;
		this->vtable = (UIElementAbstract_VTable *)&UIElement_VT_Abstract;
		ReplaceMaterial(this,CONCAT31(in_register_00000009,param_2));
		return this;
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

void UIElementAbstract::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UIElementAbstract * __thiscall UIElementAbstract::Dispose(UIElementAbstract *this,byte param_1){
		TwinsanityMaterial *this_00;
		this_00 = this->material;
		this->vtable = (UIElementAbstract_VTable *)&UIElement_VT_Abstract;
		if (this_00 != (TwinsanityMaterial *)0x0) {
		if (this_00->id == 0xffffffff) {
		TwinsanityMaterial::FreeMaterial(this_00);
		VirtualPool::FreeMemory(this_00);
		}
		else {
		(*(ENV_CLASS_187_SECTION_MATERIALS.parent)->Method4)(&ENV_CLASS_187_SECTION_MATERIALS.parent,(undefined *)this_00);
		}
		this->material = (TwinsanityMaterial *)0x0;
		}
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
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

void UIElementAbstract::Construct_9() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UIElementAbstract::Construct(UIElementAbstract *this){
		this->vtable = (UIElementAbstract_VTable *)&UIElement_VT_Abstract;
		this->shader = (TwinsanityMaterialShader *)0x0;
		this->material = (TwinsanityMaterial *)0x0;
		this->field3_0xc = 0;
		return;
		}
		
	*/
	return;
}

