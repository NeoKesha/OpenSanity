#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramI.h"

void ShaderProgramI::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramI * __fastcall ShaderProgramI::Construct(ShaderProgramI *this){
		(this->parent).flags = (this->parent).flags & 0x97d7ffde | 0x4400000;
		(this->parent).field59_0x70 = 0;
		(this->parent).texture = (TwinsanityTexture *)0x0;
		(this->parent).states = (this->parent).states & 0xc0ffff80 | 0x800000;
		(this->parent).field55_0x60 = 0.0;
		(this->parent).field56_0x64 = 0.0;
		(this->parent).unkSubStruct = (ShaderProgramSub *)0x0;
		(this->parent).vtable = (ShaderProgramAbstract_VTable *)&ShaderProgram_VT_I;
		(this->parent).id = 0xd;
		return this;
		}
		
	*/
	return;
}

void ShaderProgramI::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramAbstract * __thiscall ShaderProgramI::Dispose(ShaderProgramI *this,byte param_1){
		ShaderProgramAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ShaderProgramI::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void ShaderProgramI::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint ShaderProgramI::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramI::IsD(void){
		return 0;
		}
		
	*/
	return 0;
}

void ShaderProgramI::InitId() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ShaderProgramI::InitId(ShaderProgramI *this){
		(this->parent).id = 0xd;
		return;
		}
		
	*/
	return;
}

uint ShaderProgramI::GetNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramI::GetNum(void){
		return DAT_0039f1ec;
		}
		
	*/
	return 0;
}

int ShaderProgramI::Method3(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall ShaderProgramI::Method3(ShaderProgramI *this,char param_1){
		int iVar1;
		iVar1 = (this->parent).field58_0x6c;
		if (param_1 != '\0') {
		iVar1 = iVar1 + 2;
		}
		return iVar1;
		}
		
	*/
	return 0;
}

