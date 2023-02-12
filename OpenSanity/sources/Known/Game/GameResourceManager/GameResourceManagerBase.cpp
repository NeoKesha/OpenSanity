#include "headers/Known/Game/GameResourceManager/GameResourceManagerBase.h"

#include "headers/Known/Game/GameResources/GameResources.h"
#include "headers/Known/Game/Chunks/ChunkMeta.h"
#include "headers/Known/GameData/Instance/Instance.h"
#include "headers/Known/GameData/GameObject/GameObject.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Trigger/InstanceNodeTrigger.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Trigger/InstanceNodeCameraTrigger.h"
#include "headers/Known/Game/InstanceSystem/Blackboard/BlackboardAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Instance/InstanceNodeInstance.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/OGI/InstanceNodeOGI.h"
InstanceContext* GameResourceManagerBase::UnkMethod7(ChunkMeta* chunkMeta, GameObject* gameObject, Instance* instance, InstanceContext* instanceContext) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceContext * __thiscall GameResourceManagerBase::UnkMethod7(GameResourceManagerBase *this,ChunkMeta *chunkMeta,GameObject *gameObject,Instance *instance,InstanceContext *instanceContext){
		int *piVar1;
		ParameterTable *pPVar2;
		uint uVar3;
		pPVar2 = instance->parameters;
		(instanceContext->parent).flags = (instanceContext->parent).flags | 0x200;
		uVar3 = (instanceContext->parent).flags | this->field1_0x4;
		(instanceContext->parent).flags = uVar3;
		(instanceContext->parent).flags = ~this->field2_0x8 & uVar3;
		if (((*(byte *)&this->field3_0xc & 1) != 0) && (instanceContext->field36_0x164 == -1)) {
		FUN_000f7960((int)UF16SUB,instanceContext);
		}
		if ((*(byte *)&pPVar2->unkInt & 0x10) != 0) {
		piVar1 = &(instanceContext->parent).flags;
		*piVar1 = *piVar1 | 0x4000;
		}
		return (InstanceContext *)0x0;
		}
		
	*/
	return null;
}
GameResourceManagerBase::GameResourceManagerBase() {
	InstanceTemplate** ppIVar1;
	this->field1_0x4 = 0;
	this->field2_0x8 = 0;
	this->field4_0x10 = -1;
	this->gameResources = null;
	this->collectionInstanceTemplate.cnt = 0;
	this->collectionInstanceTemplate.capacity = 0;
	this->collectionInstanceTemplate.expansion = 0;
	this->collectionInstanceTemplate.list = null;
	this->field3_0xc = 0x1ff0;
}

GameResourceManagerBase::GameResourceManagerBase(GameResources* gameResources) {
	InstanceTemplate** ppIVar1;
	this->field1_0x4 = 0;
	this->field2_0x8 = 0;
	this->field4_0x10 = -1;
	this->gameResources = gameResources;
	this->collectionInstanceTemplate.cnt = 0;
	this->collectionInstanceTemplate.capacity = 10;
	this->collectionInstanceTemplate.expansion = 10;
	this->collectionInstanceTemplate.list = new InstanceTemplate * [10];
	this->field3_0xc = 0x1ff0;
}

GameResourceManagerBase::~GameResourceManagerBase() {
	delete collectionInstanceTemplate.list;
	return;
}

InstanceNodeTrigger* GameResourceManagerBase::GetTriggerNode(int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeTrigger *GameResourceManagerBase::GetTriggerNode(GameResourceManagerBase *this,int param_2){
		int *piVar1;
		InstanceNodeTrigger *node;
		GameResourcesBase_VTable *pGVar2;
		if (this->gameResources == (GameResources *)0x0) {
		pGVar2 = (GameResourcesBase_VTable *)0x0;
		}
		else {
		pGVar2 = (this->gameResources->parent).vtable;
		}
		node = (InstanceNodeTrigger *)VirtualPool::AllocateMemory(0x1a0);
		if (node == (InstanceNodeTrigger *)0x0) {
		node = (InstanceNodeTrigger *)0x0;
		}
		else {
		node = InstanceNodeTrigger::Construct(node,(undefined *)pGVar2,param_2);
		}
		if ((*(uint *)(param_2 + 0x10) >> 0xc & 1) != 0) {
		piVar1 = &(node->body).parent.field1_0x14;
		*piVar1 = *piVar1 | 0x100000;
		}
		return node;
		}
		
	*/
	return null;
}

InstanceNodeCameraTrigger* GameResourceManagerBase::GetCameraNode(int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeCameraTrigger *GameResourceManagerBase::GetCameraNode(GameResourceManagerBase *this,int param_2){
		InstanceNodeCameraTrigger *node;
		GameResourcesBase_VTable *pGVar1;
		if (this->gameResources == (GameResources *)0x0) {
		pGVar1 = (GameResourcesBase_VTable *)0x0;
		}
		else {
		pGVar1 = (this->gameResources->parent).vtable;
		}
		node = (InstanceNodeCameraTrigger *)VirtualPool::AllocateMemory(0x180);
		if (node != (InstanceNodeCameraTrigger *)0x0) {
		node = InstanceNodeCameraTrigger::Construct(node,(undefined *)pGVar1,param_2);
		return node;
		}
		return (InstanceNodeCameraTrigger *)0x0;
		}
		
	*/
	return null;
}

InstanceNodeOGI* GameResourceManagerBase::GetOgiNodeFromInstance(ChunkMeta* chunkMeta, Instance* instance) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeOGI * __thiscall GameResourceManagerBase::GetOgiNodeFromInstance(GameResourceManagerBase *this,ChunkMeta *chunkMeta,Instance *instance){
		InstanceNodeOGI *pIVar1;
		GameObject *gameObject;
		if ((instance->objectId != 0xffff) &&(gameObject = ((this->gameResources->parent).gameObjects)->elements[(ushort)instance->objectId & 0x7fff], gameObject != (GameObject *)0x0)) {
		pIVar1 = GameObject::GetInstanceNode(gameObject);
		return pIVar1;
		}
		return (InstanceNodeOGI *)0x0;
		}
		
	*/
	return null;
}

void GameResourceManagerBase::SetInstanceIntParam(ChunkMeta* chunkMeta, BlackboardAbstract* blackboard) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall GameResourceManagerBase::SetInstanceIntParam(GameResourceManagerBase *this,ChunkMeta *chunkMeta,BlackboardAbstract *blackboard){
		BlackboardSub *pBVar1;
		uint uVar2;
		int iVar3;
		uint *puVar4;
		uVar2 = (uint)this->field3_0xc >> 5;
		if ((char)uVar2 != -1) {
		uVar2 = uVar2 & 0xff;
		iVar3 = (*blackboard->vtable->GetIntsCount)();
		if (iVar3 != 0) {
		puVar4 = (uint *)(*blackboard->vtable->GetBlackboardIntEntry)(blackboard,0);
		*puVar4 = uVar2;
		return;
		}
		pBVar1 = blackboard->blackboardSub;
		if (pBVar1 != (BlackboardSub *)0x0) {
		pBVar1->array[(uint)pBVar1->floatsCnt + (uint)pBVar1->flagsCnt] = uVar2;
		}
		}
		return;
		}
		
	*/
	return;
}

bool GameResourceManagerBase::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool GameResourceManagerBase::IsA(void){
		return true;
		}
		
	*/
	return false;
}

InstanceNodeInstance* GameResourceManagerBase::CreateNewInstanceNodeFromObject(GameResourceManagerBase* param_1, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeInstance *GameResourceManagerBase::CreateNewInstanceNodeFromObject(GameResourceManagerBase *param_1,undefined4 param_2,undefined4 param_3){
		InstanceNodeInstanceD *this;
		this = (InstanceNodeInstanceD *)VirtualPool::AllocateMemory(0x180);
		if (this != (InstanceNodeInstanceD *)0x0) {
		InstanceNodeInstance::Construct((InstanceNodeInstance *)this,(int)param_1);
		(this->body).parent.parent.field61_0x9c.w = 0.0;
		(this->body).parent.parent.field61_0x9c.x = 0.0;
		(this->body).parent.parent.field61_0x9c.y = 0.0;
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance_D;
		InstanceNodeInstanceD::Init(this,'\x01');
		return (InstanceNodeInstance *)this;
		}
		return (InstanceNodeInstance *)0x0;
		}
		
	*/
	return null;
}

uint GameResourceManagerBase::CreateNewInstanceNode() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 GameResourceManagerBase::CreateNewInstanceNode(void){
		return 0;
		}
		
	*/
	return 0;
}

