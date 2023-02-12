#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramX.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void ShaderProgramX::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramX * __fastcall ShaderProgramX::Construct(ShaderProgramX *this){
		(this->parent).flags = (this->parent).flags & 0x97d7ffde | 0x4400000;
		(this->parent).field59_0x70 = 0;
		(this->parent).texture = (TwinsanityTexture *)0x0;
		(this->parent).states = (this->parent).states & 0xc0ffff80 | 0x800000;
		(this->parent).field55_0x60 = 0.0;
		(this->parent).field56_0x64 = 0.0;
		(this->parent).unkSubStruct = (ShaderProgramSub *)0x0;
		(this->parent).vtable = (ShaderProgramAbstract_VTable *)&ShaderProgram_VT_X;
		(this->parent).id = 0x10;
		return this;
		}
		
	*/
	return;
}

void ShaderProgramX::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ShaderProgramX::Write(ShaderProgramX *this,MemoryStream *stream){
		(*stream->vtable->WriteFloat)(stream,this->field1_0x80);
		ShaderProgramAbstract::Write(&this->parent,stream);
		return;
		}
		
	*/
	return;
}

void ShaderProgramX::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ShaderProgramX::Read(ShaderProgramX *this,MemoryStream *stream){
		(*stream->vtable->ReadFloat)(stream,&this->field1_0x80);
		ShaderProgramAbstract::Read(&this->parent,stream);
		return;
		}
		
	*/
	return;
}

void ShaderProgramX::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramAbstract * __thiscall ShaderProgramX::Dispose(ShaderProgramX *this,byte param_1){
		ShaderProgramAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ShaderProgramX::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void ShaderProgramX::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint ShaderProgramX::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramX::IsD(void){
		return 0;
		}
		
	*/
	return 0;
}

bool ShaderProgramX::IsF(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramX::IsF(ShaderProgramX *this,undefined4 param_1){
		bool bVar1;
		bVar1 = (*((this->parent).vtable)->IsE)(param_1);
		return bVar1 != false;
		}
		
	*/
	return false;
}

bool ShaderProgramX::IsNotE(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramX::IsNotE(ShaderProgramX *this,undefined4 param_1){
		bool result;
		result = (*((this->parent).vtable)->IsE)(param_1);
		return (bool)('\x01' - (result != false));
		}
		
	*/
	return false;
}

bool ShaderProgramX::IsE(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramX::IsE(ShaderProgramX *this,int param_1){
		bool bVar1;
		if ((this->field1_0x80 == *(float *)(param_1 + 0x80)) &&(bVar1 = ShaderProgramAbstract::IsF(&this->parent,param_1), bVar1 != false)) {
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void ShaderProgramX::InitId() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ShaderProgramX::InitId(ShaderProgramX *this){
		(this->parent).id = 0x10;
		return;
		}
		
	*/
	return;
}

uint ShaderProgramX::GetNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramX::GetNum(void){
		return DAT_0039f1a8;
		}
		
	*/
	return 0;
}

bool ShaderProgramX::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool ShaderProgramX::IsA(void){
		return true;
		}
		
	*/
	return false;
}

bool ShaderProgramX::IsC() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool ShaderProgramX::IsC(void){
		return true;
		}
		
	*/
	return false;
}

int ShaderProgramX::Method3(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall ShaderProgramX::Method3(ShaderProgramX *this,char param_1){
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

