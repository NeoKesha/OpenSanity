#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramK.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void ShaderProgramK::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramK * __fastcall ShaderProgramK::Construct(ShaderProgramK *this){
		(this->parent).flags = (this->parent).flags & 0x97d7ffde | 0x4400000;
		(this->parent).field59_0x70 = 0;
		(this->parent).texture = (TwinsanityTexture *)0x0;
		(this->parent).states = (this->parent).states & 0xc0ffff80 | 0x800000;
		(this->parent).field55_0x60 = 0.0;
		(this->parent).field56_0x64 = 0.0;
		(this->parent).unkSubStruct = (ShaderProgramSub *)0x0;
		(this->parent).vtable = (ShaderProgramAbstract_VTable *)&ShaderProgram_VT_K;
		(this->parent).id = 0x11;
		return this;
		}
		
	*/
	return;
}

void ShaderProgramK::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ShaderProgramK::Read(ShaderProgramK *this,MemoryStream *stream){
		(*stream->vtable->ReadFloat)(stream,&this->field1_0x80);
		ShaderProgramAbstract::Read(&this->parent,stream);
		return;
		}
		
	*/
	return;
}

void ShaderProgramK::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ShaderProgramK::Write(ShaderProgramK *this,MemoryStream *stream){
		(*stream->vtable->WriteFloat)(stream,this->field1_0x80);
		ShaderProgramAbstract::Write(&this->parent,stream);
		return;
		}
		
	*/
	return;
}

void ShaderProgramK::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramAbstract * __thiscall ShaderProgramK::Dispose(ShaderProgramK *this,byte param_1){
		ShaderProgramAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ShaderProgramK::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void ShaderProgramK::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint ShaderProgramK::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramK::IsD(void){
		return 0;
		}
		
	*/
	return 0;
}

bool ShaderProgramK::IsF(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramK::IsF(ShaderProgramK *this,int param_1){
		bool bVar1;
		bVar1 = (*((this->parent).vtable)->IsF)(&this->parent,param_1);
		return bVar1 != false;
		}
		
	*/
	return false;
}

bool ShaderProgramK::IsNotE(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramK::IsNotE(ShaderProgramK *this,undefined4 param_1){
		bool bVar1;
		bVar1 = (*((this->parent).vtable)->IsE)(param_1);
		return (bool)('\x01' - (bVar1 != false));
		}
		
	*/
	return false;
}

uint ShaderProgramK::IsE(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall ShaderProgramK::IsE(ShaderProgramK *this,int param_1){
		float fVar1;
		bool bVar2;
		undefined4 in_EAX;
		undefined3 extraout_var;
		uint uVar3;
		fVar1 = this->field1_0x80;
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

void ShaderProgramK::InitId() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ShaderProgramK::InitId(ShaderProgramK *this){
		(this->parent).id = 0x11;
		return;
		}
		
	*/
	return;
}

uint ShaderProgramK::GetNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramK::GetNum(void){
		return DAT_0039f184;
		}
		
	*/
	return 0;
}

bool ShaderProgramK::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool ShaderProgramK::IsA(void){
		return true;
		}
		
	*/
	return false;
}

bool ShaderProgramK::IsC() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool ShaderProgramK::IsC(void){
		return true;
		}
		
	*/
	return false;
}

uint ShaderProgramK::Method3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall ShaderProgramK::Method3(ShaderProgramK *this){
		return (this->parent).field58_0x6c;
		}
		
	*/
	return 0;
}

