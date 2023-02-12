#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramY.h"

void ShaderProgramY::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramAbstract * __thiscall ShaderProgramY::Dispose(ShaderProgramY *this,byte param_1){
		ShaderProgramAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

uint ShaderProgramY::GetNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramY::GetNum(void){
		return DAT_003ec4fc;
		}
		
	*/
	return 0;
}

uint ShaderProgramY::UpdateClock() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramY::UpdateClock(void){
		return 0;
		}
		
	*/
	return 0;
}

int ShaderProgramY::Method3(char param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall ShaderProgramY::Method3(int this,char param_2){
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

void ShaderProgramY::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void ShaderProgramY::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint ShaderProgramY::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramY::IsD(void){
		return 0;
		}
		
	*/
	return 0;
}

void ShaderProgramY::InitId() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ShaderProgramY::InitId(ShaderProgramY *this){
		(this->parent).id = 0;
		return;
		}
		
	*/
	return;
}

bool ShaderProgramY::IsE(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramY::IsE(ShaderProgramY *this,int param_1){
		bool bVar1;
		bVar1 = ShaderProgramAbstract::IsF(&this->parent,param_1);
		return bVar1 != false;
		}
		
	*/
	return false;
}

bool ShaderProgramY::IsNotE(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramY::IsNotE(ShaderProgramY *this,undefined4 param_1){
		bool bVar1;
		bVar1 = (*((this->parent).vtable)->IsE)(param_1);
		return (bool)('\x01' - (bVar1 != false));
		}
		
	*/
	return false;
}

void ShaderProgramY::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramY * __fastcall ShaderProgramY::Construct(ShaderProgramY *this){
		(this->parent).flags = (this->parent).flags & 0x97d7ffde | 0x4400000;
		(this->parent).field59_0x70 = 0;
		(this->parent).texture = (TwinsanityTexture *)0x0;
		(this->parent).states = (this->parent).states & 0xc0ffff80 | 0x800000;
		(this->parent).field55_0x60 = 0.0;
		(this->parent).field56_0x64 = 0.0;
		(this->parent).unkSubStruct = (ShaderProgramSub *)0x0;
		(this->parent).vtable = (ShaderProgramAbstract_VTable *)&ShaderProgram_VT_Y;
		(this->parent).id = 0;
		return this;
		}
		
	*/
	return;
}

