#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramG.h"

void ShaderProgramG::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramG * __fastcall ShaderProgramG::Construct(ShaderProgramG *this){
		(this->parent).flags = (this->parent).flags & 0x97d7ffde | 0x4400000;
		(this->parent).field59_0x70 = 0;
		(this->parent).texture = (TwinsanityTexture *)0x0;
		(this->parent).states = (this->parent).states & 0xc0ffff80 | 0x800000;
		(this->parent).field55_0x60 = 0.0;
		(this->parent).field56_0x64 = 0.0;
		(this->parent).unkSubStruct = (ShaderProgramSub *)0x0;
		(this->parent).vtable = (ShaderProgramAbstract_VTable *)&ShaderProgram_VT_G;
		(this->parent).id = 0xc;
		return this;
		}
		
	*/
	return;
}

void ShaderProgramG::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramAbstract * __thiscall ShaderProgramG::Dispose(ShaderProgramG *this,byte param_1){
		ShaderProgramAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ShaderProgramG::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void ShaderProgramG::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint ShaderProgramG::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramG::IsD(void){
		return 0;
		}
		
	*/
	return 0;
}

void ShaderProgramG::InitId(ShaderProgramG* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ShaderProgramG::InitId(ShaderProgramG *param_1){
		(param_1->parent).id = 0xc;
		return;
		}
		
	*/
	return;
}

uint ShaderProgramG::GetNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramG::GetNum(void){
		return DAT_0039f1f0;
		}
		
	*/
	return 0;
}

bool ShaderProgramG::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool ShaderProgramG::IsA(void){
		return true;
		}
		
	*/
	return false;
}

bool ShaderProgramG::IsC() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool ShaderProgramG::IsC(void){
		return true;
		}
		
	*/
	return false;
}

int ShaderProgramG::Method3(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall ShaderProgramG::Method3(ShaderProgramG *this,char param_1){
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

