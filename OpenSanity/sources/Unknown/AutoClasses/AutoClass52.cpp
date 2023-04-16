#include "headers/Unknown/AutoClasses/AutoClass52.h"

#include "headers/Known/Game/Chunks/ChunkData.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"

AutoClass52::AutoClass52(ChunkData* param_1) : chunkName()
{
	this->field2_0x20 = 0;
	if (param_1 != (ChunkData*)0x0) {
		this->chunkName.Copy(param_1->chunkName.value);
	}
}

AutoClass52::AutoClass52(AutoClass52* other)
{
	(this->vec1).x = (other->vec1).x;
	(this->vec1).y = (other->vec1).y;
	(this->vec1).z = (other->vec1).z;
	(this->vec1).w = (other->vec1).w;
	(this->vec2).x = (other->vec2).x;
	(this->vec2).y = (other->vec2).y;
	(this->vec2).z = (other->vec2).z;
	(this->vec2).w = (other->vec2).w;
	this->field2_0x20 = other->field2_0x20;
	(this->chunkName).value = (char*)0x0;
	(this->chunkName).strLength = 0;
	(this->chunkName).strSize = 0;
	this->chunkName.Copy(other->chunkName.value);
}

AutoClass52::~AutoClass52()
{

}


AutoClass52* AutoClass52::Copy(AutoClass52* other) {
	(this->vec1).x = (other->vec1).x;
	(this->vec1).y = (other->vec1).y;
	(this->vec1).z = (other->vec1).z;
	(this->vec1).w = (other->vec1).w;
	(this->vec2).x = (other->vec2).x;
	(this->vec2).y = (other->vec2).y;
	(this->vec2).z = (other->vec2).z;
	(this->vec2).w = (other->vec2).w;
	this->field2_0x20 = other->field2_0x20;
	this->chunkName.Copy(other->chunkName.value);
	return this;
}

void AutoClass52::FUN_000f6ab0(InstanceContext* ctx, byte param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass52::FUN_000f6ab0(AutoClass52 *this,InstanceContext *ctx,byte param_2){
		float fVar1;
		float fVar2;
		float fVar3;
		ChunkData *pCVar4;
		InstanceTransform *pIVar5;
		pCVar4 = (ctx->parent).chunkData;
		pIVar5 = (ctx->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 8) != 0) {
		Vector4::FUN_000db0d0(&pIVar5->rotation,&pIVar5->matrix);
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffff5);
		}
		(this->vec1).x = (pIVar5->rotation).x;
		(this->vec1).y = (pIVar5->rotation).y;
		(this->vec1).z = (pIVar5->rotation).z;
		(this->vec1).w = (pIVar5->rotation).w;
		pIVar5 = (ctx->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar1 = (pIVar5->matrix).m44;
		fVar2 = (pIVar5->matrix).m43;
		fVar3 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar3;
		(pIVar5->position).z = fVar2;
		(pIVar5->position).w = fVar1;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		(this->vec2).x = (pIVar5->position).x;
		(this->vec2).y = (pIVar5->position).y;
		(this->vec2).z = (pIVar5->position).z;
		(this->vec2).w = (pIVar5->position).w;
		if (pCVar4 != (ChunkData *)0x0) {
		TwinString::Copy(&this->chunkName,(pCVar4->chunkName2).value);
		}
		this->field2_0x20 = this->field2_0x20 ^ ((uint)param_2 ^ this->field2_0x20) & 1;
		return;
		}
		
	*/
	return;
}

void AutoClass52::FUN_000f6b70(InstanceContext* ctx, ChunkData* chunkData, byte param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass52::FUN_000f6b70(AutoClass52 *this,InstanceContext *ctx,ChunkData *chunkData,byte param_3){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceTransform *pIVar4;
		TwinString::Copy(&this->chunkName,(chunkData->chunkName2).value);
		pIVar4 = (ctx->parent).transform;
		if ((*(byte *)&pIVar4->field3_0x60 & 8) != 0) {
		Vector4::FUN_000db0d0(&pIVar4->rotation,&pIVar4->matrix);
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffff5);
		}
		(this->vec1).x = (pIVar4->rotation).x;
		(this->vec1).y = (pIVar4->rotation).y;
		(this->vec1).z = (pIVar4->rotation).z;
		(this->vec1).w = (pIVar4->rotation).w;
		pIVar4 = (ctx->parent).transform;
		if ((*(byte *)&pIVar4->field3_0x60 & 4) != 0) {
		fVar1 = (pIVar4->matrix).m44;
		fVar2 = (pIVar4->matrix).m43;
		fVar3 = (pIVar4->matrix).m42;
		(pIVar4->position).x = (pIVar4->matrix).m41;
		(pIVar4->position).y = fVar3;
		(pIVar4->position).z = fVar2;
		(pIVar4->position).w = fVar1;
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffffa);
		}
		(this->vec2).x = (pIVar4->position).x;
		(this->vec2).y = (pIVar4->position).y;
		(this->vec2).z = (pIVar4->position).z;
		(this->vec2).w = (pIVar4->position).w;
		this->field2_0x20 = this->field2_0x20 ^ ((uint)param_3 ^ this->field2_0x20) & 1;
		return;
		}
		
	*/
	return;
}

void AutoClass52::FUN_000fb0b0(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall AutoClass52::FUN_000fb0b0(AutoClass52 *this,InstanceContext *ctx){
		ChunkList *chunkList;
		ChunkData *chunkData;
		TwinString *chunkName;
		chunkName = &this->chunkName;
		chunkList = ChunkList::GetInstance();
		chunkData = ChunkList::GetDataByName(chunkList,chunkName);
		if (chunkData == (ChunkData *)0x0) {
		if ((*(byte *)&this->field2_0x20 & 1) == 0) {
		(*((ctx->parent).vtable)->Method3)(ctx);
		return;
		}
		}
		else {
		InstanceContext::thunk_FUN_00026f70(ctx,&this->vec1);
		InstanceContext::thunk_FUN_00026e90(ctx,&this->vec2);
		ChunkData::FUN_0013e400(chunkData,ctx);
		}
		return;
		}
		
	*/
	return;
}

