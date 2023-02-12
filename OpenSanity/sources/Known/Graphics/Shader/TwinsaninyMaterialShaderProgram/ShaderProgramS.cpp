#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramS.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void ShaderProgramS::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ShaderProgramS * __fastcall ShaderProgramS::Construct(ShaderProgramS *this){
		uint uVar1;
		float fVar2;
		(this->parent).flags = (this->parent).flags & 0x97d7ffde | 0x4400000;
		uVar1 = (this->parent).states;
		(this->parent).field55_0x60 = 0.0;
		(this->parent).field56_0x64 = 0.0;
		(this->field518_0x288).x = FLOAT_0038639c;
		fVar2 = FLOAT_00386608;
		(this->parent).field59_0x70 = 0;
		(this->parent).texture = (TwinsanityTexture *)0x0;
		(this->parent).states = uVar1 & 0xc0ffff80 | 0x800000;
		(this->parent).unkSubStruct = (ShaderProgramSub *)0x0;
		(this->parent).vtable = (ShaderProgramAbstract_VTable *)&ShaderProgram_VT_S;
		this->field517_0x284 = 0;
		(this->field518_0x288).y = fVar2;
		(this->field518_0x288).z = fVar2;
		(this->field518_0x288).w = fVar2;
		(this->parent).id = 0x1a;
		return this;
		}
		
	*/
	return;
}

void ShaderProgramS::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall ShaderProgramS::Dispose(ShaderProgramS *this,byte param_1){
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
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void ShaderProgramS::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void ShaderProgramS::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint ShaderProgramS::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramS::IsD(void){
		return 0;
		}
		
	*/
	return 0;
}

bool ShaderProgramS::IsF(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramS::IsF(ShaderProgramS *this,undefined4 param_1){
		bool bVar1;
		bVar1 = (*((this->parent).vtable)->IsE)(param_1);
		return bVar1 != false;
		}
		
	*/
	return false;
}

bool ShaderProgramS::IsNotE(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramS::IsNotE(ShaderProgramS *this,undefined4 param_1){
		bool bVar1;
		bVar1 = (*((this->parent).vtable)->IsE)(param_1);
		return (bool)('\x01' - (bVar1 != false));
		}
		
	*/
	return false;
}

uint ShaderProgramS::IsE(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall ShaderProgramS::IsE(ShaderProgramS *this,int param_1){
		float fVar1;
		bool bVar2;
		undefined2 uVar4;
		undefined3 extraout_var;
		uint uVar3;
		uVar3 = this->field517_0x284;
		if (uVar3 == *(uint *)(param_1 + 0x284)) {
		fVar1 = (this->field518_0x288).x;
		bVar2 = fVar1 == *(float *)(param_1 + 0x288);
		uVar4 = (undefined2)(uVar3 >> 0x10);
		uVar3 = (uint)CONCAT21(uVar4,bVar2 << 6 | 2U | fVar1 < *(float *)(param_1 + 0x288)) << 8;
		if ((((bVar2) &&(fVar1 = (this->field518_0x288).y, bVar2 = fVar1 == *(float *)(param_1 + 0x28c),uVar3 = (uint)CONCAT21(uVar4,bVar2 << 6 | 2U | fVar1 < *(float *)(param_1 + 0x28c)) << 8,bVar2)) &&(fVar1 = (this->field518_0x288).z, bVar2 = fVar1 == *(float *)(param_1 + 0x290),uVar3 = (uint)CONCAT21(uVar4,bVar2 << 6 | 2U | fVar1 < *(float *)(param_1 + 0x290)) << 8,bVar2)) &&(fVar1 = (this->field518_0x288).w, bVar2 = fVar1 == *(float *)(param_1 + 0x294),uVar3 = (uint)CONCAT21(uVar4,bVar2 << 6 | 2U | fVar1 < *(float *)(param_1 + 0x294)) << 8,bVar2)) {
		bVar2 = ShaderProgramAbstract::IsF(&this->parent,param_1);
		uVar3 = CONCAT31(extraout_var,1);
		if (bVar2 != false) {
		return uVar3;
		}
		}
		}
		return uVar3 & 0xffffff00;
		}
		
	*/
	return 0;
}

void ShaderProgramS::Read(MemoryStream* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ShaderProgramS::Read(ShaderProgramS *this,MemoryStream *param_1){
		MemoryStream *this_00;
		this_00 = param_1;
		(*param_1->vtable->ReadUInt)(param_1,(uint *)&param_1);
		(*this_00->vtable->ReadFloat)(this_00,&(this->field518_0x288).x);
		(*this_00->vtable->ReadFloat)(this_00,&(this->field518_0x288).y);
		(*this_00->vtable->ReadFloat)(this_00,&(this->field518_0x288).z);
		(*this_00->vtable->ReadFloat)(this_00,&(this->field518_0x288).w);
		this->field517_0x284 = (uint)param_1;
		ShaderProgramAbstract::Read(&this->parent,this_00);
		return;
		}
		
	*/
	return;
}

void ShaderProgramS::Write(MemoryStream* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ShaderProgramS::Write(ShaderProgramS *this,MemoryStream *param_1){
		(*param_1->vtable->WriteInt3)(param_1,this->field517_0x284);
		(*param_1->vtable->WriteFloat)(param_1,(this->field518_0x288).x);
		(*param_1->vtable->WriteFloat)(param_1,(this->field518_0x288).y);
		(*param_1->vtable->WriteFloat)(param_1,(this->field518_0x288).z);
		(*param_1->vtable->WriteFloat)(param_1,(this->field518_0x288).w);
		ShaderProgramAbstract::Write(&this->parent,param_1);
		return;
		}
		
	*/
	return;
}

void ShaderProgramS::InitId() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ShaderProgramS::InitId(ShaderProgramS *this){
		(this->parent).id = 0x1a;
		return;
		}
		
	*/
	return;
}

uint ShaderProgramS::GetNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 ShaderProgramS::GetNum(void){
		return DAT_0039f1d0;
		}
		
	*/
	return 0;
}

int ShaderProgramS::Method3(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall ShaderProgramS::Method3(ShaderProgramS *this,char param_1){
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

