#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramL.h"

void ShaderProgramL::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramL * __fastcall ShaderProgramL::Construct(ShaderProgramL *this){
		(this->parent).flags = (this->parent).flags & 0x97d7ffde | 0x4400000;
		(this->parent).field59_0x70 = 0;
		(this->parent).texture = (TwinsanityTexture *)0x0;
		(this->parent).states = (this->parent).states & 0xc0ffff80 | 0x800000;
		(this->parent).field55_0x60 = 0.0;
		(this->parent).field56_0x64 = 0.0;
		(this->parent).unkSubStruct = (ShaderProgramSub *)0x0;
		(this->parent).vtable = (ShaderProgramAbstract_VTable *)&ShaderProgram_VT_L;
		(this->parent).id = 0x12;
		return this;
		}
		
	*/
	return;
}

void ShaderProgramL::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramAbstract * __thiscall ShaderProgramL::Dispose(ShaderProgramL *this,byte param_1){
		ShaderProgramAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ShaderProgramL::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void ShaderProgramL::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint ShaderProgramL::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramL::IsD(void){
		return 0;
		}
		
	*/
	return 0;
}

bool ShaderProgramL::IsNotE(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramL::IsNotE(ShaderProgramL *this,undefined4 param_1){
		bool bVar1;
		bVar1 = (*((this->parent).vtable)->IsE)(param_1);
		return (bool)('\x01' - (bVar1 != false));
		}
		
	*/
	return false;
}

bool ShaderProgramL::IsE(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramL::IsE(ShaderProgramL *this,int param_1){
		bool bVar1;
		bVar1 = ShaderProgramAbstract::IsF(&this->parent,param_1);
		return bVar1 != false;
		}
		
	*/
	return false;
}

void ShaderProgramL::InitId(ShaderProgramL* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ShaderProgramL::InitId(ShaderProgramL *param_1){
		(param_1->parent).id = 0x12;
		return;
		}
		
	*/
	return;
}

uint ShaderProgramL::GetNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramL::GetNum(void){
		return DAT_0039f1d4;
		}
		
	*/
	return 0;
}

int ShaderProgramL::Method3(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall ShaderProgramL::Method3(ShaderProgramL *this,char param_1){
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

