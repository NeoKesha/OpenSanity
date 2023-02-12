#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramE.h"

void ShaderProgramE::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramE * __fastcall ShaderProgramE::Construct(ShaderProgramE *this){
		(this->parent).flags = (this->parent).flags & 0x97d7ffde | 0x4400000;
		(this->parent).field59_0x70 = 0;
		(this->parent).texture = (TwinsanityTexture *)0x0;
		(this->parent).states = (this->parent).states & 0xc0ffff80 | 0x800000;
		(this->parent).field55_0x60 = 0.0;
		(this->parent).field56_0x64 = 0.0;
		(this->parent).unkSubStruct = (ShaderProgramSub *)0x0;
		(this->parent).vtable = (ShaderProgramAbstract_VTable *)&ShaderProgram_VT_E;
		(this->parent).id = 10;
		return this;
		}
		
	*/
	return;
}

void ShaderProgramE::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramAbstract * __thiscall ShaderProgramE::Dispose(ShaderProgramE *this,byte param_1){
		ShaderProgramAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ShaderProgramE::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void ShaderProgramE::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint ShaderProgramE::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramE::IsD(void){
		return 0;
		}
		
	*/
	return 0;
}

void ShaderProgramE::InitId(ShaderProgramE* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ShaderProgramE::InitId(ShaderProgramE *param_1){
		(param_1->parent).id = 10;
		return;
		}
		
	*/
	return;
}

uint ShaderProgramE::GetNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramE::GetNum(void){
		return DAT_0039f17c;
		}
		
	*/
	return 0;
}

int ShaderProgramE::Method3(char param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall ShaderProgramE::Method3(int this,char param_2){
		int iVar1;
		iVar1 = *(int *)(this + 0x6c);
		if (param_2 != '\0') {
		iVar1 = iVar1 + 2;
		}
		return iVar1;
		}
		
	*/
	return 0;
}

