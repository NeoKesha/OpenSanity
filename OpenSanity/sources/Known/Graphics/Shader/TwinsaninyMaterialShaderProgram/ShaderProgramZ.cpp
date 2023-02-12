#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramZ.h"

void ShaderProgramZ::Write(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ShaderProgramZ::Write(ShaderProgramZ *this,int *param_1){
		(**(code **)(*param_1 + 100))(*(undefined4 *)&this->field_0x80);
		ShaderProgramAbstract::Write(&this->parent,(MemoryStream *)param_1);
		return;
		}
		
	*/
	return;
}

void ShaderProgramZ::Read(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ShaderProgramZ::Read(ShaderProgramZ *this,int *param_1){
		(**(code **)(*param_1 + 0x38))(&this->field_0x80);
		ShaderProgramAbstract::Read(&this->parent,(MemoryStream *)param_1);
		return;
		}
		
	*/
	return;
}

void ShaderProgramZ::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramZ * __fastcall ShaderProgramZ::Construct(ShaderProgramZ *this){
		ShaderProgramAbstract::Construct(&this->parent);
		(this->parent).vtable = (ShaderProgramAbstract_VTable *)&ShaderProgram_VT_Z;
		(this->parent).id = 0x18;
		return this;
		}
		
	*/
	return;
}

void ShaderProgramZ::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramZ * __thiscall ShaderProgramZ::Dispose(ShaderProgramZ *this,byte param_1){
		ShaderProgramAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void ShaderProgramZ::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void ShaderProgramZ::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint ShaderProgramZ::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramZ::IsD(void){
		return 0;
		}
		
	*/
	return 0;
}

bool ShaderProgramZ::IsNotE(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramZ::IsNotE(ShaderProgramZ *this,undefined4 param_1){
		bool bVar1;
		bVar1 = (*((this->parent).vtable)->IsE)(param_1);
		return (bool)('\x01' - (bVar1 != false));
		}
		
	*/
	return false;
}

uint ShaderProgramZ::IsE(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall ShaderProgramZ::IsE(ShaderProgramZ *this,int param_1){
		float fVar1;
		bool bVar2;
		undefined4 in_EAX;
		undefined3 extraout_var;
		uint uVar3;
		fVar1 = *(float *)&this->field_0x80;
		bVar2 = fVar1 == *(float *)(param_1 + 0x80);
		uVar3 = (uint)CONCAT21((short)((uint)in_EAX >> 0x10),bVar2 << 6 | 2U | fVar1 < *(float *)(param_1 + 0x80)) << 8;
		if (bVar2) {
		bVar2 = ShaderProgramAbstract::IsF(&this->parent,param_1);
		uVar3 = CONCAT31(extraout_var,1);
		if (bVar2 != false) {
		return uVar3;
		}
		}
		return uVar3 & 0xffffff00;
		}
		
	*/
	return 0;
}

void ShaderProgramZ::InitId() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ShaderProgramZ::InitId(ShaderProgramZ *this){
		(this->parent).id = 0x18;
		return;
		}
		
	*/
	return;
}

uint ShaderProgramZ::GetNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramZ::GetNum(void){
		return DAT_0039f1ac;
		}
		
	*/
	return 0;
}

void ShaderProgramZ::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined ShaderProgramZ::IsA(void){
		return 1;
		}
		
	*/
	return;
}

int ShaderProgramZ::Method3(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall ShaderProgramZ::Method3(ShaderProgramZ *this,char param_1){
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

