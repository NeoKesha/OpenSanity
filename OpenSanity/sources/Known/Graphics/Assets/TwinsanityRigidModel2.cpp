#include "headers/Known/Graphics/Assets/TwinsanityRigidModel2.h"

#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Model/TwinsanityModel.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Material/TwinsanityMaterial.h"
void TwinsanityRigidModel2::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall TwinsanityRigidModel2::Dispose(TwinsanityRigidModel2 *this){
		TwinsanityMaterial *element;
		TwinsanityMaterialShader *ptr;
		ShaderProgramAbstract *this_00;
		TwinsanityModel *this_01;
		uint uVar1;
		uint local_4;
		this->vtable = &TwinsanityGraphics_VT_RigidModel2;
		local_4 = 0;
		if (this->model->submodels != 0) {
		do {
		element = this->materialIds[local_4];
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
		local_4 = local_4 + 1;
		}
		 while (local_4 < this->model->submodels);
		}
		this_01 = this->model;
		if (this_01->id == 0xffffffff) {
		TwinsanityModel::Dispose(this_01);
		VirtualPool::FreeMemory(this_01);
		}
		else {
		(*(ENV_CLASS_182_SECTION_MODELS.parent)->Method4)(&ENV_CLASS_182_SECTION_MODELS.parent,(undefined *)this_01);
		}
		VirtualPool::FreeMemory(this->materialIds);
		this->vtable = &TwinsanityGraphics_VT_Base;
		return;
		}
		
	*/
	return;
}

void TwinsanityRigidModel2::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanityRigidModel2::Read(TwinsanityRigidModel2 *this,MemoryStream *stream){
		bool bVar1;
		TwinsanityMaterial **idsArray;
		TwinsanityMaterial *mat;
		TwinsanityModel *uVar8;
		byte bVar2;
		uint cnt;
		TwinsanityMaterial ***id;
		uint uVar3;
		uint i;
		byte bStack22;
		byte bStack21;
		TwinsanityMaterial **ppTStack20;
		int iStack16;
		TwinsanityMaterial **ppTStack12;
		TwinsanityRigidModel2 *local_8;
		int materialId;
		TwinsanityMaterialShader *shader;
		i = 0;
		materialId = 0;
		local_8 = this;
		(*stream->vtable->Read)(stream,&materialId,4,1);
		id = &this->materialIds;
		(*stream->vtable->Read)(stream,(int *)id,4,1);
		cnt = (uint)*id;
		ppTStack12 = (TwinsanityMaterial **)cnt;
		idsArray = (TwinsanityMaterial **)VirtualPool::AllocateMemory(cnt * 4);
		*id = idsArray;
		if ((TwinsanityMaterial **)cnt != (TwinsanityMaterial **)0x0) {
		do {
		(*stream->vtable->Read)(stream,(int *)&stream,4,1);
		mat = (TwinsanityMaterial *)(*(ENV_CLASS_187_SECTION_MATERIALS.parent)->Create)(&ENV_CLASS_187_SECTION_MATERIALS.parent,(undefined *)&stream,0);
		(*id)[i] = mat;
		i = i + 1;
		}
		 while (i < cnt);
		}
		iStack16 = 0;
		(*stream->vtable->Read)(stream,&iStack16,4,1);
		uVar8 = (TwinsanityModel *)(*(ENV_CLASS_182_SECTION_MODELS.parent)->Create)(&ENV_CLASS_182_SECTION_MODELS.parent,(undefined *)&iStack16,0);
		local_8->model = uVar8;
		*(undefined4 *)&local_8->field_0x14 = 0;
		stream = (MemoryStream *)0x0;
		stream._0_1_ = 0;
		bStack22 = 0;
		bStack21 = 0;
		ppTStack20 = (TwinsanityMaterial **)0x0;
		if ((TwinsanityMaterial **)cnt != (TwinsanityMaterial **)0x0) {
		do {
		shader = (*id)[(int)ppTStack20]->shader;
		bVar2 = 0;
		uVar3 = 0;
		if (shader->shaderProgramCnt != 0) {
		do {
		bVar1 = (*shader->shaderPrograms[uVar3]->vtable->IsA)();
		bVar2 = bVar2 | bVar1;
		uVar3 = uVar3 + 1;
		}
		 while (uVar3 < shader->shaderProgramCnt);
		}
		stream._0_1_ = (byte)stream | bVar2;
		stream = (MemoryStream *)(uint)(byte)stream;
		shader = (*id)[(int)ppTStack20]->shader;
		bVar2 = 0;
		uVar3 = 0;
		if (shader->shaderProgramCnt != 0) {
		do {
		bVar1 = (*shader->shaderPrograms[uVar3]->vtable->IsC)();
		bVar2 = bVar2 | bVar1;
		uVar3 = uVar3 + 1;
		}
		 while (uVar3 < shader->shaderProgramCnt);
		}
		bStack22 = bStack22 | bVar2;
		shader = (*id)[(int)ppTStack20]->shader;
		bVar2 = 0;
		uVar3 = 0;
		if (shader->shaderProgramCnt != 0) {
		do {
		bVar1 = (*shader->shaderPrograms[uVar3]->vtable->IsB)();
		bVar2 = bVar2 | bVar1;
		uVar3 = uVar3 + 1;
		}
		 while (uVar3 < shader->shaderProgramCnt);
		}
		bStack21 = bStack21 | bVar2;
		ppTStack20 = (TwinsanityMaterial **)((int)ppTStack20 + 1);
		cnt = (uint)ppTStack12;
		}
		 while (ppTStack20 < ppTStack12);
		}
		local_8->field_0x18 = (byte)stream;
		local_8->cnt = cnt;
		local_8->field_0x1a = bStack22;
		local_8->field_0x19 = bStack21;
		return;
		}
		
	*/
	return;
}

void TwinsanityRigidModel2::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanityRigidModel2::Write(TwinsanityRigidModel2 *this,MemoryStream *stream){
		uint value;
		uint i;
		(*stream->vtable->WriteInt3)(stream,0x104);
		(*stream->vtable->WriteInt3)(stream,this->cnt);
		i = 0;
		if (this->cnt != 0) {
		do {
		value = (uint)this->materialIds[i];
		if ((TwinsanityMaterial *)value != (TwinsanityMaterial *)0x0) {
		value = *(uint *)(value + 4);
		}
		(*stream->vtable->WriteInt3)(stream,value);
		i = i + 1;
		}
		 while (i < this->cnt);
		}
		(*stream->vtable->WriteInt3)(stream,this->model->id);
		return;
		}
		
	*/
	return;
}

void TwinsanityRigidModel2::Render(byte param_1, char* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall TwinsanityRigidModel2::Render(TwinsanityRigidModel2 *this,byte param_1,char *param_2){
		TwinsanityModel *pTVar1;
		int num;
		undefined4 *puVar2;
		int *piVar3;
		uint uVar4;
		uint uVar5;
		AutoClass44 *pAVar6;
		uint uVar7;
		uint local_518;
		uint i;
		int local_50c [65];
		undefined4 auStack1032 [256];
		undefined4 local_8;
		undefined4 local_4;
		uint cnt;
		TwinsanityMaterialShader *shader;
		ShaderProgramAbstract *shaderProgram;
		if (*param_2 == '\0') {
		uVar4 = (uint)param_1;
		TwinsanityModel::Register(this->model,uVar4);
		_D3DDevice_SetStreamSource@12(0,this->model->vertexBuffer[uVar4],0x1c);
		@D3DDevice_SetVertexShaderConstantNotInlineFast@12(0x60,(undefined8 *)(param_2 + 0x10),0x10);
		@D3DDevice_SetVertexShaderConstantNotInlineFast@12(0xbc,(undefined8 *)(param_2 + 0x50),0x10);
		shader = this->materialIds[uVar4]->shader;
		TwinsanityMaterialShader::FUN_00105840(shader);
		cnt = shader->shaderProgramCnt;
		if (cnt == 1) {
		AutoClass44::FUN_00102850(&ENV_CLASS_205,&SHADER_WATER);
		}
		else {
		local_50c[0] = -1;
		local_8 = 0;
		local_4 = 0;
		FUN_0011a0c0(local_50c,&SHADER_WATER);
		i = 1;
		if (1 < cnt) {
		do {
		shaderProgram = shader->shaderPrograms[i];
		num = (*shaderProgram->vtable->GetNum)();
		puVar2 = GetShaderById(num);
		if (puVar2 != (undefined4 *)0x0) {
		FUN_00102880((int)local_50c,(int)puVar2,(int)local_50c);
		ShaderProgramAbstract::FUN_0010cd30(shaderProgram);
		}
		i = i + 1;
		}
		 while (i < cnt);
		}
		DAT_00402a08 = AutoClass44::FUN_001027a0(&ENV_CLASS_205,(int)&DAT_003ebff0);
		piVar3 = &DAT_003ebff0;
		pAVar6 = &ENV_CLASS_205;
		for (num = 0x40;
		 num != 0;
		 num = num + -1) {
		pAVar6->vertexAttributeFormat = *piVar3;
		piVar3 = piVar3 + 1;
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
		uVar7 = 0;
		uVar5 = 0;
		if (this->model->someCnt2[uVar4] != 0) {
		piVar3 = this->model->dataArray1[uVar4];
		do {
		 Render water _D3DDevice_DrawVertices@12(6,uVar7,piVar3[uVar5]);
		piVar3 = this->model->dataArray1[uVar4];
		uVar7 = uVar7 + piVar3[uVar5];
		uVar5 = uVar5 + 1;
		}
		 while (uVar5 < this->model->someCnt2[uVar4]);
		}
		if (1 < cnt) {
		uVar4 = 1;
		do {
		ShaderProgramAbstract::FUN_00104d60(shader->shaderPrograms[uVar4]);
		uVar4 = uVar4 + 1;
		}
		 while (uVar4 < cnt);
		}
		return;
		}
		@D3DDevice_SetVertexShaderConstantNotInlineFast@12(0x60,(undefined8 *)(param_2 + 0x10),0x10);
		cnt = SHADER_WATER;
		uVar5 = 0;
		DAT_00402a08 = '\x01';
		_D3DDevice_SetVertexShaderInput@12((int *)0x0,(int *)0x0,(int **)0x0);
		_D3DDevice_SetVertexShader@4(cnt);
		@D3DDevice_SetRenderState_Simple@8(&RENDER_STATE_12,0);
		DAT_002a9bfc = 0;
		@D3DDevice_SetRenderState_Simple@8(&RENDER_STATE_6,0);
		DAT_002a9c00 = 0;
		_D3DDevice_SetTexture@8(0,(D3DTexture *)0x0);
		@D3DDevice_SetRenderState_Simple@8(&DAT_00040358,0);
		_DAT_002a9c1c = 0;
		_D3DDevice_SetRenderState_MultiSampleMode@4(2);
		_D3DDevice_SetRenderState_StencilEnable@4(1);
		@D3DDevice_SetRenderState_Simple@8(&RENDER_STATE_9,0x205);
		INT_002a9c28 = 0x205;
		@D3DDevice_SetRenderState_Simple@8(&RENDER_STATE_10,0x40);
		INT_002a9c2c = 0x40;
		@D3DDevice_SetRenderState_Simple@8(&RENDER_STATE_11,0x8507);
		INT_002a9c24 = 0x8507;
		@D3DDevice_SetRenderState_Simple@8(&DAT_0004035c,0);
		_DAT_002a9c10 = 0;
		_D3DDevice_SetRenderState_CullMode@4(0x901);
		@D3DDevice_SetRenderState_Simple@8(&DAT_00040354,0x201);
		uVar4 = (uint)param_1;
		_DAT_002a9bf4 = 0x201;
		TwinsanityModel::Register(this->model,uVar4);
		_D3DDevice_SetStreamSource@12(0,this->model->vertexBuffer[uVar4],0x1c);
		pTVar1 = this->model;
		cnt = local_518;
		if (pTVar1->someCnt2[uVar4] != 0) {
		do {
		if (uVar5 == 0) {
		cnt = 0;
		}
		else {
		cnt = cnt + pTVar1->dataArray1[uVar4][uVar5 - 1];
		}
		_D3DDevice_DrawVertices@12(6,cnt,pTVar1->dataArray1[uVar4][uVar5]);
		pTVar1 = this->model;
		uVar5 = uVar5 + 1;
		}
		 while (uVar5 < pTVar1->someCnt2[uVar4]);
		}
		@D3DDevice_SetRenderState_Simple@8(&RENDER_STATE_11,0x8508);
		INT_002a9c24 = 0x8508;
		_D3DDevice_SetRenderState_CullMode@4(0x900);
		pTVar1 = this->model;
		uVar5 = 0;
		cnt = local_518;
		if (pTVar1->someCnt2[uVar4] != 0) {
		do {
		if (uVar5 == 0) {
		cnt = 0;
		}
		else {
		cnt = cnt + pTVar1->dataArray1[uVar4][uVar5 - 1];
		}
		_D3DDevice_DrawVertices@12(6,cnt,pTVar1->dataArray1[uVar4][uVar5]);
		pTVar1 = this->model;
		uVar5 = uVar5 + 1;
		}
		 while (uVar5 < pTVar1->someCnt2[uVar4]);
		}
		@D3DDevice_SetRenderState_Simple@8(&DAT_00040358,0x1010101);
		_DAT_002a9c1c = 0x1010101;
		@D3DDevice_SetRenderState_Simple@8(&RENDER_STATE_12,1);
		DAT_002a9bfc = 1;
		@D3DDevice_SetRenderState_Simple@8(&DAT_0004034c,0x80000000);
		_DAT_002a9c3c = 0x80000000;
		@D3DDevice_SetRenderState_Simple@8(&RENDER_STATE_4,0x8003);
		INT_002a9c08 = 0x8003;
		@D3DDevice_SetRenderState_Simple@8(&RENDER_STATE_5,0x8004);
		INT_002a9c0c = 0x8004;
		_D3DDevice_SetRenderState_ZEnable@4(1);
		@D3DDevice_SetRenderState_Simple@8(&RENDER_STATE_9,0x201);
		INT_002a9c28 = 0x201;
		@D3DDevice_SetRenderState_Simple@8(&RENDER_STATE_10,0x40);
		INT_002a9c2c = 0x40;
		@D3DDevice_SetRenderState_Simple@8(&RENDER_STATE_11,0x1e01);
		INT_002a9c24 = 0x1e01;
		_D3DDevice_SetRenderState_CullMode@4(0);
		pTVar1 = this->model;
		cnt = 0;
		if (pTVar1->someCnt2[uVar4] != 0) {
		do {
		if (cnt == 0) {
		local_518 = 0;
		}
		else {
		local_518 = local_518 + pTVar1->dataArray1[uVar4][cnt - 1];
		}
		_D3DDevice_DrawVertices@12(6,local_518,pTVar1->dataArray1[uVar4][cnt]);
		pTVar1 = this->model;
		cnt = cnt + 1;
		}
		 while (cnt < pTVar1->someCnt2[uVar4]);
		}
		_D3DDevice_SetRenderState_StencilEnable@4(0);
		@D3DDevice_SetRenderState_Simple@8(&DAT_0004035c,1);
		_DAT_002a9c10 = 1;
		_D3DDevice_SetRenderState_CullMode@4(0);
		@D3DDevice_SetRenderState_Simple@8(&RENDER_STATE_4,0x302);
		INT_002a9c08 = 0x302;
		@D3DDevice_SetRenderState_Simple@8(&RENDER_STATE_5,0x303);
		INT_002a9c0c = 0x303;
		_D3DDevice_SetRenderState_MultiSampleMode@4(0);
		return;
		}
		
	*/
	return;
}

void TwinsanityRigidModel2::Construct(uint id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanityRigidModel2::Construct(TwinsanityRigidModel2 *this,uint id){
		*(undefined2 *)&this->field1_0x4 = 0;
		this->field1_0x4 = this->field1_0x4 & 0xfffcffff;
		this->id = id;
		this->vtable = &TwinsanityGraphics_VT_RigidModel2;
		this->materialIds = (TwinsanityMaterial **)0x0;
		this->model = (TwinsanityModel *)0x0;
		*(undefined4 *)&this->field_0x14 = 0;
		this->field_0x18 = 0;
		this->field_0x19 = 0;
		this->cnt = 0;
		return;
		}
		
	*/
	return;
}

