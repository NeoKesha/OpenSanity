#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramB.h"

void ShaderProgramB::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramB * __fastcall ShaderProgramB::Construct(ShaderProgramB *this){
		ShaderProgramAbstract::Construct(&this->parent);
		(this->parent).vtable = (ShaderProgramAbstract_VTable *)&ShaderProgram_VT_B;
		(this->parent).id = 1;
		return this;
		}
		
	*/
	return;
}

void ShaderProgramB::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramAbstract * __thiscall ShaderProgramB::Dispose(ShaderProgramB *this,byte param_1){
		ShaderProgramAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ShaderProgramB::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void ShaderProgramB::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void ShaderProgramB::InitId() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ShaderProgramB::InitId(ShaderProgramB *this){
		(this->parent).id = 1;
		return;
		}
		
	*/
	return;
}

int ShaderProgramB::GetNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int ShaderProgramB::GetNum(void){
		return INT_0039f1b4;
		}
		
	*/
	return 0;
}

int ShaderProgramB::Method3(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall ShaderProgramB::Method3(ShaderProgramB *this,char param_1){
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

uint ShaderProgramB::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramB::IsD(void){
		return 0;
		}
		
	*/
	return 0;
}

bool ShaderProgramB::IsNotE(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramB::IsNotE(ShaderProgramB *this,undefined4 param_1){
		bool bVar1;
		bVar1 = (*((this->parent).vtable)->IsE)(param_1);
		return (bool)('\x01' - (bVar1 != false));
		}
		
	*/
	return false;
}

bool ShaderProgramB::IsE(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramB::IsE(ShaderProgramB *this,int param_1){
		bool bVar1;
		bVar1 = ShaderProgramAbstract::IsF(&this->parent,param_1);
		return bVar1 != false;
		}
		
	*/
	return false;
}

