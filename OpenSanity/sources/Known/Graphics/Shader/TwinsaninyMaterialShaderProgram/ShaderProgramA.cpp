#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramA.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void ShaderProgramA::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ShaderProgramA::Construct(ShaderProgramA *this){
		uint uVar1;
		float fVar2;
		(this->parent).flags = (this->parent).flags & 0x97d7ffde | 0x4400000;
		uVar1 = (this->parent).states;
		(this->parent).field55_0x60 = 0.0;
		(this->parent).field56_0x64 = 0.0;
		this->field518_0x288 = FLOAT_0038639c;
		fVar2 = FLOAT_00386608;
		(this->parent).field59_0x70 = 0;
		(this->parent).texture = (TwinsanityTexture *)0x0;
		(this->parent).states = uVar1 & 0xc0ffff80 | 0x800000;
		(this->parent).unkSubStruct = (ShaderProgramSub *)0x0;
		(this->parent).vtable = (ShaderProgramAbstract_VTable *)&ShaderProgram_VT_A;
		this->field517_0x284 = 0;
		this->field519_0x28c = fVar2;
		(this->parent).id = 0x17;
		return;
		}
		
	*/
	return;
}

void ShaderProgramA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramA * __thiscall ShaderProgramA::Dispose(ShaderProgramA *this,byte param_1){
		TwinsanityTexture *this_00;
		ShaderProgramSub *ptr;
		this_00 = (this->parent).texture;
		(this->parent).vtable = (ShaderProgramAbstract_VTable *)&ShaderProgram_VT_Abstract;
		if (this_00 != (TwinsanityTexture *)0x0) {
		TwinsanityTexture::FreeTexture(this_00);
		}
		ptr = (this->parent).unkSubStruct;
		if (ptr != (ShaderProgramSub *)0x0) {
		FUN_001fa6f0((int)ptr);
		VirtualPool::FreeMemory(ptr);
		}
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void ShaderProgramA::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void ShaderProgramA::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

bool ShaderProgramA::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool ShaderProgramA::IsD(void){
		return false;
		}
		
	*/
	return false;
}

bool ShaderProgramA::IsF(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramA::IsF(ShaderProgramA *this,undefined4 param_1){
		bool cVar1;
		cVar1 = (*((this->parent).vtable)->IsE)(param_1);
		return cVar1 != false;
		}
		
	*/
	return false;
}

bool ShaderProgramA::IsNotE(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramA::IsNotE(ShaderProgramA *this,undefined4 param_1){
		bool bVar1;
		bVar1 = (*((this->parent).vtable)->IsE)(param_1);
		return (bool)('\x01' - (bVar1 != false));
		}
		
	*/
	return false;
}

bool ShaderProgramA::IsE(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramA::IsE(ShaderProgramA *this,int param_1){
		bool bVar1;
		if ((((this->field517_0x284 == *(uint *)(param_1 + 0x284)) &&(this->field518_0x288 == *(float *)(param_1 + 0x288))) &&(this->field519_0x28c == *(float *)(param_1 + 0x28c))) &&(bVar1 = ShaderProgramAbstract::IsF(&this->parent,param_1), bVar1 != false)) {
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void ShaderProgramA::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ShaderProgramA::Read(ShaderProgramA *this,MemoryStream *stream){
		MemoryStream *_stream;
		_stream = stream;
		(*stream->vtable->ReadUInt)(stream,(uint *)&stream);
		(*_stream->vtable->ReadFloat)(_stream,&this->field518_0x288);
		(*_stream->vtable->ReadFloat)(_stream,&this->field519_0x28c);
		this->field517_0x284 = (uint)stream;
		ShaderProgramAbstract::Read(&this->parent,_stream);
		return;
		}
		
	*/
	return;
}

void ShaderProgramA::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ShaderProgramA::Write(ShaderProgramA *this,MemoryStream *stream){
		(*stream->vtable->WriteInt3)(stream,this->field517_0x284);
		(*stream->vtable->WriteFloat)(stream,this->field518_0x288);
		(*stream->vtable->WriteFloat)(stream,this->field519_0x28c);
		ShaderProgramAbstract::Write(&this->parent,stream);
		return;
		}
		
	*/
	return;
}

void ShaderProgramA::InitId() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ShaderProgramA::InitId(ShaderProgramA *this){
		(this->parent).id = 0x17;
		return;
		}
		
	*/
	return;
}

int ShaderProgramA::GetNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int ShaderProgramA::GetNum(void){
		return DAT_0039f1cc;
		}
		
	*/
	return 0;
}

int ShaderProgramA::Method3(bool param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall ShaderProgramA::Method3(ShaderProgramA *this,bool param_1){
		int iVar1;
		iVar1 = (this->parent).field58_0x6c;
		if (param_1 != false) {
		iVar1 = iVar1 + 2;
		}
		return iVar1;
		}
		
	*/
	return 0;
}

