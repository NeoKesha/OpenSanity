#include "headers/Known/Graphics/Assets/TwinsanityBlendSkin.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Material/TwinsanityMaterial.h"
void TwinsanityBlendSkin::FUN_00103990(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanityBlendSkin::FUN_00103990(TwinsanityBlendSkin *this,int param_1){
		PhysicalPool *pPVar1;
		int *piVar2;
		uint uVar3;
		int iVar4;
		uVar3 = 0;
		do {
		_D3DDevice_SetStreamSource@12(uVar3,(D3DVertexBuffer8 *)0x0,0);
		uVar3 = uVar3 + 1;
		}
		 while (uVar3 < 0xf);
		iVar4 = param_1 * 4;
		XGRAPHC::XGSetVertexBufferHeader(this->vertexBufferLength[param_1],0,0,0,this->vertexBuffer[param_1],0);
		piVar2 = this->field10_0x18 + param_1;
		pPVar1 = PhysicalPool::GetPool();
		piVar2 = PhysicalPool::GetBufferPointerByIndex(pPVar1,piVar2);
		D3DResource::Register((D3DResource *)this->vertexBuffer[param_1],(int)piVar2);
		uVar3 = 0;
		if (this->vertexBufferCnt != 0) {
		do {
		XGRAPHC::XGSetVertexBufferHeader(this->vertexBufferLength[param_1],0,0,0,*(D3DVertexBuffer8 **)(*(int *)(iVar4 + *(int *)&this->field_0x24) + uVar3 * 4),0);
		piVar2 = (int *)(*(int *)(*(int *)&this->field_0x1c + iVar4) + uVar3 * 4);
		pPVar1 = PhysicalPool::GetPool();
		piVar2 = PhysicalPool::GetBufferPointerByIndex(pPVar1,piVar2);
		D3DResource::Register(*(D3DResource **)(*(int *)(iVar4 + *(int *)&this->field_0x24) + uVar3 * 4),(int)piVar2);
		uVar3 = uVar3 + 1;
		}
		 while (uVar3 < this->vertexBufferCnt);
		}
		return;
		}
		
	*/
	return;
}

void TwinsanityBlendSkin::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall TwinsanityBlendSkin::Dispose(TwinsanityBlendSkin *this){
		int iVar1;
		TwinsanityMaterial *element;
		TwinsanityMaterialShader *ptr;
		ShaderProgramAbstract *this_00;
		int iVar2;
		PhysicalPool *pPVar3;
		void *ptr_00;
		uint uVar4;
		int *ptr_01;
		uint local_8;
		(this->parent).vtable = (TwinsanityGraphicsBase_VTable *)&TwinsanityGraphics_VT_BlendSkin;
		uVar4 = 0;
		do {
		_D3DDevice_SetStreamSource@12(uVar4,(D3DVertexBuffer8 *)0x0,0);
		uVar4 = uVar4 + 1;
		}
		 while (uVar4 < 0xf);
		if (this->submodels != 0) {
		local_8 = 0;
		if (this->submodels != 0) {
		do {
		iVar1 = local_8 * 4;
		element = this->materials[local_8];
		if (element->id == 0xffffffff) {
		ptr = element->shader;
		if (ptr != (TwinsanityMaterialShader *)0x0) {
		uVar4 = 0;
		if (ptr->shaderProgramCnt != 0) {
		do {
		this_00 = ptr->shaderPrograms[uVar4];
		if (this_00 != (ShaderProgramAbstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		}
		uVar4 = uVar4 + 1;
		}
		 while (uVar4 < ptr->shaderProgramCnt);
		}
		VirtualPool::FreeMemory(ptr);
		}
		VirtualPool::FreeMemory(element);
		}
		else {
		(*(ENV_CLASS_187_SECTION_MATERIALS.parent)->Method4)(&ENV_CLASS_187_SECTION_MATERIALS.parent,(undefined *)element);
		}
		ptr_01 = this->field10_0x18 + local_8;
		pPVar3 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar3,ptr_01);
		VirtualPool::FreeMemory(this->vertexBuffer[local_8]);
		uVar4 = 0;
		if (this->vertexBufferCnt != 0) {
		do {
		ptr_00 = (void *)(*(int *)(*(int *)&this->field_0x1c + iVar1) + uVar4 * 4);
		pPVar3 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar3,ptr_00);
		VirtualPool::FreeMemory(*(void **)(*(int *)(*(int *)&this->field_0x24 + iVar1) + uVar4 * 4));
		uVar4 = uVar4 + 1;
		}
		 while (uVar4 < this->vertexBufferCnt);
		}
		iVar2 = *(int *)(iVar1 + *(int *)&this->field_0x1c);
		if (iVar2 != 0) {
		VirtualPool::FreeMemory((void *)(iVar2 + -4));
		}
		VirtualPool::FreeMemory(*(void **)(*(int *)&this->field_0x24 + iVar1));
		VirtualPool::FreeMemory((void *)this->field23_0x34[local_8]);
		VirtualPool::FreeMemory((void *)this->field24_0x38[local_8]);
		VirtualPool::FreeMemory((void *)this->field25_0x3c[local_8]);
		local_8 = local_8 + 1;
		}
		 while (local_8 < this->submodels);
		}
		VirtualPool::FreeMemory(this->materials);
		VirtualPool::FreeMemory(this->vertexBuffer);
		VirtualPool::FreeMemory(*(void **)&this->field_0x24);
		VirtualPool::FreeMemory(this->field22_0x30);
		VirtualPool::FreeMemory(this->field20_0x28);
		VirtualPool::FreeMemory(this->field21_0x2c);
		VirtualPool::FreeMemory(this->field23_0x34);
		VirtualPool::FreeMemory(this->field24_0x38);
		VirtualPool::FreeMemory(this->field25_0x3c);
		VirtualPool::FreeMemory(this->vertexBufferLength);
		if (this->field10_0x18 != (int *)0x0) {
		VirtualPool::FreeMemory(this->field10_0x18 + -1);
		}
		VirtualPool::FreeMemory(*(void **)&this->field_0x1c);
		}
		(this->parent).vtable = (TwinsanityGraphicsBase_VTable *)&TwinsanityGraphics_VT_Base;
		return;
		}
		
	*/
	return;
}

void TwinsanityBlendSkin::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanityBlendSkin::Read(TwinsanityBlendSkin *this,MemoryStream *stream){
		uint *val;
		TwinsanityMaterialShader *pTVar1;
		bool bVar2;
		TwinsanityMaterial **ppTVar3;
		D3DVertexBuffer8 **ppDVar4;
		uint uVar5;
		void *pvVar6;
		uint *puVar7;
		TwinsanityMaterial *pTVar8;
		PhysicalPool *pool;
		int *piVar9;
		D3DVertexBuffer8 *pDVar10;
		byte bVar11;
		byte bVar12;
		int iVar13;
		uint *puVar14;
		int iVar15;
		uint length;
		bool bVar16;
		byte bStack25;
		uint j;
		uint i;
		uint uStack16;
		int *piStack12;
		int iStack8;
		int iStack4;
		val = &this->submodels;
		(*stream->vtable->ReadUInt)(stream,val);
		(*stream->vtable->ReadUInt)(stream,&this->vertexBufferCnt);
		ppTVar3 = (TwinsanityMaterial **)VirtualPool::AllocateMemory(*val << 2);
		this->materials = ppTVar3;
		ppDVar4 = (D3DVertexBuffer8 **)VirtualPool::AllocateMemory(*val << 2);
		this->vertexBuffer = ppDVar4;
		uVar5 = 0;
		if (*val != 0) {
		do {
		this->vertexBuffer[uVar5] = (D3DVertexBuffer8 *)0x0;
		uVar5 = uVar5 + 1;
		}
		 while (uVar5 < *val);
		}
		pvVar6 = VirtualPool::AllocateMemory(*val << 2);
		uVar5 = *val;
		*(void **)&this->field_0x24 = pvVar6;
		puVar7 = (uint *)VirtualPool::AllocateMemory(uVar5 * 4 + 4);
		if (puVar7 == (uint *)0x0) {
		puVar7 = (uint *)0x0;
		}
		else {
		*puVar7 = uVar5;
		puVar7 = puVar7 + 1;
		puVar14 = puVar7;
		if (-1 < (int)(uVar5 - 1)) {
		for (;
		 uVar5 != 0;
		 uVar5 = uVar5 - 1) {
		*puVar14 = 0xffffffff;
		puVar14 = puVar14 + 1;
		}
		}
		}
		this->field10_0x18 = (int *)puVar7;
		pvVar6 = VirtualPool::AllocateMemory(*val << 2);
		*(void **)&this->field_0x1c = pvVar6;
		j = 0;
		if (*val != 0) {
		do {
		pvVar6 = VirtualPool::AllocateMemory(this->vertexBufferCnt << 2);
		*(void **)(*(int *)&this->field_0x24 + j * 4) = pvVar6;
		uVar5 = this->vertexBufferCnt;
		puVar7 = (uint *)VirtualPool::AllocateMemory(uVar5 * 4 + 4);
		if (puVar7 == (uint *)0x0) {
		puVar7 = (uint *)0x0;
		}
		else {
		*puVar7 = uVar5;
		puVar7 = puVar7 + 1;
		puVar14 = puVar7;
		if (-1 < (int)(uVar5 - 1)) {
		for (;
		 uVar5 != 0;
		 uVar5 = uVar5 - 1) {
		*puVar14 = 0xffffffff;
		puVar14 = puVar14 + 1;
		}
		}
		}
		*(uint **)(*(int *)&this->field_0x1c + j * 4) = puVar7;
		j = j + 1;
		}
		 while (j < *val);
		}
		puVar7 = (uint *)VirtualPool::AllocateMemory(*val << 2);
		this->field22_0x30 = puVar7;
		puVar7 = (uint *)VirtualPool::AllocateMemory(*val << 2);
		this->field20_0x28 = puVar7;
		puVar7 = (uint *)VirtualPool::AllocateMemory(*val << 2);
		this->field21_0x2c = puVar7;
		puVar7 = (uint *)VirtualPool::AllocateMemory(*val << 2);
		this->field23_0x34 = puVar7;
		puVar7 = (uint *)VirtualPool::AllocateMemory(*val << 2);
		this->field24_0x38 = puVar7;
		puVar7 = (uint *)VirtualPool::AllocateMemory(*val << 2);
		this->field25_0x3c = puVar7;
		puVar7 = (uint *)VirtualPool::AllocateMemory(*val << 2);
		this->vertexBufferLength = puVar7;
		j = 0;
		if (*val != 0) {
		do {
		(*stream->vtable->ReadUInt)(stream,&uStack16);
		iVar15 = j * 4;
		pTVar8 = (TwinsanityMaterial *)(*(ENV_CLASS_187_SECTION_MATERIALS.parent)->Create)(&ENV_CLASS_187_SECTION_MATERIALS.parent,(undefined *)&uStack16,0);
		this->materials[j] = pTVar8;
		(*stream->vtable->ReadUInt)(stream,this->vertexBufferLength + j);
		(*stream->vtable->ReadUInt)(stream,this->field20_0x28 + j);
		(*stream->vtable->ReadUInt)(stream,this->field21_0x2c + j);
		(*stream->vtable->ReadUInt)(stream,this->field22_0x30 + j);
		pvVar6 = VirtualPool::AllocateMemory(this->field22_0x30[j] << 2);
		this->field23_0x34[j] = (uint)pvVar6;
		pvVar6 = VirtualPool::AllocateMemory(this->field22_0x30[j] << 2);
		this->field24_0x38[j] = (uint)pvVar6;
		(*stream->vtable->Read)(stream,(int *)this->field23_0x34[j],this->field22_0x30[j] << 2,1);
		(*stream->vtable->Read)(stream,(int *)this->field24_0x38[j],this->field22_0x30[j] << 2,1);
		pvVar6 = VirtualPool::AllocateMemory(this->field21_0x2c[j] << 2);
		this->field25_0x3c[j] = (uint)pvVar6;
		(*stream->vtable->Read)(stream,(int *)this->field25_0x3c[j],this->field21_0x2c[j] << 2,1);
		uVar5 = this->vertexBufferLength[j];
		bVar16 = true;
		bVar2 = false;
		piVar9 = &iStack8;
		pool = PhysicalPool::GetPool();
		PhysicalPool::CreateBuffer(pool,piVar9,uVar5,bVar2,bVar16);
		this->field10_0x18[j] = (int)pool->alignedStart;
		piVar9 = this->field10_0x18 + j;
		pool = PhysicalPool::GetPool();
		piVar9 = PhysicalPool::GetBufferPointerByIndex(pool,piVar9);
		(*stream->vtable->Read)(stream,piVar9,this->vertexBufferLength[j],1);
		pDVar10 = (D3DVertexBuffer8 *)VirtualPool::AllocateMemory(0xc);
		this->vertexBuffer[j] = pDVar10;
		XGRAPHC::XGSetVertexBufferHeader(this->vertexBufferLength[j],0,0,0,this->vertexBuffer[j],0);
		D3DResource::Register((D3DResource *)this->vertexBuffer[j],(int)piVar9);
		uVar5 = this->field20_0x28[j] * 0xc;
		i = 0;
		if (this->vertexBufferCnt != 0) {
		do {
		bVar16 = true;
		bVar2 = false;
		piVar9 = &iStack4;
		length = uVar5;
		pool = PhysicalPool::GetPool();
		PhysicalPool::CreateBuffer(pool,piVar9,length,bVar2,bVar16);
		iVar13 = i * 4;
		*(void **)(*(int *)(iVar15 + *(int *)&this->field_0x1c) + iVar13) = pool->alignedStart;
		piVar9 = (int *)(*(int *)(iVar15 + *(int *)&this->field_0x1c) + iVar13);
		pool = PhysicalPool::GetPool();
		piStack12 = PhysicalPool::GetBufferPointerByIndex(pool,piVar9);
		(*stream->vtable->Read)(stream,piStack12,uVar5,1);
		pvVar6 = VirtualPool::AllocateMemory(0xc);
		*(void **)(*(int *)(*(int *)&this->field_0x24 + iVar15) + iVar13) = pvVar6;
		XGRAPHC::XGSetVertexBufferHeader(uVar5,0,0,0,*(D3DVertexBuffer8 **)(*(int *)(*(int *)&this->field_0x24 + iVar15) + iVar13),0);
		D3DResource::Register(*(D3DResource **)(*(int *)(*(int *)&this->field_0x24 + iVar15) + iVar13),(int)piStack12);
		i = i + 1;
		}
		 while (i < this->vertexBufferCnt);
		}
		j = j + 1;
		}
		 while (j < this->submodels);
		}
		stream = (MemoryStream *)0x0;
		bStack25 = 0;
		j = 0;
		if (this->submodels == 0) {
		this->field6_0x14 = false;
		this->field8_0x16 = false;
		return;
		}
		do {
		pTVar1 = this->materials[j]->shader;
		bVar11 = 0;
		uVar5 = 0;
		if (pTVar1->shaderProgramCnt != 0) {
		do {
		bVar2 = (*pTVar1->shaderPrograms[uVar5]->vtable->IsA)();
		bVar11 = bVar11 | bVar2;
		uVar5 = uVar5 + 1;
		}
		 while (uVar5 < pTVar1->shaderProgramCnt);
		}
		stream = (MemoryStream *)(uint)((byte)stream | bVar11);
		pTVar1 = this->materials[j]->shader;
		bVar12 = 0;
		uVar5 = 0;
		if (pTVar1->shaderProgramCnt != 0) {
		do {
		bVar2 = (*pTVar1->shaderPrograms[uVar5]->vtable->IsC)();
		bVar12 = bVar12 | bVar2;
		uVar5 = uVar5 + 1;
		}
		 while (uVar5 < pTVar1->shaderProgramCnt);
		}
		bStack25 = bStack25 | bVar12;
		j = j + 1;
		}
		 while (j < this->submodels);
		this->field6_0x14 = (bool)((byte)stream | bVar11);
		this->field8_0x16 = (bool)bStack25;
		return;
		}
		
	*/
	return;
}

void TwinsanityBlendSkin::Render(byte param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanityBlendSkin::Render(TwinsanityBlendSkin *this,byte param_1,int param_2){
		TwinsanityMaterialShader *this_00;
		ShaderProgramAbstract *this_01;
		uint uVar1;
		uint uVar2;
		undefined4 *puVar3;
		int *piVar4;
		uint uVar5;
		undefined4 *puVar6;
		AutoClass44 *pAVar7;
		int iVar8;
		uint local_57c;
		uint local_578;
		uint local_574;
		int local_570;
		int local_56c;
		undefined8 local_560;
		undefined4 local_558;
		undefined4 local_554;
		undefined4 local_550;
		undefined4 local_54c;
		undefined4 local_548;
		undefined4 local_544;
		undefined4 local_540;
		undefined4 local_53c;
		undefined4 local_538;
		undefined4 local_534;
		undefined4 local_530;
		undefined4 local_52c;
		undefined4 local_528;
		undefined4 local_524;
		int local_520;
		undefined4 local_51c [64];
		undefined4 local_41c [256];
		uint local_1c;
		uint local_18;
		FUN_00103990(this,(uint)param_1);
		_D3DDevice_SetStreamSource@12(0,this->vertexBuffer[param_1],0x30);
		@D3DDevice_SetVertexShaderConstantNotInlineFast@12(0x60,(undefined8 *)(param_2 + 0x60),0x10);
		@D3DDevice_SetVertexShaderConstantNotInlineFast@12(0x65,(undefined8 *)(param_2 + 0xe0),0x1c);
		@D3DDevice_SetVertexShaderConstantNotInlineFast@12(0xbc,(undefined8 *)(param_2 + 0xa0),0x10);
		uVar2 = 0;
		local_554 = 0;
		local_558 = 0;
		local_560._4_4_ = 0;
		local_560._0_4_ = 0;
		local_544 = 0;
		local_548 = 0;
		local_54c = 0;
		local_550 = 0;
		local_534 = 0;
		local_538 = 0;
		local_53c = 0;
		local_540 = 0;
		local_528 = 0;
		local_52c = 0;
		local_530 = 0;
		local_524 = 0;
		if (*(int *)(param_2 + 8) != 0) {
		piVar4 = (int *)(param_2 + 0xc);
		do {
		iVar8 = *(int *)&this->field_0x24;
		*(int *)((int)&local_560 + uVar2 * 4) = piVar4[10];
		uVar2 = uVar2 + 1;
		_D3DDevice_SetStreamSource@12(uVar2,*(D3DVertexBuffer8 **)(*(int *)(iVar8 + (uint)param_1 * 4) + *piVar4 * 4),0xc);
		piVar4 = piVar4 + 1;
		}
		 while (uVar2 < *(uint *)(param_2 + 8));
		}
		@D3DDevice_SetVertexShaderConstantNotInlineFast@12(0x6c,&local_560,0xc);
		this_00 = this->materials[param_1]->shader;
		TwinsanityMaterialShader::FUN_00105840(this_00);
		uVar1 = SHADER_BLEND_SKIN_2;
		uVar5 = SHADER_BLEND_SKIN_1;
		uVar2 = this_00->shaderProgramCnt;
		if (uVar2 == 1) {
		DAT_00402a08 = '\x01';
		if (*(int *)(param_2 + 8) == 0) {
		_D3DDevice_SetVertexShaderInput@12((int *)0x0,(int *)0x0,(int **)0x0);
		_D3DDevice_SetVertexShader@4(uVar1);
		}
		else {
		_D3DDevice_SetVertexShaderInput@12((int *)0x0,(int *)0x0,(int **)0x0);
		_D3DDevice_SetVertexShader@4(uVar5);
		}
		}
		else {
		local_520 = -1;
		puVar3 = &DAT_003a05a4;
		puVar6 = local_51c;
		for (uVar5 = DAT_003a0aa4 >> 2;
		 uVar5 != 0;
		 uVar5 = uVar5 - 1) {
		*puVar6 = *puVar3;
		puVar3 = puVar3 + 1;
		puVar6 = puVar6 + 1;
		}
		for (uVar5 = DAT_003a0aa4 & 3;
		 uVar5 != 0;
		 uVar5 = uVar5 - 1) {
		*(undefined *)puVar6 = *(undefined *)puVar3;
		puVar3 = (undefined4 *)((int)puVar3 + 1);
		puVar6 = (undefined4 *)((int)puVar6 + 1);
		}
		local_1c = DAT_003a0aa4;
		puVar3 = &DAT_003a06a4;
		puVar6 = local_41c;
		for (uVar5 = DAT_003a0aa8 >> 2;
		 uVar5 != 0;
		 uVar5 = uVar5 - 1) {
		*puVar6 = *puVar3;
		puVar3 = puVar3 + 1;
		puVar6 = puVar6 + 1;
		}
		for (uVar5 = DAT_003a0aa8 & 3;
		 uVar5 != 0;
		 uVar5 = uVar5 - 1) {
		*(undefined *)puVar6 = *(undefined *)puVar3;
		puVar3 = (undefined4 *)((int)puVar3 + 1);
		puVar6 = (undefined4 *)((int)puVar6 + 1);
		}
		uVar5 = 1;
		local_18 = DAT_003a0aa8;
		if (1 < uVar2) {
		do {
		this_01 = this_00->shaderPrograms[uVar5];
		iVar8 = (*this_01->vtable->GetNum)();
		switch(iVar8) {
		case 0x10:puVar3 = &DAT_003a2410;
		break;
		default:goto switchD_00111524_caseD_11;
		case 0x14:case 0x17:case 0x1d:puVar3 = &SHADER_TYPE_1;
		break;
		case 0x18:case 0x19:puVar3 = &DAT_003a1f00;
		}
		FUN_00102880((int)&local_520,(int)puVar3,(int)&local_520);
		ShaderProgramAbstract::FUN_0010cd30(this_01);
		switchD_00111524_caseD_11:uVar5 = uVar5 + 1;
		}
		 while (uVar5 < uVar2);
		}
		DAT_00402a08 = AutoClass44::FUN_001027a0(&ENV_CLASS_205,(int)&DAT_003eaae0);
		piVar4 = &DAT_003eaae0;
		pAVar7 = &ENV_CLASS_205;
		for (iVar8 = 0x40;
		 iVar8 != 0;
		 iVar8 = iVar8 + -1) {
		pAVar7->vertexAttributeFormat = *piVar4;
		piVar4 = piVar4 + 1;
		pAVar7 = (AutoClass44 *)&pAVar7->field1_0x4;
		}
		_D3DDevice_LoadVertexShaderProgram@8(local_41c,0);
		if (DAT_00402a08 == '\0') {
		_D3DDevice_SelectVertexShaderDirect@8((undefined4 *)0x0,0);
		}
		else {
		_D3DDevice_SelectVertexShaderDirect@8(&ENV_CLASS_205.vertexAttributeFormat,0);
		DAT_00402a08 = '\0';
		}
		if (local_520 != -1) {
		_D3DDevice_DeleteVertexShader@4(local_520);
		}
		}
		uVar5 = (uint)param_1;
		local_574 = 0;
		local_570 = 0;
		local_57c = 0;
		if (this->field22_0x30[uVar5] != 0) {
		do {
		local_56c = *(int *)(this->field24_0x38[uVar5] + local_57c * 4);
		if (local_56c != 0) {
		local_578 = 0x70;
		iVar8 = local_570 << 2;
		do {
		@D3DDevice_SetVertexShaderConstantNotInlineFast@12(local_578,(undefined8 *)(*(int *)(iVar8 + this->field25_0x3c[uVar5]) * 0x40 + *(int *)(param_2 + 4)),0x10);
		local_578 = local_578 + 4;
		iVar8 = iVar8 + 4;
		local_56c = local_56c + -1;
		}
		 while (local_56c != 0);
		}
		_D3DDevice_DrawVertices@12(6,local_574,*(uint *)(this->field23_0x34[uVar5] + local_57c * 4));
		local_574 = local_574 + *(int *)(this->field23_0x34[uVar5] + local_57c * 4);
		local_570 = local_570 + *(int *)(this->field24_0x38[uVar5] + local_57c * 4);
		local_57c = local_57c + 1;
		}
		 while (local_57c < this->field22_0x30[uVar5]);
		}
		if (1 < uVar2) {
		uVar5 = 1;
		do {
		ShaderProgramAbstract::FUN_00104d60(this_00->shaderPrograms[uVar5]);
		uVar5 = uVar5 + 1;
		}
		 while (uVar5 < uVar2);
		}
		return;
		}
		
	*/
	return;
}

void TwinsanityBlendSkin::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinsanityBlendSkin * __thiscall TwinsanityBlendSkin::Construct(TwinsanityBlendSkin *this,uint param_1){
		uint *puVar1;
		*(undefined2 *)&(this->parent).field1_0x4 = 0;
		puVar1 = &(this->parent).field1_0x4;
		*puVar1 = *puVar1 & 0xfffcffff;
		(this->parent).id = param_1;
		(this->parent).vtable = (TwinsanityGraphicsBase_VTable *)&TwinsanityGraphics_VT_BlendSkin;
		this->materials = (TwinsanityMaterial **)0x0;
		*(undefined4 *)&this->field_0x10 = 0;
		this->field6_0x14 = false;
		this->field_0x15 = 0;
		this->field10_0x18 = (int *)0x0;
		*(undefined4 *)&this->field_0x1c = 0;
		this->vertexBuffer = (D3DVertexBuffer8 **)0x0;
		*(undefined4 *)&this->field_0x24 = 0;
		this->field20_0x28 = (uint *)0x0;
		this->field21_0x2c = (uint *)0x0;
		this->submodels = 0;
		this->vertexBufferLength = (uint *)0x0;
		return this;
		}
		
	*/
	return;
}

void TwinsanityBlendSkin::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanityBlendSkin::Write(TwinsanityBlendSkin *this,MemoryStream *stream){
		uint uVar1;
		PhysicalPool *pool;
		int *piVar2;
		int *vertexBufferIndex;
		uint i;
		MemoryStream *_stream;
		_stream = stream;
		(*stream->vtable->WriteInt3)(stream,this->submodels);
		(*stream->vtable->WriteInt3)(stream,this->vertexBufferCnt);
		stream = (MemoryStream *)0x0;
		if (this->submodels != 0) {
		do {
		(*_stream->vtable->WriteInt3)(_stream,this->materials[(int)stream]->id);
		(*_stream->vtable->WriteInt3)(_stream,this->vertexBufferLength[(int)stream]);
		(*_stream->vtable->WriteInt3)(_stream,this->field20_0x28[(int)stream]);
		(*_stream->vtable->WriteInt3)(_stream,this->field21_0x2c[(int)stream]);
		(*_stream->vtable->WriteInt3)(_stream,this->field22_0x30[(int)stream]);
		(*_stream->vtable->Write)(_stream,(byte *)this->field23_0x34[(int)stream],this->field22_0x30[(int)stream] << 2);
		(*_stream->vtable->Write)(_stream,(byte *)this->field24_0x38[(int)stream],this->field22_0x30[(int)stream] << 2);
		(*_stream->vtable->Write)(_stream,(byte *)this->field25_0x3c[(int)stream],this->field21_0x2c[(int)stream] << 2);
		vertexBufferIndex = this->field10_0x18 + (int)stream;
		pool = PhysicalPool::GetPool();
		piVar2 = PhysicalPool::GetBufferPointerByIndex(pool,vertexBufferIndex);
		(*_stream->vtable->Write)(_stream,(byte *)piVar2,this->vertexBufferLength[(int)stream]);
		uVar1 = this->field20_0x28[(int)stream];
		i = 0;
		if (this->vertexBufferCnt != 0) {
		do {
		piVar2 = (int *)(*(int *)(*(int *)&this->field_0x1c + (int)stream * 4) + i * 4);
		pool = PhysicalPool::GetPool();
		piVar2 = PhysicalPool::GetBufferPointerByIndex(pool,piVar2);
		(*_stream->vtable->Write)(_stream,(byte *)piVar2,uVar1 * 0xc);
		i = i + 1;
		}
		 while (i < this->vertexBufferCnt);
		}
		stream = (MemoryStream *)((int)&stream->vtable + 1);
		}
		 while (stream < (MemoryStream *)this->submodels);
		}
		return;
		}
		
	*/
	return;
}

