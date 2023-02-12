#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Material/TwinsanityMaterial.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/Graphics/Shader/TwinsanityMaterialShader.h"
void TwinsanityMaterial::FreeMaterial() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall TwinsanityMaterial::FreeMaterial(TwinsanityMaterial *this){
		TwinsanityMaterialShader *ptr;
		ShaderProgramAbstract *this_00;
		uint i;
		ptr = this->shader;
		if (ptr != (TwinsanityMaterialShader *)0x0) {
		i = 0;
		if (ptr->shaderProgramCnt != 0) {
		do {
		this_00 = ptr->shaderPrograms[i];
		if (this_00 != (ShaderProgramAbstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		}
		i = i + 1;
		}
		 while (i < ptr->shaderProgramCnt);
		}
		VirtualPool::FreeMemory(ptr);
		}
		return;
		}
		
	*/
	return;
}

void TwinsanityMaterial::LoadFromStream(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanityMaterial::LoadFromStream(TwinsanityMaterial *this,MemoryStream *stream){
		TwinsanityMaterialShader *shader;
		shader = (TwinsanityMaterialShader *)VirtualPool::AllocateMemory(0x28);
		if (shader != (TwinsanityMaterialShader *)0x0) {
		TwinsanityMaterialShader::ReadFromStream(shader,stream);
		this->shader = shader;
		return;
		}
		this->shader = (TwinsanityMaterialShader *)0x0;
		return;
		}
		
	*/
	return;
}

