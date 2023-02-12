#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramO.h"

void ShaderProgramO::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramO * __fastcall ShaderProgramO::Construct(ShaderProgramO *this){
		(this->parent).flags = (this->parent).flags & 0x97d7ffde | 0x4400000;
		(this->parent).field59_0x70 = 0;
		(this->parent).texture = (TwinsanityTexture *)0x0;
		(this->parent).states = (this->parent).states & 0xc0ffff80 | 0x800000;
		(this->parent).field55_0x60 = 0.0;
		(this->parent).field56_0x64 = 0.0;
		(this->parent).unkSubStruct = (ShaderProgramSub *)0x0;
		(this->parent).vtable = (ShaderProgramAbstract_VTable *)&ShaderProgram_VT_O;
		(this->parent).id = 0x14;
		return this;
		}
		
	*/
	return;
}

void ShaderProgramO::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramAbstract * __thiscall ShaderProgramO::Dispose(ShaderProgramO *this,byte param_1){
		ShaderProgramAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ShaderProgramO::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void ShaderProgramO::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint ShaderProgramO::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramO::IsD(void){
		return 0;
		}
		
	*/
	return 0;
}

bool ShaderProgramO::IsNotE(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramO::IsNotE(ShaderProgramO *this,undefined4 param_1){
		bool bVar1;
		bVar1 = (*((this->parent).vtable)->IsE)(param_1);
		return (bool)('\x01' - (bVar1 != false));
		}
		
	*/
	return false;
}

bool ShaderProgramO::IsE(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramO::IsE(ShaderProgramO *this,int param_1){
		bool bVar1;
		bVar1 = ShaderProgramAbstract::IsF(&this->parent,param_1);
		return bVar1 != false;
		}
		
	*/
	return false;
}

void ShaderProgramO::InitId() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ShaderProgramO::InitId(ShaderProgramO *this){
		(this->parent).id = 0x14;
		return;
		}
		
	*/
	return;
}

uint ShaderProgramO::GetNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramO::GetNum(void){
		return DAT_003ec510;
		}
		
	*/
	return 0;
}

int ShaderProgramO::Method3(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall ShaderProgramO::Method3(ShaderProgramO *this,char param_1){
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

