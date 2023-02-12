#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramW.h"

void ShaderProgramW::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramW * __fastcall ShaderProgramW::Construct(ShaderProgramW *this){
		(this->parent).flags = (this->parent).flags & 0x97d7ffde | 0x4400000;
		(this->parent).field59_0x70 = 0;
		(this->parent).texture = (TwinsanityTexture *)0x0;
		(this->parent).states = (this->parent).states & 0xc0ffff80 | 0x800000;
		(this->parent).field55_0x60 = 0.0;
		(this->parent).field56_0x64 = 0.0;
		(this->parent).unkSubStruct = (ShaderProgramSub *)0x0;
		(this->parent).vtable = (ShaderProgramAbstract_VTable *)&ShaderProgram_VT_W;
		(this->parent).id = 0x20;
		return this;
		}
		
	*/
	return;
}

void ShaderProgramW::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramAbstract * __thiscall ShaderProgramW::Dispose(ShaderProgramW *this,byte param_1){
		ShaderProgramAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ShaderProgramW::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void ShaderProgramW::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint ShaderProgramW::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramW::IsD(void){
		return 0;
		}
		
	*/
	return 0;
}

bool ShaderProgramW::IsNotE(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramW::IsNotE(ShaderProgramW *this,undefined4 param_1){
		bool bVar1;
		bVar1 = (*((this->parent).vtable)->IsE)(param_1);
		return (bool)('\x01' - (bVar1 != false));
		}
		
	*/
	return false;
}

bool ShaderProgramW::IsE(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramW::IsE(ShaderProgramW *this,int param_1){
		bool bVar1;
		bVar1 = ShaderProgramAbstract::IsF(&this->parent,param_1);
		return bVar1 != false;
		}
		
	*/
	return false;
}

void ShaderProgramW::InitId() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ShaderProgramW::InitId(ShaderProgramW *this){
		(this->parent).id = 0x20;
		return;
		}
		
	*/
	return;
}

uint ShaderProgramW::GetNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramW::GetNum(void){
		return DAT_0039f188;
		}
		
	*/
	return 0;
}

int ShaderProgramW::Method3(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall ShaderProgramW::Method3(ShaderProgramW *this,char param_1){
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

