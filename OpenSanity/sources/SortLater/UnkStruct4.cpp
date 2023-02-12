#include "headers/SortLater/UnkStruct4.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void UnkStruct4::FUN_00114df0(MemoryStream* stream, bool param_2, bool param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkStruct4::FUN_00114df0(UnkStruct4 *this,MemoryStream *stream,bool param_2,bool param_3){
		uint *val;
		TwinsanityMaterialShader *pTVar1;
		long lVar2;
		uint uVar3;
		ShaderProgramAbstract_VTable *pSVar4;
		float fVar5;
		TwinsanityMaterial *material;
		astruct_2 *pvVar6;
		ShaderProgramL *pSVar6;
		uint uVar7;
		TwinsanityTexture *texture;
		void *pvVar8;
		ShaderProgramL *puVar7;
		ShaderProgramM *pSVar9;
		TwinsanityTexture *texture2;
		ShaderProgramAbstract *pAVar11;
		TwinsanityTexture *pTVar10;
		ShaderProgramAbstract *pSVar11;
		ShaderProgramAbstract *piVar7;
		ShaderProgramAbstract *piVar11;
		ShaderProgramAbstract *piVar12;
		undefined3 in_stack_0000000d;
		UnkStruct4 *textureId;
		textureId = this;
		(*stream->vtable->ReadUInt)(stream,&this->textureId);
		val = &this->materialId;
		(*stream->vtable->ReadUInt)(stream,val);
		if (param_2 == false) {
		material = (TwinsanityMaterial *)(*(ENV_CLASS_187_SECTION_MATERIALS.parent)->Create)(&ENV_CLASS_187_SECTION_MATERIALS.parent,(undefined *)val,0);
		}
		else {
		SectionDataTexture::ReadTextureToSection(&ENV_CLASS_183_SECTION_TEXTURES,stream,this->textureId);
		material = SectionDataMaterial::ReadMaterialToSection(&ENV_CLASS_187_SECTION_MATERIALS,stream,*val);
		}
		piVar7 = (ShaderProgramAbstract *)0x0;
		this->field2_0x8 = material;
		pTVar1 = material->shader;
		this->field5_0x14 = pTVar1;
		pTVar1->shaderType = 0x16;
		pTVar1 = this->field5_0x14;
		lVar2 = pTVar1->field6_0x18;
		if (pTVar1 == (TwinsanityMaterialShader *)0x0) {
		pSVar11 = (ShaderProgramAbstract *)0x0;
		}
		else {
		pSVar11 = pTVar1->shaderPrograms[0];
		}
		pSVar11->states = pSVar11->states | 0x8000000;
		pSVar11->flags = pSVar11->flags & 0xffd80b7f | 0x400b61;
		(*pSVar11->vtable->Method4)();
		pTVar10 = pSVar11->texture;
		pvVar6 = (astruct_2 *)VirtualPool::AllocateMemory(0x28);
		if (pvVar6 == (astruct_2 *)0x0) {
		pvVar6 = (astruct_2 *)0x0;
		}
		else {
		pvVar6->field16_0x10 = 0;
		pvVar6->field30_0x24 = 0;
		}
		this->field3_0xc = pvVar6;
		pvVar6->field29_0x20 = 0x16;
		*(undefined4 *)((int)this->field3_0xc + 0x10) = 0;
		pvVar8 = this->field3_0xc;
		*(long *)((int)pvVar8 + 0x18) = lVar2;
		*(undefined4 *)((int)pvVar8 + 0x1c) = 0;
		if (_param_3 == 0) {
		pSVar6 = (ShaderProgramL *)VirtualPool::AllocateMemory(0x80);
		if (pSVar6 != (ShaderProgramL *)0x0) {
		piVar7 = (ShaderProgramAbstract *)ShaderProgramL::Construct(pSVar6);
		}
		uVar7 = piVar7->flags & 0xefffffff;
		}
		else {
		pSVar9 = (ShaderProgramM *)VirtualPool::AllocateMemory(0x80);
		if (pSVar9 != (ShaderProgramM *)0x0) {
		piVar7 = (ShaderProgramAbstract *)ShaderProgramM::Construct(pSVar9);
		}
		uVar7 = piVar7->flags | 0x10000000;
		}
		piVar7->flags = uVar7;
		pvVar8 = this->field3_0xc;
		if (*(uint *)((int)pvVar8 + 0x10) < 4) {
		*(ShaderProgramAbstract **)((int)pvVar8 + *(uint *)((int)pvVar8 + 0x10) * 4) = piVar7;
		*(int *)((int)pvVar8 + 0x10) = *(int *)((int)pvVar8 + 0x10) + 1;
		}
		fVar5 = FLOAT_00386ab4;
		uVar7 = piVar7->states;
		uVar3 = piVar7->flags;
		(piVar7->vec0).x = FLOAT_00386ab4;
		(piVar7->vec0).y = fVar5;
		(piVar7->vec0).z = fVar5;
		(piVar7->vec0).w = FLOAT_0038639c;
		piVar7->states = uVar7 & 0xfcffff80 | 0x8000000;
		piVar7->flags = uVar3 & 0x98500b63 | 0x400b63;
		textureId = (UnkStruct4 *)pTVar10->id;
		piVar12 = (ShaderProgramAbstract *)0x0;
		piVar7->field59_0x70 = textureId;
		if (textureId != (UnkStruct4 *)0x0) {
		texture = (TwinsanityTexture *)(*(ENV_CLASS_183_SECTION_TEXTURES.parent)->Create)(&ENV_CLASS_183_SECTION_TEXTURES.parent,(undefined *)&textureId,0);
		piVar7->texture = texture;
		}
		piVar7->field28_0x28 = pSVar11->field28_0x28;
		piVar7->field29_0x2a = pSVar11->field29_0x2a;
		piVar7->flags = piVar7->flags | 0x8000000;
		(*piVar7->vtable->Method4)();
		pvVar8 = VirtualPool::AllocateMemory(0x28);
		if (pvVar8 == (void *)0x0) {
		pvVar8 = (void *)0x0;
		}
		else {
		*(undefined4 *)((int)pvVar8 + 0x10) = 0;
		*(undefined4 *)((int)pvVar8 + 0x24) = 0;
		}
		this->field4_0x10 = pvVar8;
		*(undefined4 *)((int)pvVar8 + 0x20) = 0x16;
		*(undefined4 *)((int)this->field4_0x10 + 0x10) = 0;
		pvVar8 = this->field4_0x10;
		*(long *)((int)pvVar8 + 0x18) = lVar2;
		*(undefined4 *)((int)pvVar8 + 0x1c) = 0;
		puVar7 = (ShaderProgramL *)VirtualPool::AllocateMemory(0x80);
		if (puVar7 != (ShaderProgramL *)0x0) {
		(puVar7->parent).field59_0x70 = 0;
		(puVar7->parent).texture = (TwinsanityTexture *)0x0;
		(puVar7->parent).flags = (puVar7->parent).flags & 0x97d7ffde | 0x4400000;
		(puVar7->parent).states = (puVar7->parent).states & 0xc0ffff80 | 0x800000;
		(puVar7->parent).field55_0x60 = 0.0;
		(puVar7->parent).field56_0x64 = 0.0;
		(puVar7->parent).unkSubStruct = (ShaderProgramSub *)0x0;
		(puVar7->parent).vtable = (ShaderProgramAbstract_VTable *)&ShaderProgram_VT_L;
		(puVar7->parent).id = 0x12;
		}
		if (_param_3 == 0) {
		pSVar6 = (ShaderProgramL *)VirtualPool::AllocateMemory(0x80);
		if (pSVar6 != (ShaderProgramL *)0x0) {
		piVar12 = (ShaderProgramAbstract *)ShaderProgramL::Construct(pSVar6);
		}
		uVar7 = piVar12->flags & 0xefffffff;
		}
		else {
		pSVar9 = (ShaderProgramM *)VirtualPool::AllocateMemory(0x80);
		if (pSVar9 != (ShaderProgramM *)0x0) {
		piVar12 = (ShaderProgramAbstract *)ShaderProgramM::Construct(pSVar9);
		}
		uVar7 = piVar12->flags | 0x10000000;
		}
		piVar12->flags = uVar7;
		pvVar8 = this->field4_0x10;
		if (*(uint *)((int)pvVar8 + 0x10) < 4) {
		*(ShaderProgramAbstract **)((int)pvVar8 + *(uint *)((int)pvVar8 + 0x10) * 4) = piVar12;
		*(int *)((int)pvVar8 + 0x10) = *(int *)((int)pvVar8 + 0x10) + 1;
		}
		fVar5 = FLOAT_00386ab4;
		uVar7 = piVar12->states;
		uVar3 = piVar12->flags;
		(piVar12->vec0).x = FLOAT_00386ab4;
		(piVar12->vec0).y = fVar5;
		(piVar12->vec0).z = fVar5;
		(piVar12->vec0).w = FLOAT_0038639c;
		piVar12->states = uVar7 & 0xfcffff80 | 0x8000000;
		piVar12->flags = uVar3 & 0x98500b65 | 0x400b65;
		textureId = (UnkStruct4 *)pTVar10->id;
		piVar11 = (ShaderProgramAbstract *)0x0;
		piVar12->field59_0x70 = textureId;
		if (textureId != (UnkStruct4 *)0x0) {
		texture2 = (TwinsanityTexture *)(*(ENV_CLASS_183_SECTION_TEXTURES.parent)->Create)(&ENV_CLASS_183_SECTION_TEXTURES.parent,(undefined *)&textureId,0);
		piVar12->texture = texture2;
		}
		pSVar4 = ((ShaderProgramAbstract *)&piVar12->vtable)->vtable;
		piVar12->field28_0x28 = pSVar11->field28_0x28;
		piVar12->field29_0x2a = pSVar11->field29_0x2a;
		piVar12->flags = piVar12->flags | 0x8000000;
		(*pSVar4->Method4)();
		pvVar8 = VirtualPool::AllocateMemory(0x28);
		if (pvVar8 == (void *)0x0) {
		pvVar8 = (void *)0x0;
		}
		else {
		*(undefined4 *)((int)pvVar8 + 0x10) = 0;
		*(undefined4 *)((int)pvVar8 + 0x24) = 0;
		}
		this->field6_0x18 = pvVar8;
		*(undefined4 *)((int)pvVar8 + 0x20) = 0x16;
		*(undefined4 *)((int)this->field6_0x18 + 0x10) = 0;
		pvVar8 = this->field6_0x18;
		*(long *)((int)pvVar8 + 0x18) = lVar2;
		*(undefined4 *)((int)pvVar8 + 0x1c) = 0;
		if (_param_3 == 0) {
		pSVar6 = (ShaderProgramL *)VirtualPool::AllocateMemory(0x80);
		if (pSVar6 != (ShaderProgramL *)0x0) {
		piVar11 = (ShaderProgramAbstract *)ShaderProgramL::Construct(pSVar6);
		}
		uVar7 = piVar11->flags & 0xefffffff;
		}
		else {
		pAVar11 = (ShaderProgramAbstract *)VirtualPool::AllocateMemory(0x80);
		if (pAVar11 != (ShaderProgramAbstract *)0x0) {
		piVar11 = (ShaderProgramAbstract *)ShaderProgramM::Construct((ShaderProgramM *)pAVar11);
		}
		uVar7 = piVar11->flags | 0x10000000;
		}
		piVar11->flags = uVar7;
		pvVar8 = this->field6_0x18;
		if (*(uint *)((int)pvVar8 + 0x10) < 4) {
		*(ShaderProgramAbstract **)((int)pvVar8 + *(uint *)((int)pvVar8 + 0x10) * 4) = piVar11;
		*(int *)((int)pvVar8 + 0x10) = *(int *)((int)pvVar8 + 0x10) + 1;
		}
		fVar5 = FLOAT_00386ab4;
		uVar7 = piVar11->flags;
		uVar3 = piVar11->states;
		(piVar11->vec0).x = FLOAT_00386ab4;
		(piVar11->vec0).y = fVar5;
		(piVar11->vec0).z = fVar5;
		fVar5 = FLOAT_0038639c;
		piVar11->flags = uVar7 & 0xfff80b7e | 0xb60;
		piVar11->states = uVar3 & 0xf6ffffff;
		(piVar11->vec0).w = fVar5;
		piVar12->flags = piVar12->flags & 0xffdfffff | 0x400000;
		piVar11->flags = piVar11->flags & 0x9877ffff;
		piVar11->states = piVar11->states & 0xfdffffc0;
		uVar7 = pTVar10->id;
		piVar11->field59_0x70 = uVar7;
		if (uVar7 != 0) {
		pTVar10 = (TwinsanityTexture *)(*(ENV_CLASS_183_SECTION_TEXTURES.parent)->Create)(&ENV_CLASS_183_SECTION_TEXTURES.parent,&param_2,0);
		piVar11->texture = pTVar10;
		}
		pSVar4 = ((ShaderProgramAbstract *)&piVar11->vtable)->vtable;
		piVar11->field28_0x28 = pSVar11->field28_0x28;
		piVar11->field29_0x2a = pSVar11->field29_0x2a;
		piVar11->flags = piVar11->flags | 0x8000000;
		(*pSVar4->Method4)();
		return;
		}
		
	*/
	return;
}

void UnkStruct4::FUN_00115290(char* param_1, bool param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkStruct4::FUN_00115290(UnkStruct4 *this,char *param_1,bool param_2){
		MemoryStream stream;
		MemoryStream::ConstructFile(&stream,param_1,'\0');
		FUN_00114df0(this,&stream,true,param_2);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

