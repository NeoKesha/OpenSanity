#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramT.h"

void ShaderProgramT::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramT * __fastcall ShaderProgramT::Construct(ShaderProgramT *this){
		(this->parent).flags = (this->parent).flags & 0x97d7ffde | 0x4400000;
		(this->parent).field59_0x70 = 0;
		(this->parent).texture = (TwinsanityTexture *)0x0;
		(this->parent).states = (this->parent).states & 0xc0ffff80 | 0x800000;
		(this->parent).field55_0x60 = 0.0;
		(this->parent).field56_0x64 = 0.0;
		(this->parent).unkSubStruct = (ShaderProgramSub *)0x0;
		(this->parent).vtable = (ShaderProgramAbstract_VTable *)&ShaderProgram_VT_T;
		(this->parent).id = 0x1b;
		return this;
		}
		
	*/
	return;
}

void ShaderProgramT::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramAbstract * __thiscall ShaderProgramT::Dispose(ShaderProgramT *this,byte param_1){
		ShaderProgramAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ShaderProgramT::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void ShaderProgramT::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint ShaderProgramT::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramT::IsD(void){
		return 0;
		}
		
	*/
	return 0;
}

bool ShaderProgramT::IsNotE(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramT::IsNotE(ShaderProgramT *this,undefined4 param_1){
		bool bVar1;
		bVar1 = (*((this->parent).vtable)->IsE)(param_1);
		return (bool)('\x01' - (bVar1 != false));
		}
		
	*/
	return false;
}

bool ShaderProgramT::IsE(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramT::IsE(ShaderProgramT *this,int param_1){
		bool bVar1;
		bVar1 = ShaderProgramAbstract::IsF(&this->parent,param_1);
		return bVar1 != false;
		}
		
	*/
	return false;
}

void ShaderProgramT::InitId() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ShaderProgramT::InitId(ShaderProgramT *this){
		(this->parent).id = 0x1b;
		return;
		}
		
	*/
	return;
}

uint ShaderProgramT::GetNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramT::GetNum(void){
		return DAT_0039f1bc;
		}
		
	*/
	return 0;
}

bool ShaderProgramT::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool ShaderProgramT::IsA(void){
		return true;
		}
		
	*/
	return false;
}

bool ShaderProgramT::IsB() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool ShaderProgramT::IsB(void){
		return true;
		}
		
	*/
	return false;
}

int ShaderProgramT::Method3(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall ShaderProgramT::Method3(ShaderProgramT *this,char param_1){
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

