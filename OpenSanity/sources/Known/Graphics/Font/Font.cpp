#include "headers/Known/Graphics/Font/Font.h"

#include "headers/Known/TwinString.h"
#include "headers/Known/Graphics/FontRenderer/RendererText.h"
#include "headers/Known/Math/Vector2.h"
Font::Font() : FontAbstract()
{
	this->cnt = 0;
	this->field2_0x1c = (void*)0x0;
	this->field5_0x28 = (void*)0x0;
	this->next = (void*)0x0;
	this->field6_0x2c = 0;
	this->field4_0x24 = 0;
	this->field7_0x30 = 0;
}
Font::Font(char* fname) : FontAbstract()
{
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Font * __thiscall Font::Construct(Font *this,char *fname){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		(this->parent).field1_0x4 = 0;
		(this->parent).field2_0x8 = 0;
		(this->parent).data = (RendererText *)0x0;
		(this->parent).scale.x = fVar1;
		(this->parent).scale.y = fVar1;
		this->cnt = 0;
		(this->parent).vtable = (FontAbstract_VTable *)&Font_VT;
		this->field2_0x1c = (void *)0x0;
		this->field5_0x28 = (void *)0x0;
		this->next = (void *)0x0;
		this->field6_0x2c = 0;
		this->field4_0x24 = 0;
		this->field7_0x30 = 0;
		ReadFont(this,fname);
		return this;
		}

	*/
}
Font::~Font()
{
	CleanUp();

}
void Font::FUN_00104a80(Vector2* vec, TwinString* str, float param_3, float param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Font::FUN_00104a80(Font *this,Vector2 *vec,TwinString *str,float param_3,float param_4){
		char currentChr;
		int iVar1;
		char *strPtr;
		float fVar2;
		float u;
		float v;
		RendererText *pFVar1;
		strPtr = "";
		if (str->value != (char *)0x0) {
		strPtr = str->value;
		}
		currentChr = *strPtr;
		u = 0.0;
		v = 0.0;
		if (currentChr != '\0') {
		do {
		strPtr = strPtr + 1;
		iVar1 = (uint)(byte)currentChr - (this->parent).field2_0x8;
		if (((iVar1 < 0) || ((this->parent).field1_0x4 <= iVar1)) &&((iVar1 = iVar1 + -0x20, iVar1 < 0 || ((this->parent).field1_0x4 <= iVar1)))) {
		iVar1 = 0;
		}
		pFVar1 = (this->parent).data;
		fVar2 = (&pFVar1->x)[iVar1 * 7] * param_4;
		u = (&pFVar1->y)[iVar1 * 7] * param_3 + u;
		if (v < fVar2) {
		v = fVar2;
		}
		currentChr = *strPtr;
		}
		 while (currentChr != '\0');
		}
		vec->x = u;
		vec->y = v;
		return;
		}
		
	*/
	return;
}

int Font::DrawFontPlane(TwinString* param_2, int param_3, int param_4, float param_5, float param_6, float param_7) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall Font::DrawFontPlane(Font *this,TwinString *param_2,int param_3,int param_4,float param_5,float param_6,float param_7){
		char *pcVar1;
		char firstChar;
		int iVar4;
		int iVar5;
		RendererText *pFVar6;
		char *charPtr;
		float fVar8;
		float local_80;
		VertexData vertexData [4];
		float fVar1;
		undefined4 uVar2;
		uVar2 = DAT_002a9d3c;
		charPtr = param_2->value;
		fVar8 = (float)param_4;
		if ((byte *)charPtr == (byte *)0x0) {
		charPtr = "";
		}
		firstChar = *charPtr;
		iVar4 = 0;
		vertexData[0].field2_0x8 = 0.0;
		vertexData[0].field3_0xc = FLOAT_0038639c;
		vertexData[0].field4_0x10 = param_7;
		vertexData[0].pos.x = 0.0;
		vertexData[0].pos.y = 0.0;
		vertexData[1].field2_0x8 = 0.0;
		vertexData[1].field3_0xc = FLOAT_0038639c;
		vertexData[1].field4_0x10 = param_7;
		vertexData[1].pos.x = FLOAT_0038639c;
		vertexData[1].pos.y = 0.0;
		vertexData[2].field2_0x8 = 0.0;
		vertexData[2].field3_0xc = FLOAT_0038639c;
		vertexData[2].field4_0x10 = param_7;
		vertexData[2].pos.x = 0.0;
		vertexData[2].pos.y = FLOAT_0038639c;
		vertexData[3].field2_0x8 = 0.0;
		vertexData[3].field3_0xc = FLOAT_0038639c;
		vertexData[3].field4_0x10 = param_7;
		vertexData[3].pos.x = FLOAT_0038639c;
		vertexData[3].pos.y = FLOAT_0038639c;
		_D3DDevice_SetRenderState_FillMode@4(0x1b02);
		DAT_00402a08 = 1;
		_D3DDevice_SetVertexShaderInput@12((int *)0x0,(int *)0x0,(int **)0x0);
		_D3DDevice_SetVertexShader@4(0x144);
		fVar1 = (float)param_3;
		while (firstChar != 0) {
		charPtr = (char *)((byte *)charPtr + 1);
		iVar5 = (uint)(byte)firstChar - (this->parent).field2_0x8;
		if (((iVar5 < 0) || ((this->parent).field1_0x4 <= iVar5)) &&((iVar5 = iVar5 + -0x20, iVar5 < 0 || ((this->parent).field1_0x4 <= iVar5)))) {
		iVar5 = 0;
		}
		pFVar6 = (RendererText *)(&((this->parent).data)->x + iVar5 * 7);
		if (firstChar == 0x20) {
		firstChar = *charPtr;
		local_80 = pFVar6->y * param_5 + fVar1;
		}
		else {
		pcVar1 = (pFVar6->str).value;
		if (pcVar1 != (char *)0x0) {
		TwinsanityMaterialShader::FUN_00105840(*(TwinsanityMaterialShader **)((&this->cnt)[(int)pcVar1] + 8));
		}
		vertexData[0].pos.x = pFVar6->originX;
		vertexData[0].pos.y = pFVar6->originY;
		vertexData[1].pos.x = *(float *)&pFVar6->color;
		local_80 = pFVar6->y * param_5 + fVar1;
		vertexData[2].pos.y = (float)pFVar6->field5_0x14;
		vertexData[2].field1_0x4 = pFVar6->x * param_6 + fVar8;
		firstChar = *charPtr;
		vertexData[0].field0_0x0 = fVar1;
		vertexData[0].field1_0x4 = fVar8;
		vertexData[1].field0_0x0 = local_80;
		vertexData[1].field1_0x4 = fVar8;
		vertexData[1].pos.y = vertexData[0].pos.y;
		vertexData[2].field0_0x0 = fVar1;
		vertexData[2].pos.x = vertexData[0].pos.x;
		vertexData[3].field0_0x0 = local_80;
		vertexData[3].field1_0x4 = vertexData[2].field1_0x4;
		vertexData[3].pos.x = vertexData[1].pos.x;
		vertexData[3].pos.y = vertexData[2].pos.y;
		_D3DDevice_DrawVerticesUP@16(D3DPT_LINESTRIP,4,vertexData,0x1c);
		}
		iVar4 = iVar4 + 4;
		fVar1 = local_80;
		}
		_D3DDevice_SetRenderState_FillMode@4(uVar2);
		return iVar4;
		}
		
	*/
	return 0;
}

void Font::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Font::CleanUp(Font *this){
		undefined *puVar1;
		void *ptr;
		undefined4 *puVar2;
		void **ppvVar3;
		uint uVar4;
		int local_10;
		uint *local_8;
		void *local_4;
		local_10 = 0;
		if (0 < this->cnt) {
		ppvVar3 = &this->field5_0x28;
		do {
		puVar1 = (undefined *)ppvVar3[-3];
		if (*(int *)(puVar1 + 4) == -1) {
		ptr = *(void **)(puVar1 + 8);
		if (ptr != (void *)0x0) {
		uVar4 = 0;
		if (*(int *)((int)ptr + 0x10) != 0) {
		do {
		puVar2 = *(undefined4 **)((int)ptr + uVar4 * 4);
		if (puVar2 != (undefined4 *)0x0) {
		(**(code **)*puVar2)(1);
		}
		uVar4 = uVar4 + 1;
		}
		 while (uVar4 < *(uint *)((int)ptr + 0x10));
		}
		VirtualPool::FreeMemory(ptr);
		}
		VirtualPool::FreeMemory(puVar1);
		}
		else {
		(*(ENV_CLASS_187_SECTION_MATERIALS.parent)->Method4)(&ENV_CLASS_187_SECTION_MATERIALS.parent,puVar1);
		}
		puVar1 = (undefined *)*ppvVar3;
		ppvVar3[-3] = (void *)0x0;
		if (*(int *)(puVar1 + 4) == -1) {
		_D3DDevice_SetTexture@8(0,(D3DTexture *)0x0);
		_D3DTexture_LockRect@20(*(D3DTexture **)(puVar1 + 0x60),0,&local_8,(int *)0x0,(uint *)&DAT_000000a0);
		XMemFree(local_4);
		if (*(void **)(puVar1 + 0x60) != (void *)0x0) {
		VirtualPool::FreeMemory(*(void **)(puVar1 + 0x60));
		}
		VirtualPool::FreeMemory(puVar1);
		}
		else {
		(*(ENV_CLASS_183_SECTION_TEXTURES.parent)->Method4)(&ENV_CLASS_183_SECTION_TEXTURES.parent,puVar1);
		}
		*ppvVar3 = (void *)0x0;
		local_10 = local_10 + 1;
		ppvVar3 = ppvVar3 + 1;
		}
		 while (local_10 < this->cnt);
		}
		return;
		}
		
	*/
	return;
}

void Font::ReadFont(char* fname) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall Font::ReadFont(Font *this,char *fname){
		int *piVar1;
		TwinsanityTexture *pTVar2;
		TwinsanityMaterial *pTVar3;
		ShaderProgramAbstract *pSVar4;
		int *piVar5;
		RendererText *pRVar6;
		int i;
		void **ppvVar7;
		uint uStack60;
		TwinString tmpStr2;
		TwinString fullPath;
		TwinString tmpStr1;
		MemoryStream stream;
		int *cntPtr;
		TwinString::Set(&tmpStr1,fname);
		i = 0;
		tmpStr2.value = (char *)0x0;
		tmpStr2.strLength = 0;
		tmpStr2.strSize = 0;
		TwinString::Copy(&tmpStr2,tmpStr1.value);
		TwinString::Append(&tmpStr2,".psf");
		fullPath.value = (char *)0x0;
		fullPath.strLength = 0;
		fullPath.strSize = 0;
		TwinString::Copy(&fullPath,tmpStr2.value);
		TwinString::Dispose(&tmpStr2);
		MemoryStream::ConstructFile(&stream,fullPath.value,'\0');
		TwinString::Dispose(&fullPath);
		CleanUp(this);
		cntPtr = &this->cnt;
		(*(stream.vtable)->ReadInt2)(&stream,cntPtr);
		if (0 < *cntPtr) {
		ppvVar7 = &this->field2_0x1c;
		do {
		(*(stream.vtable)->ReadUInt)(&stream,(uint *)&fname);
		(*(stream.vtable)->ReadUInt)(&uStack60);
		pTVar2 = SectionDataTexture::ReadTextureToSection(&ENV_CLASS_183_SECTION_TEXTURES,&stream,(uint)fname);
		ppvVar7[3] = pTVar2;
		pTVar3 = SectionDataMaterial::ReadMaterialToSection(&ENV_CLASS_187_SECTION_MATERIALS,&stream,uStack60);
		*ppvVar7 = pTVar3;
		if (pTVar3->shader == (TwinsanityMaterialShader *)0x0) {
		pSVar4 = (ShaderProgramAbstract *)0x0;
		}
		else {
		pSVar4 = pTVar3->shader->shaderPrograms[0];
		}
		pSVar4->field_0x1c = (char)i;
		i = i + 1;
		ppvVar7 = ppvVar7 + 1;
		}
		 while (i < *cntPtr);
		}
		piVar1 = &(this->parent).field1_0x4;
		(*(stream.vtable)->ReadInt2)(&stream,piVar1);
		(*(stream.vtable)->ReadInt2)(&(this->parent).field2_0x8);
		i = *piVar1;
		piVar5 = (int *)VirtualPool::AllocateMemory(i * 0x1c + 4);
		if (piVar5 == (int *)0x0) {
		pRVar6 = (RendererText *)0x0;
		}
		else {
		*piVar5 = i;
		pRVar6 = (RendererText *)(piVar5 + 1);
		}
		(this->parent).data = pRVar6;
		(**(code **)(tmpStr1.strSize + 4))(pRVar6,*piVar1 * 0x1c,1);
		MemoryStream::Dispose((MemoryStream *)&fullPath.strSize);
		TwinString::Dispose((TwinString *)&tmpStr2.strSize);
		return;
		}
		
	*/
	return;
}

void Font::DrawText(RendererText* renderer) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Function: __chkstk replaced with injection: alloca_probe void __thiscall Font::DrawText(Font *this,RendererText *renderer){
		byte *pbVar1;
		uint uVar2;
		Color CVar3;
		int iVar4;
		char *strPtr;
		int iVar5;
		int iVar6;
		byte *pbVar7;
		int cnt;
		int i;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		int local_1140;
		int local_113c;
		Vector2 local_1124;
		TwinString tmpStr1;
		TwinString tmpStr2;
		int local_1104 [32];
		char *stringArray [32];
		byte local_1004 [4096];
		float local_4;
		char *stringPtr;
		RendererText *pFVar3;
		char char;
		local_4 = (float)SECURITY_COOKIE;
		uVar2 = renderer->field5_0x14;
		fVar10 = (float)(int)RENDERER_WIDTH_1 * renderer->x;
		local_1140 = (int)(renderer->y * (float)(int)RENDERER_HEIGHT_2);
		strPtr = (renderer->str).value;
		i = -(int)strPtr;
		do {
		char = *strPtr;
		strPtr[(int)(local_1004 + i)] = char;
		strPtr = strPtr + 1;
		}
		 while (char != '\0');
		pbVar7 = local_1004;
		stringArray[0] = (char *)pbVar7;
		i = -(this->parent).field2_0x8;
		iVar5 = i + 0x61;
		cnt = 1;
		if (((iVar5 < 0) || ((this->parent).field1_0x4 <= iVar5)) &&((iVar5 = i + 0x41, iVar5 < 0 || ((this->parent).field1_0x4 <= iVar5)))) {
		iVar5 = 0;
		}
		pFVar3 = (this->parent).data;
		i = (this->parent).field2_0x8;
		iVar4 = -i;
		iVar6 = iVar4 + 0x20;
		fVar8 = ((this->parent).scale.x / ((&pFVar3->y)[iVar5 * 7] / (float)(int)RENDERER_WIDTH_1)) *renderer->originX;
		fVar12 = renderer->originY *((this->parent).scale.y / ((&pFVar3->x)[iVar5 * 7] / (float)(int)RENDERER_HEIGHT_2));
		if (((iVar6 < 0) || ((this->parent).field1_0x4 <= iVar6)) &&((0 < i || (iVar6 = iVar4, (this->parent).field1_0x4 <= iVar4)))) {
		iVar6 = 0;
		}
		fVar9 = (&((this->parent).data)->x)[iVar6 * 7] * fVar12;
		local_1104[0] = (int)fVar9;
		fVar13 = fVar9;
		while (local_1004[0] != 0) {
		if (*pbVar7 == 0x7e) {
		stringArray[cnt] = (char *)(pbVar7 + 1);
		local_1104[cnt] = (int)fVar9;
		fVar13 = fVar13 + fVar9;
		*pbVar7 = 0;
		cnt = cnt + 1;
		fVar9 = 0.0;
		}
		else {
		i = (uint)*pbVar7 - (this->parent).field2_0x8;
		if (((i < 0) || ((this->parent).field1_0x4 <= i)) &&((i = i + -0x20, i < 0 || ((this->parent).field1_0x4 <= i)))) {
		i = 0;
		}
		fVar11 = (&((this->parent).data)->x)[i * 7] * fVar12;
		if (fVar9 <= fVar11) {
		fVar9 = fVar11;
		}
		}
		pbVar1 = pbVar7 + 1;
		pbVar7 = pbVar7 + 1;
		local_1004[0] = *pbVar1;
		}
		if ((uVar2 & 1) == 0) {
		if ((uVar2 & 4) == 0) {
		local_1140 = local_1140 + (int)(fVar13 * FLOAT_0038bc0c);
		}
		else {
		local_1140 = local_1140 - (int)fVar13;
		}
		}
		if ((this->field2_0x1c != (void *)0x0) && (i = 0, 0 < cnt)) {
		do {
		local_113c = (int)fVar10;
		stringPtr = stringArray[i];
		TwinString::Set(&tmpStr1,stringPtr);
		FUN_00104a80(this,&local_1124,&tmpStr1,fVar8,fVar12);
		TwinString::Dispose(&tmpStr1);
		if ((uVar2 & 0x10) == 0) {
		if ((uVar2 & 0x40) == 0) {
		local_113c = local_113c + (int)(local_1124.x * FLOAT_0038bc0c);
		}
		else {
		local_113c = local_113c - (int)local_1124.x;
		}
		}
		CVar3 = renderer->color;
		TwinsanityMaterialShader::FUN_00105840(*(TwinsanityMaterialShader **)((int)this->field2_0x1c + 8));
		TwinString::Set(&tmpStr2,stringPtr);
		iVar5 = local_1104[0];
		if (*stringPtr != '\0') {
		DrawFontPlane(this,&tmpStr2,local_113c,local_1140,fVar8,fVar12,(float)CVar3);
		iVar5 = local_1104[i + 1];
		}
		local_1140 = local_1140 + iVar5;
		fVar10 = (float)(int)RENDERER_WIDTH_1 * renderer->x;
		TwinString::Dispose(&tmpStr2);
		i = i + 1;
		}
		 while (i < cnt);
		}
		@__security_check_cookie@4((int)local_4);
		return;
		}
		
	*/
	return;
}

void Font::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void Font::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void Font::EmptyFunction_9() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void Font::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}