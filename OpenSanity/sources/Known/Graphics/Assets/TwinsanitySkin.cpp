#include "headers/Known/Graphics/Assets/TwinsanitySkin.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Material/TwinsanityMaterial.h"
void TwinsanitySkin::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall TwinsanitySkin::Dispose(TwinsanitySkin *this){
		TwinsanityMaterial *element;
		TwinsanityMaterialShader *ptr;
		ShaderProgramAbstract *this_00;
		PhysicalPool *pool;
		uint uVar1;
		undefined **ptr_00;
		uint local_8;
		this->vtable = &TwinsanityGraphics_VT_Skin;
		_D3DDevice_SetStreamSource@12(0,(D3DVertexBuffer8 *)0x0,0);
		local_8 = 0;
		if (this->cnt != 0) {
		do {
		element = this->materials[local_8];
		if (element->id == 0xffffffff) {
		ptr = element->shader;
		if (ptr != (TwinsanityMaterialShader *)0x0) {
		uVar1 = 0;
		if (ptr->shaderProgramCnt != 0) {
		do {
		this_00 = ptr->shaderPrograms[uVar1];
		if (this_00 != (ShaderProgramAbstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		}
		uVar1 = uVar1 + 1;
		}
		 while (uVar1 < ptr->shaderProgramCnt);
		}
		VirtualPool::FreeMemory(ptr);
		}
		VirtualPool::FreeMemory(element);
		}
		else {
		(*(ENV_CLASS_187_SECTION_MATERIALS.parent)->Method4)(&ENV_CLASS_187_SECTION_MATERIALS.parent,(undefined *)element);
		}
		ptr_00 = this->vertexBufferData + local_8;
		pool = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pool,ptr_00);
		VirtualPool::FreeMemory(this->vertexBuffer[local_8]);
		VirtualPool::FreeMemory(this->array4A[local_8]);
		VirtualPool::FreeMemory(this->array4B[local_8]);
		VirtualPool::FreeMemory(this->array3[local_8]);
		local_8 = local_8 + 1;
		}
		 while (local_8 < this->cnt);
		}
		VirtualPool::FreeMemory(this->materials);
		if (this->vertexBufferData != (undefined **)0x0) {
		VirtualPool::FreeMemory(this->vertexBufferData + -1);
		}
		VirtualPool::FreeMemory(this->vertexBuffer);
		VirtualPool::FreeMemory(this->cnt4);
		VirtualPool::FreeMemory(this->field16_0x28);
		VirtualPool::FreeMemory(this->cnt3);
		VirtualPool::FreeMemory(this->array4A);
		VirtualPool::FreeMemory(this->array4B);
		VirtualPool::FreeMemory(this->array3);
		VirtualPool::FreeMemory(this->vertexBufferLength);
		VirtualPool::FreeMemory(this->field12_0x18);
		this->vtable = &TwinsanityGraphics_VT_Base;
		return;
		}
		
	*/
	return;
}

void TwinsanitySkin::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanitySkin::Read(TwinsanitySkin *this,MemoryStream *stream){
		bool bVar1;
		TwinsanityMaterial **ppTVar2;
		uint *puVar3;
		undefined **ppuVar4;
		D3DVertexBuffer8 **ppDVar5;
		uint **ppuVar6;
		TwinsanityMaterial *pTVar7;
		uint *array4A;
		uint *array4B;
		uint *array3;
		PhysicalPool *pool;
		int *vertexBufferDataIndex;
		D3DVertexBuffer8 *pDVar8;
		byte bVar9;
		byte bVar11;
		uint i;
		undefined **ppuVar12;
		byte bStack9;
		uint j;
		int iStack4;
		bool bVar10;
		bool cVar12;
		uint bufferLength;
		TwinsanityMaterialShader *shader;
		uint *submodels;
		submodels = &this->cnt;
		(*stream->vtable->ReadUInt)(stream,submodels);
		ppTVar2 = (TwinsanityMaterial **)VirtualPool::AllocateMemory(*submodels << 2);
		i = *submodels;
		this->materials = ppTVar2;
		puVar3 = (uint *)VirtualPool::AllocateMemory(i * 4 + 4);
		if (puVar3 == (uint *)0x0) {
		ppuVar4 = (undefined **)0x0;
		}
		else {
		*puVar3 = i;
		ppuVar4 = (undefined **)(puVar3 + 1);
		ppuVar12 = ppuVar4;
		if (-1 < (int)(i - 1)) {
		for (;
		 i != 0;
		 i = i - 1) {
		*ppuVar12 = (undefined *)0xffffffff;
		ppuVar12 = ppuVar12 + 1;
		}
		}
		}
		this->vertexBufferData = ppuVar4;
		ppDVar5 = (D3DVertexBuffer8 **)VirtualPool::AllocateMemory(*submodels << 2);
		this->vertexBuffer = ppDVar5;
		i = 0;
		if (*submodels != 0) {
		do {
		this->vertexBuffer[i] = (D3DVertexBuffer8 *)0x0;
		i = i + 1;
		}
		 while (i < *submodels);
		}
		puVar3 = (uint *)VirtualPool::AllocateMemory(*submodels << 2);
		this->field16_0x28 = puVar3;
		puVar3 = (uint *)VirtualPool::AllocateMemory(*submodels << 2);
		this->cnt3 = puVar3;
		puVar3 = (uint *)VirtualPool::AllocateMemory(*submodels << 2);
		this->cnt4 = puVar3;
		ppuVar6 = (uint **)VirtualPool::AllocateMemory(*submodels << 2);
		this->array4A = ppuVar6;
		ppuVar6 = (uint **)VirtualPool::AllocateMemory(*submodels << 2);
		this->array4B = ppuVar6;
		ppuVar6 = (uint **)VirtualPool::AllocateMemory(*submodels << 2);
		this->array3 = ppuVar6;
		puVar3 = (uint *)VirtualPool::AllocateMemory(*submodels << 2);
		this->vertexBufferLength = puVar3;
		submodels = (uint *)VirtualPool::AllocateMemory(*submodels << 2);
		this->field12_0x18 = submodels;
		i = 0;
		if (this->cnt != 0) {
		do {
		(*stream->vtable->ReadUInt)(stream,(uint *)&stream);
		pTVar7 = (TwinsanityMaterial *)(*(ENV_CLASS_187_SECTION_MATERIALS.parent)->Create)(&ENV_CLASS_187_SECTION_MATERIALS.parent,(undefined *)&stream,0);
		this->materials[i] = pTVar7;
		(*stream->vtable->ReadUInt)(stream,this->vertexBufferLength + i);
		(*stream->vtable->ReadUInt)(stream,this->field16_0x28 + i);
		(*stream->vtable->ReadUInt)(stream,this->cnt3 + i);
		(*stream->vtable->ReadUInt)(stream,this->cnt4 + i);
		array4A = (uint *)VirtualPool::AllocateMemory(this->cnt4[i] << 2);
		this->array4A[i] = array4A;
		array4B = (uint *)VirtualPool::AllocateMemory(this->cnt4[i] << 2);
		this->array4B[i] = array4B;
		(*stream->vtable->Read)(stream,(int *)this->array4A[i],this->cnt4[i] << 2,1);
		(*stream->vtable->Read)(stream,(int *)this->array4B[i],this->cnt4[i] << 2,1);
		array3 = (uint *)VirtualPool::AllocateMemory(this->cnt3[i] << 2);
		this->array3[i] = array3;
		(*stream->vtable->Read)(stream,(int *)this->array3[i],this->cnt3[i] << 2,1);
		bufferLength = this->vertexBufferLength[i];
		bVar10 = true;
		cVar12 = false;
		vertexBufferDataIndex = &iStack4;
		pool = PhysicalPool::GetPool();
		PhysicalPool::CreateBuffer(pool,vertexBufferDataIndex,bufferLength,cVar12,bVar10);
		this->vertexBufferData[i] = (undefined *)pool->alignedStart;
		ppuVar4 = this->vertexBufferData + i;
		pool = PhysicalPool::GetPool();
		vertexBufferDataIndex = PhysicalPool::GetBufferPointerByIndex(pool,(int *)ppuVar4);
		(*stream->vtable->Read)(stream,vertexBufferDataIndex,this->vertexBufferLength[i],1);
		pDVar8 = (D3DVertexBuffer8 *)VirtualPool::AllocateMemory(0xc);
		this->vertexBuffer[i] = pDVar8;
		XGRAPHC::XGSetVertexBufferHeader(this->vertexBufferLength[i],0,0,0,this->vertexBuffer[i],0);
		D3DResource::Register((D3DResource *)this->vertexBuffer[i],(int)vertexBufferDataIndex);
		i = i + 1;
		}
		 while (i < this->cnt);
		}
		stream = (MemoryStream *)0x0;
		bStack9 = 0;
		j = 0;
		if (this->cnt == 0) {
		this->field8_0x14 = false;
		this->field10_0x16 = false;
		return;
		}
		do {
		shader = this->materials[j]->shader;
		bVar9 = 0;
		i = 0;
		if (shader->shaderProgramCnt != 0) {
		do {
		bVar1 = (*shader->shaderPrograms[i]->vtable->IsA)();
		bVar9 = bVar9 | bVar1;
		i = i + 1;
		}
		 while (i < shader->shaderProgramCnt);
		}
		stream = (MemoryStream *)(uint)((byte)stream | bVar9);
		shader = this->materials[j]->shader;
		bVar11 = 0;
		i = 0;
		if (shader->shaderProgramCnt != 0) {
		do {
		bVar1 = (*shader->shaderPrograms[i]->vtable->IsC)();
		bVar11 = bVar11 | bVar1;
		i = i + 1;
		}
		 while (i < shader->shaderProgramCnt);
		}
		bStack9 = bStack9 | bVar11;
		j = j + 1;
		}
		 while (j < this->cnt);
		this->field8_0x14 = (bool)((byte)stream | bVar9);
		this->field10_0x16 = (bool)bStack9;
		return;
		}
		
	*/
	return;
}

void TwinsanitySkin::FUN_00103430(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanitySkin::FUN_00103430(TwinsanitySkin *this,int param_1){
		PhysicalPool *this_00;
		int *base;
		undefined **bufferIndex;
		_D3DDevice_SetStreamSource@12(0,(D3DVertexBuffer8 *)0x0,0);
		XGRAPHC::XGSetVertexBufferHeader(this->vertexBufferLength[param_1],0,0,0,this->vertexBuffer[param_1],0);
		bufferIndex = this->vertexBufferData + param_1;
		this_00 = PhysicalPool::GetPool();
		base = PhysicalPool::GetBufferPointerByIndex(this_00,(int *)bufferIndex);
		D3DResource::Register((D3DResource *)this->vertexBuffer[param_1],(int)base);
		return;
		}
		
	*/
	return;
}

void TwinsanitySkin::Render(byte param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanitySkin::Render(TwinsanitySkin *this,byte param_1,int param_2){
		TwinsanityMaterialShader *this_00;
		uint uVar1;
		ShaderProgramAbstract *this_01;
		undefined4 *puVar2;
		uint uVar3;
		int *piVar4;
		int iVar5;
		AutoClass44 *pAVar6;
		uint uVar7;
		uint local_524;
		int local_51c;
		uint local_518;
		uint local_514;
		int local_50c [65];
		undefined4 auStack1032 [256];
		undefined4 local_8;
		undefined4 local_4;
		uVar3 = (uint)param_1;
		FUN_00103430(this,uVar3);
		_D3DDevice_SetStreamSource@12(0,this->vertexBuffer[uVar3],0x30);
		@D3DDevice_SetVertexShaderConstantNotInlineFast@12(0x60,(undefined8 *)(param_2 + 0x10),0x10);
		@D3DDevice_SetVertexShaderConstantNotInlineFast@12(0x65,(undefined8 *)(param_2 + 0x90),0x1c);
		@D3DDevice_SetVertexShaderConstantNotInlineFast@12(0xbc,(undefined8 *)(param_2 + 0x50),0x10);
		this_00 = this->materials[uVar3]->shader;
		TwinsanityMaterialShader::FUN_00105840(this_00);
		uVar7 = SHADER_SKINNED_GEOM;
		uVar1 = this_00->shaderProgramCnt;
		if (uVar1 == 1) {
		DAT_00402a08 = '\x01';
		_D3DDevice_SetVertexShaderInput@12((int *)0x0,(int *)0x0,(int **)0x0);
		_D3DDevice_SetVertexShader@4(uVar7);
		}
		else {
		local_50c[0] = -1;
		local_8 = 0;
		local_4 = 0;
		FUN_0011a0c0(local_50c,&SHADER_SKINNED_GEOM);
		uVar7 = 1;
		if (1 < uVar1) {
		do {
		this_01 = this_00->shaderPrograms[uVar7];
		iVar5 = (*this_01->vtable->GetNum)();
		switch(iVar5) {
		case 0x10:puVar2 = &DAT_003a2410;
		break;
		default:goto switchD_00110840_caseD_11;
		case 0x14:case 0x17:case 0x1d:puVar2 = &SHADER_TYPE_1;
		break;
		case 0x18:case 0x19:puVar2 = &DAT_003a1f00;
		}
		FUN_00102880((int)local_50c,(int)puVar2,(int)local_50c);
		ShaderProgramAbstract::FUN_0010cd30(this_01);
		switchD_00110840_caseD_11:uVar7 = uVar7 + 1;
		}
		 while (uVar7 < uVar1);
		}
		DAT_00402a08 = AutoClass44::FUN_001027a0(&ENV_CLASS_205,(int)&DAT_003ec3d8);
		piVar4 = &DAT_003ec3d8;
		pAVar6 = &ENV_CLASS_205;
		for (iVar5 = 0x40;
		 iVar5 != 0;
		 iVar5 = iVar5 + -1) {
		pAVar6->vertexAttributeFormat = *piVar4;
		piVar4 = piVar4 + 1;
		pAVar6 = (AutoClass44 *)&pAVar6->field1_0x4;
		}
		_D3DDevice_LoadVertexShaderProgram@8(auStack1032,0);
		if (DAT_00402a08 == '\0') {
		_D3DDevice_SelectVertexShaderDirect@8((undefined4 *)0x0,0);
		}
		else {
		_D3DDevice_SelectVertexShaderDirect@8(&ENV_CLASS_205.vertexAttributeFormat,0);
		DAT_00402a08 = '\0';
		}
		if (local_50c[0] != -1) {
		_D3DDevice_DeleteVertexShader@4(local_50c[0]);
		}
		}
		local_518 = 0;
		local_51c = 0;
		local_524 = 0;
		if (this->cnt4[uVar3] != 0) {
		do {
		local_514 = this->array4B[uVar3][local_524];
		if (local_514 != 0) {
		uVar7 = 0x70;
		iVar5 = local_51c << 2;
		do {
		@D3DDevice_SetVertexShaderConstantNotInlineFast@12(uVar7,(undefined8 *)(*(int *)(iVar5 + (int)this->array3[uVar3]) * 0x40 +*(int *)(param_2 + 4)),0x10);
		iVar5 = iVar5 + 4;
		uVar7 = uVar7 + 4;
		local_514 = local_514 - 1;
		}
		 while (local_514 != 0);
		}
		_D3DDevice_DrawVertices@12(6,local_518,this->array4A[uVar3][local_524]);
		local_518 = local_518 + this->array4A[uVar3][local_524];
		local_51c = local_51c + this->array4B[uVar3][local_524];
		local_524 = local_524 + 1;
		}
		 while (local_524 < this->cnt4[uVar3]);
		}
		uVar7 = 1;
		if ((1 < uVar1) && (1 < uVar1)) {
		do {
		ShaderProgramAbstract::FUN_00104d60(this_00->shaderPrograms[uVar7]);
		uVar7 = uVar7 + 1;
		}
		 while (uVar7 < uVar1);
		}
		return;
		}
		
	*/
	return;
}

void TwinsanitySkin::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanitySkin::Construct(TwinsanitySkin *this,uint param_1){
		*(undefined2 *)&this->field1_0x4 = 0;
		this->field1_0x4 = this->field1_0x4 & 0xfffcffff;
		this->id = param_1;
		this->vtable = &TwinsanityGraphics_VT_Skin;
		this->materials = (TwinsanityMaterial **)0x0;
		*(undefined4 *)&this->field_0x10 = 0;
		this->field8_0x14 = false;
		this->field_0x15 = 0;
		this->field12_0x18 = (uint *)0x0;
		this->vertexBufferData = (undefined **)0x0;
		this->vertexBuffer = (D3DVertexBuffer8 **)0x0;
		this->field16_0x28 = (uint *)0x0;
		this->cnt3 = (uint *)0x0;
		this->cnt = 0;
		this->vertexBufferLength = (uint *)0x0;
		return;
		}
		
	*/
	return;
}

void TwinsanitySkin::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanitySkin::Write(TwinsanitySkin *this,MemoryStream *stream){
		PhysicalPool *this_00;
		int *data;
		uint i;
		undefined **bufferIndex;
		(*stream->vtable->WriteInt3)(stream,this->cnt);
		i = 0;
		if (this->cnt != 0) {
		do {
		(*stream->vtable->WriteInt3)(stream,this->materials[i]->id);
		(*stream->vtable->WriteInt3)(stream,this->vertexBufferLength[i]);
		(*stream->vtable->WriteInt3)(stream,this->field16_0x28[i]);
		(*stream->vtable->WriteInt3)(stream,this->cnt3[i]);
		(*stream->vtable->WriteInt3)(stream,this->cnt4[i]);
		(*stream->vtable->Write)(stream,(byte *)this->array4A[i],this->cnt4[i] << 2);
		(*stream->vtable->Write)(stream,(byte *)this->array4B[i],this->cnt4[i] << 2);
		(*stream->vtable->Write)(stream,(byte *)this->array3[i],this->cnt3[i] << 2);
		bufferIndex = this->vertexBufferData + i;
		this_00 = PhysicalPool::GetPool();
		data = PhysicalPool::GetBufferPointerByIndex(this_00,(int *)bufferIndex);
		(*stream->vtable->Write)(stream,(byte *)data,this->vertexBufferLength[i]);
		i = i + 1;
		}
		 while (i < this->cnt);
		}
		return;
		}
		
	*/
	return;
}

