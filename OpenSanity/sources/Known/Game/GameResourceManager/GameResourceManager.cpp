#include "headers/Known/Game/GameResourceManager/GameResourceManager.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeCrate.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeF.h"
#include "headers/Known/GameData/GameObject/GameObject.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Instance/InstanceNodeInstance.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeI.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeAA.h"
#include "headers/Known/Game/GameResources/GameResources.h"
#include "headers/Known/GameData/Instance/Instance.h"
#include "headers/Known/Game/Chunks/ChunkMeta.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeCreature.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeCharacter.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/Unknown/ParameterTable.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeFurniture.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeChiChi.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodePayGate.h"

GameResourceManager::GameResourceManager() : GameResourceManagerBase() {

}

GameResourceManager::GameResourceManager(GameResources* gameResources) : GameResourceManagerBase(gameResources) {

}

GameResourceManager::~GameResourceManager()
{
}

void GameResourceManager::FUN_001a7980() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameResourceManager::FUN_001a7980(GameResourceManager *this){
		int *piVar1;
		piVar1 = &(this->parent).field3_0xc;
		*piVar1 = *piVar1 & 0xfffffffe;
		return;
		}
		
	*/
	return;
}

void GameResourceManager::FUN_001a79c0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameResourceManager::FUN_001a79c0(GameResourceManager *this){
		int *piVar1;
		piVar1 = &(this->parent).field3_0xc;
		*piVar1 = *piVar1 & 0xfffffffd;
		return;
		}
		
	*/
	return;
}

void GameResourceManager::FUN_001a79d0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameResourceManager::FUN_001a79d0(GameResourceManager *this){
		int *piVar1;
		piVar1 = &(this->parent).field3_0xc;
		*piVar1 = *piVar1 | 4;
		return;
		}
		
	*/
	return;
}

void GameResourceManager::FUN_001a79f0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameResourceManager::FUN_001a79f0(GameResourceManager *this){
		int *piVar1;
		piVar1 = &(this->parent).field3_0xc;
		*piVar1 = *piVar1 | 8;
		return;
		}
		
	*/
	return;
}

InstanceNodeInstance* GameResourceManager::CreateNodeInstance(uint param_1, Instance* param_2, InstanceContext* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeInstance * __thiscall GameResourceManager::CreateNodeInstance(GameResourceManager *this,int param_1,Instance *param_2,InstanceContext *param_3){
		GameObject *pGVar1;
		InstanceNodeInstance *pIVar2;
		if (param_2->objectId == 0xffff) {
		pGVar1 = (GameObject *)0x0;
		}
		else {
		pGVar1 = ((((this->parent).gameResources)->parent).gameObjects)->elements[(ushort)param_2->objectId & 0x7fff];
		}
		pIVar2 = (InstanceNodeInstance *)(*((this->parent).vtable)->CreateNewInstanceNodeFromObject)(param_1,(int)pGVar1);
		if ((pIVar2 != (InstanceNodeInstance *)0x0) && (param_2->refListIndex != -1)) {
		FUN_0016aa30((byte)param_2->refListIndex,param_3);
		}
		return pIVar2;
		}
		
	*/
	return null;
}

InstanceNodeAbstract* GameResourceManager::FUN_001a83b0(ChunkMeta* chunkMeta, Instance* instance, InstanceContext* ctx, InstanceNodeInstance* node) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall GameResourceManager::FUN_001a83b0(GameResourceManager *this,ChunkMeta *chunkMeta,Instance *instance,InstanceContext *ctx,InstanceNodeInstance *node){
		ushort *puVar1;
		ushort uVar2;
		InstanceNodeAbstract *pIVar3;
		pIVar3 = (*((this->parent).vtable)->CreateNewInstanceNode)(this,chunkMeta,instance,ctx,(InstanceNodeAbstract *)node);
		if (pIVar3 != (InstanceNodeAbstract *)0x0) {
		puVar1 = (node->body).field49_0x80;
		puVar1[0x12] = chunkMeta->chunkIndex;
		puVar1[10] = instance->onSpawnScriptId;
		if (((*(byte *)&(this->parent).field3_0xc & 8) != 0) &&((*(byte *)(*(int *)(puVar1 + 0xe) + 4) & 0x40) != 0)) {
		uVar2 = ChunkMeta::IncrementSomeCnt(chunkMeta);
		puVar1[0x13] = uVar2;
		return pIVar3;
		}
		}
		return pIVar3;
		}
		
	*/
	return null;
}

InstanceContext* GameResourceManager::AddInstance(ChunkMeta* chunkMeta, Instance* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceContext * __thiscall GameResourceManager::AddInstance(GameResourceManager *this,ChunkMeta *chunkMeta,Instance *element){
		bool result;
		InstanceContext *_instanceContext;
		InstanceContext *instanceContext;
		InstanceNodeOGI *ogiNode;
		InstanceNodeInstance *ctx2;
		InstanceNodeAbstract *ctx3;
		InstanceNodeU *pIVar1;
		GameObject *unaff_EDI;
		ChunkMeta *pCStack8;
		ChunkData *pCStack4;
		GameObject *gameObject;
		InstanceTransform *transform;
		result = (*((this->parent).vtable)->IsA)(chunkMeta,element);
		if (result == false) {
		return (InstanceContext *)0x0;
		}
		_instanceContext = (InstanceContext *)VirtualPool::AllocateMemory(0x170);
		if (_instanceContext != (InstanceContext *)0x0) {
		instanceContext = InstanceContext::Construct(_instanceContext);
		_instanceContext = instanceContext;
		if (instanceContext != (InstanceContext *)0x0) {
		if (element->objectId == 0xffff) {
		gameObject = (GameObject *)0x0;
		}
		else {
		gameObject = ((((this->parent).gameResources)->parent).gameObjects)->elements[(ushort)element->objectId & 0x7fff];
		}
		result = InstanceTransform::SetupPosition((instanceContext->parent).transform,&element->position);
		if (result != false) {
		InstanceContext::RegisterCtxPtrToList(instanceContext);
		}
		result = InstanceTransform::SetupRotation((instanceContext->parent).transform,&element->rotation);
		if (result != false) {
		InstanceContext::RegisterCtxPtrToList(instanceContext);
		}
		ogiNode = (*((this->parent).vtable)->GetOgiNodeFromInstance)(this,chunkMeta,element);
		if (ogiNode != (InstanceNodeOGI *)0x0) {
		InstanceContext::SetNode(instanceContext,true,&ogiNode->parent);
		InstanceNodeOGI::SetInfoFromOGI(ogiNode);
		}
		ctx2 = CreateNodeInstance(this,pCStack8,element,instanceContext);
		if (ctx2 != (InstanceNodeInstance *)0x0) {
		InstanceContext::SetNode(instanceContext,true,(InstanceNodeAbstract *)ctx2);
		}
		ctx3 = FUN_001a83b0(this,pCStack8,element,instanceContext,ctx2);
		if (ctx3 != (InstanceNodeAbstract *)0x0) {
		InstanceContext::SetNode(instanceContext,true,ctx3);
		}
		if ((((gameObject->field2_0x8[0] & 0x20) != 0) &&(pIVar1 = (InstanceNodeU *)VirtualPool::AllocateMemory(0xa0),pIVar1 != (InstanceNodeU *)0x0)) &&(pIVar1 = InstanceNodeU::Construct(pIVar1), pIVar1 != (InstanceNodeU *)0x0)) {
		InstanceContext::SetNode(instanceContext,true,&pIVar1->parent);
		}
		_instanceContext =(*((this->parent).vtable)->UnkMethod7)(this,pCStack8,unaff_EDI,element,instanceContext);
		if (_instanceContext == (InstanceContext *)0x0) {
		GameObjectScriptPack::Execute(&unaff_EDI->scriptPack,ctx2);
		transform = (instanceContext->parent).transform;
		InstanceTransform::FillMatrix(transform);
		InstanceTransform::FillMatrix(transform);
		AutoClass2::FUN_0013cda0(&(instanceContext->parent).field14_0x20,&transform->matrix,(BoundingBox *)&(instanceContext->parent).field14_0x20.matrix2);
		ChunkData::FUN_0013e3d0(pCStack4,instanceContext);
		return instanceContext;
		}
		ChunkData::FUN_0013e3d0(pCStack4,instanceContext);
		(*((instanceContext->parent).vtable)->Method3)(instanceContext);
		}
		return _instanceContext;
		}
		return (InstanceContext *)0x0;
		}
		
	*/
	return null;
}

InstanceNodeI* GameResourceManager::CreateNodeI(ChunkMeta* chunkMeta, Instance* instance, ParameterTable* parameters, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeI * __thiscall GameResourceManager::CreateNodeI(GameResourceManager *this,ChunkMeta *chunkMeta,Instance *instance,ParameterTable *parameters,InstanceContext *ctx){
		BlackboardI *helper;
		NodeRelated1I *puVar1;
		NodeRelated1I *related;
		NodeRelated2Abstract *this_00;
		InstanceNodeI *pIVar1;
		InstanceMasterInfo local_c;
		helper = (BlackboardI *)VirtualPool::AllocateMemory(0x24);
		if (helper == (BlackboardI *)0x0) {
		helper = (BlackboardI *)0x0;
		}
		else {
		BlackboardAbstract::Construct((BlackboardAbstract *)helper);
		(helper->parent).vtable = (Blackboard_VTable *)&Blackboard_VT_I;
		if (parameters != (ParameterTable *)0x0) {
		BlackboardAbstract::InitBlackboard((BlackboardAbstract *)helper,parameters);
		}
		}
		puVar1 = (NodeRelated1I *)VirtualPool::AllocateMemory(0x18);
		if (puVar1 == (NodeRelated1I *)0x0) {
		related = (NodeRelated1I *)0x0;
		}
		else {
		related = NodeRelated1I::Construct(puVar1);
		}
		InstanceMasterInfo::Construct(&local_c,instance,(this->parent).gameResources,ctx);
		(*((this->parent).vtable)->SetInstanceIntParam)(this,chunkMeta,&helper->parent);
		this_00 = (NodeRelated2Abstract *)VirtualPool::AllocateMemory(0x60);
		if (this_00 == (NodeRelated2Abstract *)0x0) {
		this_00 = (NodeRelated2Abstract *)0x0;
		}
		else {
		NodeRelated2Abstract::Construct(this_00,&local_c,&helper->parent,&related->parent);
		this_00->vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_I;
		}
		pIVar1 = (InstanceNodeI *)VirtualPool::AllocateMemory(0x1c);
		if (pIVar1 == (InstanceNodeI *)0x0) {
		pIVar1 = (InstanceNodeI *)0x0;
		}
		else {
		pIVar1 = InstanceNodeI::Construct(pIVar1,(NodeRelated2I *)this_00);
		}
		*(undefined *)((int)&ctx->field35_0x160 + 3) = 1;
		::EmptyFunction();
		return pIVar1;
		}
		
	*/
	return null;
}

InstanceNodePayGate* GameResourceManager::CreateNodePayGate(ChunkMeta* chunkMeta, Instance* instance, ParameterTable* parameters, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodePayGate * __thiscall GameResourceManager::CreateNodePayGate(GameResourceManager *this,ChunkMeta *chunkMeta,Instance *instance,ParameterTable *parameters,InstanceContext *ctx){
		BlackboardH *helper;
		NodeRelated1H *puVar1;
		NodeRelated1H *related;
		NodeRelated2H *this_00;
		InstanceNodePayGate *node;
		InstanceMasterInfo local_c;
		helper = (BlackboardH *)VirtualPool::AllocateMemory(0x28);
		if (helper == (BlackboardH *)0x0) {
		helper = (BlackboardH *)0x0;
		}
		else {
		BlackboardAbstract::Construct((BlackboardAbstract *)helper);
		(helper->parent).vtable = (Blackboard_VTable *)&Blackboard_VT_H;
		if (parameters != (ParameterTable *)0x0) {
		BlackboardAbstract::InitBlackboard((BlackboardAbstract *)helper,parameters);
		}
		}
		puVar1 = (NodeRelated1H *)VirtualPool::AllocateMemory(0x18);
		if (puVar1 == (NodeRelated1H *)0x0) {
		related = (NodeRelated1H *)0x0;
		}
		else {
		related = NodeRelated1H::Construct(puVar1);
		}
		InstanceMasterInfo::Construct(&local_c,instance,(this->parent).gameResources,ctx);
		(*((this->parent).vtable)->SetInstanceIntParam)(this,chunkMeta,&helper->parent);
		this_00 = (NodeRelated2H *)VirtualPool::AllocateMemory(0x60);
		if (this_00 == (NodeRelated2H *)0x0) {
		this_00 = (NodeRelated2H *)0x0;
		}
		else {
		NodeRelated2Abstract::Construct((NodeRelated2Abstract *)this_00,&local_c,&helper->parent,&related->parent);
		(this_00->parent).vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_H;
		}
		node = (InstanceNodePayGate *)VirtualPool::AllocateMemory(0x1c);
		if (node == (InstanceNodePayGate *)0x0) {
		node = (InstanceNodePayGate *)0x0;
		}
		else {
		node = InstanceNodePayGate::Construct(node,this_00);
		}
		*(undefined *)((int)&ctx->field35_0x160 + 3) = 1;
		::EmptyFunction();
		return node;
		}
		
	*/
	return null;
}

InstanceNodeCrate* GameResourceManager::CreateNodeCrate(ChunkMeta* chunkMeta, Instance* instance, ParameterTable* parameters, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeCrate * __thiscall GameResourceManager::CreateNodeCrate(GameResourceManager *this,ChunkMeta *chunkMeta,Instance *instance,ParameterTable *parameters,InstanceContext *ctx){
		int *piVar1;
		BlackboardD *blackboard;
		NodeRelated1D *puVar1;
		NodeRelated1D *related;
		NodeRelated2D *this_00;
		InstanceNodeCrate *node;
		InstanceMasterInfo info;
		blackboard = (BlackboardD *)VirtualPool::AllocateMemory(0x2c);
		if (blackboard == (BlackboardD *)0x0) {
		blackboard = (BlackboardD *)0x0;
		}
		else {
		BlackboardAbstract::Construct((BlackboardAbstract *)blackboard);
		(blackboard->parent).vtable = (Blackboard_VTable *)&Blackboard_VT_D;
		if (parameters != (ParameterTable *)0x0) {
		BlackboardAbstract::InitBlackboard((BlackboardAbstract *)blackboard,parameters);
		}
		}
		puVar1 = (NodeRelated1D *)VirtualPool::AllocateMemory(0x18);
		if (puVar1 == (NodeRelated1D *)0x0) {
		related = (NodeRelated1D *)0x0;
		}
		else {
		related = NodeRelated1D::Construct(puVar1);
		}
		InstanceMasterInfo::Construct(&info,instance,(this->parent).gameResources,ctx);
		(*((this->parent).vtable)->SetInstanceIntParam)(this,chunkMeta,&blackboard->parent);
		this_00 = (NodeRelated2D *)VirtualPool::AllocateMemory(0x70);
		if (this_00 == (NodeRelated2D *)0x0) {
		this_00 = (NodeRelated2D *)0x0;
		}
		else {
		NodeRelated2Abstract::Construct((NodeRelated2Abstract *)this_00,&info,&blackboard->parent,&related->parent);
		(this_00->parent).vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_D;
		}
		node = (InstanceNodeCrate *)VirtualPool::AllocateMemory(0x1c);
		if (node == (InstanceNodeCrate *)0x0) {
		node = (InstanceNodeCrate *)0x0;
		}
		else {
		node = InstanceNodeCrate::Construct(node,this_00);
		}
		*(undefined *)((int)&ctx->field35_0x160 + 3) = 1;
		piVar1 = &(ctx->parent).flags;
		*piVar1 = *piVar1 | 0x8000;
		::EmptyFunction();
		return node;
		}
		
	*/
	return null;
}

InstanceNodeCreature* GameResourceManager::CreateNodeCreature(ChunkMeta* chunkMeta, Instance* instance, ParameterTable* parameters, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeCreature * __thiscall GameResourceManager::CreateNodeCreature(GameResourceManager *this,ChunkMeta *chunkMeta,Instance *instance,ParameterTable *parameters,InstanceContext *ctx){
		BlackboardE *helper;
		NodeRelated1E *puVar1;
		NodeRelated1E *related;
		NodeRelated2E *this_00;
		InstanceNodeCreature *node;
		InstanceMasterInfo local_c;
		helper = (BlackboardE *)VirtualPool::AllocateMemory(0x40);
		if (helper == (BlackboardE *)0x0) {
		helper = (BlackboardE *)0x0;
		}
		else {
		BlackboardAbstract::Construct((BlackboardAbstract *)helper);
		(helper->parent).vtable = (Blackboard_VTable *)&Blackboard_VT_E;
		if (parameters != (ParameterTable *)0x0) {
		BlackboardAbstract::InitBlackboard((BlackboardAbstract *)helper,parameters);
		}
		}
		puVar1 = (NodeRelated1E *)VirtualPool::AllocateMemory(0x1c);
		if (puVar1 == (NodeRelated1E *)0x0) {
		related = (NodeRelated1E *)0x0;
		}
		else {
		related = NodeRelated1E::Construct(puVar1);
		}
		InstanceMasterInfo::Construct(&local_c,instance,(this->parent).gameResources,ctx);
		(*((this->parent).vtable)->SetInstanceIntParam)(this,chunkMeta,&helper->parent);
		this_00 = (NodeRelated2E *)VirtualPool::AllocateMemory(0x70);
		if (this_00 == (NodeRelated2E *)0x0) {
		this_00 = (NodeRelated2E *)0x0;
		}
		else {
		NodeRelated2Abstract::Construct((NodeRelated2Abstract *)this_00,&local_c,&helper->parent,&related->parent);
		(this_00->parent).vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_E;
		(this_00->field1_0x60).x = Vector4_0039ef70.x;
		(this_00->field1_0x60).y = Vector4_0039ef70.y;
		(this_00->field1_0x60).z = Vector4_0039ef70.z;
		(this_00->field1_0x60).w = FLOAT_0038639c;
		}
		node = (InstanceNodeCreature *)VirtualPool::AllocateMemory(0x1c);
		if (node == (InstanceNodeCreature *)0x0) {
		node = (InstanceNodeCreature *)0x0;
		}
		else {
		node = InstanceNodeCreature::Construct(node,this_00);
		}
		*(undefined *)((int)&ctx->field35_0x160 + 3) = 1;
		::EmptyFunction();
		return node;
		}
		
	*/
	return null;
}

InstanceNodeFurniture* GameResourceManager::CreateNodeFurniture(ChunkMeta* chunkMeta, Instance* instance, ParameterTable* parameters, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeFurniture * __thiscall GameResourceManager::CreateNodeFurniture(GameResourceManager *this,ChunkMeta *chunkMeta,Instance *instance,ParameterTable *parameters,InstanceContext *ctx){
		BlackboardG *helper;
		NodeRelated1G *puVar1;
		NodeRelated1G *related;
		NodeRelated2G *this_00;
		InstanceNodeFurniture *node;
		InstanceMasterInfo local_c;
		helper = (BlackboardG *)VirtualPool::AllocateMemory(0x24);
		if (helper == (BlackboardG *)0x0) {
		helper = (BlackboardG *)0x0;
		}
		else {
		BlackboardAbstract::Construct((BlackboardAbstract *)helper);
		(helper->parent).vtable = (Blackboard_VTable *)&Blackboard_VT_G;
		if (parameters != (ParameterTable *)0x0) {
		BlackboardAbstract::InitBlackboard((BlackboardAbstract *)helper,parameters);
		}
		}
		puVar1 = (NodeRelated1G *)VirtualPool::AllocateMemory(0x18);
		if (puVar1 == (NodeRelated1G *)0x0) {
		related = (NodeRelated1G *)0x0;
		}
		else {
		related = NodeRelated1G::Construct(puVar1);
		}
		InstanceMasterInfo::Construct(&local_c,instance,(this->parent).gameResources,ctx);
		(*((this->parent).vtable)->SetInstanceIntParam)(this,chunkMeta,&helper->parent);
		this_00 = (NodeRelated2G *)VirtualPool::AllocateMemory(0x60);
		if (this_00 == (NodeRelated2G *)0x0) {
		this_00 = (NodeRelated2G *)0x0;
		}
		else {
		NodeRelated2Abstract::Construct((NodeRelated2Abstract *)this_00,&local_c,&helper->parent,&related->parent);
		(this_00->parent).vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_G;
		}
		node = (InstanceNodeFurniture *)VirtualPool::AllocateMemory(0x1c);
		if (node == (InstanceNodeFurniture *)0x0) {
		node = (InstanceNodeFurniture *)0x0;
		}
		else {
		node = InstanceNodeFurniture::Construct(node,this_00);
		}
		*(undefined *)((int)&ctx->field35_0x160 + 3) = 1;
		::EmptyFunction();
		return node;
		}
		
	*/
	return null;
}

InstanceNodeF* GameResourceManager::CreateNodeF(ChunkMeta* chunkMeta, Instance* instance, ParameterTable* parameters, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeF * __thiscall GameResourceManager::CreateNodeF(GameResourceManager *this,ChunkMeta *chunkMeta,Instance *instance,ParameterTable *parameters,InstanceContext *ctx){
		BlackboardF *helper;
		NodeRelated1F *puVar1;
		NodeRelated1F *related;
		NodeRelated2F *this_00;
		InstanceNodeF *node;
		InstanceMasterInfo local_c;
		helper = (BlackboardF *)VirtualPool::AllocateMemory(0x68);
		if (helper == (BlackboardF *)0x0) {
		helper = (BlackboardF *)0x0;
		}
		else {
		BlackboardAbstract::Construct((BlackboardAbstract *)helper);
		(helper->parent).vtable = (Blackboard_VTable *)&Blackboard_VT_F;
		if (parameters != (ParameterTable *)0x0) {
		BlackboardAbstract::InitBlackboard((BlackboardAbstract *)helper,parameters);
		}
		}
		puVar1 = (NodeRelated1F *)VirtualPool::AllocateMemory(0x18);
		if (puVar1 == (NodeRelated1F *)0x0) {
		related = (NodeRelated1F *)0x0;
		}
		else {
		related = NodeRelated1F::Construct(puVar1);
		}
		InstanceMasterInfo::Construct(&local_c,instance,(this->parent).gameResources,ctx);
		(*((this->parent).vtable)->SetInstanceIntParam)(this,chunkMeta,&helper->parent);
		this_00 = (NodeRelated2F *)VirtualPool::AllocateMemory(0x90);
		if (this_00 == (NodeRelated2F *)0x0) {
		this_00 = (NodeRelated2F *)0x0;
		}
		else {
		NodeRelated2Abstract::Construct((NodeRelated2Abstract *)this_00,&local_c,&helper->parent,&related->parent);
		(this_00->parent).parent.vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_F;
		this_00->field1_0x60 = 0;
		}
		node = (InstanceNodeF *)VirtualPool::AllocateMemory(0x1c);
		if (node == (InstanceNodeF *)0x0) {
		node = (InstanceNodeF *)0x0;
		}
		else {
		node = InstanceNodeF::Construct(node,this_00);
		}
		*(undefined *)((int)&ctx->field35_0x160 + 3) = 2;
		::EmptyFunction();
		return node;
		}
		
	*/
	return null;
}

InstanceContext* GameResourceManager::UnkMethod7(ChunkMeta* chunkMeta, GameObject* gameObject, Instance* instance, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceContext * __thiscall GameResourceManager::UnkMethod7(GameResourceManager *this,ChunkMeta *chunkMeta,GameObject *gameObject,Instance *instance,InstanceContext *ctx){
		byte timeIndex;
		InstanceNodeCharacter *nodeC;
		InstanceNodeInstance *nodeQ;
		uint uVar4;
		InstanceNodeInstance *_nodeQ;
		int playerIndex;
		InstanceNodeInput *nodeJ;
		InstanceNodeCamera *nodeK;
		InstanceNodeInput *pAVar6;
		InstanceNodeInput *actionContext;
		InstanceNodeCamera *this_00;
		InstanceNodeCamera *actionContext_00;
		InstanceContext *playerCtx;
		UnkTimePack *timers;
		ChunkDesc *chunkDesc;
		ChunkData *this_01;
		ChunkData *pIVar9;
		ChunkData *chunkData;
		Vector4 position;
		Matrix4 transform;
		InstanceDataList *dataList;
		AutoClass2 *pAVar2;
		byte *pbVar1;
		dataList = &ctx->nodes;
		nodeC = (InstanceNodeCharacter *)InstanceDataList::GetNode(dataList,Character);
		chunkData = (ChunkData *)chunkMeta->chunkDataRef;
		if (chunkData != (ChunkData *)0x0) {
		chunkData = (ChunkData *)chunkData->chunkRef;
		}
		timers = chunkData->timers;
		if (timers == (UnkTimePack *)0x0) {
		timers = GlobalClock->timeArray;
		}
		if (nodeC == (InstanceNodeCharacter *)0x0) {
		timeIndex = (byte)(*(uint *)gameObject->field2_0x8 >> 0xc);
		if ((0xf < timeIndex) && (timeIndex < 0x12)) {
		timeIndex = *(byte *)((int)&ctx->field35_0x160 + 3);
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)ctx,&position);
		Matrix4::Construct1(&transform);
		transform.m41 = position.x;
		transform.m42 = position.y;
		transform.m43 = position.z;
		transform.m44 = position.w;
		AutoClass2::FUN_0013dff0(&(ctx->parent).field14_0x20,&transform);
		nodeQ = (InstanceNodeInstance *)InstanceDataList::GetNode(dataList,Instance);
		(nodeQ->body).field63_0xbc = timers[timeIndex].time1;
		}
		uVar4 = *(uint *)gameObject->field2_0x8 >> 0x14 & 0xff;
		if (((uVar4 == 2) || (uVar4 == 4)) || (uVar4 == 6)) {
		pbVar1 = &(ctx->parent).field14_0x20.field8_0x20;
		*pbVar1 = *pbVar1 | 1;
		}
		}
		else {
		_nodeQ = (InstanceNodeInstance *)InstanceDataList::GetNode(dataList,Instance);
		playerIndex = BlackboardAbstract::GetIntValue((nodeC->field1_0x18->parent).parent.blackboard,0);
		chunkDesc = &GameController2->chunkDescriptor;
		if (playerIndex == 6) {
		this_01 = (ChunkData *)0x0;
		}
		else {
		this_01 = (ChunkData *)(GameController2->chunkDescriptor).playerInstanceContexts[playerIndex];
		if (this_01 != (ChunkData *)0x0) {
		this_01 = (ChunkData *)this_01->chunkRef;
		}
		}
		pIVar9 = this_01;
		if (this_01 != (ChunkData *)0x0) {
		pIVar9 = ((InstanceContextBase *)&this_01->chunkRef)->chunkData;
		}
		(_nodeQ->body).field41_0x3c.field2_0x20 = (_nodeQ->body).field41_0x3c.field2_0x20 & 0xfffffffe;
		if (pIVar9 == (ChunkData *)0x0) {
		ChunkDesc::thunk_FUN_0007c020(chunkDesc,playerIndex,ctx);
		this_01 = (ChunkData *)ctx;
		}
		if (this_01->previous != (ChunkData *)0x0) {
		FUN_000f7430(this_01->previous,ctx,chunkData);
		return (InstanceContext *)this_01;
		}
		nodeJ = (InstanceNodeInput *)InstanceDataList::GetNode((InstanceDataList *)&this_01->field7_0xd0,Input);
		nodeK = (InstanceNodeCamera *)InstanceDataList::GetNode((InstanceDataList *)&this_01->field7_0xd0,Camera);
		InstanceContext::InitSubStruct((InstanceContext *)this_01,chunkData);
		if (nodeJ == (InstanceNodeInput *)0x0) {
		pAVar6 = (InstanceNodeInput *)VirtualPool::AllocateMemory(0x34);
		if (pAVar6 == (InstanceNodeInput *)0x0) {
		actionContext = (InstanceNodeInput *)0x0;
		}
		else {
		actionContext = InstanceNodeInput::Construct(pAVar6);
		}
		InstanceContext::SetNode((InstanceContext *)this_01,true,&actionContext->parent);
		}
		if (nodeK == (InstanceNodeCamera *)0x0) {
		this_00 = (InstanceNodeCamera *)VirtualPool::AllocateMemory(1936);
		if (this_00 == (InstanceNodeCamera *)0x0) {
		actionContext_00 = (InstanceNodeCamera *)0x0;
		}
		else {
		actionContext_00 = InstanceNodeCamera::Construct(this_00,chunkMeta);
		}
		InstanceContext::SetNode((InstanceContext *)this_01,true,(InstanceNodeAbstract *)actionContext_00);
		}
		}
		pAVar2 = &(ctx->parent).field14_0x20;
		if (pAVar2 != (AutoClass2 *)0x0) {
		AutoClass2::FUN_0013a580(pAVar2);
		}
		Instance::thunk_FUN_00065d80(instance,ctx);
		playerCtx = ::GameResourceManagerBase::UnkMethod7(&this->parent,chunkMeta,gameObject,instance,ctx);
		return playerCtx;
		}
		
	*/
	return null;
}

InstanceNodeCharacter* GameResourceManager::CreateNodeCharacter(ChunkMeta* chunkMeta, Instance* instance, ParameterTable* parameters, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeCharacter * __thiscall GameResourceManager::CreateNodeCharacter(GameResourceManager *this,ChunkMeta *chunkMeta,Instance *instance,ParameterTable *parameters,InstanceContext *ctx){
		uint *puVar1;
		BlackboardC *helper;
		NodeRelated1C *this_00;
		NodeRelated2C *this_01;
		NodeRelated2C *pNVar2;
		InstanceNodeCharacter *node;
		InstanceNodeInstance *pIVar2;
		undefined extraout_DL;
		InstanceMasterInfo info;
		helper = (BlackboardC *)VirtualPool::AllocateMemory(0x150);
		if (helper == (BlackboardC *)0x0) {
		helper = (BlackboardC *)0x0;
		}
		else {
		BlackboardAbstract::Construct((BlackboardAbstract *)helper);
		(helper->parent).vtable = (Blackboard_VTable *)&Blackboard_VT_C;
		if (parameters != (ParameterTable *)0x0) {
		BlackboardAbstract::InitBlackboard((BlackboardAbstract *)helper,parameters);
		}
		}
		this_00 = (NodeRelated1C *)VirtualPool::AllocateMemory(0x60);
		if (this_00 == (NodeRelated1C *)0x0) {
		this_00 = (NodeRelated1C *)0x0;
		}
		else {
		NodeRelated1E::Construct((NodeRelated1E *)this_00);
		(this_00->parent).parent.vtable = &NodeRelated1_VT_C;
		this_00->field1_0x1c = 0;
		NodeRelated1C::Construct(this_00,extraout_DL,1);
		}
		InstanceMasterInfo::Construct(&info,instance,(this->parent).gameResources,ctx);
		(*((this->parent).vtable)->SetInstanceIntParam)(this,chunkMeta,&helper->parent);
		this_01 = (NodeRelated2C *)VirtualPool::AllocateMemory(0x310);
		if (this_01 == (NodeRelated2C *)0x0) {
		pNVar2 = (NodeRelated2C *)0x0;
		}
		else {
		pNVar2 = (NodeRelated2C *)NodeRelated2C::Construct(this_01,&info,helper,this_00);
		}
		node = (InstanceNodeCharacter *)VirtualPool::AllocateMemory(0x1c);
		if (node == (InstanceNodeCharacter *)0x0) {
		node = (InstanceNodeCharacter *)0x0;
		}
		else {
		node = InstanceNodeCharacter::Construct(node,pNVar2);
		}
		pIVar2 = (InstanceNodeInstance *)InstanceDataList::GetNode(&ctx->nodes,Instance);
		puVar1 = &(pIVar2->body).field50_0x84;
		*puVar1 = *puVar1 | 0x800000;
		*(undefined *)((int)&ctx->field35_0x160 + 3) = 2;
		::EmptyFunction();
		return node;
		}
		
	*/
	return null;
}

InstanceNodeChiChi* GameResourceManager::CreateNodeChiChiGrass(ChunkMeta* chunkMeta, Instance* instance, ParameterTable* parameters, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeChiChi * __thiscall GameResourceManager::CreateNodeChiChiGrass(GameResourceManager *this,ChunkMeta *chunkMeta,Instance *instance,ParameterTable *parameters,InstanceContext *ctx){
		int *piVar1;
		BlackboardB *helper;
		NodeRelated1B *this_00;
		NodeRelated2B *this_01;
		InstanceNodeChiChi *node;
		InstanceMasterInfo local_c;
		helper = (BlackboardB *)VirtualPool::AllocateMemory(0x28);
		if (helper == (BlackboardB *)0x0) {
		helper = (BlackboardB *)0x0;
		}
		else {
		BlackboardAbstract::Construct((BlackboardAbstract *)helper);
		(helper->parent).vtable = (Blackboard_VTable *)&Blackboard_VT_B;
		if (parameters != (ParameterTable *)0x0) {
		BlackboardAbstract::InitBlackboard((BlackboardAbstract *)helper,parameters);
		}
		}
		this_00 = (NodeRelated1B *)VirtualPool::AllocateMemory(0x18);
		if (this_00 == (NodeRelated1B *)0x0) {
		this_00 = (NodeRelated1B *)0x0;
		}
		else {
		(this_00->parent).field7_0x10 = 0;
		*(undefined *)&(this_00->parent).field7_0x10 = 3;
		piVar1 = &(this_00->parent).field7_0x10;
		*piVar1 = *piVar1 | 0xfe000;
		(this_00->parent).field_0x4 = 0;
		(this_00->parent).field6_0xc = 0;
		(this_00->parent).vtable = &NodeRelated1_VT_Abstract;
		NodeRelated1Abstract::InitTime((NodeRelated1Abstract *)this_00);
		(this_00->parent).vtable = &NodeRelated1_VT_B;
		this_00->field1_0x14 = 0;
		}
		InstanceMasterInfo::Construct(&local_c,instance,(this->parent).gameResources,ctx);
		(*((this->parent).vtable)->SetInstanceIntParam)(this,chunkMeta,&helper->parent);
		this_01 = (NodeRelated2B *)VirtualPool::AllocateMemory(0x60);
		if (this_01 == (NodeRelated2B *)0x0) {
		this_01 = (NodeRelated2B *)0x0;
		}
		else {
		NodeRelated2Abstract::Construct((NodeRelated2Abstract *)this_01,&local_c,&helper->parent,&this_00->parent);
		(this_01->parent).vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_B;
		}
		node = (InstanceNodeChiChi *)VirtualPool::AllocateMemory(0x1c);
		if (node == (InstanceNodeChiChi *)0x0) {
		node = (InstanceNodeChiChi *)0x0;
		}
		else {
		node = InstanceNodeChiChi::Construct(node,this_01);
		}
		*(undefined *)((int)&ctx->field35_0x160 + 3) = 1;
		::EmptyFunction();
		return node;
		}
		
	*/
	return null;
}

InstanceNodeAA* GameResourceManager::CreateNodeAA(ChunkMeta* chunkMeta, Instance* instance, ParameterTable* parameters, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAA * __thiscall GameResourceManager::CreateNodeAA(GameResourceManager *this,ChunkMeta *chunkMeta,Instance *instance,ParameterTable *parameters,InstanceContext *ctx){
		int *piVar1;
		BlackboardAA *helper;
		NodeRelated1AA *this_03;
		NodeRelated2AA *this_04;
		InstanceNodeAA *this_02;
		InstanceMasterInfo local_c;
		helper = (BlackboardAA *)VirtualPool::AllocateMemory(0x24);
		if (helper == (BlackboardAA *)0x0) {
		helper = (BlackboardAA *)0x0;
		}
		else {
		BlackboardAbstract::Construct((BlackboardAbstract *)helper);
		(helper->parent).vtable = (Blackboard_VTable *)&Blackboard_VT_AA;
		if (parameters != (ParameterTable *)0x0) {
		BlackboardAbstract::InitBlackboard((BlackboardAbstract *)helper,parameters);
		}
		}
		this_03 = (NodeRelated1AA *)VirtualPool::AllocateMemory(0x14);
		if (this_03 == (NodeRelated1AA *)0x0) {
		this_03 = (NodeRelated1AA *)0x0;
		}
		else {
		(this_03->parent).field7_0x10 = 0;
		*(undefined *)&(this_03->parent).field7_0x10 = 3;
		piVar1 = &(this_03->parent).field7_0x10;
		*piVar1 = *piVar1 | 0xfe000;
		(this_03->parent).field_0x4 = 0;
		(this_03->parent).field6_0xc = 0;
		(this_03->parent).vtable = &NodeRelated1_VT_Abstract;
		NodeRelated1Abstract::InitTime((NodeRelated1Abstract *)this_03);
		(this_03->parent).vtable = &NodeRelated1_VT_AA;
		}
		InstanceMasterInfo::Construct(&local_c,instance,(this->parent).gameResources,ctx);
		(*((this->parent).vtable)->SetInstanceIntParam)(this,chunkMeta,&helper->parent);
		this_04 = (NodeRelated2AA *)VirtualPool::AllocateMemory(0x60);
		if (this_04 == (NodeRelated2AA *)0x0) {
		this_04 = (NodeRelated2AA *)0x0;
		}
		else {
		NodeRelated2Abstract::Construct((NodeRelated2Abstract *)this_04,&local_c,&helper->parent,&this_03->parent);
		(this_04->parent).vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_AA;
		}
		this_02 = (InstanceNodeAA *)VirtualPool::AllocateMemory(0x1c);
		if (this_02 == (InstanceNodeAA *)0x0) {
		this_02 = (InstanceNodeAA *)0x0;
		}
		else {
		InstanceNodeA::Construct((InstanceNodeA *)this_02,this_04);
		(this_02->parent).parent.vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_AA;
		}
		*(undefined *)((int)&ctx->field35_0x160 + 3) = 1;
		::EmptyFunction();
		return this_02;
		}
		
	*/
	return null;
}

InstanceNodeAbstract* GameResourceManager::CreateNewInstanceNode(ChunkMeta* chunkMeta, Instance* instance, InstanceContext* ctx, InstanceNodeAbstract* node) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address InstanceNodeAbstract * __thiscall GameResourceManager::CreateNewInstanceNode(GameResourceManager *this,ChunkMeta *chunkMeta,Instance *instance,InstanceContext *ctx,InstanceNodeAbstract *node){
		GameObject *gameObject;
		InstanceNodeCrate *nodeD;
		InstanceNodeCharacter *nodeC;
		ParameterTable *parameters;
		InstanceNodeI *nodeI;
		InstanceNodeCreature *nodeE;
		InstanceNodeFurniture *nodeG;
		InstanceNodeChiChi *nodeB;
		InstanceNodePayGate *nodeH;
		InstanceNodeF *nodeF;
		InstanceNodeAA *nodeAA;
		InstanceNodeAA *pIVar10;
		if (instance->objectId == 0xffff) {
		gameObject = (GameObject *)0x0;
		}
		else {
		gameObject = ((((this->parent).gameResources)->parent).gameObjects)->elements[(ushort)instance->objectId & 0x7fff];
		}
		if ((*(byte *)&(this->parent).field3_0xc & 4) == 0) {
		parameters = gameObject->parameters;
		}
		else {
		parameters = instance->parameters;
		}
		switch(*(uint *)gameObject->field2_0x8 >> 0x14 & 0xff) {
		case 0:nodeC = CreateNodeCharacter(this,chunkMeta,instance,parameters,ctx);
		(*node->vtable[1].Dispose)(node,(byte)nodeC->field1_0x18);
		return &nodeC->parent;
		case 1:break;
		case 2:nodeD = CreateNodeCrate(this,chunkMeta,instance,parameters,ctx);
		(*node->vtable[1].Dispose)(node,(byte)nodeD->field1_0x18);
		return &nodeD->parent;
		case 3:nodeE = CreateNodeCreature(this,chunkMeta,instance,parameters,ctx);
		(*node->vtable[1].Dispose)(node,(byte)nodeE->field1_0x18);
		return &nodeE->parent;
		case 4:nodeG = CreateNodeFurniture(this,chunkMeta,instance,parameters,ctx);
		(*node->vtable[1].Dispose)(node,(byte)nodeG->field1_0x18);
		return &nodeG->parent;
		case 5:nodeB = CreateNodeChiChiGrass(this,chunkMeta,instance,parameters,ctx);
		(*node->vtable[1].Dispose)(node,(byte)nodeB->field1_0x18);
		return &nodeB->parent;
		case 6:nodeH = CreateNodePayGate(this,chunkMeta,instance,parameters,ctx);
		(*node->vtable[1].Dispose)(node,(byte)nodeH->field1_0x18);
		return &nodeH->parent;
		case 7:nodeF = CreateNodeF(this,chunkMeta,instance,parameters,ctx);
		(*node->vtable[1].Dispose)(node,(byte)nodeF->field1_0x18);
		return &nodeF->parent;
		case 8:nodeAA = CreateNodeAA(this,chunkMeta,instance,parameters,ctx);
		(*node->vtable[1].Dispose)(node,(byte)(nodeAA->parent).field1_0x18);
		return (InstanceNodeAbstract *)nodeAA;
		default:(*node->vtable[1].Dispose)(node,(byte)_DAT_00000018);
		return (InstanceNodeAbstract *)0x0;
		}
		if ((char)(*(uint *)gameObject->field2_0x8 >> 0xc) == '\x10') {
		parameters = (ParameterTable *)0x0;
		}
		nodeI = CreateNodeI(this,chunkMeta,instance,parameters,ctx);
		(*node->vtable[1].Dispose)(node,(byte)nodeI->field1_0x18);
		return &nodeI->parent;
		}
		
	*/
	return null;
}

InstanceNodeInstance* GameResourceManager::CreateNewInstanceNodeFromObject(int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling InstanceNodeInstance * GameResourceManager::CreateNewInstanceNodeFromObject(int this,int param_2){
		byte bVar1;
		InstanceNodeInstanceA *this_00;
		InstanceNodeInstance *pIVar2;
		InstanceNodeInstanceD *node;
		InstanceNodeInstanceB *pIVar3;
		undefined4 uStack0000000c;
		switch(*(uint *)(param_2 + 8) >> 0x14 & 0xff) {
		case 0:case 3:node = (InstanceNodeInstanceD *)VirtualPool::AllocateMemory(0x180);
		if (node == (InstanceNodeInstanceD *)0x0) {
		return (InstanceNodeInstance *)0x0;
		}
		uStack0000000c = 1;
		param_2._0_1_ = '\x01';
		break;
		case 1:bVar1 = (byte)(*(uint *)(param_2 + 8) >> 0xc);
		if ((0xf < bVar1) && (bVar1 < 0x12)) {
		this_00 = (InstanceNodeInstanceA *)VirtualPool::AllocateMemory(0xd0);
		if (this_00 == (InstanceNodeInstanceA *)0x0) {
		return (InstanceNodeInstance *)0x0;
		}
		pIVar2 = (InstanceNodeInstance *)InstanceNodeInstanceA::Cosntruct(this_00,this);
		return pIVar2;
		}
		case 2:case 6:case 7:node = (InstanceNodeInstanceD *)VirtualPool::AllocateMemory(0x180);
		if (node == (InstanceNodeInstanceD *)0x0) {
		return (InstanceNodeInstance *)0x0;
		}
		uStack0000000c = 0;
		param_2._0_1_ = '\0';
		break;
		case 4:case 5:node = (InstanceNodeInstanceD *)VirtualPool::AllocateMemory(0x180);
		if (node == (InstanceNodeInstanceD *)0x0) {
		return (InstanceNodeInstance *)0x0;
		}
		uStack0000000c = 0;
		param_2._0_1_ = '\x01';
		break;
		case 8:pIVar3 = (InstanceNodeInstanceB *)VirtualPool::AllocateMemory(0xf0);
		if (pIVar3 == (InstanceNodeInstanceB *)0x0) {
		return (InstanceNodeInstance *)0x0;
		}
		pIVar3 = InstanceNodeInstanceB::Construct(pIVar3);
		return (InstanceNodeInstance *)pIVar3;
		default:return (InstanceNodeInstance *)0x0;
		}
		InstanceNodeInstance::Construct((InstanceNodeInstance *)node,this);
		(node->body).parent.parent.field61_0x9c.w = 0.0;
		(node->body).parent.parent.field61_0x9c.x = 0.0;
		(node->body).parent.parent.field61_0x9c.y = 0.0;
		node->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance_D;
		InstanceNodeInstanceD::Init(node,(char)param_2);
		return (InstanceNodeInstance *)node;
		}
		
	*/
	return null;
}

void GameResourceManager::GetTriggerNode(int param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void GameResourceManager::GetTriggerNode(GameResourceManager *this,int param_2,int param_3){
		byte bVar1;
		uint uVar2;
		uint uVar3;
		InstanceNodeTrigger *pIVar4;
		uint uVar5;
		pIVar4 = ::GameResourceManagerBase::GetTriggerNode(&this->parent,param_2);
		uVar2 = *(uint *)(param_2 + 0x14);
		uVar5 = 0;
		if (uVar2 == 1) {
		uVar3 = (pIVar4->body).parent.field1_0x14;
		if ((uVar3 >> 0x13 & 1) == 0) {
		bVar1 = (pIVar4->body).field_0x17c;
		(pIVar4->body).parent.field1_0x14 = uVar3 | 0x100000;
		(pIVar4->body).field_0x17c = bVar1 & 0xfd;
		*(undefined *)(param_3 + 0x163) = 1;
		return;
		}
		}
		else if (uVar2 == 0) {
		uVar2 = (pIVar4->body).parent.field1_0x14;
		if ((uVar2 >> 0x13 & 1) == 0) {
		(pIVar4->body).parent.field1_0x14 = uVar2 | 0x100000;
		}
		(pIVar4->body).field_0x17c = (pIVar4->body).field_0x17c | 2;
		*(undefined *)(param_3 + 0x163) = 1;
		return;
		}
		if ((uVar2 & 1) != 0) {
		uVar5 = 0x1000;
		}
		if ((uVar2 & 4) != 0) {
		uVar5 = uVar5 | 0x2000;
		}
		if ((uVar2 & 8) != 0) {
		uVar5 = uVar5 | 0x8000;
		}
		if ((uVar2 & 2) != 0) {
		uVar5 = uVar5 | 0x4000;
		}
		if ((uVar2 & 0x10) != 0) {
		uVar5 = uVar5 | 0x10000;
		}
		if ((uVar2 & 0x20) != 0) {
		uVar5 = uVar5 | 0x20000;
		}
		if ((char)uVar2 < '\0') {
		uVar5 = uVar5 | 0x80000;
		}
		if ((uVar2 & 0x40) != 0) {
		uVar5 = uVar5 | 0x40000;
		}
		if ((uVar2 & 0x100) != 0) {
		uVar5 = uVar5 | 0x100000;
		}
		if ((uVar2 & 0x200) != 0) {
		uVar5 = uVar5 | 0x200000;
		}
		(pIVar4->body).parent.field3_0x1c = uVar5;
		*(undefined *)(param_3 + 0x163) = 1;
		return;
		}
		
	*/
	return;
}

void GameResourceManager::GetCameraNode(int param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void GameResourceManager::GetCameraNode(GameResourceManager *this,int param_2,int param_3){
		int *piVar1;
		uint uVar2;
		InstanceNodeCameraTrigger *pIVar3;
		pIVar3 = ::GameResourceManagerBase::GetCameraNode(&this->parent,param_2);
		uVar2 = *(uint *)(param_2 + 0x14);
		if ((uVar2 & 1) != 0) {
		piVar1 = &(pIVar3->body).parent.field1_0x14;
		*piVar1 = *piVar1 | 0x100000;
		}
		(pIVar3->body).parent.field3_0x1c = uVar2;
		*(undefined *)(param_3 + 0x163) = 1;
		return;
		}
		
	*/
	return;
}