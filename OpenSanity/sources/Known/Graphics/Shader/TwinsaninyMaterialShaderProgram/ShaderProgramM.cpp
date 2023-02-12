#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramM.h"

void ShaderProgramM::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramM * __fastcall ShaderProgramM::Construct(ShaderProgramM *this){
		(this->parent).flags = (this->parent).flags & 0x97d7ffde | 0x4400000;
		(this->parent).field59_0x70 = 0;
		(this->parent).texture = (TwinsanityTexture *)0x0;
		(this->parent).states = (this->parent).states & 0xc0ffff80 | 0x800000;
		(this->parent).field55_0x60 = 0.0;
		(this->parent).field56_0x64 = 0.0;
		(this->parent).unkSubStruct = (ShaderProgramSub *)0x0;
		(this->parent).vtable = (ShaderProgramAbstract_VTable *)&ShaderProgram_VT_M;
		(this->parent).id = 0x13;
		return this;
		}
		
	*/
	return;
}

void ShaderProgramM::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramAbstract * __thiscall ShaderProgramM::Dispose(ShaderProgramM *this,byte param_1){
		ShaderProgramAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ShaderProgramM::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void ShaderProgramM::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint ShaderProgramM::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramM::IsD(void){
		return 0;
		}
		
	*/
	return 0;
}

bool ShaderProgramM::IsNotE(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramM::IsNotE(ShaderProgramM *this,undefined4 param_1){
		bool bVar1;
		bVar1 = (*((this->parent).vtable)->IsE)(param_1);
		return (bool)('\x01' - (bVar1 != false));
		}
		
	*/
	return false;
}

bool ShaderProgramM::IsE(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramM::IsE(ShaderProgramM *this,int param_1){
		bool bVar1;
		bVar1 = ShaderProgramAbstract::IsF(&this->parent,param_1);
		return bVar1 != false;
		}
		
	*/
	return false;
}

void ShaderProgramM::InitId() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ShaderProgramM::InitId(ShaderProgramM *this){
		(this->parent).id = 0x13;
		return;
		}
		
	*/
	return;
}

uint ShaderProgramM::GetNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramM::GetNum(void){
		return DAT_0039f1f4;
		}
		
	*/
	return 0;
}

int ShaderProgramM::Method3(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall ShaderProgramM::Method3(ShaderProgramM *this,char param_1){
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

