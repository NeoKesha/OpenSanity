#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/ShaderProgramAbstract.h"

#include "headers/Known/Graphics/Shader/TwinsaninyMaterialShaderProgram/Subs/ShaderProgramSub.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Texture/TwinsanityTexture.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"

ShaderProgramAbstract::ShaderProgramAbstract()
{
	this->flags = this->flags & 0x97d7ffde | 0x4400000;
	this->field59_0x70 = 0;
	this->texture = null;
	this->states = this->states & 0xc0ffff80 | 0x800000;
	this->field55_0x60 = 0.0;
	this->field56_0x64 = 0.0;
	this->unkSubStruct = null;
}

ShaderProgramAbstract::~ShaderProgramAbstract()
{
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ShaderProgramAbstract::CleanUp(ShaderProgramAbstract *this){
		ShaderProgramSub *ptr;
		this->vtable = (ShaderProgramAbstract_VTable *)&ShaderProgram_VT_Abstract;
		if (this->texture != (TwinsanityTexture *)0x0) {
		TwinsanityTexture::FreeTexture(this->texture);
		}
		ptr = this->unkSubStruct;
		if (ptr != (ShaderProgramSub *)0x0) {
		FUN_001fa6f0((int)ptr);
		VirtualPool::FreeMemory(ptr);
		}
		return;
		}

	*/
	return;
}

void ShaderProgramAbstract::FUN_000ff9d0(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ShaderProgramAbstract::FUN_000ff9d0(ShaderProgramAbstract *this,uint *param_1){
		TwinsanityTexture *pTVar1;
		this->field59_0x70 = param_1;
		if (param_1 != (uint *)0x0) {
		pTVar1 = (TwinsanityTexture *)(*(ENV_CLASS_183_SECTION_TEXTURES.parent)->Create)(&ENV_CLASS_183_SECTION_TEXTURES.parent,(undefined *)&param_1,0);
		this->texture = pTVar1;
		}
		return;
		}
		
	*/
	return;
}

void ShaderProgramAbstract::FUN_00104d60() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __cdecl ShaderProgramAbstract::FUN_00104d60(ShaderProgramAbstract *this){
		int iVar1;
		iVar1 = (*this->vtable->GetNum)();
		switch(iVar1) {
		case 0x14:case 0x17:case 0x1d:_D3DDevice_SetTexture@8(2,(D3DTexture *)0x0);
		DAT_002a9908 = DAT_002a9908 | 0x800;
		break;
		case 0x18:case 0x19:_D3DDevice_SetTexture@8(2,(D3DTexture *)0x0);
		_D3DDevice_SetTexture@8(3,(D3DTexture *)0x0);
		DAT_002a9908 = DAT_002a9908 | 0x800;
		DAT_002a9a40 = 1;
		case 0x10:DAT_002a9908 = DAT_002a9908 | 0x800;
		DAT_002a9940 = 4;
		INT_002a9950 = 4;
		_D3DDevice_SetTexture@8(2,(D3DTexture *)0x0);
		DAT_002a9908 = DAT_002a9908 | 0x800;
		DAT_002a9a40 = 1;
		@D3DDevice_SetRenderState_Simple@8(&RENDER_STATE_12,0);
		DAT_002a9bfc = 0;
		}
		DAT_002a9908 = DAT_002a9908 | 0x800;
		INT_002a99e0 = 1;
		DAT_002a9a40 = 1;
		DAT_002a9ac0 = 1;
		return;
		}
		
	*/
	return;
}

void ShaderProgramAbstract::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ShaderProgramAbstract::Write(ShaderProgramAbstract *this,MemoryStream *stream){
		uint value;
		value = this->id;
		 Ghidra is fried, it supposed to be this->flag write (*stream->vtable->WriteByte3)(stream,*(byte *)&this->flags & 1);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->flags >> 1) & 0xf);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->flags >> 5) & 1);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->flags >> 6) & 7);
		(*stream->vtable->WriteByte3)(stream,(char)(this->flags >> 9));
		(*stream->vtable->WriteByte3)(stream,(byte)(this->flags >> 0x11) & 3);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->flags >> 0x13) & 1);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->flags >> 0x14) & 1);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->flags >> 0x15) & 3);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->flags >> 0x17) & 7);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->flags >> 0x1a) & 1);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->flags >> 0x1b) & 1);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->flags >> 0x1c) & 1);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->flags >> 0x1d) & 1);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->flags >> 0x1e) & 1);
		(*stream->vtable->WriteByte3)(stream,*(byte *)&this->states & 7);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->states >> 3) & 7);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->states >> 6) & 1);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->states >> 7) & 3);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->states >> 9) & 3);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->states >> 0xb) & 3);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->states >> 0xd) & 3);
		(*stream->vtable->WriteByte3)(stream,(char)(this->states >> 0xf));
		(*stream->vtable->WriteByte3)(stream,(byte)(this->states >> 0x17) & 1);
		(*stream->vtable->WriteByte3)(stream,*(byte *)((int)&this->states + 3) & 1);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->states >> 0x19) & 1);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->states >> 0x1a) & 1);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->states >> 0x1b) & 1);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->states >> 0x1c) & 1);
		(*stream->vtable->WriteByte3)(stream,(byte)(this->states >> 0x1d) & 1);
		(*stream->vtable->WriteShort1)(stream,this->field28_0x28);
		(*stream->vtable->WriteShort1)(stream,this->field29_0x2a);
		(*stream->vtable->Write)(stream,&this->field_0x30,0x10);
		(*stream->vtable->Write)(stream,(byte *)&this->vec0,0x10);
		(*stream->vtable->WriteFloat)(stream,this->field51_0x50);
		(*stream->vtable->WriteFloat)(stream,this->field52_0x54);
		(*stream->vtable->WriteFloat)(stream,this->field53_0x58);
		(*stream->vtable->WriteFloat)(stream,this->field54_0x5c);
		(*stream->vtable->WriteInt3)(stream,this->field59_0x70);
		(*stream->vtable->WriteInt3)(stream,value);
		if (this->unkSubStruct != (ShaderProgramSub *)0x0) {
		ShaderProgramSub::Write(this->unkSubStruct,stream);
		}
		return;
		}
		
	*/
	return;
}

void ShaderProgramAbstract::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ShaderProgramAbstract::Read(ShaderProgramAbstract *this,MemoryStream *stream){
		ShaderProgramSub *unkStruct;
		TwinsanityTexture *pTVar1;
		long lVar2;
		uint uStack8;
		uint uStack4;
		MemoryStream *_stream;
		_stream = stream;
		(*stream->vtable->ReadByte3)(stream,(byte *)&stream);
		this->flags = this->flags ^ ((uint)stream & 0xff ^ this->flags) & 1;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->flags = this->flags ^ (((uint)stream & 0xff) << 1 ^ this->flags) & 0x1e;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->flags = this->flags ^ (((uint)stream & 0xff) << 5 ^ this->flags) & 0x20;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->flags = this->flags ^ (((uint)stream & 0xff) << 6 ^ this->flags) & 0x1c0;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->flags = ((uint)stream & 0xff) << 9 | this->flags & 0xfffe01ff;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->flags = this->flags ^ (((uint)stream & 0xff) << 0x11 ^ this->flags) & 0x60000;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->flags = this->flags ^ (((uint)stream & 0xff) << 0x13 ^ this->flags) & 0x80000;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->flags = this->flags ^ (((uint)stream & 0xff) << 0x14 ^ this->flags) & 0x100000;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->flags = this->flags ^ (((uint)stream & 0xff) << 0x15 ^ this->flags) & 0x600000;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->flags = this->flags ^ (((uint)stream & 0xff) << 0x17 ^ this->flags) & 0x3800000;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->flags = this->flags ^ ((int)stream << 0x1a ^ this->flags) & 0x4000000;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->flags = this->flags ^ ((int)stream << 0x1b ^ this->flags) & 0x8000000;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->flags = this->flags ^ ((int)stream << 0x1c ^ this->flags) & 0x10000000;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->flags = this->flags ^ ((int)stream << 0x1d ^ this->flags) & 0x20000000;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->flags = this->flags ^ ((int)stream << 0x1e ^ this->flags) & 0x40000000;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->states = this->states ^ ((uint)stream & 0xff ^ this->states) & 7;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->states = this->states ^ (((uint)stream & 0xff) << 3 ^ this->states) & 0x38;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->states = this->states ^ (((uint)stream & 0xff) << 6 ^ this->states) & 0x40;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->states = this->states ^ (((uint)stream & 0xff) << 7 ^ this->states) & 0x180;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->states = this->states ^ (((uint)stream & 0xff) << 9 ^ this->states) & 0x600;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->states = this->states ^ (((uint)stream & 0xff) << 0xb ^ this->states) & 0x1800;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->states = this->states ^ (((uint)stream & 0xff) << 0xd ^ this->states) & 0x6000;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->states = ((uint)stream & 0xff) << 0xf | this->states & 0xff807fff;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->states = this->states ^ (((uint)stream & 0xff) << 0x17 ^ this->states) & 0x800000;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->states = this->states ^ ((int)stream << 0x18 ^ this->states) & 0x1000000;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->states = this->states ^ ((int)stream << 0x19 ^ this->states) & 0x2000000;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->states = this->states ^ ((int)stream << 0x1a ^ this->states) & 0x4000000;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->states = this->states ^ ((int)stream << 0x1b ^ this->states) & 0x8000000;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->states = this->states ^ ((int)stream << 0x1c ^ this->states) & 0x10000000;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)&stream);
		this->states = this->states ^ ((int)stream << 0x1d ^ this->states) & 0x20000000;
		(*_stream->vtable->ReadShort)(_stream,&this->field28_0x28);
		(*_stream->vtable->ReadShort)(_stream,&this->field29_0x2a);
		(*_stream->vtable->Read)(_stream,(int *)&this->field_0x30,0x10,1);
		(*_stream->vtable->Read)(_stream,(int *)&this->vec0,0x10,1);
		(*_stream->vtable->ReadFloat)(_stream,&this->field51_0x50);
		(*_stream->vtable->ReadFloat)(_stream,&this->field52_0x54);
		(*_stream->vtable->ReadFloat)(_stream,&this->field53_0x58);
		(*_stream->vtable->ReadFloat)(_stream,&this->field54_0x5c);
		(*_stream->vtable->ReadUInt)(_stream,&this->field59_0x70);
		(*_stream->vtable->ReadUInt)(_stream,&uStack8);
		this->id = uStack8;
		if ((this->states & 0x20000000) != 0) {
		unkStruct = (ShaderProgramSub *)VirtualPool::AllocateMemory(0x40);
		if (unkStruct == (ShaderProgramSub *)0x0) {
		unkStruct = (ShaderProgramSub *)0x0;
		}
		else {
		unkStruct = ShaderProgramSub::Construct(unkStruct);
		}
		this->unkSubStruct = unkStruct;
		ShaderProgramSub::Read(unkStruct,_stream);
		}
		uStack4 = this->field59_0x70;
		if (uStack4 != 0) {
		pTVar1 = (TwinsanityTexture *)(*(ENV_CLASS_183_SECTION_TEXTURES.parent)->Create)(&ENV_CLASS_183_SECTION_TEXTURES.parent,(undefined *)&uStack4,0);
		this->texture = pTVar1;
		}
		lVar2 = __ftol2((this->vec0).x);
		this->field20_0x1d = (char)lVar2;
		this->field_0x1e = 0;
		this->field_0x1f = 0;
		this->field_0x20 = 0;
		return;
		}
		
	*/
	return;
}

void ShaderProgramAbstract::FUN_0010cd30() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __cdecl ShaderProgramAbstract::FUN_0010cd30(ShaderProgramAbstract *this){
		int iVar1;
		Vector4 VStack32;
		iVar1 = (*this->vtable->GetNum)();
		switch(iVar1) {
		case 0x10:_D3DDevice_SetTexture@8(2,this->texture->d3dTexture);
		DAT_002a9908 = DAT_002a9908 | 0x800;
		DAT_002a9940 = 4;
		INT_002a9950 = 2;
		DAT_002a9a40 = 4;
		@D3DDevice_SetRenderState_Simple@8(&RENDER_STATE_12,1);
		DAT_002a9bfc = 1;
		@D3DDevice_SetRenderState_Simple@8(&RENDER_STATE_4,0x302);
		INT_002a9c08 = 0x302;
		@D3DDevice_SetRenderState_Simple@8(&RENDER_STATE_5,1);
		INT_002a9c0c = 1;
		@D3DDevice_SetRenderState_Simple@8(&DAT_00040350,0x8006);
		_DAT_002a9c38 = 0x8006;
		break;
		default:goto switchD_0010cd58_caseD_11;
		case 0x14:case 0x17:case 0x1d:_D3DDevice_SetTexture@8(2,this->texture->d3dTexture);
		if ((this->states >> 6 & 1) == 0) {
		switch(this->flags >> 1 & 0xf) {
		case 0:DAT_002a9a40 = 5;
		break;
		case 1:DAT_002a9a40 = 0xe;
		break;
		case 2:DAT_002a9a40 = 10;
		break;
		default:goto switchD_0010cd89_caseD_3;
		case 5:DAT_002a9a40 = 6;
		}
		DAT_002a9908 = DAT_002a9908 | 0x800;
		}
		switchD_0010cd89_caseD_3:VStack32.x = 0.0;
		VStack32.y = 0.0;
		VStack32.z = FLOAT_003869d8;
		VStack32.w = FLOAT_003865d4;
		@D3DDevice_SetVertexShaderConstant1Fast@8(0xbf,&VStack32);
		break;
		case 0x18:case 0x19:DrawToScreenTexture();
		_D3DDevice_SetTexture@8(2,this->texture->d3dTexture);
		VStack32.x = FLOAT_00386ab4;
		VStack32.y = FLOAT_00386ab4;
		VStack32.z = FLOAT_00387520;
		DAT_002a9908 = DAT_002a9908 | 0x800;
		INT_002a99e0 = 5;
		DAT_002a9a40 = 3;
		DAT_002a9ac0 = 8;
		INT_002a9950 = 2;
		VStack32.w = FLOAT_0038639c;
		@D3DDevice_SetVertexShaderConstant1Fast@8(0xbf,&VStack32);
		_D3DDevice_SetTexture@8(3,SCREEN_TEXTURE);
		return;
		}
		DAT_002a9908 = DAT_002a9908 | 0x800;
		INT_002a99e0 = 5;
		INT_002a9a60 = 1;
		DAT_002a9ac0 = 1;
		switchD_0010cd58_caseD_11:return;
		}
		
	*/
	return;
}

int ShaderProgramAbstract::UpdateClock(float arg) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall ShaderProgramAbstract::UpdateClock(ShaderProgramAbstract *this,float arg){
		float fVar1;
		uint state;
		int iVar2;
		long lVar3;
		byte bVar4;
		float fVar5;
		float fVar6;
		int local_8;
		int local_4;
		Matrix4 *mat;
		fVar1 = FLOAT_0039f4c0;
		fVar6 = FLOAT_003863a8;
		state = this->states & 7;
		if (state == 2) {
		fVar6 = this->field53_0x58 * arg + this->field51_0x50;
		iVar2 = (int)fVar6;
		this->field51_0x50 = fVar6;
		if (fVar6 < (float)iVar2) {
		iVar2 = iVar2 + -1;
		}
		this->field51_0x50 = fVar6 - (float)iVar2;
		this->field55_0x60 = fVar6 - (float)iVar2;
		}
		else if (state == 3) {
		fVar5 = this->field53_0x58 * arg + this->field51_0x50;
		this->field51_0x50 = fVar5;
		local_4 = (int)((fVar6 / fVar1) * fVar5 * fVar1);
		fVar6 = TwinSin(&local_4);
		this->field55_0x60 = fVar6;
		}
		else if (state == 4) {
		fVar5 = this->field53_0x58 * arg + this->field51_0x50;
		this->field51_0x50 = fVar5;
		local_8 = (int)((fVar6 / fVar1) * fVar5 * fVar1);
		fVar6 = FUN_000e2310(&local_8);
		this->field56_0x64 = fVar6;
		}
		fVar1 = FLOAT_0039f4c0;
		fVar6 = FLOAT_003863a8;
		state = this->states >> 3 & 7;
		if (state == 2) {
		fVar6 = this->field54_0x5c * arg + this->field52_0x54;
		iVar2 = (int)fVar6;
		this->field52_0x54 = fVar6;
		if (fVar6 < (float)iVar2) {
		iVar2 = iVar2 + -1;
		}
		this->field52_0x54 = fVar6 - (float)iVar2;
		this->field56_0x64 = fVar6 - (float)iVar2;
		}
		else if (state == 3) {
		fVar5 = this->field54_0x5c * arg + this->field52_0x54;
		this->field52_0x54 = fVar5;
		local_4 = (int)((fVar6 / fVar1) * fVar5 * fVar1);
		fVar6 = TwinSin(&local_4);
		this->field56_0x64 = fVar6;
		}
		else if (state == 4) {
		fVar5 = this->field54_0x5c * arg + this->field52_0x54;
		this->field52_0x54 = fVar5;
		local_8 = (int)((fVar6 / fVar1) * fVar5 * fVar1);
		fVar6 = FUN_000e2310(&local_8);
		this->field56_0x64 = fVar6;
		}
		if (this->unkSubStruct != (ShaderProgramSub *)0x0) {
		FUN_001fdc10(this->unkSubStruct,arg);
		bVar4 = (byte)this->states;
		if ((bVar4 & 7) == 1) {
		this->field55_0x60 = *(float *)&this->unkSubStruct->field_0x28;
		}
		if ((bVar4 & 0x38) == 8) {
		this->field56_0x64 = *(float *)&this->unkSubStruct->field_0x2c;
		}
		fVar6 = FLOAT_0038ded0;
		if ((this->states & 0x10000000) != 0) {
		mat = (Matrix4 *)this->unkSubStruct;
		(this->vec0).x = mat->m41 * FLOAT_0038ded0;
		(this->vec0).y = mat->m42 * fVar6;
		(this->vec0).z = mat->m43 * fVar6;
		(this->vec0).w = mat->m44 * FLOAT_00390958;
		lVar3 = __ftol2((this->vec0).x);
		this->field20_0x1d = (char)lVar3;
		this->field_0x1e = 0;
		this->field_0x1f = 0;
		this->field_0x20 = 0;
		}
		}
		return 0;
		}

	*/
	return 0;
}

bool ShaderProgramAbstract::IsF(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramAbstract::IsF(ShaderProgramAbstract *this,int param_1){
		uint uVar1;
		uint uVar2;
		bool bVar3;
		bool bVar4;
		bVar4 = false;
		if (((((this->id == *(int *)(param_1 + 0x74)) && (this->field59_0x70 == *(int *)(param_1 + 0x70)))&& (*(float *)&this->field_0x30 == *(float *)(param_1 + 0x30))) &&((*(float *)&this->field_0x34 == *(float *)(param_1 + 0x34) &&(*(float *)&this->field_0x38 == *(float *)(param_1 + 0x38))))) &&(((this->vec0).x == *(float *)(param_1 + 0x40) &&(((this->vec0).y == *(float *)(param_1 + 0x44) &&((this->vec0).z == *(float *)(param_1 + 0x48))))))) {
		uVar1 = this->flags;
		uVar2 = *(uint *)(param_1 + 0x10);
		if ((((((uVar1 ^ uVar2) & 1) == 0) &&(((((uVar1 ^ uVar2) & 0x1e) == 0 && (((uVar1 ^ uVar2) & 0x20) == 0)) &&(((uVar1 ^ uVar2) & 0x1c0) == 0)))) &&(((((((uVar1 ^ uVar2) & 0x1fe00) == 0 && (((uVar1 ^ uVar2) & 0x60000) == 0)) &&((((uVar1 ^ uVar2) & 0x80000) == 0 &&((((uVar1 ^ uVar2) & 0x100000) == 0 && (((uVar1 ^ uVar2) & 0x600000) == 0)))))) &&(((uVar1 ^ uVar2) & 0x3800000) == 0)) &&(((((uVar1 ^ uVar2) & 0x4000000) == 0 && (((uVar1 ^ uVar2) & 0x8000000) == 0)) &&(((uVar1 ^ uVar2) & 0x10000000) == 0)))))) &&((((uVar1 ^ uVar2) & 0x20000000) == 0 && (((uVar1 ^ uVar2) & 0x40000000) == 0)))) {
		uVar1 = this->states;
		uVar2 = *(uint *)(param_1 + 0x14);
		if ((((((((uVar1 ^ uVar2) & 7) == 0) &&((((uVar1 ^ uVar2) & 0x38) == 0 && (((uVar1 ^ uVar2) & 0x40) == 0)))) &&(((uVar1 ^ uVar2) & 0x180) == 0)) &&(((((((uVar1 ^ uVar2) & 0x600) == 0 && (((uVar1 ^ uVar2) & 0x1800) == 0)) &&(((uVar1 ^ uVar2) & 0x6000) == 0)) &&((((uVar1 ^ uVar2) & 0x7f8000) == 0 && (((uVar1 ^ uVar2) & 0x800000) == 0)))) &&(((uVar1 ^ uVar2) & 0x1000000) == 0)))) &&(((this->field28_0x28 == *(short *)(param_1 + 0x28) &&(this->field29_0x2a == *(short *)(param_1 + 0x2a))) &&((this->field51_0x50 == *(float *)(param_1 + 0x50) &&(((this->field52_0x54 == *(float *)(param_1 + 0x54) &&(this->field53_0x58 == *(float *)(param_1 + 0x58))) &&(this->field54_0x5c == *(float *)(param_1 + 0x5c))))))))) &&(((((uVar1 ^ uVar2) & 0x4000000) == 0 && (((uVar1 ^ uVar2) & 0x8000000) == 0)) &&((((uVar1 ^ uVar2) & 0x10000000) == 0 && (((uVar1 ^ uVar2) & 0x20000000) == 0)))))) {
		bVar4 = true;
		}
		}
		}
		if (((this->unkSubStruct != (ShaderProgramSub *)0x0) &&(*(uint **)(param_1 + 0x78) != (uint *)0x0)) &&(bVar3 = FUN_001fb100(this->unkSubStruct,*(uint **)(param_1 + 0x78)), bVar3 != false)) {
		return false;
		}
		return bVar4;
		}
		
	*/
	return false;
}

int ShaderProgramAbstract::GetUnkInt() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int ShaderProgramAbstract::GetUnkInt(void){
		return INT_0039f1b8;
		}
		
	*/
	return 0;
}

int ShaderProgramAbstract::GetUnkInt2(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall ShaderProgramAbstract::GetUnkInt2(ShaderProgramAbstract *this,char param_1){
		int iVar1;
		iVar1 = this->field58_0x6c;
		if (param_1 != '\0') {
		iVar1 = iVar1 + 2;
		}
		return iVar1;
		}
		
	*/
	return 0;
}

void ShaderProgramAbstract::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void ShaderProgramAbstract::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

bool ShaderProgramAbstract::ReturnFalse() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool ShaderProgramAbstract::ReturnFalse(void){
		return false;
		}
		
	*/
	return false;
}

int ShaderProgramAbstract::GetUnkInt_18() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall ShaderProgramAbstract::GetUnkInt(ShaderProgramAbstract *this){
		return this->field57_0x68;
		}
		
	*/
	return 0;
}

bool ShaderProgramAbstract::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool ShaderProgramAbstract::IsA(void){
		return false;
		}
		
	*/
	return false;
}

bool ShaderProgramAbstract::IsB() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool ShaderProgramAbstract::IsB(void){
		return false;
		}
		
	*/
	return false;
}

bool ShaderProgramAbstract::IsC() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool ShaderProgramAbstract::IsC(void){
		return false;
		}
		
	*/
	return false;
}

bool ShaderProgramAbstract::IsNotF(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramAbstract::IsNotF(ShaderProgramAbstract *this,int param_1){
		bool cVar1;
		cVar1 = (*this->vtable->IsF)(this,param_1);
		return (bool)('\x01' - (cVar1 != false));
		}
		
	*/
	return false;
}

void ShaderProgramAbstract::RaiseFlag() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ShaderProgramAbstract::RaiseFlag(ShaderProgramAbstract *this){
		this->id = 0xe;
		return;
		}
		
	*/
	return;
}

bool ShaderProgramAbstract::CallHell(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramAbstract::CallHell(ShaderProgramAbstract *this,int param_1){
		bool bVar1;
		bVar1 = IsF(this,param_1);
		return bVar1 != false;
		}
		
	*/
	return false;
}

bool ShaderProgramAbstract::UnkMethod5(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall ShaderProgramAbstract::UnkMethod5(ShaderProgramAbstract *this,undefined4 param_1){
		bool bVar1;
		bVar1 = (*this->vtable->IsE)(param_1);
		return (bool)('\x01' - (bVar1 != false));
		}
		
	*/
	return false;
}

