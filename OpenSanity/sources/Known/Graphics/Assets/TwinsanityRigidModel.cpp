#include "headers/Known/Graphics/Assets/TwinsanityRigidModel.h"

#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Model/TwinsanityModel.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Material/TwinsanityMaterial.h"
void TwinsanityRigidModel::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall TwinsanityRigidModel::Dispose(TwinsanityRigidModel *this){
		TwinsanityMaterial *element;
		TwinsanityMaterialShader *ptr;
		ShaderProgramAbstract *this_00;
		TwinsanityModel *this_01;
		uint uVar1;
		uint local_4;
		this->vtable = &TwinsanityGraphics_VT_RigidModel;
		local_4 = 0;
		if (this->model->submodels != 0) {
		do {
		element = this->materials[local_4];
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
		VirtualPool::FreeMemory(this->materials);
		this->vtable = &TwinsanityGraphics_VT_Base;
		return;
		}
		
	*/
	return;
}

void TwinsanityRigidModel::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanityRigidModel::Read(TwinsanityRigidModel *this,MemoryStream *stream){
		uint *val;
		TwinsanityMaterialShader *pTVar1;
		bool bVar2;
		TwinsanityMaterial **ppTVar3;
		TwinsanityMaterial *uVar6;
		TwinsanityModel *uVar5;
		byte bVar4;
		byte bVar5;
		uint i;
		byte bStack9;
		uint uStack8;
		uint local_4;
		i = 0;
		local_4 = 0;
		(*stream->vtable->ReadUInt)(stream,&local_4);
		val = &this->materialCnt;
		(*stream->vtable->ReadUInt)(stream,val);
		ppTVar3 = (TwinsanityMaterial **)VirtualPool::AllocateMemory(*val << 2);
		this->materials = ppTVar3;
		if (*val != 0) {
		do {
		(*stream->vtable->ReadUInt)(stream,(uint *)&stream);
		uVar6 = (TwinsanityMaterial *)(*(ENV_CLASS_187_SECTION_MATERIALS.parent)->Create)(&ENV_CLASS_187_SECTION_MATERIALS.parent,(undefined *)&stream,0);
		this->materials[i] = uVar6;
		i = i + 1;
		}
		 while (i < *val);
		}
		(*stream->vtable->ReadUInt)(stream,&this->modelId);
		uVar5 = (TwinsanityModel *)(*(ENV_CLASS_182_SECTION_MODELS.parent)->Create)(&ENV_CLASS_182_SECTION_MODELS.parent,(undefined *)&this->modelId,0);
		this->model = uVar5;
		this->field5_0x14 = 0;
		stream = (MemoryStream *)0x0;
		bStack9 = 0;
		uStack8 = 0;
		if (*val == 0) {
		this->field6_0x18 = false;
		this->field8_0x1a = false;
		return;
		}
		do {
		pTVar1 = this->materials[uStack8]->shader;
		bVar4 = 0;
		i = 0;
		if (pTVar1->shaderProgramCnt != 0) {
		do {
		bVar2 = (*pTVar1->shaderPrograms[i]->vtable->IsA)();
		bVar4 = bVar4 | bVar2;
		i = i + 1;
		}
		 while (i < pTVar1->shaderProgramCnt);
		}
		stream = (MemoryStream *)(uint)((byte)stream | bVar4);
		pTVar1 = this->materials[uStack8]->shader;
		bVar5 = 0;
		i = 0;
		if (pTVar1->shaderProgramCnt != 0) {
		do {
		bVar2 = (*pTVar1->shaderPrograms[i]->vtable->IsC)();
		bVar5 = bVar5 | bVar2;
		i = i + 1;
		}
		 while (i < pTVar1->shaderProgramCnt);
		}
		bStack9 = bStack9 | bVar5;
		uStack8 = uStack8 + 1;
		}
		 while (uStack8 < this->materialCnt);
		this->field6_0x18 = (bool)((byte)stream | bVar4);
		this->field8_0x1a = (bool)bStack9;
		return;
		}
		
	*/
	return;
}

void TwinsanityRigidModel::Render(byte param_1, long* shaderConstant) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanityRigidModel::Render(TwinsanityRigidModel *this,byte param_1,undefined8 *shaderConstant){
		TwinsanityMaterialShader *this_00;
		uint uVar1;
		ShaderProgramAbstract *pSVar2;
		int iVar3;
		undefined4 *puVar4;
		int *piVar5;
		uint uVar6;
		uint uVar7;
		AutoClass44 *pAVar8;
		uint uVar9;
		bool bVar10;
		uint local_518;
		int local_50c [65];
		undefined4 auStack1032 [256];
		undefined4 local_8;
		undefined4 local_4;
		uVar6 = (uint)param_1;
		TwinsanityModel::Register(this->model,uVar6);
		_D3DDevice_SetStreamSource@12(0,this->model->vertexBuffer[uVar6],0x1c);
		@D3DDevice_SetVertexShaderConstantNotInlineFast@12(0x60,shaderConstant,0x10);
		@D3DDevice_SetVertexShaderConstantNotInlineFast@12(0x65,shaderConstant + 0x10,0x1c);
		@D3DDevice_SetVertexShaderConstantNotInlineFast@12(0xbc,shaderConstant + 8,0x10);
		this_00 = this->materials[uVar6]->shader;
		TwinsanityMaterialShader::FUN_00105840(this_00);
		uVar1 = this_00->shaderProgramCnt;
		bVar10 = false;
		if (uVar1 == 1) {
		pSVar2 = this_00->shaderPrograms[0];
		iVar3 = (*pSVar2->vtable->GetNum)();
		bVar10 = iVar3 == 0x18;
		if (!bVar10) {
		iVar3 = (*pSVar2->vtable->GetNum)();
		if ((((iVar3 == 0x11) || (iVar3 = (*pSVar2->vtable->GetNum)(), iVar3 == 0x16)) ||(iVar3 = (*pSVar2->vtable->GetNum)(), iVar3 == 0x1c)) ||(iVar3 = (*pSVar2->vtable->GetNum)(), iVar3 == 0x20)) {
		uVar7 = SHADER_STATIC_GEOMETRY_2;
		DAT_00402a08 = '\x01';
		_D3DDevice_SetVertexShaderInput@12((int *)0x0,(int *)0x0,(int **)0x0);
		_D3DDevice_SetVertexShader@4(uVar7);
		}
		else {
		AutoClass44::FUN_00102850(&ENV_CLASS_205,&SHADER_STATIC_GEOMETRY_1);
		}
		goto LAB_001119ef;
		}
		local_50c[0] = -1;
		local_8 = 0;
		local_4 = 0;
		FUN_0011a0c0(local_50c,&SHADER_STATIC_GEOMETRY_1);
		iVar3 = (*pSVar2->vtable->GetNum)();
		puVar4 = GetShaderById(iVar3);
		if (puVar4 != (undefined4 *)0x0) {
		FUN_00102880((int)local_50c,(int)puVar4,(int)local_50c);
		ShaderProgramAbstract::FUN_0010cd30(pSVar2);
		}
		DAT_00402a08 = AutoClass44::FUN_001027a0(&ENV_CLASS_205,(int)&DAT_003eac10);
		piVar5 = &DAT_003eac10;
		pAVar8 = &ENV_CLASS_205;
		for (iVar3 = 0x40;
		 iVar3 != 0;
		 iVar3 = iVar3 + -1) {
		pAVar8->vertexAttributeFormat = *piVar5;
		piVar5 = piVar5 + 1;
		pAVar8 = (AutoClass44 *)&pAVar8->field1_0x4;
		}
		_D3DDevice_LoadVertexShaderProgram@8(auStack1032,0);
		if (DAT_00402a08 == '\0') goto LAB_001119d9;
		_D3DDevice_SelectVertexShaderDirect@8(&ENV_CLASS_205.vertexAttributeFormat,0);
		DAT_00402a08 = '\0';
		}
		else {
		local_50c[0] = -1;
		local_8 = 0;
		local_4 = 0;
		FUN_0011a0c0(local_50c,&SHADER_STATIC_GEOMETRY_1);
		local_518 = 1;
		if (1 < uVar1) {
		do {
		pSVar2 = this_00->shaderPrograms[local_518];
		uVar7 = pSVar2->texture->id;
		if (uVar7 == 0x5e8ec1d) {
		uVar7 = pSVar2->flags & 0xffffffeb | 10;
		LAB_00111923:pSVar2->flags = uVar7;
		}
		else if ((uVar7 == 0xcd9b9cd4) || (uVar7 == 0x63e09a97)) {
		uVar7 = pSVar2->flags & 0xffffffe1;
		goto LAB_00111923;
		}
		iVar3 = (*pSVar2->vtable->GetNum)();
		switch(iVar3) {
		case 0x10:puVar4 = &DAT_003a2410;
		break;
		default:goto switchD_0011193c_caseD_11;
		case 0x14:case 0x17:case 0x1d:puVar4 = &SHADER_TYPE_1;
		break;
		case 0x18:case 0x19:puVar4 = &DAT_003a1f00;
		}
		FUN_00102880((int)local_50c,(int)puVar4,(int)local_50c);
		ShaderProgramAbstract::FUN_0010cd30(pSVar2);
		switchD_0011193c_caseD_11:local_518 = local_518 + 1;
		}
		 while (local_518 < uVar1);
		}
		DAT_00402a08 = AutoClass44::FUN_001027a0(&ENV_CLASS_205,(int)&DAT_003eac10);
		piVar5 = &DAT_003eac10;
		pAVar8 = &ENV_CLASS_205;
		for (iVar3 = 0x40;
		 iVar3 != 0;
		 iVar3 = iVar3 + -1) {
		pAVar8->vertexAttributeFormat = *piVar5;
		piVar5 = piVar5 + 1;
		pAVar8 = (AutoClass44 *)&pAVar8->field1_0x4;
		}
		_D3DDevice_LoadVertexShaderProgram@8(auStack1032,0);
		if (DAT_00402a08 == '\0') {
		LAB_001119d9:_D3DDevice_SelectVertexShaderDirect@8((undefined4 *)0x0,0);
		}
		else {
		_D3DDevice_SelectVertexShaderDirect@8(&ENV_CLASS_205.vertexAttributeFormat,0);
		DAT_00402a08 = '\0';
		}
		}
		if (local_50c[0] != -1) {
		_D3DDevice_DeleteVertexShader@4(local_50c[0]);
		}
		LAB_001119ef:uVar9 = 0;
		uVar7 = 0;
		if (this->model->someCnt2[uVar6] != 0) {
		piVar5 = this->model->dataArray1[uVar6];
		do {
		_D3DDevice_DrawVertices@12(6,uVar9,piVar5[uVar7]);
		piVar5 = this->model->dataArray1[uVar6];
		uVar9 = uVar9 + piVar5[uVar7];
		uVar7 = uVar7 + 1;
		}
		 while (uVar7 < this->model->someCnt2[uVar6]);
		}
		if (((1 < uVar1) || (bVar10)) && (uVar6 = 0, uVar1 != 0)) {
		do {
		ShaderProgramAbstract::FUN_00104d60(this_00->shaderPrograms[uVar6]);
		uVar6 = uVar6 + 1;
		}
		 while (uVar6 < uVar1);
		}
		return;
		}
		
	*/
	return;
}

void TwinsanityRigidModel::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanityRigidModel::Write(TwinsanityRigidModel *this,MemoryStream *stream){
		uint uVar1;
		(*stream->vtable->WriteInt3)(stream,0x101);
		(*stream->vtable->WriteInt3)(stream,this->materialCnt);
		uVar1 = 0;
		if (this->materialCnt != 0) {
		do {
		(*stream->vtable->WriteInt3)(stream,this->materials[uVar1]->id);
		uVar1 = uVar1 + 1;
		}
		 while (uVar1 < this->materialCnt);
		}
		(*stream->vtable->WriteInt3)(stream,this->modelId);
		return;
		}
		
	*/
	return;
}

void TwinsanityRigidModel::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinsanityRigidModel::Construct(TwinsanityRigidModel *this,uint param_1){
		*(undefined2 *)&this->field1_0x4 = 0;
		this->field1_0x4 = this->field1_0x4 & 0xfffcffff;
		this->id = param_1;
		this->vtable = &TwinsanityGraphics_VT_RigidModel;
		this->materials = (TwinsanityMaterial **)0x0;
		this->model = (TwinsanityModel *)0x0;
		this->field5_0x14 = 0;
		this->field6_0x18 = false;
		this->field_0x19 = 0;
		this->materialCnt = 0;
		return;
		}
		
	*/
	return;
}

