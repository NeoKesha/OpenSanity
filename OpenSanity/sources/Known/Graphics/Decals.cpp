#include "headers/Known/Graphics/Decals.h"

#include "headers/Known/Memory/Streams/FileStream/FileStream.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Global.h"
#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Graphics/Shader/TwinsanityMaterialShader.h"
#include "headers/Known/Math/Vector4.h"

void Decals::FUN_000fe0e0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Decals::FUN_000fe0e0(Decals *this){
		short sVar1;
		float fVar2;
		float fVar3;
		short *psVar4;
		short sVar5;
		float *pfVar6;
		int iVar7;
		short *psVar8;
		byte *pbVar9;
		pbVar9 = this->header;
		iVar7 = 0x10;
		do {
		if (*(void **)pbVar9 != (void *)0x0) {
		VirtualPool::FreeMemory(*(void **)pbVar9);
		}
		*(void **)pbVar9 = (void *)0x0;
		*(void **)(pbVar9 + 0x40) = (void *)0x0;
		fVar3 = FLOAT_00390474;
		fVar2 = FLOAT_003869d8;
		pbVar9 = pbVar9 + 4;
		iVar7 = iVar7 + -1;
		}
		 while (iVar7 != 0);
		(this->field90750_0x16304).x = 0.0;
		(this->field90750_0x16304).y = 0.0;
		(this->field90750_0x16304).z = 0.0;
		(this->field90750_0x16304).w = 0.0;
		this->field90684_0x162c0 = 0;
		psVar4 = &this->field2_0x4;
		psVar8 = &this->field90685_0x162c2;
		sVar5 = 0;
		do {
		sVar1 = sVar5 + 1;
		*psVar8 = sVar1;
		((Decals *)(psVar4 + -2))->field0_0x0 = 0;
		pfVar6 = (float *)(psVar4 + 0x32c);
		iVar7 = 0x20;
		do {
		pfVar6[-0x84] = fVar2;
		*pfVar6 = fVar3;
		pfVar6 = pfVar6 + 4;
		iVar7 = iVar7 + -1;
		}
		 while (iVar7 != 0);
		*psVar4 = sVar5;
		psVar8 = psVar8 + 1;
		psVar4 = psVar4 + 0x578;
		sVar5 = sVar1;
		}
		 while (sVar1 < 0x20);
		*(undefined2 *)&this->field_0x16300 = 0xffff;
		this->field90752_0x16318 = 0;
		this->field90751_0x16314 = 0;
		return;
		}
		
	*/
	return;
}

void Decals::FUN_000fe1c0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Decals::FUN_000fe1c0(Decals *this){
		undefined2 *puVar1;
		float fVar2;
		float fVar3;
		float *pfVar4;
		int i;
		int *piVar5;
		int j;
		fVar3 = FLOAT_00390474;
		fVar2 = FLOAT_003869d8;
		piVar5 = &this->unkStruct;
		i = 0x10;
		do {
		j = *piVar5;
		while (j != 0) {
		puVar1 = (undefined2 *)*piVar5;
		*puVar1 = 0;
		pfVar4 = (float *)(puVar1 + 0x32e);
		j = 0x20;
		do {
		pfVar4[-0x84] = fVar2;
		*pfVar4 = fVar3;
		pfVar4 = pfVar4 + 4;
		j = j + -1;
		}
		 while (j != 0);
		*piVar5 = *(int *)(puVar1 + 4);
		(&this->field90685_0x162c2)[(short)puVar1[2]] = this->field90684_0x162c0;
		this->field90684_0x162c0 = puVar1[2];
		j = *piVar5;
		}
		piVar5 = piVar5 + 1;
		i = i + -1;
		}
		 while (i != 0);
		this->field90752_0x16318 = 0;
		this->field90751_0x16314 = 0;
		return;
		}
		
	*/
	return;
}

void Decals::LoadDclFile(FileStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Decals::LoadDclFile(Decals *this,FileStream *stream){
		byte *buffer;
		int i;
		byte *buffer_00;
		Decals *local_4;
		local_4 = this;
		FUN_000fe0e0(this);
		(*stream->vtable->ReadInt3)(stream,(int *)&local_4);
		(*stream->vtable->Read)(stream,&this->field_0x15e20,0x420,1);
		buffer_00 = this->header;
		(*stream->vtable->Read)(stream,buffer_00,0x40,1);
		i = 0x10;
		do {
		if (*(byte **)buffer_00 != (byte *)0x0) {
		buffer = (byte *)VirtualPool::AllocateMemory(0x890);
		if (buffer == (byte *)0x0) {
		buffer = (byte *)0x0;
		}
		else {
		*(undefined4 *)(buffer + 0x790) = 0;
		}
		*(byte **)buffer_00 = buffer;
		(*stream->vtable->Read)(stream,buffer,0x890,1);
		}
		buffer_00 = buffer_00 + 4;
		i = i + -1;
		}
		 while (i != 0);
		return;
		}
		
	*/
	return;
}

void Decals::Read(char* fname) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Decals::Read(Decals *this,char *fname){
		float fVar1;
		float fVar2;
		MemoryStream stream;
		MemoryStream::ConstructFile(&stream,fname,'\0');
		UnkStruct4::FUN_00114df0((UnkStruct4 *)&this->field_0x15e00,&stream,true,true);
		MemoryStream::Dispose(&stream);
		fVar2 = FLOAT_0038a838;
		fVar1 = FLOAT_00386618;
		*(undefined4 *)&this->field_0x16230 = 2;
		this->field89606_0x15e30 = fVar1;
		this->field89607_0x15e34 = fVar1;
		this->field89608_0x15e38 = fVar2;
		this->field89609_0x15e3c = fVar1;
		this->field89610_0x15e40 = fVar1;
		this->field89611_0x15e44 = fVar2;
		this->field89612_0x15e48 = fVar2;
		this->field89613_0x15e4c = fVar2;
		return;
		}
		
	*/
	return;
}

void Decals::FUN_00115820(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Decals::FUN_00115820(Decals *this,MemoryStream *stream){
		UnkStruct4::FUN_00114df0((UnkStruct4 *)&this->field_0x15e00,stream,false,true);
		return;
		}
		
	*/
	return;
}

void Decals::FUN_0010a5d0(float time) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Decals::FUN_0010a5d0(Decals *this,float time){
		short *psVar1;
		int iVar2;
		int iVar3;
		short *psVar4;
		undefined4 *puVar5;
		float *pfVar6;
		int *piVar7;
		undefined4 *puVar8;
		int local_c8;
		int local_c4;
		int local_b8;
		int local_b4;
		uint *local_b0;
		short *local_ac;
		undefined4 local_a0;
		undefined4 local_9c;
		undefined4 local_98;
		uint local_94;
		undefined4 local_90;
		undefined4 local_8c;
		undefined4 local_88;
		undefined4 local_84;
		undefined4 local_80;
		undefined4 local_7c;
		undefined4 local_78;
		undefined4 local_74;
		float local_60;
		float local_5c;
		float local_58;
		float local_54;
		undefined4 local_50;
		undefined4 local_4c;
		undefined4 local_48;
		undefined4 local_44;
		undefined4 local_40;
		undefined4 local_3c;
		undefined4 local_38;
		undefined4 local_34;
		uint local_30;
		undefined local_2c;
		int local_14;
		local_14 = SECURITY_COOKIE;
		if (this->field90752_0x16318 != 0) {
		local_b4 = 0;
		if (FLOAT_0038acf0 < time) {
		local_b4 = -1;
		}
		piVar7 = &this->unkStruct;
		local_b8 = 0x10;
		do {
		psVar4 = (short *)*piVar7;
		if (psVar4 != (short *)0x0) {
		psVar1 = (short *)piVar7[-0x10];
		local_ac = (short *)0x0;
		do {
		iVar2 = (int)*psVar4;
		local_c4 = 0;
		local_c8 = 0;
		if (0 < iVar2) {
		local_b0 = (uint *)(psVar4 + 0x530);
		puVar8 = (undefined4 *)(psVar4 + 10);
		puVar5 = (undefined4 *)(psVar4 + 0x224);
		do {
		iVar3 = FUN_001185e0(local_c8,(int)psVar4,&local_a0);
		FUN_00102a10((int)&local_a0,(int)psVar1);
		local_94 = (iVar3 + local_b4) * 0x40 | local_30;
		if (iVar3 + local_b4 < 0) {
		this->field90752_0x16318 = this->field90752_0x16318 + -1;
		}
		else {
		puVar5[-2] = local_a0;
		puVar5[-1] = local_9c;
		*puVar5 = local_98;
		puVar5[1] = local_94;
		puVar8[-1] = local_90;
		*puVar8 = local_8c;
		puVar8[1] = local_88;
		puVar8[2] = local_84;
		puVar8[3] = local_80;
		puVar8[4] = local_7c;
		puVar8[5] = local_78;
		puVar8[6] = local_74;
		puVar5[0x82] = local_50;
		puVar5[0x83] = local_4c;
		puVar5[0x84] = local_48;
		puVar5[0x85] = local_44;
		puVar5[0x102] = local_40;
		puVar5[0x103] = local_3c;
		puVar5[0x104] = local_38;
		puVar5[0x105] = local_34;
		*(undefined *)(local_c4 + 0x410 + (int)psVar4) = local_2c;
		*local_b0 = (((int)local_58 & 0xffU | (int)local_54 << 8) << 8 |(int)local_5c & 0xffU) << 8 | (int)local_60 & 0xffU;
		local_c4 = local_c4 + 1;
		local_b0 = local_b0 + 1;
		puVar8 = puVar8 + 8;
		puVar5 = puVar5 + 4;
		}
		local_c8 = local_c8 + 1;
		}
		 while (local_c8 < iVar2);
		}
		*psVar4 = (short)local_c4;
		if (local_c4 < iVar2) {
		pfVar6 = (float *)(psVar4 + local_c4 * 8 + 0x32e);
		iVar2 = iVar2 - local_c4;
		do {
		*pfVar6 = FLOAT_00390474;
		pfVar6 = pfVar6 + 4;
		iVar2 = iVar2 + -1;
		}
		 while (iVar2 != 0);
		}
		if (local_c4 == 0) {
		if (local_ac == (short *)0x0) {
		*piVar7 = (int)*(short **)(psVar4 + 4);
		}
		else {
		*(short **)(local_ac + 4) = *(short **)(psVar4 + 4);
		}
		(&this->field90685_0x162c2)[psVar4[2]] = this->field90684_0x162c0;
		this->field90684_0x162c0 = psVar4[2];
		}
		else {
		pfVar6 = &(this->field90750_0x16304).x + psVar4[1];
		*(short **)(psVar4 + 6) = (short *)*pfVar6;
		*pfVar6 = (float)psVar4;
		local_ac = psVar4;
		}
		psVar4 = *(short **)(psVar4 + 4);
		}
		 while (psVar4 != (short *)0x0);
		}
		piVar7 = piVar7 + 1;
		local_b8 = local_b8 + -1;
		}
		 while (local_b8 != 0);
		}
		@__security_check_cookie@4(local_14);
		return;
		}
		
	*/
	return;
}

void Decals::DrawPlane() {
	Logging::LogUnimplemented(__FUNCSIG__);
	Global* GLOBAL = Global::Get();

/*
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *floatValue;
  int iVar7;
  uint i;
  int iVar8;
  float psVar6;
  short sVar9;
  int cnt;
  int *streamData;
  Matrix4 local_cc;
  float local_7c;
  Matrix4 local_70;
  float local_2c;
  float local_28;
  int local_14;

  local_14 = SECURITY_COOKIE;
  if (*(int *)&this->field_0x16318 != 0) {
	floatValue = this->floatArray;
	cnt = 4;
	do {
	  psVar6 = *floatValue;
	  *floatValue = 0.0;
	  if (psVar6 != 0.0) {
		TwinsanityMaterialShader::FUN_00105840((TwinsanityMaterialShader *)floatValue[-0x13e]);
		Matrix4::Construct1(&local_70);
		_D3DDevice_SetTransform@8(6,&local_70);
		do {
		  i = *(uint *)((int)psVar6 + 0x44c) & 0x3f;
		  local_cc.m32 = (&this->field89606_0x15e30)[i * 8];
					 00015e2f 
	local_cc.m33 = *(float*)(SaveFileC::UpdateBankData + (int)(&this->field0_0x0 + i * 0x10))
		;
	local_cc.m14 = (&this->field89608_0x15e38)[i * 8];
	local_cc.m21 = (&this->field89609_0x15e3c)[i * 8];
	local_cc.m44 = (&this->field89612_0x15e48)[i * 8];
	DAT_00402a08 = 1;
	_D3DDevice_SetVertexShaderInput@12((int*)0x0, (int*)0x0, (int**)0x0);
	_D3DDevice_SetVertexShader@4(0x142);
	sVar9 = 0;
	if (0 < *(short*)psVar6) {
		do {
			iVar8 = (int)sVar9;
			iVar7 = (iVar8 + 0x44) * 0x10;
			fVar1 = *(float*)(iVar7 + (int)psVar6);
			fVar2 = *(float*)(iVar7 + 4 + (int)psVar6);
			fVar3 = *(float*)(iVar7 + 8 + (int)psVar6);
			fVar4 = *(float*)((iVar8 + 0x65) * 0x10 + (int)psVar6);
			iVar7 = iVar8 * 0x10;
			local_2c = *(float*)(iVar7 + 0x854 + (int)psVar6);
			fVar5 = *(float*)(iVar7 + 0x654 + (int)psVar6);
			fVar6 = *(float*)(iVar7 + 0x658 + (int)psVar6);
			local_28 = *(float*)(iVar7 + 0x858 + (int)psVar6);
			local_cc.m13 = *(float*)((int)psVar6 + 0xa60 + iVar8 * 4);
			streamData = (int*)(*(float*)((iVar8 + 0x85) * 0x10 + (int)psVar6) + fVar1);
			local_cc.m11 = local_2c + fVar2;
			local_cc.m12 = local_28 + fVar3;
			local_cc.m22 = fVar4 + fVar1;
			local_cc.m23 = fVar5 + fVar2;
			local_cc.m24 = fVar6 + fVar3;
			local_cc.m34 = fVar1 - fVar4;
			local_cc.m41 = fVar2 - fVar5;
			local_cc.m42 = fVar3 - fVar6;
			local_cc.m31 = local_cc.m13;
			local_cc.m43 = local_cc.m13;
			_D3DDevice_DrawVerticesUP@16(D3DPT_LINESTRIP, 4, &streamData, 0x18);
			sVar9 = sVar9 + 1;
		} while (sVar9 < *(short*)psVar6);
	}
	psVar6 = *(float*)((int)psVar6 + 0xc);
} while (psVar6 != 0.0);
	  }
	  floatValue = floatValue + 1;
	  cnt = cnt + -1;
	} while (cnt != 0);
  }
  @__security_check_cookie@4(local_14);
  return;
*/
}

void Decals::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Decals::Construct(Decals *this){
		short sVar1;
		float fVar2;
		float fVar3;
		int iVar4;
		int *piVar5;
		short *psVar6;
		short sVar7;
		float *pfVar8;
		int iVar9;
		short *psVar10;
		fVar3 = FLOAT_00390474;
		fVar2 = FLOAT_003869d8;
		psVar10 = &this->field2_0x4;
		iVar9 = 0x20;
		psVar6 = psVar10;
		do {
		psVar6[-1] = -1;
		*psVar6 = 0;
		*(undefined4 *)(psVar6 + 2) = 0;
		*(undefined4 *)(psVar6 + 4) = 0;
		((Decals *)(psVar6 + -2))->field0_0x0 = 0;
		pfVar8 = (float *)(psVar6 + 0x32c);
		iVar4 = 0x20;
		do {
		pfVar8[-0x84] = fVar2;
		*pfVar8 = fVar3;
		pfVar8 = pfVar8 + 4;
		iVar4 = iVar4 + -1;
		}
		 while (iVar4 != 0);
		psVar6 = psVar6 + 0x578;
		iVar9 = iVar9 + -1;
		}
		 while (iVar9 != 0);
		this->field90752_0x16318 = 0;
		piVar5 = &this->unkStruct;
		iVar9 = 0x10;
		do {
		piVar5[-0x10] = 0;
		*piVar5 = 0;
		piVar5 = piVar5 + 1;
		iVar9 = iVar9 + -1;
		}
		 while (iVar9 != 0);
		(this->field90750_0x16304).x = 0.0;
		(this->field90750_0x16304).y = 0.0;
		(this->field90750_0x16304).z = 0.0;
		(this->field90750_0x16304).w = 0.0;
		this->field90684_0x162c0 = 0;
		psVar6 = &this->field90685_0x162c2;
		sVar7 = 0;
		do {
		sVar1 = sVar7 + 1;
		*psVar10 = sVar7;
		*psVar6 = sVar1;
		psVar6 = psVar6 + 1;
		psVar10 = psVar10 + 0x578;
		sVar7 = sVar1;
		}
		 while (sVar1 < 0x20);
		this->field90751_0x16314 = 0;
		*(undefined2 *)&this->field_0x16300 = 0xffff;
		return;
		}
		
	*/
	return;
}

