#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeCamera.h"

#include "headers/Known/Game/Chunks/ChunkMeta.h"
#include "headers/Known/Game/InstanceSystem/InstanceContextRefCounter.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/Known/Game/Chunks/ChunkData.h"
void InstanceNodeCamera::Construct(ChunkMeta* chunkMeta) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeCamera * __thiscall InstanceNodeCamera::Construct(InstanceNodeCamera *this,ChunkMeta *chunkMeta){
		InstanceNodeAbstract::Contruct((InstanceNodeAbstract *)this);
		this->vtable = &InstanceNode_VT_Camera;
		this->chunkMeta = chunkMeta;
		this->ctxPtr = (InstanceContextRefCounter *)0x0;
		InstanceNodeKSubWrapper::Construct(&this->struct);
		this->field18_0x18 = 0;
		return this;
		}
		
	*/
	return;
}

InstanceContext* InstanceNodeCamera::FUN_000bc120(ChunkData* chunkData) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceContext * __thiscall InstanceNodeCamera::FUN_000bc120(InstanceNodeCamera *this,ChunkData *chunkData){
		InstanceContext *ctx;
		InstanceContextRefCounter *pIVar1;
		InstanceContext *pIVar2;
		InstanceContextRefCounter **this_00;
		ctx = ChunkData::FUN_001a22f0(chunkData,(InstanceTransform *)0x0);
		this_00 = &this->ctxPtr;
		pIVar2 = (InstanceContext *)*this_00;
		if (pIVar2 != (InstanceContext *)0x0) {
		pIVar2 = (InstanceContext *)(pIVar2->parent).vtable;
		}
		if (pIVar2 != ctx) {
		InstanceContextSmartPtr::Release(this_00);
		if (ctx == (InstanceContext *)0x0) {
		*this_00 = (InstanceContextRefCounter *)0x0;
		}
		else {
		pIVar1 = (InstanceContextRefCounter *)InstanceContextSmartPtr::CreateRef(&ctx->smartPtr,ctx,0);
		*this_00 = pIVar1;
		}
		}
		pIVar2 = (InstanceContext *)*this_00;
		if (pIVar2 != (InstanceContext *)0x0) {
		pIVar2 = *(InstanceContext **)&pIVar2->parent;
		}
		*(undefined *)((int)&pIVar2->field35_0x160 + 3) = 0;
		if (*this_00 == (InstanceContextRefCounter *)0x0) {
		return (InstanceContext *)0x0;
		}
		return (*this_00)->ctx;
		}
		
	*/
	return null;
}

void InstanceNodeCamera::CleanUp(InstanceNodeCamera* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeCamera::CleanUp(InstanceNodeCamera *param_1){
		InstanceContextRefCounter **this;
		InstanceContextRefCounter *pIVar1;
		InstanceContext *this_00;
		this = &param_1->ctxPtr;
		param_1->vtable = &InstanceNode_VT_Camera;
		pIVar1 = *this;
		if ((pIVar1 != (InstanceContextRefCounter *)0x0) && (pIVar1->ctx != (InstanceContext *)0x0)) {
		if (pIVar1 == (InstanceContextRefCounter *)0x0) {
		this_00 = (InstanceContext *)0x0;
		}
		else {
		this_00 = pIVar1->ctx;
		}
		(*((this_00->parent).vtable)->Method3)(this_00);
		if ((*this != (InstanceContextRefCounter *)0x0) && ((*this)->ctx != (InstanceContext *)0x0)) {
		InstanceContextSmartPtr::Release(this);
		*this = (InstanceContextRefCounter *)0x0;
		}
		}
		InstanceNodeKSubWrapper::Dispose(&param_1->struct);
		InstanceContextSmartPtr::Release(this);
		param_1->vtable = &InstanceNode_VT_L;
		InstanceNodeAbstract::UnrollVtable((InstanceNodeAbstract *)param_1);
		return;
		}
		
	*/
	return;
}

bool InstanceNodeCamera::Step(byte* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeCamera::Step(InstanceNodeCamera *this,byte *param_1){
		InstanceContext *this_00;
		InstanceContextRefCounter *pIVar1;
		InstanceNodeAbstract_VTable *pIVar2;
		bool bVar3;
		uint uVar4;
		InstanceContext *pIVar5;
		InstanceNodeAbstract *pIVar6;
		float fVar7;
		uVar4 = (GameController5->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar4 == 6) {
		pIVar5 = (InstanceContext *)0x0;
		}
		else {
		pIVar5 = (InstanceContext *)(GameController5->chunkDescriptor).playerInstanceContexts[uVar4];
		if (pIVar5 != (InstanceContext *)0x0) {
		pIVar5 = (InstanceContext *)(pIVar5->parent).vtable;
		}
		}
		this_00 = this->ctx;
		if ((pIVar5 == this_00) || (pIVar5 == (InstanceContext *)0x0)) {
		pIVar6 = InstanceDataList::GetNode(&this_00->nodes,Character);
		pIVar2 = pIVar6[1].vtable;
		if ((*param_1 & 1) != 0) {
		fVar7 = *(float *)&this->field_0x780 - (float)*(int *)(param_1 + 8) * TimePerTick1;
		*(float *)&this->field_0x780 = fVar7;
		if (fVar7 < 0.0) {
		*(undefined4 *)&this->field_0x780 = 0;
		}
		thunk_FUN_0007d140(&this->struct,param_1,(int)pIVar2,(int)this->ctxPtr->ctx);
		this->field18_0x18 = this->field18_0x18 & 0xfffffffe;
		bVar3 = InstanceNodeAbstract::Step((InstanceNodeAbstract *)this,(UnkTimePack *)param_1);
		return bVar3;
		}
		this->field18_0x18 = this->field18_0x18 | 1;
		}
		else {
		InstanceContext::FUN_000f85a0(this_00,'\0',(int *)this);
		pIVar1 = this->ctxPtr;
		if ((pIVar1 != (InstanceContextRefCounter *)0x0) && (pIVar1->ctx != (InstanceContext *)0x0)) {
		if (pIVar1 == (InstanceContextRefCounter *)0x0) {
		(**(code **)(iRam00000000 + 8))();
		bVar3 = InstanceNodeAbstract::Step((InstanceNodeAbstract *)this,(UnkTimePack *)param_1);
		return bVar3;
		}
		(*((pIVar1->ctx->parent).vtable)->Method2)(pIVar1->ctx);
		bVar3 = InstanceNodeAbstract::Step((InstanceNodeAbstract *)this,(UnkTimePack *)param_1);
		return bVar3;
		}
		}
		bVar3 = InstanceNodeAbstract::Step((InstanceNodeAbstract *)this,(UnkTimePack *)param_1);
		return bVar3;
		}
		
	*/
	return false;
}

void InstanceNodeCamera::SetCtx(uint ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeCamera::SetCtx(InstanceNodeCamera *this,InstanceContext *ctx){
		ChunkDataRefCounter *pCVar1;
		InstanceContext *ctx1;
		InstanceNodeCharacter *pIVar2;
		ChunkData *chunkData;
		pCVar1 = this->chunkMeta->chunkDataRef;
		if (pCVar1 == (ChunkDataRefCounter *)0x0) {
		chunkData = (ChunkData *)0x0;
		}
		else {
		chunkData = pCVar1->chunk;
		}
		InstanceNodeAbstract::SetCtx((InstanceNodeAbstract *)this,ctx);
		ctx1 = thunk_FUN_000bc120(this,chunkData);
		InstanceNodeKSubWrapper::thunk_FUN_0007ce90(&this->struct,GameController5,ctx1,this->ctx);
		pIVar2 = (InstanceNodeCharacter *)InstanceDataList::GetNode(&this->ctx->nodes,Character);
		InstanceNodeKSubWrapper::thunk_FUN_0007cf40(&this->struct,pIVar2->field1_0x18);
		*(undefined4 *)&this->field_0x780 = 0;
		return;
		}
		
	*/
	return;
}

void InstanceNodeCamera::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodeCamera::Dispose(InstanceNodeCamera *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (InstanceNodeAbstract *)this;
		}
		
	*/
	return;
}

void InstanceNodeCamera::FUN_000bc190(ChunkData* chunkData) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeCamera::FUN_000bc190(InstanceNodeCamera *this,ChunkData *chunkData){
		InstanceContext *ctx1;
		InstanceNodeCharacter *nodeC;
		ctx1 = thunk_FUN_000bc120(this,chunkData);
		InstanceNodeKSubWrapper::thunk_FUN_0007ce90(&this->struct,GameController5,ctx1,this->ctx);
		nodeC = (InstanceNodeCharacter *)InstanceDataList::GetNode(&this->ctx->nodes,Character);
		InstanceNodeKSubWrapper::thunk_FUN_0007cf40(&this->struct,nodeC->field1_0x18);
		*(undefined4 *)&this->field_0x780 = 0;
		return;
		}
		
	*/
	return;
}

uint InstanceNodeCamera::IsA(uint param_1, uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall InstanceNodeCamera::IsA(InstanceNodeCamera *this,undefined4 param_1,uint *param_2){
		InstanceContext *pIVar1;
		int iVar2;
		pIVar1 = (InstanceContext *)(*param_2 >> 0x12);
		if (((uint)pIVar1 & 1) != 0) {
		pIVar1 = (InstanceContext *)this->ctxPtr;
		if (pIVar1 != (InstanceContext *)0x0) {
		pIVar1 = *(InstanceContext **)&pIVar1->parent;
		}
		if (((pIVar1->parent).flags & 0x20000U) == 0) {
		if (this->ctxPtr == (InstanceContextRefCounter *)0x0) {
		iVar2 = FUN_000f8b00((void *)0x0,(int)param_2);
		return (uint)(iVar2 != 0);
		}
		iVar2 = FUN_000f8b00(this->ctxPtr->ctx,(int)param_2);
		return (uint)(iVar2 != 0);
		}
		}
		return (uint)pIVar1 & 0xffffff00;
		}
		
	*/
	return 0;
}

void InstanceNodeCamera::FUN_000bc2f0(InstanceNodeCamera* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeCamera::FUN_000bc2f0(InstanceNodeCamera *param_1){
		InstanceContextRefCounter *pIVar1;
		InstanceContext *this_00;
		InstanceContextRefCounter **this;
		pIVar1 = param_1->ctxPtr;
		this = &param_1->ctxPtr;
		if ((pIVar1 != (InstanceContextRefCounter *)0x0) && (pIVar1->ctx != (InstanceContext *)0x0)) {
		if (pIVar1 == (InstanceContextRefCounter *)0x0) {
		this_00 = (InstanceContext *)0x0;
		}
		else {
		this_00 = pIVar1->ctx;
		}
		(*((this_00->parent).vtable)->Method3)(this_00);
		if ((*this != (InstanceContextRefCounter *)0x0) && ((*this)->ctx != (InstanceContext *)0x0)) {
		InstanceContextSmartPtr::Release(this);
		*this = (InstanceContextRefCounter *)0x0;
		}
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeCamera::UpdateTime(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeCamera::UpdateTime(InstanceNodeCamera *this,int param_1){
		ChunkData *chunkData;
		chunkData = (this->ctx->parent).chunkData;
		if (chunkData != (ChunkData *)0x0) {
		*(undefined4 *)&this->field_0xc = *(undefined4 *)(param_1 + 4);
		thunk_FUN_000bc190(this,chunkData);
		}
		return;
		}
		
	*/
	return;
}

uint InstanceNodeCamera::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodeCamera::GetBuilderIndex(void){
		return 0x9007;
		}
		
	*/
	return 0;
}

