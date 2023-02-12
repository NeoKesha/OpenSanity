#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramQ.h"

void ShaderProgramQ::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramQ * __fastcall ShaderProgramQ::Construct(ShaderProgramQ *this){
		(this->parent).flags = (this->parent).flags & 0x97d7ffde | 0x4400000;
		(this->parent).field59_0x70 = 0;
		(this->parent).texture = (TwinsanityTexture *)0x0;
		(this->parent).states = (this->parent).states & 0xc0ffff80 | 0x800000;
		(this->parent).field55_0x60 = 0.0;
		(this->parent).field56_0x64 = 0.0;
		(this->parent).unkSubStruct = (ShaderProgramSub *)0x0;
		(this->parent).vtable = (ShaderProgramAbstract_VTable *)&ShaderProgram_VT_Q;
		(this->parent).id = 0x16;
		return this;
		}
		
	*/
	return;
}

void ShaderProgramQ::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramAbstract * __thiscall ShaderProgramQ::Dispose(ShaderProgramQ *this,byte param_1){
		ShaderProgramAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ShaderProgramQ::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void ShaderProgramQ::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint ShaderProgramQ::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramQ::IsD(void){
		return 0;
		}
		
	*/
	return 0;
}

bool ShaderProgramQ::IsNotE(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramQ::IsNotE(ShaderProgramQ *this,undefined4 param_1){
		bool bVar1;
		bVar1 = (*((this->parent).vtable)->IsE)(param_1);
		return (bool)('\x01' - (bVar1 != false));
		}
		
	*/
	return false;
}

bool ShaderProgramQ::IsE(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramQ::IsE(ShaderProgramQ *this,int param_1){
		bool bVar1;
		bVar1 = ShaderProgramAbstract::IsF(&this->parent,param_1);
		return bVar1 != false;
		}
		
	*/
	return false;
}

void ShaderProgramQ::InitId() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ShaderProgramQ::InitId(ShaderProgramQ *this){
		(this->parent).id = 0x16;
		return;
		}
		
	*/
	return;
}

uint ShaderProgramQ::GetNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramQ::GetNum(void){
		return DAT_0039f1c4;
		}
		
	*/
	return 0;
}

bool ShaderProgramQ::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool ShaderProgramQ::IsA(void){
		return true;
		}
		
	*/
	return false;
}

bool ShaderProgramQ::IsC() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool ShaderProgramQ::IsC(void){
		return true;
		}
		
	*/
	return false;
}

int ShaderProgramQ::Method3(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall ShaderProgramQ::Method3(ShaderProgramQ *this,char param_1){
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

