#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramJ.h"

void ShaderProgramJ::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramJ * __fastcall ShaderProgramJ::Construct(ShaderProgramJ *this){
		(this->parent).flags = (this->parent).flags & 0x97d7ffde | 0x4400000;
		(this->parent).field59_0x70 = 0;
		(this->parent).texture = (TwinsanityTexture *)0x0;
		(this->parent).states = (this->parent).states & 0xc0ffff80 | 0x800000;
		(this->parent).field55_0x60 = 0.0;
		(this->parent).field56_0x64 = 0.0;
		(this->parent).unkSubStruct = (ShaderProgramSub *)0x0;
		(this->parent).vtable = (ShaderProgramAbstract_VTable *)&ShaderProgram_VT_J;
		(this->parent).id = 0xf;
		return this;
		}
		
	*/
	return;
}

void ShaderProgramJ::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramAbstract * __thiscall ShaderProgramJ::Dispose(ShaderProgramJ *this,byte param_1){
		ShaderProgramAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ShaderProgramJ::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void ShaderProgramJ::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint ShaderProgramJ::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramJ::IsD(void){
		return 0;
		}
		
	*/
	return 0;
}

void ShaderProgramJ::InitId(ShaderProgramJ* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ShaderProgramJ::InitId(ShaderProgramJ *param_1){
		(param_1->parent).id = 0xf;
		return;
		}
		
	*/
	return;
}

uint ShaderProgramJ::GetNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramJ::GetNum(void){
		return DAT_0039f18c;
		}
		
	*/
	return 0;
}

bool ShaderProgramJ::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool ShaderProgramJ::IsA(void){
		return true;
		}
		
	*/
	return false;
}

bool ShaderProgramJ::IsC() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool ShaderProgramJ::IsC(void){
		return true;
		}
		
	*/
	return false;
}

int ShaderProgramJ::Method3(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall ShaderProgramJ::Method3(ShaderProgramJ *this,char param_1){
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

