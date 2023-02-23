#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"

#include "headers/Known/Graphics/ScreenInfo.h"
#include "headers/Known/Graphics/Renderer/ScreenInfoExt.h"
#include "headers/Known/Graphics/Renderer/Renderer.h"
#include "headers/Unknown/AutoClasses/AutoClass58.h"
#include "headers/Known/Graphics/Font/Font.h"
void FontRenderer::DrawAll() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall FontRenderer::DrawAll(FontRenderer *this){
		void *pvVar1;
		int *piVar2;
		uint uVar3;
		AutoClass58 **font;
		int iVar4;
		int *piVar5;
		if ((*(byte *)&this->flags & 1) != 0) {
		piVar5 = &this->field14_0x38;
		iVar4 = 6;
		do {
		for (pvVar1 = (void *)*piVar5;
		 pvVar1 != (void *)0x0;
		 pvVar1 = *(void **)((int)pvVar1 + 0x4c)){
		uVar3 = *(uint *)((int)pvVar1 + 0x40);
		piVar2 = *(int **)((int)pvVar1 + 0x48);
		if ((uVar3 & 1) == 0) {
		if ((uVar3 & 2) == 0) {
		(**(code **)(*piVar2 + 0x10))(pvVar1,*(undefined4 *)((int)pvVar1 + 0x44));
		}
		else {
		(**(code **)(*piVar2 + 0x14))(pvVar1);
		}
		}
		else if ((uVar3 & 2) == 0) {
		(**(code **)(*piVar2 + 0x18))(*(undefined4 *)((int)pvVar1 + 0x44));
		}
		else {
		(**(code **)(*piVar2 + 0x1c))();
		}
		}
		pvVar1 = (void *)*piVar5;
		if (pvVar1 != (void *)0x0) {
		if (*(void **)((int)pvVar1 + 0x4c) != (void *)0x0) {
		FUN_00118550(*(void **)((int)pvVar1 + 0x4c),1);
		}
		VirtualPool::FreeMemory(pvVar1);
		}
		uVar3 = 0;
		*piVar5 = 0;
		piVar5[6] = 0;
		piVar5 = piVar5 + 1;
		iVar4 = iVar4 + -1;
		}
		 while (iVar4 != 0);
		for (;
		 (-1 < (int)uVar3 && (uVar3 < (uint)(this->fontCollection).fontsCount));
		 uVar3 = uVar3 + 1) {
		font = (AutoClass58 **)(*(code *)PTR_Get_00391c9c)();
		AutoClass58::DrawAll(*font);
		}
		for (uVar3 = 0;
		 (-1 < (int)uVar3 && (uVar3 < (uint)(this->fontCollection).fontsCount));
		uVar3 = uVar3 + 1) {
		font = (AutoClass58 **)(*(code *)PTR_Get_00391c78)();
		AutoClass58::Clear(*font);
		}
		}
		return;
		}
		
	*/
	return;
}

void FontRenderer::Render() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall FontRenderer::Render(FontRenderer *renderer){
		InstanceTransform *transform;
		ChunkData *this;
		VideoPlayer *pVVar1;
		InstanceNodeR *nodeR;
		uint uVar2;
		ChunkData *chunkData;
		InstanceContext *ctx;
		Matrix4 *matrix;
		float aspect;
		Matrix4 local_d0;
		Matrix4 local_90;
		Matrix4 local_50;
		InstanceContextRefCounter *ctxPtr;
		pVVar1 = VideoPlayer;
		if ((VideoPlayer != (VideoPlayer *)0x0) && (((VideoPlayer->parent).flags & 0xf000) == 0x2000)) {
		_D3DDevice_Clear@24(0,(undefined *)0x0,0xf2,(Color)0xff000000,1.0);
		(*((pVVar1->parent).vtable)->Swap)();
		DrawAll(renderer);
		return;
		}
		if (renderer->field1_0x4 == (AutoClass25 *)0x0) {
		uVar2 = 2;
		if (((uint)renderer->flags >> 4 & 1) != 0) {
		uVar2 = 0xf2;
		}
		if (((uint)renderer->flags >> 5 & 1) != 0) {
		uVar2 = uVar2 | 1;
		}
		_D3DDevice_Clear@24(0,(undefined *)0x0,uVar2,(Color)0xff000000,1.0);
		DrawAll(renderer);
		return;
		}
		ctxPtr = renderer->field1_0x4->ctxPtr;
		if (ctxPtr == (InstanceContextRefCounter *)0x0) {
		ctx = (InstanceContext *)0x0;
		chunkData = (ChunkData *)0x0;
		}
		else {
		ctx = ctxPtr->ctx;
		if (ctx == (InstanceContext *)0x0) {
		chunkData = (ChunkData *)0x0;
		}
		else {
		chunkData = (ctx->parent).chunkData;
		}
		}
		if (chunkData == (ChunkData *)0x0) {
		ClearViewport((bool)((byte)((uint)renderer->flags >> 4) & 1),(bool)((byte)((uint)renderer->flags >> 5) & 1));
		DrawAll(renderer);
		return;
		}
		transform = (ctx->parent).transform;
		InstanceTransform::FillMatrix(transform);
		nodeR = (InstanceNodeR *)InstanceDataList::GetNode(&ctx->nodes,NodeR);
		DAT_003ec544 = renderer->screenInfoExt;
		this = (ChunkData *)chunkData->skydome;
		matrix = &renderer->field1_0x4->matrix2;
		DAT_003ec548 = renderer->field1_0x4;
		Matrix4::Construct1(&local_d0);
		_D3DDevice_SetTransform@8(0,matrix);
		_D3DDevice_SetTransform@8(6,&local_d0);
		_D3DDevice_GetTransform@8(1,&local_90);
		Matrix4::Multiply4443(matrix,&local_90,&local_50);
		_D3DDevice_SetTransform@8(7,&local_50);
		FUN_001057c0(&ENV_CLASS_214.arraysCnt);
		DAT_003ec518 = 0;
		aspect = FLOAT_0038e420;
		if (IS_WIDESCREEN == false) {
		aspect = FLOAT_0038e41c;
		}
		FUN_00136860(nodeR->fov,nodeR->near,nodeR->far,aspect);
		AutoClass25::FUN_001c6d10(renderer->field1_0x4,renderer->screenInfoExt);
		(chunkData->field6_0x90).m11 = local_d0.m11;
		(chunkData->field6_0x90).m12 = local_d0.m12;
		(chunkData->field6_0x90).m13 = local_d0.m13;
		(chunkData->field6_0x90).m14 = local_d0.m14;
		(chunkData->field6_0x90).m21 = local_d0.m21;
		(chunkData->field6_0x90).m22 = local_d0.m22;
		(chunkData->field6_0x90).m23 = local_d0.m23;
		(chunkData->field6_0x90).m24 = local_d0.m24;
		(chunkData->field6_0x90).m31 = local_d0.m31;
		(chunkData->field6_0x90).m32 = local_d0.m32;
		(chunkData->field6_0x90).m33 = local_d0.m33;
		(chunkData->field6_0x90).m34 = local_d0.m34;
		(chunkData->field6_0x90).m41 = local_d0.m41;
		(chunkData->field6_0x90).m42 = local_d0.m42;
		(chunkData->field6_0x90).m43 = local_d0.m43;
		(chunkData->field6_0x90).m44 = local_d0.m44;
		if (this == (ChunkData *)0x0) {
		ClearViewport((bool)((byte)((uint)renderer->flags >> 4) & 1),(bool)((byte)((uint)renderer->flags >> 5) & 1));
		}
		else {
		ChunkData::FUN_00111d50(this,renderer->field1_0x4);
		}
		ChunkData::RenderWorld(chunkData,&transform->matrix,renderer->field1_0x4);
		ChunkData::FUN_0013ba00(chunkData,matrix,&local_d0);
		FUN_001057f0(&ENV_CLASS_214.arraysCnt);
		FUN_0012c3d0((uint)(GameState == 3),(float)ENV_FLOAT_116_DT3 * TimePerTick1);
		DrawAll(renderer);
		return;
		}
		
	*/
	return;
}

void FontRenderer::DrawText_Twins(float x, float y, char* str) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall FontRenderer::DrawText(FontRenderer *this,float x,float y,char *str){
		float fVar1;
		RendererText *ptr;
		AutoClass58 *pAVar2;
		if (str != (char *)0x0) {
		ptr = (RendererText *)VirtualPool::AllocateMemory(0x24);
		if (ptr == (RendererText *)0x0) {
		ptr = (RendererText *)0x0;
		}
		else {
		ptr->x = x;
		ptr->y = y;
		ptr->color = COLOR_WHITE;
		ptr->field5_0x14 = 0x11;
		TwinString::Set(&ptr->str,str);
		fVar1 = FLOAT_0038639c;
		ptr->originX = FLOAT_0038639c;
		ptr->originY = fVar1;
		}
		if ((ptr->str).strLength == 0) {
		TwinString::Dispose(&ptr->str);
		VirtualPool::FreeMemory(ptr);
		return;
		}
		pAVar2 = FontCollection::CreateWrapperAndAddFont(&this->fontCollection,this->font);
		ptr->originX = this->originX;
		ptr->originY = this->originY;
		ptr->color = this->color;
		ptr->field5_0x14 = this->field13_0x34;
		AutoClass58SubCollection::Add(&pAVar2->textRendererCollection,ptr);
		}
		return;
		}
		
	*/
	return;
}

FontRenderer::FontRenderer() {

}

FontRenderer::FontRenderer(Renderer* renderer, ScreenInfo* screen) {
	float fVar1;
	AutoClass58** ppAVar2;
	ScreenInfoExt* screenInfoExt;
	this->renderer = renderer;
	this->field1_0x4 = (AutoClass25*)0x0;
	this->screenInfoExt = (ScreenInfoExt*)0x0;
	this->color = Color(1.0, 1.0, 1.0, 1.0);
	(this->fontCollection).fontsCount = 0;
	(this->fontCollection).totalSpace = 1;
	(this->fontCollection).field3_0xc = 1;
	ppAVar2 = new AutoClass58 * ();
	(this->fontCollection).fonts = ppAVar2;
	this->font = (Font*)0x0;
	this->originX = 1.0;
	this->originY = 1.0;
	this->field13_0x34 = 0x11;
	this->flags = 0x31;
	screenInfoExt = new ScreenInfoExt();
	(screenInfoExt->screenInfo).renderer = screen->renderer;
	(screenInfoExt->screenInfo).field1_0x4 = screen->field1_0x4;
	(screenInfoExt->screenInfo).field2_0x8 = screen->field2_0x8;
	(screenInfoExt->screenInfo).width2 = screen->width2;
	(screenInfoExt->screenInfo).height2 = screen->height2;
	(screenInfoExt->screenInfo).color = screen->color;
	(screenInfoExt->screenInfo).width1 = screen->width1;
	(screenInfoExt->screenInfo).height1 = screen->height1;
	this->screenInfoExt = screenInfoExt;
	this->field14_0x38 = 0;
	this->field20_0x50 = 0;
	this->field15_0x3c = 0;
	this->field21_0x54 = 0;
	this->field16_0x40 = 0;
	this->field22_0x58 = 0;
	this->field17_0x44 = 0;
	this->field23_0x5c = 0;
	this->field18_0x48 = 0;
	this->field24_0x60 = 0;
	this->field19_0x4c = 0;
	this->field25_0x64 = 0;
}

