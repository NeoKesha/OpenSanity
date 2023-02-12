#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramC.h"

void ShaderProgramC::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramC * __fastcall ShaderProgramC::Construct(ShaderProgramC *this){
		(this->parent).flags = (this->parent).flags & 0x97d7ffde | 0x4400000;
		(this->parent).field59_0x70 = 0;
		(this->parent).texture = (TwinsanityTexture *)0x0;
		(this->parent).states = (this->parent).states & 0xc0ffff80 | 0x800000;
		(this->parent).field55_0x60 = 0.0;
		(this->parent).field56_0x64 = 0.0;
		(this->parent).unkSubStruct = (ShaderProgramSub *)0x0;
		(this->parent).vtable = (ShaderProgramAbstract_VTable *)&ShaderProgram_VT_C;
		(this->parent).id = 2;
		return this;
		}
		
	*/
	return;
}

void ShaderProgramC::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramAbstract * __thiscall ShaderProgramC::Dispose(ShaderProgramC *this,byte param_1){
		ShaderProgramAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ShaderProgramC::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void ShaderProgramC::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint ShaderProgramC::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramC::IsD(void){
		return 0;
		}
		
	*/
	return 0;
}

bool ShaderProgramC::IsNotE(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramC::IsNotE(ShaderProgramC *this,undefined4 param_1){
		bool bVar1;
		bVar1 = (*((this->parent).vtable)->IsE)(param_1);
		return (bool)('\x01' - (bVar1 != false));
		}
		
	*/
	return false;
}

bool ShaderProgramC::IsE(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramC::IsE(ShaderProgramC *this,int param_1){
		bool bVar1;
		bVar1 = ShaderProgramAbstract::IsF(&this->parent,param_1);
		return bVar1 != false;
		}
		
	*/
	return false;
}

void ShaderProgramC::InitId(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ShaderProgramC::InitId(int param_1){
		*(undefined4 *)(param_1 + 0x74) = 2;
		return;
		}
		
	*/
	return;
}

int ShaderProgramC::GetNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int ShaderProgramC::GetNum(void){
		return DAT_0039f1dc;
		}
		
	*/
	return 0;
}

int ShaderProgramC::Method3(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall ShaderProgramC::Method3(ShaderProgramC *this,char param_1){
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

