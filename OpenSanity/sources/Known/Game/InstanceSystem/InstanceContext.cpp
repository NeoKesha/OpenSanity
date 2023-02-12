#include "headers/Known/Game/InstanceSystem/InstanceContext.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContextSub.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Physics/InstanceNodePhysics.h"
#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeCharacter.h"
#include "headers/Known/Game/InstanceSystem/InstanceContextRefCounter.h"
#include "headers/Known/Game/Chunks/ChunkData.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeU.h"
#include "headers/Known/Game/InstanceSystem/InstanceTransform.h"
void InstanceContext::FUN_000a81e0(float* param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceContext::FUN_000a81e0(InstanceContext *this,float *param_2,undefined4 param_3){
		NodeRelated2C *pNVar1;
		InstanceNodeCharacter *nodeC;
		float local_50;
		float local_4c;
		float local_48;
		float local_44;
		float local_40;
		undefined4 local_3c;
		undefined4 local_38;
		float local_34;
		Vector4 local_30;
		float local_20 [7];
		InstanceTransform *transform;
		transform = (this->parent).transform;
		InstanceTransform::FillMatrix(transform);
		nodeC = (InstanceNodeCharacter *)InstanceDataList::GetNode(&this->nodes,Character);
		pNVar1 = nodeC->field1_0x18;
		thunk_FUN_000a7e00(param_2,&(transform->matrix).m21,&(transform->matrix).m31,local_20);
		local_40 = 0.0;
		local_3c = 0;
		local_38 = param_3;
		local_34 = FLOAT_0038639c;
		FUN_000db360(local_20,&local_40,&local_50,'\0');
		local_40 = 0.0;
		local_3c = 0;
		local_38 = param_3;
		local_34 = FLOAT_0038639c;
		Vector4::FUN_000db0d0(&local_30,&transform->matrix);
		FUN_000dae60(&local_30,&local_30.x,local_20);
		FUN_000db360(&local_30,&local_40,&local_50,'\0');
		thunk_FUN_000a6880(local_20,&local_50,(int)nodeC);
		(pNVar1->field35_0xe0).x = local_50;
		(pNVar1->field35_0xe0).y = local_4c;
		(pNVar1->field35_0xe0).z = local_48;
		(pNVar1->field35_0xe0).w = local_44;
		return;
		}
		
	*/
	return;
}

void InstanceContext::FUN_00026f70(Vector4* vec) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceContext::FUN_00026f70(InstanceContext *this,Vector4 *vec){
		bool bVar1;
		bVar1 = InstanceTransform::thunk_FUN_000269f0((this->parent).transform,vec);
		if (bVar1 != false) {
		RegisterCtxPtrToList(this);
		}
		return;
		}
		
	*/
	return;
}

bool InstanceContext::GetFocusRelated(InstanceContext** outCtx, Vector4* outPos) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceContext::GetFocusRelated(InstanceContext *this,InstanceContext **outCtx,Vector4 *outPos){
		float fVar1;
		InstanceContext *focusCtx;
		fVar1 = (this->parent).field14_0x20.matrix2.m43;
		if (((uint)fVar1 & 1) == 0) {
		if (((uint)fVar1 & 2) != 0) {
		outPos->x = (float)(this->parent).field14_0x20.field4_0x10;
		outPos->y = (float)(this->parent).field14_0x20.field5_0x14;
		outPos->z = (float)(this->parent).field14_0x20.field6_0x18;
		outPos->w = (float)(this->parent).field14_0x20.matrix1;
		return true;
		}
		}
		else {
		focusCtx = (this->parent).field14_0x20.field4_0x10;
		if (focusCtx != (InstanceContext *)0x0) {
		if ((*(byte *)&(focusCtx->parent).flags & 1) == 0) {
		*outCtx = focusCtx;
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)focusCtx,outPos);
		return true;
		}
		(this->parent).field14_0x20.field4_0x10 = (InstanceContext *)0x0;
		(this->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar1 & 0xfffffffc);
		*outCtx = (InstanceContext *)0x0;
		}
		}
		return false;
		}
		
	*/
	return false;
}

void InstanceContext::FUN_0005a4c0(Vector4* param_1, Vector4* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceContext::FUN_0005a4c0(InstanceContext *this,Vector4 *param_1,Vector4 *param_2){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceTransform *pIVar4;
		pIVar4 = (this->parent).transform;
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
		param_1->x = (pIVar4->position).x;
		param_1->y = (pIVar4->position).y;
		param_1->z = (pIVar4->position).z;
		param_1->w = (pIVar4->position).w;
		pIVar4 = (this->parent).transform;
		InstanceTransform::FillMatrix(pIVar4);
		param_2->x = (pIVar4->matrix).m31;
		param_2->y = (pIVar4->matrix).m32;
		param_2->z = (pIVar4->matrix).m33;
		param_2->w = (pIVar4->matrix).m34;
		return;
		}
		
	*/
	return;
}

void InstanceContext::FUN_00026e90(Vector4* vec) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceContext::FUN_00026e90(InstanceContext *this,Vector4 *vec){
		bool bVar1;
		bVar1 = InstanceTransform::SetupPosition((this->parent).transform,vec);
		if (bVar1 != false) {
		RegisterCtxPtrToList(this);
		}
		return;
		}
		
	*/
	return;
}

uint InstanceContext::FUN_00054ce0(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall InstanceContext::FUN_00054ce0(InstanceContext *this,int *param_1){
		InstanceContext *pIVar1;
		int *piVar2;
		piVar2 = (int *)(this->parent).field14_0x20.matrix2.m43;
		if ((((uint)piVar2 & 1) != 0) &&(pIVar1 = (this->parent).field14_0x20.field4_0x10, pIVar1 != (InstanceContext *)0x0)) {
		if ((*(byte *)&(pIVar1->parent).flags & 1) == 0) {
		*param_1 = (int)pIVar1;
		return CONCAT31((int3)((uint)piVar2 >> 8),1);
		}
		(this->parent).field14_0x20.matrix2.m43 = (float)((uint)piVar2 & 0xfffffffc);
		(this->parent).field14_0x20.field4_0x10 = (InstanceContext *)0x0;
		*param_1 = 0;
		piVar2 = param_1;
		}
		return (uint)piVar2 & 0xffffff00;
		}
		
	*/
	return 0;
}

InstanceNodeCharacter* InstanceContext::GetCharacterNode(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeCharacter * __cdecl InstanceContext::GetCharacterNode(InstanceContext *ctx){
		InstanceNodeCrate *nodeD;
		InstanceNodeI *nodeI;
		InstanceNodeCreature *nodeE;
		InstanceNodeCharacter *nodeC;
		InstanceNodeFurniture *nodeG;
		InstanceNodeChiChi *nodeB;
		InstanceNodeAA *nodeAA;
		InstanceNodePayGate *nodeH;
		InstanceNodeF *nodeF;
		if ((ctx->nodes).array[0xd] != (InstanceNodeAbstract *)0x0) {
		nodeD = (InstanceNodeCrate *)InstanceDataList::GetNode(&ctx->nodes,Crate);
		return (InstanceNodeCharacter *)nodeD;
		}
		if ((ctx->nodes).array[0xe] != (InstanceNodeAbstract *)0x0) {
		nodeI = (InstanceNodeI *)InstanceDataList::GetNode(&ctx->nodes,Projectile);
		return (InstanceNodeCharacter *)nodeI;
		}
		if ((ctx->nodes).array[0xf] != (InstanceNodeAbstract *)0x0) {
		nodeE = (InstanceNodeCreature *)InstanceDataList::GetNode(&ctx->nodes,Creature);
		return (InstanceNodeCharacter *)nodeE;
		}
		if ((ctx->nodes).array[0xc] != (InstanceNodeAbstract *)0x0) {
		nodeC = (InstanceNodeCharacter *)InstanceDataList::GetNode(&ctx->nodes,Character);
		return nodeC;
		}
		if ((ctx->nodes).array[0x10] != (InstanceNodeAbstract *)0x0) {
		nodeG = (InstanceNodeFurniture *)InstanceDataList::GetNode(&ctx->nodes,Furniture);
		return (InstanceNodeCharacter *)nodeG;
		}
		if ((ctx->nodes).array[0x11] != (InstanceNodeAbstract *)0x0) {
		nodeB = (InstanceNodeChiChi *)InstanceDataList::GetNode(&ctx->nodes,ChiChiGrass);
		return (InstanceNodeCharacter *)nodeB;
		}
		if ((ctx->nodes).array[0x14] != (InstanceNodeAbstract *)0x0) {
		nodeAA = (InstanceNodeAA *)InstanceDataList::GetNode(&ctx->nodes,NodeAA);
		return (InstanceNodeCharacter *)nodeAA;
		}
		if ((ctx->nodes).array[0x12] != (InstanceNodeAbstract *)0x0) {
		nodeH = (InstanceNodePayGate *)InstanceDataList::GetNode(&ctx->nodes,PayGate);
		return (InstanceNodeCharacter *)nodeH;
		}
		if ((ctx->nodes).array[0x13] != (InstanceNodeAbstract *)0x0) {
		nodeF = (InstanceNodeF *)InstanceDataList::GetNode(&ctx->nodes,NodeF);
		return (InstanceNodeCharacter *)nodeF;
		}
		return (InstanceNodeCharacter *)0x0;
		}
		
	*/
	return null;
}

uint* InstanceContext::FUN_000f7220() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint * __fastcall InstanceContext::FUN_000f7220(InstanceContext *this){
		ChunkData *pCVar1;
		UnkTimePack *pUVar2;
		pCVar1 = (this->parent).chunkData;
		if ((pCVar1 == (ChunkData *)0x0) || (pUVar2 = pCVar1->timers, pUVar2 == (UnkTimePack *)0x0)) {
		pUVar2 = GlobalClock->timeArray;
		}
		return &(pUVar2 + *(byte *)((int)&this->field35_0x160 + 3))->flags;
		}
		
	*/
	return null;
}

bool InstanceContext::DoTasks() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceContext::DoTasks(void){
		int iVar1;
		InstanceContext *this;
		this = CTX_LIST;
		if (DAT_003ea70c != (int *)0x0) {
		iVar1 = *DAT_003ea70c;
		DAT_003ea70c = (int *)DAT_003ea70c[5];
		(**(code **)(iVar1 + 4))(1);
		return true;
		}
		if (CTX_LIST == (InstanceContext *)0x0) {
		return false;
		}
		SomeHackySet(CTX_LIST,(InstanceContextRefCounter *)&CTX_LIST,0x150,0x154);
		(*((this->parent).vtable)->Dispose)(this,1);
		return true;
		}
		
	*/
	return false;
}

bool InstanceContext::DoTasks_9() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceContext::DoTasks(void){
		bool bVar1;
		bVar1 = DoTasks();
		return (bool)(bVar1 & 1);
		}
		
	*/
	return false;
}

void InstanceContext::AddCtxToList(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __cdecl InstanceContext::AddCtxToList(InstanceContext *ctx){
		if (CTX_LIST == (InstanceContext *)0x0) {
		CTX_LIST = ctx;
		ctx->prev = (InstanceContext *)0x0;
		ctx->next = (InstanceContext *)0x0;
		return;
		}
		CTX_LIST->prev = ctx;
		ctx->next = CTX_LIST;
		CTX_LIST = ctx;
		return;
		}
		
	*/
	return;
}

byte InstanceContext::SetNode(bool flag, InstanceNodeAbstract* instanceNode) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte __thiscall InstanceContext::SetNode(InstanceContext *this,bool flag,InstanceNodeAbstract *instanceNode){
		byte index;
		bool result;
		ChunkData *chunkData;
		if (flag != false) {
		 get index index = (*instanceNode->vtable->GetIndex)();
		if ((this->nodes).array[index] == (InstanceNodeAbstract *)0x0) {
		(this->nodes).cnt = (this->nodes).cnt | 1 << (index & 0x1f);
		(this->nodes).array[index] = instanceNode;
		}
		(*instanceNode->vtable->SetCtx)(instanceNode,this);
		}
		chunkData = (this->parent).chunkData;
		if (chunkData == (ChunkData *)0x0) {
		return 1;
		}
		result = AutoClass4::AddNodeToSlot(chunkData->nodes,instanceNode);
		return result;
		}
		
	*/
	return 0;
}

uint InstanceContext::FUN_000f85a0(char param_1, int* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall InstanceContext::FUN_000f85a0(InstanceContext *this,char param_1,int *param_2){
		ChunkData *pCVar1;
		uint in_EAX;
		uint uVar2;
		InstanceNodeAbstract *pIVar3;
		undefined4 uVar4;
		pIVar3 = (InstanceNodeAbstract *)(in_EAX & 0xffffff00);
		if (param_1 != '\0') {
		uVar2 = (**(code **)(*param_2 + 0x10))();
		uVar2 = uVar2 & 0xff;
		pIVar3 = (this->nodes).array[uVar2];
		if (pIVar3 != (InstanceNodeAbstract *)0x0) {
		pIVar3 = (InstanceNodeAbstract *)((this->nodes).cnt & ~(1 << ((byte)uVar2 & 0x1f)));
		(this->nodes).cnt = pIVar3;
		(this->nodes).array[uVar2] = (InstanceNodeAbstract *)0x0;
		}
		}
		pCVar1 = (this->parent).chunkData;
		if (pCVar1 == (ChunkData *)0x0) {
		return CONCAT31((int3)((uint)pIVar3 >> 8),1);
		}
		uVar4 = FUN_000f7600((int)pCVar1->nodes,param_2);
		return uVar4;
		}
		
	*/
	return 0;
}

void InstanceContext::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceContext * __fastcall InstanceContext::Construct(InstanceContext *this){
		InstanceContextBase::Construct(&this->parent);
		(this->parent).vtable = (InstanceContext_VTable *)&InstanceContext_VT;
		(this->smartPtr).refCounter = (InstanceContextRefCounter *)0x0;
		this->field27_0xe0 = 0;
		(this->nodes).cnt = 0;
		(this->nodes).array[0] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[1] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[2] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[3] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[4] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[5] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[6] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[7] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[8] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[9] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[10] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0xb] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0xd] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0xe] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0xf] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x10] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x11] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x12] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x13] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x14] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x15] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x16] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x17] = (InstanceNodeAbstract *)0x0;
		this->findMe = (undefined *)0x0;
		this->subPtr = (InstanceContextSub *)0x0;
		this->prev = (InstanceContext *)0x0;
		this->next = (InstanceContext *)0x0;
		this->field33_0x158 = 0;
		this->field34_0x15c = 0;
		this->field35_0x160 = -1;
		this->field36_0x164 = -1;
		(this->vec).x = Vector4_0039ef70.x;
		(this->vec).y = Vector4_0039ef70.y;
		(this->vec).z = Vector4_0039ef70.z;
		(this->vec).w = FLOAT_0038639c;
		return this;
		}
		
	*/
	return;
}

InstanceContextSub* InstanceContext::InitSubStruct(ChunkData* chunkData) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceContextSub * __thiscall InstanceContext::InitSubStruct(InstanceContext *this,ChunkData *chunkData){
		InstanceContextSub *this_00;
		InstanceContextSub *sub;
		if (this->subPtr == (InstanceContextSub *)0x0) {
		this_00 = (InstanceContextSub *)VirtualPool::AllocateMemory(400);
		if (this_00 != (InstanceContextSub *)0x0) {
		sub = InstanceContextSub::Construct(this_00,this,chunkData);
		this->subPtr = sub;
		return sub;
		}
		this->subPtr = (InstanceContextSub *)0x0;
		}
		return this->subPtr;
		}
		
	*/
	return null;
}

void InstanceContext::DoUpdate(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceContext::DoUpdate(InstanceContext *ctx){
		int **this;
		void **ptr_00;
		int **ppiVar1;
		int *piVar2;
		bool cVar5;
		byte nodeIndex;
		bool cVar3;
		InstanceNodeAbstract **nodePtr;
		void *pvVar3;
		void **local_10;
		IteratorE1 iterator;
		undefined **ptr;
		InstanceNodeAbstract *node;
		uint nodeCtx;
		iterator.collection = &ctx->nodes;
		iterator.parent = (IteratorEBase_VTable *)&IteratorE_VT_1;
		iterator.index = 0;
		if ((*(byte *)&(iterator.collection)->cnt & 1) == 0) {
		(*(code *)PTR_Iterate_0038e370)();
		}
		this = (int **)ctx->findMe;
		ctx->findMe = (undefined *)0x0;
		while (this != (int **)0x0) {
		ptr_00 = (void **)*this;
		ppiVar1 = (int **)this[2];
		if (ptr_00 != (void **)0x0) {
		pvVar3 = ptr_00[1];
		ptr_00[1] = (void *)(((int)pvVar3 + 1U ^ (uint)pvVar3) & 0xffffff ^ (uint)pvVar3);
		}
		iterator.index = 0;
		local_10 = ptr_00;
		if ((*(byte *)&(iterator.collection)->cnt & 1) == 0) {
		(*(iterator.parent)->Iterate)((IteratorEAbstract *)&iterator);
		}
		cVar5 = (*(iterator.parent)->IsEnd)((IteratorEAbstract *)&iterator);
		while (cVar5 == false) {
		nodePtr = (InstanceNodeAbstract **)(*(iterator.parent)->Get)((IteratorEAbstract *)&iterator);
		node = *nodePtr;
		if (node != (InstanceNodeAbstract *)0x0) {
		nodeIndex = (*node->vtable->GetIndex)();
		if (ptr_00 == (void **)0x0) {
		pvVar3 = (void *)0x0;
		}
		else {
		pvVar3 = *ptr_00;
		}
		if ((*(uint *)((int)pvVar3 + 0xc) & 1 << (nodeIndex & 0x1f)) != 0) {
		if (ptr_00 != (void **)0x0) {
		pvVar3 = ptr_00[1];
		ptr_00[1] = (void *)(((int)pvVar3 + 1U ^ (uint)pvVar3) & 0xffffff ^ (uint)pvVar3);
		}
		(*node->vtable->DisposeSomething)((undefined *)ptr_00);
		}
		}
		cVar3 = (*(iterator.parent)->IsEnd)((IteratorEAbstract *)&iterator);
		while ((cVar3 == false &&(iterator.index = iterator.index + 1,((iterator.collection)->cnt & 1 << ((byte)iterator.index & 0x1f)) == 0))) {
		cVar3 = (*(iterator.parent)->IsEnd)((IteratorEAbstract *)&iterator);
		}
		cVar5 = (*(iterator.parent)->IsEnd)((IteratorEAbstract *)&iterator);
		}
		piVar2 = *this;
		if (piVar2 != (int *)0x0) {
		nodeCtx = piVar2[1];
		nodeCtx = (nodeCtx - 1 ^ nodeCtx) & 0xffffff ^ nodeCtx;
		piVar2[1] = nodeCtx;
		if (((nodeCtx & 0xffffff) == 0) && ((nodeCtx & 0x1000000) != 0)) {
		if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
		(***(code ***)(undefined4 *)*piVar2)(1);
		}
		*piVar2 = 0;
		}
		if ((piVar2[1] & 0xffffffU) == 0) {
		::Dispose(this,(void *)**this);
		}
		}
		VirtualPool::FreeMemory(this);
		this = ppiVar1;
		if (ptr_00 != (void **)0x0) {
		pvVar3 = ptr_00[1];
		pvVar3 = (void *)(((int)pvVar3 - 1U ^ (uint)pvVar3) & 0xffffff ^ (uint)pvVar3);
		ptr_00[1] = pvVar3;
		if ((((uint)pvVar3 & 0xffffff) == 0) && (((uint)pvVar3 & 0x1000000) != 0)) {
		if ((undefined4 *)*ptr_00 != (undefined4 *)0x0) {
		 WARNING: Load size is inaccurate (****ptr_00)(1);
		}
		*ptr_00 = (void *)0x0;
		}
		if (((uint)ptr_00[1] & 0xffffff) == 0) {
		::Dispose(&local_10,*ptr_00);
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void InstanceContext::RegisterCtxPtrToList() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceContext::RegisterCtxPtrToList(InstanceContext *this){
		undefined uVar1;
		if ((~(byte)((uint)(this->parent).flags >> 1) & 1) != 0) {
		(this->parent).flags = (this->parent).flags | 2;
		uVar1 = InstanceContextSmartPtr::CreateRef(&this->smartPtr,this,0);
		UnkCInit172Collection::FUN_000fd6e0((UnkCInit172Collection *)&ENV_PTR_172,uVar1);
		}
		return;
		}
		
	*/
	return;
}

void InstanceContext::FUN_000fa200(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceContext::FUN_000fa200(InstanceContext *this,undefined param_1){
		InstanceContext *pIVar1;
		undefined uVar2;
		InstanceContext **ppIVar3;
		undefined3 in_stack_00000005;
		InstanceContext *local_4;
		local_4 = this;
		ppIVar3 = (InstanceContext **)VirtualPool::AllocateMemory(0xc);
		if (ppIVar3 == (InstanceContext **)0x0) {
		ppIVar3 = (InstanceContext **)0x0;
		}
		else {
		local_4 = _param_1;
		if (_param_1 != (InstanceContext *)0x0) {
		pIVar1 = (_param_1->parent).ctx;
		(_param_1->parent).ctx =(InstanceContext *)(((uint)((int)&(pIVar1->parent).vtable + 1U) ^ (uint)pIVar1) & 0xffffff ^ (uint)pIVar1);
		}
		*ppIVar3 = _param_1;
		if (_param_1 != (InstanceContext *)0x0) {
		pIVar1 = (_param_1->parent).ctx;
		(_param_1->parent).ctx =(InstanceContext *)(((uint)((int)&(pIVar1->parent).vtable + 1U) ^ (uint)pIVar1) & 0xffffff ^ (uint)pIVar1);
		}
		ppIVar3[1] = (InstanceContext *)0x0;
		ppIVar3[2] = (InstanceContext *)0x0;
		InstanceNodeAbstract::UnkMethod1((undefined *)&local_4);
		}
		if (this->findMe == (undefined *)0x0) {
		uVar2 = InstanceContextSmartPtr::CreateRef(&this->smartPtr,this,0);
		UnkCInit172Collection::FUN_000fd6e0(&ENV_PTR_173,uVar2);
		}
		if (this->findMe == (undefined *)0x0) {
		this->findMe = (undefined *)ppIVar3;
		ppIVar3[1] = (InstanceContext *)0x0;
		ppIVar3[2] = (InstanceContext *)0x0;
		InstanceNodeAbstract::UnkMethod1(&param_1);
		return;
		}
		*(InstanceContext ***)(this->findMe + 4) = ppIVar3;
		ppIVar3[2] = (InstanceContext *)this->findMe;
		this->findMe = (undefined *)ppIVar3;
		InstanceNodeAbstract::UnkMethod1(&param_1);
		return;
		}
		
	*/
	return;
}

void InstanceContext::FUN_000fa2e0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceContext::FUN_000fa2e0(InstanceContext *this){
		int *piVar1;
		int **ppiVar2;
		uint uVar3;
		int **not_this;
		not_this = (int **)this->findMe;
		this->findMe = (undefined *)0x0;
		while (not_this != (int **)0x0) {
		piVar1 = *not_this;
		ppiVar2 = (int **)not_this[2];
		if (piVar1 != (int *)0x0) {
		uVar3 = piVar1[1];
		uVar3 = (uVar3 - 1 ^ uVar3) & 0xffffff ^ uVar3;
		piVar1[1] = uVar3;
		if (((uVar3 & 0xffffff) == 0) && ((uVar3 & 0x1000000) != 0)) {
		if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
		(***(code ***)(undefined4 *)*piVar1)(1);
		}
		*piVar1 = 0;
		}
		if ((piVar1[1] & 0xffffffU) == 0) {
		::Dispose(not_this,(void *)**not_this);
		}
		}
		VirtualPool::FreeMemory(not_this);
		not_this = ppiVar2;
		}
		return;
		}
		
	*/
	return;
}

void InstanceContext::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceContext::CleanUp(InstanceContext *this){
		InstanceContextSub *ptr;
		InstanceContextRefCounter *pIVar1;
		int iVar2;
		TwinString *str;
		ptr = this->subPtr;
		(this->parent).vtable = (InstanceContext_VTable *)&InstanceContext_VT;
		if (ptr != (InstanceContextSub *)0x0) {
		str = (TwinString *)&ptr[1].field2_0x10[0].vec2.y;
		iVar2 = 8;
		do {
		str = str + -4;
		TwinString::Dispose(str);
		iVar2 = iVar2 + -1;
		}
		 while (iVar2 != 0);
		TwinString::Dispose(&ptr->chunkName);
		VirtualPool::FreeMemory(ptr);
		}
		FUN_000fa2e0(this);
		InstanceDataList::Dispose(&this->nodes);
		pIVar1 = (this->smartPtr).refCounter;
		if (pIVar1 != (InstanceContextRefCounter *)0x0) {
		pIVar1->ctx = (InstanceContext *)0x0;
		}
		(this->parent).vtable = (InstanceContext_VTable *)&InstanceContext_VT_Base;
		VirtualPool::FreeMemory((this->parent).transform);
		AutoClass2::Dispose(&(this->parent).field14_0x20);
		return;
		}
		
	*/
	return;
}

void InstanceContext::SomeHackySet(InstanceContextRefCounter* param_2, int fieldIndex1, int fieldIndex2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __cdecl InstanceContext::SomeHackySet(InstanceContext *this,InstanceContextRefCounter *param_2,int fieldIndex1,int fieldIndex2){
		int iVar1;
		int iVar2;
		iVar1 = *(int *)((int)&(this->parent).vtable + fieldIndex1);
		if (iVar1 != 0) {
		iVar2 = *(int *)((int)&(this->parent).vtable + fieldIndex2);
		if (iVar2 == 0) {
		*(undefined4 *)(iVar1 + fieldIndex2) = 0;
		*(undefined4 *)((int)&(this->parent).vtable + fieldIndex2) = 0;
		*(undefined4 *)((int)&(this->parent).vtable + fieldIndex1) = 0;
		return;
		}
		*(int *)(iVar1 + fieldIndex2) = iVar2;
		*(undefined4 *)(fieldIndex1 + *(int *)((int)&(this->parent).vtable + fieldIndex2)) =*(undefined4 *)((int)&(this->parent).vtable + fieldIndex1);
		*(undefined4 *)((int)&(this->parent).vtable + fieldIndex2) = 0;
		*(undefined4 *)((int)&(this->parent).vtable + fieldIndex1) = 0;
		return;
		}
		iVar1 = *(int *)((int)&(this->parent).vtable + fieldIndex2);
		if (iVar1 == 0) {
		param_2->ctx = (InstanceContext *)0x0;
		*(undefined4 *)((int)&(this->parent).vtable + fieldIndex2) = 0;
		*(undefined4 *)((int)&(this->parent).vtable + fieldIndex1) = 0;
		return;
		}
		*(undefined4 *)(iVar1 + fieldIndex1) = 0;
		param_2->ctx = *(InstanceContext **)((int)&(this->parent).vtable + fieldIndex2);
		 prev and next fields *(undefined4 *)((int)&(this->parent).vtable + fieldIndex2) = 0;
		*(undefined4 *)((int)&(this->parent).vtable + fieldIndex1) = 0;
		return;
		}
		
	*/
	return;
}

void InstanceContext::LazyChangePlayerContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __cdecl InstanceContext::LazyChangePlayerContext(InstanceContext *this){
		InstanceContext *ctx;
		ctx = (InstanceContext *)ACTIVE_PLAYER_CONTEXT;
		if (ACTIVE_PLAYER_CONTEXT != (InstanceContextRefCounter *)0x0) {
		ctx = ACTIVE_PLAYER_CONTEXT->ctx;
		}
		if (ctx != this) {
		InstanceContextSmartPtr::Release(&ACTIVE_PLAYER_CONTEXT.refCounter);
		if (this == (InstanceContext *)0x0) {
		ACTIVE_PLAYER_CONTEXT = (InstanceContextRefCounter *)this;
		return;
		}
		ACTIVE_PLAYER_CONTEXT =(InstanceContextRefCounter *)InstanceContextSmartPtr::CreateRef(&this->smartPtr,this,0);
		}
		return;
		}
		
	*/
	return;
}

int InstanceContext::FUN_00136970(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __cdecl InstanceContext::FUN_00136970(InstanceContext *ctx){
		InstanceTransform *transform;
		int i;
		float fVar1;
		float fVar2;
		transform = (ctx->parent).transform;
		InstanceTransform::FillMatrix(transform);
		fVar1 = (ctx->parent).field14_0x20.matrix2.m21 - (ctx->parent).field14_0x20.matrix2.m11;
		fVar2 = (ctx->parent).field14_0x20.matrix2.m23 - (ctx->parent).field14_0x20.matrix2.m13;
		if (fVar1 <= fVar2) {
		fVar1 = fVar2;
		}
		if (FLOAT_003865d4 <= fVar1) {
		if (FLOAT_0038a770 <= fVar1) {
		i = 2;
		if (FLOAT_00387520 <= fVar1) {
		i = 3;
		}
		}
		else {
		i = 1;
		}
		}
		else {
		i = 0;
		}
		return ((int)((transform->matrix).m43 * (FLOAT_0038639c / (&FLOAT_00393024)[i])) &(&DAT_00393064)[i]) * (&DAT_00393044)[i] +((int)((transform->matrix).m41 * (FLOAT_0038639c / (&FLOAT_00393024)[i])) &(&DAT_00393064)[i]) + (&DAT_00491ca0)[i];
		}
		
	*/
	return 0;
}

void InstanceContext::FUN_0016dda0(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceContext::FUN_0016dda0(InstanceContext *this,undefined4 *param_1){
		float *pfVar1;
		this->field27_0xe0 = *param_1;
		(this->nodes).cnt = param_1[1];
		(this->nodes).array[0] = (InstanceNodeAbstract *)param_1[2];
		(this->nodes).array[1] = (InstanceNodeAbstract *)param_1[3];
		pfVar1 = &(this->parent).field14_0x20.matrix2.m43;
		*pfVar1 = (float)((uint)*pfVar1 | 0x2000);
		return;
		}
		
	*/
	return;
}

void InstanceContext::FUN_001703a0(InstanceNodeAbstract* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceContext::FUN_001703a0(InstanceContext *this,InstanceNodeAbstract *param_1){
		void **ppvVar1;
		if (((*(uint *)(*(int *)&this->field_0xbc + 0x3c) & 0x3000000) == 0) &&((~(byte)((uint)(this->parent).field14_0x20.field29_0x80 >> 0x1e) & 1) != 0)) {
		if ((*(byte *)&(this->vec).x & 0x10) == 0) {
		InstanceDataList::GetNode(&param_1->ctx->nodes,OGI);
		(*((this->parent).vtable)->Method1)(this);
		}
		ppvVar1 = &(this->parent).field14_0x20.field29_0x80;
		*ppvVar1 = (void *)((uint)*ppvVar1 & 0xdfffffff);
		}
		(this->vec).x = (float)((uint)(this->vec).x & 0xffffffdb | 2);
		return;
		}
		
	*/
	return;
}

void InstanceContext::FUN_0017afa0(int param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceContext::FUN_0017afa0(InstanceContext *this,int param_1,int param_2){
		ushort uVar1;
		InstanceNodeAbstract *pIVar2;
		pIVar2 = (this->nodes).array[8];
		if (pIVar2 == (InstanceNodeAbstract *)0x0) {
		pIVar2 = (InstanceNodeAbstract *)VirtualPool::AllocateMemory(0x110);
		if (pIVar2 == (InstanceNodeAbstract *)0x0) {
		pIVar2 = (InstanceNodeAbstract *)0x0;
		}
		else {
		uVar1 = *(ushort *)((int)&pIVar2[0xb].vtable + 2);
		pIVar2[6].vtable = (InstanceNodeAbstract_VTable *)FLOAT_0038a770;
		pIVar2[8].field5_0x10 = (InstanceNodeAbstract *)0x0;
		pIVar2[8].field6_0x14 = 0;
		pIVar2[9].vtable = (InstanceNodeAbstract_VTable *)0x0;
		*(undefined4 *)&pIVar2[9].field2_0x8 = 0;
		*(ushort *)((int)&pIVar2[0xb].vtable + 2) = uVar1 & 0xff8c | 4;
		}
		(this->nodes).array[8] = pIVar2;
		pIVar2->vtable = (InstanceNodeAbstract_VTable *)this;
		InstanceNodeAbstract::FUN_0017ad40((this->nodes).array[8],param_1,param_2,this);
		return;
		}
		if (*(int *)&pIVar2[9].field2_0x8 != param_1) {
		InstanceNodeAbstract::FUN_0017ad40(pIVar2,param_1,param_2,this);
		}
		return;
		}
		
	*/
	return;
}

void InstanceContext::FUN_0017c160(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceContext::FUN_0017c160(InstanceContext *this,byte param_1){
		ChunkData **this_00;
		float fVar1;
		fVar1 = (this->vec).x;
		this_00 = &(this->parent).chunkData;
		(this->vec).x = (float)((uint)fVar1 ^ ((uint)param_1 << 2 ^ (uint)fVar1) & 4);
		if ((*this_00 != (ChunkData *)0x0) && ((*this_00)->chunkRef != (ChunkDataRefCounter *)0x0)) {
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)this_00);
		*this_00 = (ChunkData *)0x0;
		}
		if ((*(uint *)(*(int *)&this->field_0xbc + 0x3c) & 0x3000000) == 0) {
		(this->parent).field14_0x20.field29_0x80 =(void *)((uint)(this->parent).field14_0x20.field29_0x80 & 0x5fffffff | 0x20000000);
		}
		return;
		}
		
	*/
	return;
}

uint InstanceContext::FUN_0018f1e0(ushort index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps uint __cdecl InstanceContext::FUN_0018f1e0(InstanceContext *this,ushort index){
		int iVar1;
		ushort uVar2;
		uint in_EAX;
		float val;
		GameObject *gameObject;
		ushort *puVar3;
		uint local_4;
		uVar2 = index;
		if (index == 0xffff) {
		return in_EAX & 0xffff0000 | 0xffff;
		}
		iVar1 = (this->parent).field14_0x20.field27_0x78;
		if (iVar1 == 0) {
		val = (this->parent).field14_0x20.matrix2.m33;
		}
		else {
		val = (float)FUN_00015286(iVar1);
		}
		FUN_001a8100((int)val,(undefined2 *)&local_4,(uint)uVar2);
		if ((short)local_4 != -1) {
		LAB_0018f222:return local_4 & 0x7fff;
		}
		gameObject = FUN_00172f50((int)this);
		if (gameObject != (GameObject *)0x0) {
		puVar3 = (ushort *)FUN_001a8100((int)gameObject,&index,(uint)uVar2);
		gameObject = (GameObject *)((uint)puVar3 & 0xffff0000);
		local_4 = (uint)*puVar3;
		if (*puVar3 != 0xffff) goto LAB_0018f222;
		}
		return (uint)gameObject & 0xffff0000 | 0xffff;
		}
		
	*/
	return 0;
}

void InstanceContext::FUN_0018f270(ushort param_2, char param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __cdecl InstanceContext::FUN_0018f270(InstanceContext *this,ushort param_2,char param_3){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceContext *pIVar4;
		InstanceTransform *pIVar5;
		char cVar6;
		uint uVar7;
		ushort uVar8;
		float local_20;
		float local_1c;
		float local_18;
		float local_14;
		pIVar4 = (this->parent).ctx;
		pIVar5 = (pIVar4->parent).transform;
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
		local_20 = (pIVar5->position).x;
		local_1c = (pIVar5->position).y;
		local_18 = (pIVar5->position).z;
		local_14 = (pIVar5->position).w;
		uVar7 = FUN_0018f1e0(this,param_2);
		uVar8 = (ushort)uVar7;
		if (uVar8 == 0xffff) {
		return;
		}
		uVar7 = FUN_00177160();
		if ((param_3 != '\0') && (cVar6 = (*(this->parent).vtable[7].Method4)(this), cVar6 != '\0')) {
		uVar7 = FUN_00134590(uVar8,0,(int *)pIVar4,0xbf800000,0xbf800000,uVar7,0);
		if ((char)uVar7 == -1) {
		return;
		}
		*(char *)&this->field36_0x164 = (char)uVar7;
		return;
		}
		FUN_00133d40(uVar8,0,(int)(pIVar4->parent).chunkData,&local_20,0xbf800000,0xbf800000,uVar7,-1);
		return;
		}
		
	*/
	return;
}

InstanceTransform* InstanceContext::FUN_001961b0(uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceTransform * __cdecl InstanceContext::FUN_001961b0(InstanceContext *this,uint param_2){
		Matrix4Array *pMVar1;
		Matrix4 *pMVar2;
		InstanceNodeOGI *pIVar2;
		InstanceTransform *pIVar3;
		if (param_2 != 0x3f) {
		pIVar2 = (InstanceNodeOGI *)InstanceDataList::GetNode(&this->nodes,OGI);
		if ((((pIVar2->field4_0x24 != (InstanceNodeOGISub *)0x0) &&(pMVar1 = pIVar2->field4_0x24->matrixArray2, pMVar1 != (Matrix4Array *)0x0)) &&(pMVar2 = pMVar1->array[param_2 & 0xff], pMVar2 != (Matrix4 *)0x0)) &&(pIVar3 = (InstanceTransform *)FUN_001f8be0(pMVar2), pIVar3 != (InstanceTransform *)0x0)) {
		return pIVar3;
		}
		}
		pIVar3 = (this->parent).transform;
		InstanceTransform::FillMatrix(pIVar3);
		return pIVar3;
		}
		
	*/
	return null;
}

bool InstanceContext::FUN_001dbbf0(uint* param_2, uint* param_3, float* param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceContext::FUN_001dbbf0(InstanceContext *this,undefined4 *param_2,undefined4 *param_3,float *param_4){
		undefined4 uVar1;
		undefined4 uVar2;
		undefined4 uVar3;
		InstanceNodeAbstract *pIVar4;
		undefined4 *puVar5;
		float fVar6;
		 this is InstanceContext* if (this != (InstanceContext *)0x0) {
		pIVar4 = InstanceDataList::GetNode(&this->nodes,NodeU);
		 this is NodeU if (pIVar4 != (InstanceNodeAbstract *)0x0) {
		puVar5 = (undefined4 *)FUN_000f7d90((int)pIVar4);
		uVar1 = puVar5[1];
		uVar2 = puVar5[2];
		uVar3 = puVar5[3];
		*param_2 = *puVar5;
		param_2[1] = uVar1;
		param_2[2] = uVar2;
		param_2[3] = uVar3;
		uVar1 = puVar5[5];
		uVar2 = puVar5[6];
		uVar3 = puVar5[7];
		param_2[4] = puVar5[4];
		param_2[5] = uVar1;
		param_2[6] = uVar2;
		param_2[7] = uVar3;
		uVar1 = puVar5[9];
		uVar2 = puVar5[10];
		uVar3 = puVar5[0xb];
		param_2[8] = puVar5[8];
		param_2[9] = uVar1;
		param_2[10] = uVar2;
		param_2[0xb] = uVar3;
		uVar1 = puVar5[0xd];
		uVar2 = puVar5[0xe];
		uVar3 = puVar5[0xf];
		param_2[0xc] = puVar5[0xc];
		param_2[0xd] = uVar1;
		param_2[0xe] = uVar2;
		param_2[0xf] = uVar3;
		puVar5 = (undefined4 *)FUN_000f7db0((int)pIVar4);
		uVar1 = puVar5[1];
		uVar2 = puVar5[2];
		uVar3 = puVar5[3];
		*param_3 = *puVar5;
		param_3[1] = uVar1;
		param_3[2] = uVar2;
		param_3[3] = uVar3;
		uVar1 = puVar5[5];
		uVar2 = puVar5[6];
		uVar3 = puVar5[7];
		param_3[4] = puVar5[4];
		param_3[5] = uVar1;
		param_3[6] = uVar2;
		param_3[7] = uVar3;
		uVar1 = puVar5[9];
		uVar2 = puVar5[10];
		uVar3 = puVar5[0xb];
		param_3[8] = puVar5[8];
		param_3[9] = uVar1;
		param_3[10] = uVar2;
		param_3[0xb] = uVar3;
		uVar1 = puVar5[0xd];
		uVar2 = puVar5[0xe];
		uVar3 = puVar5[0xf];
		param_3[0xc] = puVar5[0xc];
		param_3[0xd] = uVar1;
		param_3[0xe] = uVar2;
		param_3[0xf] = uVar3;
		fVar6 = FUN_000f7dd0((int)pIVar4);
		*param_4 = fVar6;
		return true;
		}
		}
		return false;
		}
		
	*/
	return false;
}

bool InstanceContext::Method1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall InstanceContext::Method1(InstanceContext *this){
		int *piVar1;
		ChunkData *chunkData;
		chunkData = (this->parent).chunkData;
		if (chunkData != (ChunkData *)0x0) {
		ChunkData::FUN_0013e4c0(chunkData,this);
		}
		piVar1 = &(this->parent).flags;
		*piVar1 = *piVar1 & 0xfffffffe;
		return true;
		}
		
	*/
	return false;
}

bool InstanceContext::Method2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall InstanceContext::Method2(InstanceContext *this){
		byte bVar1;
		bool bVar2;
		ChunkData *chunkData;
		if (this->field36_0x164 != -1) {
		bVar2 = (*((this->parent).vtable)->Method3)(this);
		return bVar2;
		}
		chunkData = (this->parent).chunkData;
		if (chunkData != (ChunkData *)0x0) {
		ChunkData::FUN_0013d510(chunkData,this);
		}
		bVar1 = *(byte *)&(this->parent).flags;
		(this->parent).flags = (this->parent).flags | 1;
		return (bool)(~bVar1 & 1);
		}
		
	*/
	return false;
}

bool InstanceContext::Method3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall InstanceContext::Method3(InstanceContext *this){
		int *piVar1;
		byte bVar2;
		bool bVar3;
		ChunkData *chunkData;
		if ((this->subPtr != (InstanceContextSub *)0x0) && (this->field36_0x164 == -1)) {
		bVar3 = InstanceContextSub::FUN_000f8c80(this->subPtr,this);
		if (bVar3 == false) {
		return true;
		}
		}
		if ((*(byte *)&(this->parent).flags & 4) == 0) {
		piVar1 = &(this->parent).flags;
		*piVar1 = *piVar1 | 4;
		if (this->field36_0x164 != -1) {
		UnkFamily16Sub::FUN_000f79a0(UF16SUB,this);
		}
		chunkData = (this->parent).chunkData;
		if (chunkData == (ChunkData *)0x0) {
		AddCtxToList(this);
		}
		else {
		ChunkData::FUN_0013d550(chunkData,this);
		}
		bVar2 = *(byte *)&(this->parent).flags;
		(this->parent).flags = (this->parent).flags | 1;
		return (bool)(~bVar2 & 1);
		}
		return false;
		}
		
	*/
	return false;
}

void InstanceContext::Method4() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceContext::Method4(InstanceContext *this){
		AutoClass2 *this_00;
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceTransform *pIVar4;
		int iVar5;
		if ((~*(byte *)&(this->parent).flags & 1) != 0) {
		this_00 = &(this->parent).field14_0x20;
		iVar5 = FUN_0013e0c0(this_00);
		if (iVar5 == 0) {
		thunk_FUN_00026e90(this,&this->vec);
		FUN_0013e0c0(this_00);
		(this->parent).flags = (this->parent).flags & 0xfffffffd;
		return;
		}
		}
		pIVar4 = (this->parent).transform;
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
		(this->vec).x = (pIVar4->position).x;
		(this->vec).y = (pIVar4->position).y;
		(this->vec).z = (pIVar4->position).z;
		(this->vec).w = (pIVar4->position).w;
		(this->parent).flags = (this->parent).flags & 0xfffffffd;
		return;
		}
		
	*/
	return;
}

void InstanceContext::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceContext * __thiscall InstanceContext::Dispose(InstanceContext *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void InstanceContext::FUN_00186510() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceContext::FUN_00186510(InstanceContext *this){
		Matrix4 **ppMVar1;
		byte bVar2;
		char cVar3;
		int this_00;
		undefined4 uVar4;
		this_00 = (this->parent).field14_0x20.field5_0x14;
		if (this_00 != 0) {
		bVar2 = (this->parent).field14_0x20.field8_0x20;
		if ((bVar2 & 8) == 0) {
		ppMVar1 = &(this->parent).field14_0x20.matrix1;
		*(char *)ppMVar1 = *(char *)ppMVar1 + '\x01';
		}
		else {
		*(undefined *)&(this->parent).field14_0x20.matrix1 = 1;
		(this->parent).field14_0x20.field8_0x20 = bVar2 & 0xf7;
		}
		cVar3 = *(char *)&(this->parent).field14_0x20.matrix1;
		if (cVar3 == *(char *)(this_00 + 0x400)) {
		*(char *)&(this->parent).field14_0x20.matrix1 = cVar3 + -1;
		}
		uVar4 = FUN_0015d960(this_00,*(byte *)&(this->parent).field14_0x20.matrix1);
		(this->parent).field14_0x20.field6_0x18 = uVar4;
		}
		return;
		}
		
	*/
	return;
}

void InstanceContext::FUN_0017c2b0(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceContext::FUN_0017c2b0(InstanceContext *this,undefined param_1){
		(this->vec).x = (float)((uint)(this->vec).x | 0x28);
		FUN_0017c160(this,1);
		return;
		}
		
	*/
	return;
}

void InstanceContext::FUN_001864a0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceContext::FUN_001864a0(InstanceContext *this){
		byte *pbVar1;
		char cVar2;
		cVar2 = (this->parent).field14_0x20.field_0x24 + -1;
		(this->parent).field14_0x20.field_0x24 = cVar2;
		if (cVar2 == -1) {
		pbVar1 = &(this->parent).field14_0x20.field8_0x20;
		*pbVar1 = *pbVar1 | 8;
		(this->parent).field14_0x20.field_0x24 = (this->parent).field14_0x20.field_0x26;
		}
		return;
		}
		
	*/
	return;
}

void InstanceContext::Construct_39(InstanceTransform* transform) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceContext * __thiscall InstanceContext::Construct(InstanceContext *this,InstanceTransform *transform){
		InstanceContextBase::Construct(&this->parent,transform);
		(this->parent).vtable = (InstanceContext_VTable *)&InstanceContext_VT;
		(this->smartPtr).refCounter = (InstanceContextRefCounter *)0x0;
		this->field27_0xe0 = 0;
		(this->nodes).cnt = 0;
		(this->nodes).array[0] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[1] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[2] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[3] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[4] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[5] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[6] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[7] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[8] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[9] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[10] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0xb] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0xd] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0xe] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0xf] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x10] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x11] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x12] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x13] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x14] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x15] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x16] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x17] = (InstanceNodeAbstract *)0x0;
		this->findMe = (undefined *)0x0;
		this->subPtr = (InstanceContextSub *)0x0;
		this->prev = (InstanceContext *)0x0;
		this->next = (InstanceContext *)0x0;
		this->field33_0x158 = 0;
		this->field34_0x15c = 0;
		this->field35_0x160 = -1;
		this->field36_0x164 = -1;
		(this->vec).x = Vector4_0039ef70.x;
		(this->vec).y = Vector4_0039ef70.y;
		(this->vec).z = Vector4_0039ef70.z;
		(this->vec).w = FLOAT_0038639c;
		return this;
		}
		
	*/
	return;
}

void InstanceContext::Construct_40(InstanceTransform* parameters, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceContext * __thiscall InstanceContext::Construct(InstanceContext *this,InstanceTransform *parameters,int param_2){
		InstanceContextBase::Construct(&this->parent,parameters,param_2);
		(this->parent).vtable = (InstanceContext_VTable *)&InstanceContext_VT;
		(this->smartPtr).refCounter = (InstanceContextRefCounter *)0x0;
		this->field27_0xe0 = 0;
		(this->nodes).cnt = 0;
		(this->nodes).array[0] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[1] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[2] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[3] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[4] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[5] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[6] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[7] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[8] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[9] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[10] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0xb] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0xd] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0xe] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0xf] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x10] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x11] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x12] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x13] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x14] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x15] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x16] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x17] = (InstanceNodeAbstract *)0x0;
		this->findMe = (undefined *)0x0;
		this->subPtr = (InstanceContextSub *)0x0;
		this->prev = (InstanceContext *)0x0;
		this->next = (InstanceContext *)0x0;
		this->field33_0x158 = 0;
		this->field34_0x15c = 0;
		this->field35_0x160 = -1;
		this->field36_0x164 = -1;
		(this->vec).x = Vector4_0039ef70.x;
		(this->vec).y = Vector4_0039ef70.y;
		(this->vec).z = Vector4_0039ef70.z;
		(this->vec).w = FLOAT_0038639c;
		return this;
		}
		
	*/
	return;
}

void InstanceContext::Construct_41(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceContext * __thiscall InstanceContext::Construct(InstanceContext *this,int param_1){
		InstanceContextBase::Construct(&this->parent,param_1);
		(this->parent).vtable = (InstanceContext_VTable *)&InstanceContext_VT;
		(this->smartPtr).refCounter = (InstanceContextRefCounter *)0x0;
		this->field27_0xe0 = 0;
		(this->nodes).cnt = 0;
		(this->nodes).array[0] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[1] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[2] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[3] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[4] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[5] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[6] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[7] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[8] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[9] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[10] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0xb] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0xd] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0xe] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0xf] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x10] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x11] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x12] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x13] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x14] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x15] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x16] = (InstanceNodeAbstract *)0x0;
		(this->nodes).array[0x17] = (InstanceNodeAbstract *)0x0;
		this->findMe = (undefined *)0x0;
		this->subPtr = (InstanceContextSub *)0x0;
		this->prev = (InstanceContext *)0x0;
		this->next = (InstanceContext *)0x0;
		this->field33_0x158 = 0;
		this->field34_0x15c = 0;
		this->field35_0x160 = -1;
		this->field36_0x164 = -1;
		(this->vec).x = Vector4_0039ef70.x;
		(this->vec).y = Vector4_0039ef70.y;
		(this->vec).z = Vector4_0039ef70.z;
		(this->vec).w = FLOAT_0038639c;
		return this;
		}
		
	*/
	return;
}

void InstanceContext::FUN_00064900(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceContext::FUN_00064900(InstanceContext *this,int param_1){
		bool bVar1;
		bVar1 = InstanceTransform::thunk_FUN_00064660((this->parent).transform,param_1);
		if (bVar1 != false) {
		RegisterCtxPtrToList(this);
		}
		return;
		}
		
	*/
	return;
}

uint InstanceContext::GetNode(ComponentId componentId) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceContext::GetNode(InstanceContext *this,ComponentId componentId){
		InstanceNodeAbstract *pIVar1;
		pIVar1 = InstanceDataList::GetNode(&this->nodes,componentId);
		return pIVar1;
		}
		
	*/
	return 0;
}

InstanceNodeU* InstanceContext::GetNodeU() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeU * __cdecl InstanceContext::GetNodeU(InstanceContext *this){
		InstanceNodeU *pIVar1;
		if (this == (InstanceContext *)0x0) {
		return (InstanceNodeU *)this;
		}
		pIVar1 = (InstanceNodeU *)InstanceDataList::GetNode(&this->nodes,NodeU);
		return pIVar1;
		}
		
	*/
	return null;
}

InstanceNodePhysics* InstanceContext::FUN_001dbbd0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodePhysics * __cdecl InstanceContext::FUN_001dbbd0(InstanceContext *this){
		InstanceNodePhysics *pIVar1;
		if (this == (InstanceContext *)0x0) {
		return (InstanceNodePhysics *)this;
		}
		pIVar1 = (InstanceNodePhysics *)InstanceDataList::GetNode(&this->nodes,Physics);
		return pIVar1;
		}
		
	*/
	return null;
}

InstanceNodePhysics* InstanceContext::GetPhysics() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodePhysics * __cdecl InstanceContext::GetPhysics(InstanceContext *this){
		bool bVar1;
		InstanceNodePhysics *pIVar2;
		pIVar2 = (InstanceNodePhysics *)InstanceDataList::GetNode(&this->nodes,Physics);
		if (pIVar2 != (InstanceNodePhysics *)0x0) {
		bVar1 = (*pIVar2->vtable->IsB)();
		if (bVar1 == false) {
		return pIVar2;
		}
		}
		return (InstanceNodePhysics *)0x0;
		}
		
	*/
	return null;
}

InstanceNodePhysics* InstanceContext::GetPhysics_47() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodePhysics * __cdecl InstanceContext::GetPhysics(InstanceContext *this){
		bool bVar1;
		InstanceNodePhysics *pIVar2;
		pIVar2 = (InstanceNodePhysics *)InstanceDataList::GetNode(&this->nodes,Physics);
		if (pIVar2 != (InstanceNodePhysics *)0x0) {
		bVar1 = (*pIVar2->vtable->IsB)();
		if (bVar1 != false) {
		return pIVar2;
		}
		}
		return (InstanceNodePhysics *)0x0;
		}
		
	*/
	return null;
}

void InstanceContext::FUN_001f2e50() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceContext::FUN_001f2e50(InstanceContext *this){
		InstanceNodeInstance *pIVar1;
		InstanceNodeOGI *pIVar2;
		pIVar1 = (InstanceNodeInstance *)InstanceDataList::GetNode(&this->nodes,Instance);
		(**(code **)(*(int *)(pIVar1->body).field49_0x80 + 0x3c))();
		pIVar2 = (InstanceNodeOGI *)InstanceDataList::GetNode(&this->nodes,OGI);
		if (pIVar2->field4_0x24 != (InstanceNodeOGISub *)0x0) {
		FUN_001fd740(pIVar2->field4_0x24,(int)(TicksPerTime * FLOAT_00386394),0xff);
		}
		return;
		}
		
	*/
	return;
}

