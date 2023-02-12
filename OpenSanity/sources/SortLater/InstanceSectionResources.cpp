#include "headers/SortLater/InstanceSectionResources.h"

#include "headers/Unknown/Families/Families2X/Family27/UnkFamily27Wrapper.h"
#include "headers/Known/Game/InstanceSystem/InstanceContextList.h"
#include "headers/Known/GameData/AiPath/AiPath.h"
#include "headers/Known/GameData/AiPosition/AiPosition.h"
#include "headers/Known/Collections/CollectionInstance.h"
#include "headers/Known/Collections/CollectionPath.h"
#include "headers/Known/Game/GameResources/GameResources.h"
#include "headers/Known/GameData/Instance/Instance.h"
#include "headers/Known/Game/Chunks/ChunkMeta.h"
#include "headers/Known/Collections/CollectionTrigger.h"
#include "headers/Known/GameData/Trigger/CameraTrigger.h"
#include "headers/Known/Collections/CollectionAiPath.h"
#include "headers/Known/GameData/Trigger/Trigger.h"
#include "headers/Known/Collections/CollectionPosition.h"
void InstanceSectionResources::Add(ushort param_1, ushort param_2, AiPosition* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceSectionResources::Add(InstanceSectionResources *this,ushort param_1,ushort param_2,AiPosition *element){
		UnkFamily17Base *pUVar1;
		ChunkMeta *pCVar2;
		UnkFamily12Base *this_00;
		undefined4 uVar3;
		pUVar1 = RM->field2046_0x814;
		if (pUVar1 != (UnkFamily17Base *)0x0) {
		if (this->field13_0x34 == 0) {
		pCVar2 = this->chunkMeta;
		this_00 = (UnkFamily12Base *)VirtualPool::AllocateMemory(0x14);
		if (this_00 == (UnkFamily12Base *)0x0) {
		uVar3 = 0;
		}
		else {
		uVar3 = UnkFamily12Base::Construct(this_00,pUVar1);
		}
		*(undefined4 *)&pCVar2->field_0x28 = uVar3;
		this->field13_0x34 = uVar3;
		}
		if (*(short *)(this->field13_0x34 + 0xc) == 0) {
		FUN_00171000(this->field13_0x34,param_2);
		}
		}
		FUN_0016d1f0(this->field13_0x34,param_1,element);
		return;
		}
		
	*/
	return;
}

void InstanceSectionResources::AddAiPath(CollectionAiPath* collection, ushort param_2, AiPath* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceSectionResources::AddAiPath(InstanceSectionResources *this,CollectionAiPath *collection,ushort param_2,AiPath *element){
		UnkFamily17Base *pUVar1;
		ChunkMeta *pCVar2;
		UnkFamily12Base *this_00;
		undefined4 uVar3;
		pUVar1 = RM->field2046_0x814;
		if (pUVar1 != (UnkFamily17Base *)0x0) {
		if (this->field13_0x34 == 0) {
		pCVar2 = this->chunkMeta;
		this_00 = (UnkFamily12Base *)VirtualPool::AllocateMemory(0x14);
		if (this_00 == (UnkFamily12Base *)0x0) {
		uVar3 = 0;
		}
		else {
		uVar3 = UnkFamily12Base::Construct(this_00,pUVar1);
		}
		*(undefined4 *)&pCVar2->field_0x28 = uVar3;
		this->field13_0x34 = uVar3;
		}
		if (*(short *)(this->field13_0x34 + 0xe) == 0) {
		FUN_0016ce30(this->field13_0x34,param_2);
		}
		}
		FUN_0016d240(this->field13_0x34,(ushort)collection,element);
		return;
		}
		
	*/
	return;
}

bool InstanceSectionResources::AddInstance(CollectionInstance* collection, int ctxCnt, Instance* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceSectionResources::AddInstance(InstanceSectionResources *this,CollectionInstance *collection,int ctxCnt,Instance *element){
		bool bVar1;
		InstanceContext *ctx;
		InstanceContextList *ctxList;
		InstanceContext **array;
		uint uVar1;
		GameResourceManager *resourceManager;
		resourceManager = ResourceManager;
		GameResourceManager::FUN_001a79d0(ResourceManager);
		GameResourceManager::FUN_001a79f0(resourceManager);
		GameResourceManager::FUN_001a79c0(resourceManager);
		GameResourceManager::FUN_001a7980(resourceManager);
		if ((*(byte *)&this->flags & 2) == 0) {
		(resourceManager->parent).field1_0x4 = 0x2000;
		}
		else {
		(resourceManager->parent).field1_0x4 = 0;
		}
		ctx = GameResourceManager::AddInstance(resourceManager,this->chunkMeta,element);
		if (this->ctxList == (InstanceContextList *)0x0) {
		ctxList = (InstanceContextList *)VirtualPool::AllocateMemory(8);
		if (ctxList == (InstanceContextList *)0x0) {
		ctxList = (InstanceContextList *)0x0;
		}
		else {
		ctxList->cnt = ctxCnt;
		if (ctxCnt == 0) {
		ctxList->array = (InstanceContext **)0x0;
		}
		else {
		array = (InstanceContext **)VirtualPool::AllocateMemory(ctxCnt * 4);
		ctxList->array = array;
		}
		}
		this->ctxList = ctxList;
		this->flags = this->flags & 0xffff0003;
		}
		this->ctxList->array[this->flags >> 2 & 0x3fff] = ctx;
		uVar1 = this->flags;
		uVar1 = ((uVar1 & 0xfffffffc) + 4 ^ uVar1) & 0xfffc ^ uVar1;
		this->flags = uVar1;
		Instance::FUN_001aa8e0(element,this->chunkMeta,ctx,~(byte)(uVar1 >> 1) & 1);
		bVar1 = (bool)(~(byte)(this->flags >> 1) & 1);
		Instance::FUN_001aa9a0(element,this->chunkMeta,ctx);
		(resourceManager->parent).field1_0x4 = 0;
		return bVar1;
		}
		
	*/
	return false;
}

byte InstanceSectionResources::FUN_001b4e20(UnkFamily27Wrapper* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte __thiscall InstanceSectionResources::FUN_001b4e20(InstanceSectionResources *this,UnkFamily27Wrapper *param_1,int param_2){
		UnkFamily27A *pUVar1;
		bool bVar2;
		byte bVar3;
		byte bVar4;
		Instance *pvVar5;
		Instance *this_00;
		uint uVar5;
		CollectionInstance *pCVar6;
		Instance **ppIVar7;
		byte local_5;
		bVar3 = 1;
		local_5 = 1;
		if (param_2 != 0) {
		do {
		pvVar5 = (Instance *)VirtualPool::AllocateMemory(0x60);
		if (pvVar5 == (Instance *)0x0) {
		this_00 = (Instance *)0x0;
		}
		else {
		this_00 = Instance::Construct(pvVar5);
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar2 == false) {
		LAB_001b4f04:bVar3 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		pUVar1 = param_1->ptr;
		bVar3 = (*(code *)((pUVar1->parent).vtable)->field42_0xa8)(0x915,0x1b05,0);
		bVar3 = bVar3 & 1;
		if (bVar3 != 0) {
		uVar5 = FUN_001aca10((int)this_00,&((pUVar1->parent).field410_0x1ac)->ptr);
		bVar3 = bVar3 & (byte)uVar5;
		}
		(*(code *)((pUVar1->parent).vtable)->field43_0xac)(0x915,0x1b05);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001b4f04;
		pUVar1 = param_1->ptr;
		bVar3 = (*(code *)((pUVar1->parent).vtable)->field17_0x44)(0x915,0x1b05,0);
		bVar3 = bVar3 & 1;
		if (bVar3 != 0) {
		uVar5 = FUN_001aca10((int)this_00,&((pUVar1->parent).field410_0x1ac)->ptr);
		bVar4 = (*(code *)((pUVar1->parent).vtable)->field18_0x48)(0x915,0x1b05);
		bVar3 = bVar3 & (byte)uVar5 & bVar4;
		}
		}
		bVar3 = local_5 & bVar3;
		if ((this->instances).collectionPtr == (CollectionInstance *)0x0) {
		pCVar6 = (CollectionInstance *)VirtualPool::AllocateMemory(0x10);
		if (pCVar6 == (CollectionInstance *)0x0) {
		pCVar6 = (CollectionInstance *)0x0;
		}
		else {
		pCVar6->cnt = 0;
		pCVar6->capacity = (int)&DAT_0000000a;
		pCVar6->expansion = (int)&DAT_0000000a;
		ppIVar7 = (Instance **)VirtualPool::AllocateMemory(0x28);
		pCVar6->list = ppIVar7;
		}
		(this->instances).collectionPtr = pCVar6;
		}
		CollectionInstance::Add((this->instances).collectionPtr,this_00);
		param_2 = param_2 + -1;
		local_5 = bVar3;
		}
		 while (param_2 != 0);
		}
		return bVar3;
		}
		
	*/
	return 0;
}

byte InstanceSectionResources::FUN_001b4f80(UnkFamily27Wrapper* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte __thiscall InstanceSectionResources::FUN_001b4f80(InstanceSectionResources *this,UnkFamily27Wrapper *param_1,int param_2){
		UnkFamily27A *pUVar1;
		bool bVar2;
		byte bVar3;
		byte bVar4;
		InstanceTemplate *puVar5;
		InstanceTemplate *this_00;
		CollectionInstanceTemplate *pCVar5;
		InstanceTemplate **ppIVar6;
		byte local_5;
		bVar3 = 1;
		local_5 = 1;
		if (param_2 != 0) {
		do {
		puVar5 = (InstanceTemplate *)VirtualPool::AllocateMemory(0x48);
		if (puVar5 == (InstanceTemplate *)0x0) {
		this_00 = (InstanceTemplate *)0x0;
		}
		else {
		this_00 = InstanceTemplate::Construct(puVar5);
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar2 == false) {
		LAB_001b5064:bVar3 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		pUVar1 = param_1->ptr;
		bVar3 = (*(code *)((pUVar1->parent).vtable)->field42_0xa8)(0x92a,0x1b07,0);
		bVar3 = bVar3 & 1;
		if (bVar3 != 0) {
		bVar2 = InstanceTemplate::FUN_001ace00(this_00,(pUVar1->parent).field410_0x1ac);
		bVar3 = bVar3 & bVar2;
		}
		(*(code *)((pUVar1->parent).vtable)->field43_0xac)(0x92a,0x1b07);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001b5064;
		pUVar1 = param_1->ptr;
		bVar3 = (*(code *)((pUVar1->parent).vtable)->field17_0x44)(0x92a,0x1b07,0);
		bVar3 = bVar3 & 1;
		if (bVar3 != 0) {
		bVar2 = InstanceTemplate::FUN_001ace00(this_00,(pUVar1->parent).field410_0x1ac);
		bVar4 = (*(code *)((pUVar1->parent).vtable)->field18_0x48)(0x92a,0x1b07);
		bVar3 = bVar3 & bVar2 & bVar4;
		}
		}
		bVar3 = local_5 & bVar3;
		if ((this->instanceTemplates).collectionPtr == (CollectionInstanceTemplate *)0x0) {
		pCVar5 = (CollectionInstanceTemplate *)VirtualPool::AllocateMemory(0x10);
		if (pCVar5 == (CollectionInstanceTemplate *)0x0) {
		pCVar5 = (CollectionInstanceTemplate *)0x0;
		}
		else {
		pCVar5->cnt = 0;
		pCVar5->capacity = (int)&DAT_0000000a;
		pCVar5->expansion = (int)&DAT_0000000a;
		ppIVar6 = (InstanceTemplate **)VirtualPool::AllocateMemory(0x28);
		pCVar5->list = ppIVar6;
		}
		(this->instanceTemplates).collectionPtr = pCVar5;
		}
		CollectionInstanceTemplate::Add((this->instanceTemplates).collectionPtr,this_00);
		param_2 = param_2 + -1;
		local_5 = bVar3;
		}
		 while (param_2 != 0);
		}
		return bVar3;
		}
		
	*/
	return 0;
}

byte InstanceSectionResources::FUN_001b50e0(UnkFamily27Wrapper* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte __thiscall InstanceSectionResources::FUN_001b50e0(InstanceSectionResources *this,UnkFamily27Wrapper *param_1,int param_2){
		UnkFamily27A *pUVar1;
		bool bVar2;
		byte bVar3;
		byte bVar4;
		UnkBuilder2Item0x180F *this_00;
		CollectionAiPosition *pCVar5;
		AiPosition **ppAVar6;
		byte local_5;
		bVar3 = 1;
		local_5 = 1;
		if (param_2 != 0) {
		do {
		this_00 = (UnkBuilder2Item0x180F *)VirtualPool::AllocateMemory(0x20);
		if (this_00 == (UnkBuilder2Item0x180F *)0x0) {
		this_00 = (UnkBuilder2Item0x180F *)0x0;
		}
		else {
		UnkBuilder2Item0x180F::Construct(this_00);
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar2 == false) {
		LAB_001b51c6:bVar3 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		pUVar1 = param_1->ptr;
		bVar3 = (*(code *)((pUVar1->parent).vtable)->field42_0xa8)(0x94d,0x180f,0);
		bVar3 = bVar3 & 1;
		if (bVar3 != 0) {
		bVar2 = AiPosition::FUN_00176890((AiPosition *)this_00,(pUVar1->parent).field410_0x1ac);
		bVar3 = bVar3 & bVar2;
		}
		(*(code *)((pUVar1->parent).vtable)->field43_0xac)(0x94d,0x180f);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001b51c6;
		pUVar1 = param_1->ptr;
		bVar3 = (*(code *)((pUVar1->parent).vtable)->field17_0x44)(0x94d,0x180f,0);
		bVar3 = bVar3 & 1;
		if (bVar3 != 0) {
		bVar2 = AiPosition::FUN_00176890((AiPosition *)this_00,(pUVar1->parent).field410_0x1ac);
		bVar4 = (*(code *)((pUVar1->parent).vtable)->field18_0x48)(0x94d,0x180f);
		bVar3 = bVar3 & bVar2 & bVar4;
		}
		}
		bVar3 = local_5 & bVar3;
		if ((this->aiPositions).collectionPtr == (CollectionAiPosition *)0x0) {
		pCVar5 = (CollectionAiPosition *)VirtualPool::AllocateMemory(0x10);
		if (pCVar5 == (CollectionAiPosition *)0x0) {
		pCVar5 = (CollectionAiPosition *)0x0;
		}
		else {
		pCVar5->cnt = 0;
		pCVar5->capacity = (int)&DAT_0000000a;
		pCVar5->expansion = (int)&DAT_0000000a;
		ppAVar6 = (AiPosition **)VirtualPool::AllocateMemory(0x28);
		pCVar5->list = ppAVar6;
		}
		(this->aiPositions).collectionPtr = pCVar5;
		}
		CollectionAiPosition::Add((this->aiPositions).collectionPtr,(AiPosition *)this_00);
		param_2 = param_2 + -1;
		local_5 = bVar3;
		}
		 while (param_2 != 0);
		}
		return bVar3;
		}
		
	*/
	return 0;
}

byte InstanceSectionResources::FUN_001b5240(UnkFamily27Wrapper* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte __thiscall InstanceSectionResources::FUN_001b5240(InstanceSectionResources *this,UnkFamily27Wrapper *param_1,int param_2){
		UnkFamily27A *pUVar1;
		bool bVar2;
		byte bVar3;
		byte bVar4;
		AiPath *this_00;
		uint uVar5;
		CollectionAiPath *pCVar6;
		AiPath **ppAVar7;
		byte local_5;
		bVar3 = 1;
		local_5 = 1;
		if (param_2 != 0) {
		do {
		this_00 = (AiPath *)VirtualPool::AllocateMemory(10);
		if (this_00 == (AiPath *)0x0) {
		this_00 = (AiPath *)0x0;
		}
		else {
		this_00->node1 = -1;
		this_00->node2 = -1;
		this_00->arg1 = 0;
		this_00->arg2 = -1;
		this_00->arg3 = -1;
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar2 == false) {
		LAB_001b533a:bVar3 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		pUVar1 = param_1->ptr;
		bVar3 = (*(code *)((pUVar1->parent).vtable)->field42_0xa8)(0x94e,0x1810,0);
		bVar3 = bVar3 & 1;
		if (bVar3 != 0) {
		uVar5 = AiPath::FUN_00160ca0(this_00,(pUVar1->parent).field410_0x1ac);
		bVar3 = bVar3 & (byte)uVar5;
		}
		(*(code *)((pUVar1->parent).vtable)->field43_0xac)(0x94e,0x1810);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001b533a;
		pUVar1 = param_1->ptr;
		bVar3 = (*(code *)((pUVar1->parent).vtable)->field17_0x44)(0x94e,0x1810,0);
		bVar3 = bVar3 & 1;
		if (bVar3 != 0) {
		uVar5 = AiPath::FUN_00160ca0(this_00,(pUVar1->parent).field410_0x1ac);
		bVar4 = (*(code *)((pUVar1->parent).vtable)->field18_0x48)(0x94e,0x1810);
		bVar3 = bVar3 & (byte)uVar5 & bVar4;
		}
		}
		bVar3 = local_5 & bVar3;
		if ((this->aiPaths).collectionPtr == (CollectionAiPath *)0x0) {
		pCVar6 = (CollectionAiPath *)VirtualPool::AllocateMemory(0x10);
		if (pCVar6 == (CollectionAiPath *)0x0) {
		pCVar6 = (CollectionAiPath *)0x0;
		}
		else {
		pCVar6->cnt = 0;
		pCVar6->capacity = (int)&DAT_0000000a;
		pCVar6->expansion = (int)&DAT_0000000a;
		ppAVar7 = (AiPath **)VirtualPool::AllocateMemory(0x28);
		pCVar6->list = ppAVar7;
		}
		(this->aiPaths).collectionPtr = pCVar6;
		}
		CollectionAiPath::Add((this->aiPaths).collectionPtr,this_00);
		param_2 = param_2 + -1;
		local_5 = bVar3;
		}
		 while (param_2 != 0);
		}
		return bVar3;
		}
		
	*/
	return 0;
}

uint InstanceSectionResources::FUN_001b53b0(UnkFamily27Wrapper* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall InstanceSectionResources::FUN_001b53b0(InstanceSectionResources *this,UnkFamily27Wrapper *param_1,int param_2){
		bool bVar1;
		byte bVar2;
		Path *pPVar3;
		CollectionPath *pCVar4;
		Path **ppPVar5;
		uint uVar6;
		byte local_5;
		local_5 = 1;
		if (param_2 == 0) {
		return 1;
		}
		do {
		pPVar3 = (Path *)VirtualPool::AllocateMemory(0x50);
		if (pPVar3 == (Path *)0x0) {
		pPVar3 = (Path *)0x0;
		}
		else {
		(pPVar3->parent).points = (Vector4 *)0x0;
		(pPVar3->parent).vtable = (PathBase_VTable *)&Path_VT;
		pPVar3->parameters = (Vector2 *)0x0;
		pPVar3->field58_0x48 = -1;
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001b543f:bVar2 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar2 = UnkFamily27A::FUN_001bb5f0(param_1->ptr,(int *)pPVar3,0x9b9,0);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001b543f;
		bVar2 = UnkFamily27A::FUN_001bb660(param_1->ptr,(int *)pPVar3,0x9b9,0);
		}
		local_5 = local_5 & bVar2;
		if ((this->paths).collectionPtr == (CollectionPath *)0x0) {
		pCVar4 = (CollectionPath *)VirtualPool::AllocateMemory(0x10);
		if (pCVar4 == (CollectionPath *)0x0) {
		pCVar4 = (CollectionPath *)0x0;
		}
		else {
		pCVar4->cnt = 0;
		pCVar4->capacity = (int)&DAT_0000000a;
		pCVar4->expansion = (int)&DAT_0000000a;
		ppPVar5 = (Path **)VirtualPool::AllocateMemory(0x28);
		pCVar4->list = ppPVar5;
		}
		(this->paths).collectionPtr = pCVar4;
		}
		uVar6 = CollectionPath::Add((this->paths).collectionPtr,pPVar3);
		param_2 = param_2 + -1;
		if (param_2 == 0) {
		return uVar6 & 0xffffff00 | (uint)local_5;
		}
		}
		 while( true );
		}
		
	*/
	return 0;
}

uint InstanceSectionResources::FUN_001b54c0(UnkFamily27Wrapper* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall InstanceSectionResources::FUN_001b54c0(InstanceSectionResources *this,UnkFamily27Wrapper *param_1,int param_2){
		bool bVar1;
		byte bVar2;
		Trigger *pTVar3;
		CollectionTrigger *pCVar4;
		Trigger **ppTVar5;
		uint uVar6;
		byte local_5;
		local_5 = 1;
		if (param_2 == 0) {
		return 1;
		}
		do {
		pTVar3 = (Trigger *)VirtualPool::AllocateMemory(0x70);
		if (pTVar3 == (Trigger *)0x0) {
		pTVar3 = (Trigger *)0x0;
		}
		else {
		pTVar3 = Trigger::Construct(pTVar3);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001b553c:bVar2 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar2 = UnkFamily27A::FUN_001bb6c0(param_1->ptr,pTVar3,0x994,0);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001b553c;
		bVar2 = UnkFamily27A::FUN_001bb730(param_1->ptr,pTVar3,0x994,0);
		}
		local_5 = local_5 & bVar2;
		if ((this->triggers).collectionPtr == (CollectionTrigger *)0x0) {
		pCVar4 = (CollectionTrigger *)VirtualPool::AllocateMemory(0x10);
		if (pCVar4 == (CollectionTrigger *)0x0) {
		pCVar4 = (CollectionTrigger *)0x0;
		}
		else {
		pCVar4->cnt = 0;
		pCVar4->capacity = (int)&DAT_0000000a;
		pCVar4->expansion = (int)&DAT_0000000a;
		ppTVar5 = (Trigger **)VirtualPool::AllocateMemory(0x28);
		pCVar4->list = ppTVar5;
		}
		(this->triggers).collectionPtr = pCVar4;
		}
		uVar6 = CollectionTrigger::Add((this->triggers).collectionPtr,pTVar3);
		param_2 = param_2 + -1;
		if (param_2 == 0) {
		return uVar6 & 0xffffff00 | (uint)local_5;
		}
		}
		 while( true );
		}
		
	*/
	return 0;
}

uint InstanceSectionResources::FUN_001b55c0(UnkFamily27Wrapper* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall InstanceSectionResources::FUN_001b55c0(InstanceSectionResources *this,UnkFamily27Wrapper *param_1,int param_2){
		bool bVar1;
		byte bVar2;
		CameraTrigger *this_00;
		Camera *pCVar3;
		CollectionCameraTrigger *pCVar4;
		CameraTrigger **ppCVar5;
		uint uVar6;
		byte local_5;
		local_5 = 1;
		if (param_2 == 0) {
		return 1;
		}
		do {
		this_00 = (CameraTrigger *)VirtualPool::AllocateMemory(0x70);
		if (this_00 == (CameraTrigger *)0x0) {
		pCVar3 = (Camera *)0x0;
		}
		else {
		pCVar3 = (Camera *)CameraTrigger::Construct(this_00);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar1 == false) {
		LAB_001b563c:bVar2 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar2 = UnkFamily27A::FUN_001bb790(param_1->ptr,(int *)pCVar3,0x996,0);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001b563c;
		bVar2 = UnkFamily27A::FUN_001bb800(param_1->ptr,(int *)pCVar3,0x996,0);
		}
		local_5 = local_5 & bVar2;
		if ((this->cameras).collectionPtr == (CollectionCameraTrigger *)0x0) {
		pCVar4 = (CollectionCameraTrigger *)VirtualPool::AllocateMemory(0x10);
		if (pCVar4 == (CollectionCameraTrigger *)0x0) {
		pCVar4 = (CollectionCameraTrigger *)0x0;
		}
		else {
		pCVar4->cnt = 0;
		pCVar4->capacity = (int)&DAT_0000000a;
		pCVar4->expansion = (int)&DAT_0000000a;
		ppCVar5 = (CameraTrigger **)VirtualPool::AllocateMemory(0x28);
		pCVar4->list = ppCVar5;
		}
		(this->cameras).collectionPtr = pCVar4;
		}
		uVar6 = CollectionCameraTrigger::Add((this->cameras).collectionPtr,pCVar3);
		param_2 = param_2 + -1;
		if (param_2 == 0) {
		return uVar6 & 0xffffff00 | (uint)local_5;
		}
		}
		 while( true );
		}
		
	*/
	return 0;
}

byte InstanceSectionResources::FUN_001b56c0(UnkFamily27Wrapper* param_1, UnkFamily27Wrapper* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte __thiscall InstanceSectionResources::FUN_001b56c0(InstanceSectionResources *this,UnkFamily27Wrapper *param_1,UnkFamily27Wrapper *param_2){
		UnkFamily27A *pUVar1;
		bool bVar2;
		byte bVar3;
		byte bVar4;
		CollisionSurface *puVar5;
		CollisionSurface *this_00;
		uint uVar5;
		CollectionCollisionSurface *pCVar6;
		CollisionSurface **ppCVar7;
		byte local_5;
		bVar3 = 1;
		local_5 = 1;
		if (param_2 != (UnkFamily27Wrapper *)0x0) {
		do {
		puVar5 = (CollisionSurface *)VirtualPool::AllocateMemory(0x90);
		if (puVar5 == (CollisionSurface *)0x0) {
		this_00 = (CollisionSurface *)0x0;
		}
		else {
		this_00 = (CollisionSurface *)CollisionSurface::Construct(puVar5);
		}
		bVar2 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar2 == false) {
		LAB_001b57a7:bVar3 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		pUVar1 = param_1->ptr;
		bVar3 = (*(code *)((pUVar1->parent).vtable)->field42_0xa8)(0x9bd,0x1901,0);
		bVar3 = bVar3 & 1;
		if (bVar3 != 0) {
		uVar5 = CollisionSurface::FUN_001eb1b0(this_00,(pUVar1->parent).field410_0x1ac);
		bVar3 = bVar3 & (byte)uVar5;
		}
		(*(code *)((pUVar1->parent).vtable)->field43_0xac)(0x9bd,0x1901);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001b57a7;
		pUVar1 = param_1->ptr;
		bVar3 = (*(code *)((pUVar1->parent).vtable)->field17_0x44)(0x9bd,0x1901,0);
		bVar3 = bVar3 & 1;
		if (bVar3 != 0) {
		uVar5 = CollisionSurface::FUN_001eb1b0(this_00,(pUVar1->parent).field410_0x1ac);
		bVar4 = (*(code *)((pUVar1->parent).vtable)->field18_0x48)(0x9bd,0x1901);
		bVar3 = bVar3 & (byte)uVar5 & bVar4;
		}
		}
		bVar3 = local_5 & bVar3;
		if ((this->collisionSurfaces).collectionPtr == (CollectionCollisionSurface *)0x0) {
		pCVar6 = (CollectionCollisionSurface *)VirtualPool::AllocateMemory(0x10);
		if (pCVar6 == (CollectionCollisionSurface *)0x0) {
		pCVar6 = (CollectionCollisionSurface *)0x0;
		}
		else {
		pCVar6->cnt = 0;
		pCVar6->capacity = (int)&DAT_0000000a;
		pCVar6->expansion = (int)&DAT_0000000a;
		ppCVar7 = (CollisionSurface **)VirtualPool::AllocateMemory(0x28);
		pCVar6->list = ppCVar7;
		}
		(this->collisionSurfaces).collectionPtr = pCVar6;
		}
		CollectionCollisionSurface::Add((this->collisionSurfaces).collectionPtr,this_00);
		param_2 = (UnkFamily27Wrapper *)((int)&param_2[-1].field2_0x8 + 3);
		local_5 = bVar3;
		}
		 while (param_2 != (UnkFamily27Wrapper *)0x0);
		}
		return bVar3;
		}
		
	*/
	return 0;
}

bool InstanceSectionResources::DoInstances(UnkFamily27Wrapper* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceSectionResources::DoInstances(InstanceSectionResources *this,UnkFamily27Wrapper *param_1){
		CollectionInstance *pCVar1;
		int this_00;
		UnkFamily27A *pUVar2;
		bool bVar3;
		byte bVar4;
		byte bVar5;
		uint uVar6;
		int *piVar7;
		uint uVar8;
		bool local_d;
		IteratorB17 local_c;
		pCVar1 = (this->instances).collectionPtr;
		local_d = true;
		if (pCVar1 == (CollectionInstance *)0x0) {
		return true;
		}
		uVar6 = 0;
		do {
		while( true ) {
		if (((int)uVar6 < 0) || ((uint)pCVar1->cnt <= uVar6)) {
		return local_d;
		}
		piVar7 = (int *)(*(code *)PTR_Get_00395288)();
		this_00 = *piVar7;
		bVar3 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar3 != false) break;
		LAB_001b6921:local_d = false;
		uVar6 = uVar6 + 1;
		}
		if (param_1->field1_0x4 == 0) {
		bVar3 = UnkFamily27A::FUN_001bb370(param_1->ptr,this_00,0x915,0);
		local_d = (bool)(local_d & bVar3);
		uVar6 = uVar6 + 1;
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001b6921;
		pUVar2 = param_1->ptr;
		bVar4 = (*(code *)((pUVar2->parent).vtable)->field17_0x44)(0x915,0x1b05,0);
		bVar4 = bVar4 & 1;
		if (bVar4 != 0) {
		uVar8 = FUN_001aca10(this_00,&((pUVar2->parent).field410_0x1ac)->ptr);
		bVar5 = (*(code *)((pUVar2->parent).vtable)->field18_0x48)(0x915,0x1b05);
		bVar4 = bVar4 & (byte)uVar8 & bVar5;
		}
		local_d = (bool)(local_d & bVar4);
		uVar6 = uVar6 + 1;
		}
		}
		 while( true );
		}
		
	*/
	return false;
}

bool InstanceSectionResources::DoTemplates(UnkFamily27Wrapper* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceSectionResources::DoTemplates(InstanceSectionResources *this,UnkFamily27Wrapper *param_1){
		InstanceTemplate *this_00;
		UnkFamily27A *pUVar1;
		char cVar2;
		bool bVar3;
		byte bVar4;
		byte bVar5;
		InstanceTemplate **ppIVar6;
		bool bVar7;
		IteratorB18 local_c;
		bVar7 = true;
		if ((this->instanceTemplates).collectionPtr != (CollectionInstanceTemplate *)0x0) {
		cVar2 = (*(code *)PTR_End_003952a8)();
		while (cVar2 == '\0') {
		ppIVar6 = (InstanceTemplate **)(*(code *)PTR_Get_003952ac)();
		this_00 = *ppIVar6;
		bVar3 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar3 == false) {
		LAB_001b6a0d:bVar4 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar4 = UnkFamily27A::FUN_001bb410(param_1->ptr,this_00,0x92a,0);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001b6a0d;
		pUVar1 = param_1->ptr;
		bVar4 = (*(code *)((pUVar1->parent).vtable)->field17_0x44)(0x92a,0x1b07,0);
		bVar4 = bVar4 & 1;
		if (bVar4 != 0) {
		bVar3 = InstanceTemplate::FUN_001ace00(this_00,(pUVar1->parent).field410_0x1ac);
		bVar5 = (*(code *)((pUVar1->parent).vtable)->field18_0x48)(0x92a,0x1b07);
		bVar4 = bVar4 & bVar3 & bVar5;
		}
		}
		bVar7 = (bool)(bVar7 & bVar4);
		cVar2 = (*(code *)PTR_End_003952a8)();
		}
		}
		return bVar7;
		}
		
	*/
	return false;
}

bool InstanceSectionResources::DoAiPositions(UnkFamily27Wrapper* wrapper) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceSectionResources::DoAiPositions(InstanceSectionResources *this,UnkFamily27Wrapper *wrapper){
		UnkFamily27A *pUVar1;
		bool bVar2;
		byte bVar3;
		byte bVar4;
		int end;
		AiPosition **ppAVar5;
		bool result;
		IteratorB19 iterator;
		AiPosition *element;
		result = true;
		if ((this->aiPositions).collectionPtr != (CollectionAiPosition *)0x0) {
		end._0_1_ = (*(code *)PTR_End_003952cc)();
		while ((char)end == '\0') {
		ppAVar5 = (AiPosition **)(*(code *)PTR_Get_003952d0)();
		element = *ppAVar5;
		bVar2 = UnkFamily27A::FUN_0020c0a0(wrapper->ptr);
		if (bVar2 == false) {
		LAB_001b6afd:bVar3 = 0;
		}
		else if (wrapper->field1_0x4 == 0) {
		bVar3 = UnkFamily27A::FUN_001bb4b0(wrapper->ptr,element,0x94d,0);
		}
		else {
		if (wrapper->field1_0x4 != 1) goto LAB_001b6afd;
		pUVar1 = wrapper->ptr;
		bVar3 = (*(code *)((pUVar1->parent).vtable)->field17_0x44)(0x94d,0x180f,0);
		bVar3 = bVar3 & 1;
		if (bVar3 != 0) {
		bVar2 = AiPosition::FUN_00176890(element,(pUVar1->parent).field410_0x1ac);
		bVar4 = (*(code *)((pUVar1->parent).vtable)->field18_0x48)(0x94d,0x180f);
		bVar3 = bVar3 & bVar2 & bVar4;
		}
		}
		result = (bool)(result & bVar3);
		end._0_1_ = (*(code *)PTR_End_003952cc)();
		}
		}
		return result;
		}
		
	*/
	return false;
}

bool InstanceSectionResources::DoAiPaths(UnkFamily27Wrapper* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceSectionResources::DoAiPaths(InstanceSectionResources *this,UnkFamily27Wrapper *param_1){
		UnkFamily27A *pUVar1;
		char cVar2;
		bool bVar3;
		byte bVar4;
		byte bVar5;
		AiPath **ppAVar6;
		uint uVar7;
		bool bVar8;
		IteratorB20 local_c;
		AiPath *element;
		bVar8 = true;
		if ((this->aiPaths).collectionPtr != (CollectionAiPath *)0x0) {
		cVar2 = (*(code *)PTR_End_003952f0)();
		while (cVar2 == '\0') {
		ppAVar6 = (AiPath **)(*(code *)PTR_Get_003952f4)();
		element = *ppAVar6;
		bVar3 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar3 == false) {
		LAB_001b6bed:bVar4 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar4 = UnkFamily27A::FUN_001bb550(param_1->ptr,element,0x94e,0);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001b6bed;
		pUVar1 = param_1->ptr;
		bVar4 = (*(code *)((pUVar1->parent).vtable)->field17_0x44)(0x94e,0x1810,0);
		bVar4 = bVar4 & 1;
		if (bVar4 != 0) {
		uVar7 = AiPath::FUN_00160ca0(element,(pUVar1->parent).field410_0x1ac);
		bVar5 = (*(code *)((pUVar1->parent).vtable)->field18_0x48)(0x94e,0x1810);
		bVar4 = bVar4 & (byte)uVar7 & bVar5;
		}
		}
		bVar8 = (bool)(bVar8 & bVar4);
		cVar2 = (*(code *)PTR_End_003952f0)();
		}
		}
		return bVar8;
		}
		
	*/
	return false;
}

bool InstanceSectionResources::DoPaths(UnkFamily27Wrapper* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceSectionResources::DoPaths(InstanceSectionResources *this,UnkFamily27Wrapper *param_1){
		int *piVar1;
		char cVar2;
		bool bVar3;
		byte bVar4;
		int **ppiVar5;
		bool bVar6;
		IteratorB15 local_c;
		bVar6 = true;
		if ((this->paths).collectionPtr != (CollectionPath *)0x0) {
		cVar2 = (*(code *)PTR_End_0039523c)();
		while (cVar2 == '\0') {
		ppiVar5 = (int **)(*(code *)PTR_Get_00395240)();
		piVar1 = *ppiVar5;
		bVar3 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar3 == false) {
		LAB_001b6ca5:bVar4 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar4 = UnkFamily27A::FUN_001bb5f0(param_1->ptr,piVar1,0x9b9,0);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001b6ca5;
		bVar4 = UnkFamily27A::FUN_001bb660(param_1->ptr,piVar1,0x9b9,0);
		}
		bVar6 = (bool)(bVar6 & bVar4);
		cVar2 = (*(code *)PTR_End_0039523c)();
		}
		}
		return bVar6;
		}
		
	*/
	return false;
}

uint InstanceSectionResources::DoTriggers(UnkFamily27Wrapper* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall InstanceSectionResources::DoTriggers(InstanceSectionResources *this,UnkFamily27Wrapper *param_1){
		CollectionTrigger *pCVar1;
		Trigger *pTVar2;
		bool bVar3;
		uint uVar4;
		Trigger **ppTVar5;
		byte bVar6;
		IteratorB21 local_c;
		pCVar1 = (this->triggers).collectionPtr;
		bVar6 = 1;
		if (pCVar1 == (CollectionTrigger *)0x0) {
		return 1;
		}
		uVar4 = 0;
		do {
		while( true ) {
		if (((int)uVar4 < 0) || ((uint)pCVar1->cnt <= uVar4)) {
		return uVar4 & 0xffffff00 | (uint)bVar6;
		}
		ppTVar5 = (Trigger **)(*(code *)PTR_Get_00395318)();
		pTVar2 = *ppTVar5;
		bVar3 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar3 != false) break;
		LAB_001b6d59:bVar6 = 0;
		uVar4 = uVar4 + 1;
		}
		if (param_1->field1_0x4 == 0) {
		bVar3 = UnkFamily27A::FUN_001bb6c0(param_1->ptr,pTVar2,0x994,0);
		bVar6 = bVar6 & bVar3;
		uVar4 = uVar4 + 1;
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001b6d59;
		bVar3 = UnkFamily27A::FUN_001bb730(param_1->ptr,pTVar2,0x994,0);
		bVar6 = bVar6 & bVar3;
		uVar4 = uVar4 + 1;
		}
		}
		 while( true );
		}
		
	*/
	return 0;
}

uint InstanceSectionResources::DoCameras(UnkFamily27Wrapper* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall InstanceSectionResources::DoCameras(InstanceSectionResources *this,UnkFamily27Wrapper *param_1){
		CollectionCameraTrigger *pCVar1;
		int *piVar2;
		bool bVar3;
		uint uVar4;
		int **ppiVar5;
		byte bVar6;
		IteratorB22 local_c;
		pCVar1 = (this->cameras).collectionPtr;
		bVar6 = 1;
		if (pCVar1 == (CollectionCameraTrigger *)0x0) {
		return 1;
		}
		uVar4 = 0;
		do {
		while( true ) {
		if (((int)uVar4 < 0) || ((uint)pCVar1->cnt <= uVar4)) {
		return uVar4 & 0xffffff00 | (uint)bVar6;
		}
		ppiVar5 = (int **)(*(code *)PTR_Get_0039533c)();
		piVar2 = *ppiVar5;
		bVar3 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar3 != false) break;
		LAB_001b6e09:bVar6 = 0;
		uVar4 = uVar4 + 1;
		}
		if (param_1->field1_0x4 == 0) {
		bVar3 = UnkFamily27A::FUN_001bb790(param_1->ptr,piVar2,0x996,0);
		bVar6 = bVar6 & bVar3;
		uVar4 = uVar4 + 1;
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001b6e09;
		bVar3 = UnkFamily27A::FUN_001bb800(param_1->ptr,piVar2,0x996,0);
		bVar6 = bVar6 & bVar3;
		uVar4 = uVar4 + 1;
		}
		}
		 while( true );
		}
		
	*/
	return 0;
}

bool InstanceSectionResources::DoSurfaces(UnkFamily27Wrapper* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceSectionResources::DoSurfaces(InstanceSectionResources *this,UnkFamily27Wrapper *param_1){
		CollisionSurface *this_00;
		UnkFamily27A *pUVar1;
		char cVar2;
		bool bVar3;
		byte bVar4;
		byte bVar5;
		CollisionSurface **ppCVar6;
		uint uVar7;
		bool bVar8;
		IteratorB24 local_c;
		bVar8 = true;
		if ((this->collisionSurfaces).collectionPtr != (CollectionCollisionSurface *)0x0) {
		cVar2 = (*(code *)PTR_End_0039535c)();
		while (cVar2 == '\0') {
		ppCVar6 = (CollisionSurface **)(*(code *)PTR_Get_00395360)();
		this_00 = *ppCVar6;
		bVar3 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar3 == false) {
		LAB_001b6eed:bVar4 = 0;
		}
		else if (param_1->field1_0x4 == 0) {
		bVar4 = UnkFamily27A::FUN_001bb860(param_1->ptr,this_00,0x9bd,0);
		}
		else {
		if (param_1->field1_0x4 != 1) goto LAB_001b6eed;
		pUVar1 = param_1->ptr;
		bVar4 = (*(code *)((pUVar1->parent).vtable)->field17_0x44)(0x9bd,0x1901,0);
		bVar4 = bVar4 & 1;
		if (bVar4 != 0) {
		uVar7 = CollisionSurface::FUN_001eb1b0(this_00,(pUVar1->parent).field410_0x1ac);
		bVar5 = (*(code *)((pUVar1->parent).vtable)->field18_0x48)(0x9bd,0x1901);
		bVar4 = bVar4 & (byte)uVar7 & bVar5;
		}
		}
		bVar8 = (bool)(bVar8 & bVar4);
		cVar2 = (*(code *)PTR_End_0039535c)();
		}
		}
		return bVar8;
		}
		
	*/
	return false;
}

void InstanceSectionResources::AddTriggger(CollectionTrigger* collection, uint param_2, Trigger* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceSectionResources::AddTriggger(InstanceSectionResources *this,CollectionTrigger *collection,undefined4 param_2,Trigger *element){
		ChunkDataRefCounter *pCVar1;
		void *this_02;
		float *pfVar2;
		undefined4 *puVar3;
		InstanceNodeTrigger *this_01;
		uint uVar4;
		ushort *puVar5;
		IteratorB23 local_c;
		if (*(char *)&(element->parent).header == '\0') {
		this_02 = VirtualPool::AllocateMemory(0xc0);
		if (this_02 == (void *)0x0) {
		pfVar2 = (float *)0x0;
		}
		else {
		pfVar2 = FUN_00130430(this_02,(int)element);
		}
		pCVar1 = this->chunkMeta->chunkDataRef;
		if (pCVar1 == (ChunkDataRefCounter *)0x0) {
		FUN_001385f0(0,pfVar2);
		return;
		}
		FUN_001385f0((int)pCVar1->chunk,pfVar2);
		}
		else {
		puVar3 = FUN_001a9680(ResourceManager,(int)this->chunkMeta,(int)element);
		this_01 = (InstanceNodeTrigger *)InstanceDataList::GetNode((InstanceDataList *)(puVar3 + 0x39),Trigger);
		for (uVar4 = 0;
		 (-1 < (int)uVar4 && (uVar4 < (uint)(element->parent).idList.cnt));
		uVar4 = uVar4 + 1) {
		puVar5 = (ushort *)(*(code *)PTR_Get_00395384)();
		FUN_00152f20((int)this_01,this->ctxList->array[*puVar5]);
		}
		}
		return;
		}
		
	*/
	return;
}

void InstanceSectionResources::AddCameraTrigger(uint param_1, uint param_2, CameraTrigger* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceSectionResources::AddCameraTrigger(InstanceSectionResources *this,undefined4 param_1,undefined4 param_2,CameraTrigger *element){
		GameResourceManager *this_02;
		undefined4 *puVar1;
		InstanceNodeCameraTrigger *this_01;
		uint uVar2;
		ushort *puVar3;
		IteratorB23 local_c;
		this_02 = ResourceManager;
		if ((*(byte *)&this->flags & 2) == 0) {
		(ResourceManager->parent).field1_0x4 = 0x2000;
		}
		else {
		(ResourceManager->parent).field1_0x4 = 0;
		}
		puVar1 = FUN_001a9b00(this_02,(int)this->chunkMeta,(int)element);
		this_01 = (InstanceNodeCameraTrigger *)InstanceDataList::GetNode((InstanceDataList *)(puVar1 + 0x39),CameraTrigger);
		for (uVar2 = 0;
		 (-1 < (int)uVar2 && (uVar2 < (uint)(element->parent).idList.cnt));
		uVar2 = uVar2 + 1) {
		puVar3 = (ushort *)(*(code *)PTR_Get_00395384)();
		FUN_00152f20((int)this_01,this->ctxList->array[*puVar3]);
		}
		(this_02->parent).field1_0x4 = 0;
		return;
		}
		
	*/
	return;
}

void InstanceSectionResources::FUN_001b7410() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceSectionResources::FUN_001b7410(InstanceSectionResources *this){
		CollectionInstance *pCVar1;
		int iVar2;
		int iVar3;
		InstanceContextList *ptr;
		uint uVar4;
		int *piVar5;
		InstanceNodeInstance *pIVar5;
		uint uVar6;
		ushort *puVar7;
		int iVar8;
		ushort *notthis;
		pCVar1 = (this->instances).collectionPtr;
		if (this->field13_0x34 != 0) {
		FUN_00171050(this->field13_0x34,RM->field2046_0x814,this->chunkMeta->chunkIndex);
		}
		if (pCVar1 != (CollectionInstance *)0x0) {
		iVar8 = 0;
		for (uVar4 = 0;
		 (-1 < (int)uVar4 && (uVar4 < (uint)pCVar1->cnt));
		 uVar4 = uVar4 + 1) {
		piVar5 = (int *)(*(code *)PTR_Get_00395288)();
		iVar2 = *piVar5;
		if ((*(int *)(iVar2 + 0x20) != 0) &&(iVar3 = *(int *)((int)this->ctxList->array + iVar8), iVar3 != 0)) {
		pIVar5 = (InstanceNodeInstance *)InstanceDataList::GetNode((InstanceDataList *)(iVar3 + 0xe4),Instance);
		notthis = (pIVar5->body).field49_0x80;
		for (uVar6 = 0;
		 (-1 < (int)uVar6 && (uVar6 < *(uint *)(iVar2 + 0x20)));
		 uVar6 = uVar6 + 1) {
		puVar7 = (ushort *)(*(code *)PTR_Get_003949d4)();
		FUN_001a7c50((int)notthis,(int)this->ctxList->array[*puVar7],'\x01');
		}
		}
		iVar8 = iVar8 + 4;
		}
		}
		ptr = this->ctxList;
		if (ptr != (InstanceContextList *)0x0) {
		VirtualPool::FreeMemory(ptr->array);
		VirtualPool::FreeMemory(ptr);
		}
		this->ctxList = (InstanceContextList *)0x0;
		return;
		}
		
	*/
	return;
}

bool InstanceSectionResources::FUN_001b7ff0(UnkFamily27Wrapper* param_1, int cnt) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceSectionResources::FUN_001b7ff0(InstanceSectionResources *this,UnkFamily27Wrapper *param_1,int cnt){
		UnkFamily27Wrapper *pUVar1;
		byte bVar2;
		CollectionPosition *pCVar3;
		Position **ppPVar4;
		bool local_1;
		pUVar1 = param_1;
		local_1 = true;
		if (cnt != 0) {
		param_1 = (UnkFamily27Wrapper *)cnt;
		do {
		cnt = 0;
		if (pUVar1->field1_0x4 == 0) {
		bVar2 = UnkFamily27A::FUN_001c0c30(pUVar1->ptr,&cnt,0x92c,0);
		}
		else if (pUVar1->field1_0x4 == 1) {
		bVar2 = UnkFamily27A::FUN_001c09b0(pUVar1->ptr,0,0x92c,0);
		}
		else {
		bVar2 = 0;
		}
		local_1 = (bool)(local_1 & bVar2);
		if ((this->positions).collectionPtr == (CollectionPosition *)0x0) {
		pCVar3 = (CollectionPosition *)VirtualPool::AllocateMemory(0x10);
		if (pCVar3 == (CollectionPosition *)0x0) {
		pCVar3 = (CollectionPosition *)0x0;
		}
		else {
		pCVar3->cnt = 0;
		pCVar3->capacity = (int)&DAT_0000000a;
		pCVar3->expansion = (int)&DAT_0000000a;
		ppPVar4 = (Position **)VirtualPool::AllocateMemory(0x28);
		pCVar3->list = ppPVar4;
		}
		(this->positions).collectionPtr = pCVar3;
		}
		CollectionPosition::Add((this->positions).collectionPtr,(Position *)cnt);
		param_1 = (UnkFamily27Wrapper *)((int)&param_1[-1].field2_0x8 + 3);
		}
		 while (param_1 != (UnkFamily27Wrapper *)0x0);
		return local_1;
		}
		return true;
		}
		
	*/
	return false;
}

bool InstanceSectionResources::DoPositions(UnkFamily27Wrapper* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceSectionResources::DoPositions(InstanceSectionResources *this,UnkFamily27Wrapper *param_1){
		UnkFamily27Wrapper *pUVar1;
		char cVar2;
		byte bVar3;
		undefined4 *puVar4;
		bool bVar5;
		IteratorB14 local_c;
		bVar5 = true;
		if ((this->positions).collectionPtr != (CollectionPosition *)0x0) {
		cVar2 = (*(code *)PTR_End_00395218)();
		pUVar1 = param_1;
		while (cVar2 == '\0') {
		puVar4 = (undefined4 *)(*(code *)PTR_Get_0039521c)();
		if (pUVar1->field1_0x4 == 0) {
		bVar3 = UnkFamily27A::FUN_001c0c30(pUVar1->ptr,&param_1,0x92c,0);
		}
		else if (pUVar1->field1_0x4 == 1) {
		bVar3 = UnkFamily27A::FUN_001c09b0(pUVar1->ptr,*puVar4,0x92c,0);
		}
		else {
		bVar3 = 0;
		}
		bVar5 = (bool)(bVar5 & bVar3);
		cVar2 = (*(code *)PTR_End_00395218)();
		}
		}
		return bVar5;
		}
		
	*/
	return false;
}

bool InstanceSectionResources::FUN_001b8170(UnkFamily27Wrapper* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceSectionResources::FUN_001b8170(InstanceSectionResources *this,UnkFamily27Wrapper *param_1){
		CollectionInstanceTemplate *pCVar1;
		CollectionInstance *pCVar2;
		CollectionAiPosition *pCVar3;
		CollectionAiPath *pCVar4;
		CollectionPosition *pCVar5;
		CollectionPath *pCVar6;
		CollectionTrigger *pCVar7;
		CollectionCameraTrigger *pCVar8;
		CollectionCollisionSurface *pCVar9;
		GameResources *pGVar10;
		UnkFamily27Wrapper *wrapper;
		bool bVar11;
		char cVar12;
		byte bVar13;
		byte bVar14;
		byte bVar15;
		byte bVar16;
		byte bVar17;
		byte bVar18;
		byte bVar19;
		byte bVar20;
		byte bVar21;
		byte bVar22;
		bool bVar23;
		bool bVar24;
		bool bVar25;
		bool bVar26;
		bool bVar27;
		bool bVar28;
		uint uVar29;
		uint uVar30;
		uint uVar31;
		int local_24;
		int aiPositionCnt;
		int aiPathCnt;
		int positionCnt;
		int templateCnt;
		int instancesCnt;
		int pathCnt;
		int triggerCnt;
		int cameraTriggerCnt;
		wrapper = param_1;
		local_24 = 4;
		bVar22 = 1;
		if (param_1->field1_0x4 == 0) {
		bVar11 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar11 == false) {
		LAB_001b81cb:cVar12 = '\0';
		}
		else if (wrapper->field1_0x4 == 0) {
		cVar12 = (*(code *)((wrapper->ptr->parent).vtable)->somethingTemplate)(0x94f,&local_24);
		}
		else {
		if (wrapper->field1_0x4 != 1) goto LAB_001b81cb;
		cVar12 = (*(code *)((wrapper->ptr->parent).vtable)->field9_0x24)(0x94f,local_24);
		}
		param_1 = (UnkFamily27Wrapper *)0x0;
		if (cVar12 == '\0') {
		local_24 = 0;
		}
		}
		else {
		bVar11 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		if (bVar11 == false) {
		LAB_001b821b:bVar22 = 0;
		}
		else if (wrapper->field1_0x4 == 0) {
		bVar22 = (*(code *)((wrapper->ptr->parent).vtable)->somethingTemplate)(0x94f,&local_24);
		}
		else {
		if (wrapper->field1_0x4 != 1) goto LAB_001b821b;
		bVar22 = (*(code *)((wrapper->ptr->parent).vtable)->field9_0x24)(0x94f,local_24);
		}
		bVar22 = bVar22 & 1;
		pCVar1 = (this->instanceTemplates).collectionPtr;
		if (pCVar1 == (CollectionInstanceTemplate *)0x0) {
		templateCnt = 0;
		}
		else {
		templateCnt = pCVar1->cnt;
		}
		pCVar2 = (this->instances).collectionPtr;
		if (pCVar2 == (CollectionInstance *)0x0) {
		instancesCnt = 0;
		}
		else {
		instancesCnt = pCVar2->cnt;
		}
		pCVar3 = (this->aiPositions).collectionPtr;
		if (pCVar3 == (CollectionAiPosition *)0x0) {
		aiPositionCnt = 0;
		}
		else {
		aiPositionCnt = pCVar3->cnt;
		}
		pCVar4 = (this->aiPaths).collectionPtr;
		if (pCVar4 == (CollectionAiPath *)0x0) {
		aiPathCnt = 0;
		}
		else {
		aiPathCnt = pCVar4->cnt;
		}
		pCVar5 = (this->positions).collectionPtr;
		if (pCVar5 == (CollectionPosition *)0x0) {
		positionCnt = 0;
		}
		else {
		positionCnt = pCVar5->cnt;
		}
		pCVar6 = (this->paths).collectionPtr;
		if (pCVar6 == (CollectionPath *)0x0) {
		pathCnt = 0;
		}
		else {
		pathCnt = pCVar6->cnt;
		}
		pCVar7 = (this->triggers).collectionPtr;
		if (pCVar7 == (CollectionTrigger *)0x0) {
		triggerCnt = 0;
		}
		else {
		triggerCnt = pCVar7->cnt;
		}
		pCVar8 = (this->cameras).collectionPtr;
		if (pCVar8 == (CollectionCameraTrigger *)0x0) {
		cameraTriggerCnt = 0;
		}
		else {
		cameraTriggerCnt = pCVar8->cnt;
		}
		pCVar9 = (this->collisionSurfaces).collectionPtr;
		if (pCVar9 == (CollectionCollisionSurface *)0x0) {
		param_1 = (UnkFamily27Wrapper *)0x0;
		}
		else {
		param_1 = (UnkFamily27Wrapper *)pCVar9->cnt;
		}
		}
		pGVar10 = this->gameResources;
		bVar11 = UnkFamily27A::FUN_0020c0a0(wrapper->ptr);
		if (bVar11 == false) {
		LAB_001b82fe:bVar13 = 0;
		}
		else if (wrapper->field1_0x4 == 0) {
		bVar13 = UnkFamily27A::FUN_001bb900(wrapper->ptr,pGVar10,0x916,0);
		}
		else {
		if (wrapper->field1_0x4 != 1) goto LAB_001b82fe;
		bVar13 = UnkFamily27A::FUN_001bb950(wrapper->ptr,pGVar10,0x916,0);
		}
		bVar11 = UnkFamily27A::FUN_0020c0a0(wrapper->ptr);
		if (bVar11 == false) {
		LAB_001b833e:bVar14 = 0;
		}
		else if (wrapper->field1_0x4 == 0) {
		bVar14 = (*(code *)((wrapper->ptr->parent).vtable)->somethingTemplate)(0x929,&templateCnt);
		}
		else {
		if (wrapper->field1_0x4 != 1) goto LAB_001b833e;
		bVar14 = (*(code *)((wrapper->ptr->parent).vtable)->field9_0x24)(0x929,templateCnt);
		}
		bVar11 = UnkFamily27A::FUN_0020c0a0(wrapper->ptr);
		if (bVar11 == false) {
		LAB_001b837e:bVar15 = 0;
		}
		else if (wrapper->field1_0x4 == 0) {
		bVar15 = (*(code *)((wrapper->ptr->parent).vtable)->somethingTemplate)(0x914,&instancesCnt);
		}
		else {
		if (wrapper->field1_0x4 != 1) goto LAB_001b837e;
		bVar15 = (*(code *)((wrapper->ptr->parent).vtable)->field9_0x24)(0x914,instancesCnt);
		}
		bVar11 = UnkFamily27A::FUN_0020c0a0(wrapper->ptr);
		if (bVar11 == false) {
		LAB_001b83be:bVar16 = 0;
		}
		else if (wrapper->field1_0x4 == 0) {
		bVar16 = (*(code *)((wrapper->ptr->parent).vtable)->somethingTemplate)(0x941,&aiPositionCnt);
		}
		else {
		if (wrapper->field1_0x4 != 1) goto LAB_001b83be;
		bVar16 = (*(code *)((wrapper->ptr->parent).vtable)->field9_0x24)(0x941,aiPositionCnt);
		}
		bVar11 = UnkFamily27A::FUN_0020c0a0(wrapper->ptr);
		if (bVar11 == false) {
		LAB_001b83fe:bVar17 = 0;
		}
		else if (wrapper->field1_0x4 == 0) {
		bVar17 = (*(code *)((wrapper->ptr->parent).vtable)->somethingTemplate)(0x942,&aiPathCnt);
		}
		else {
		if (wrapper->field1_0x4 != 1) goto LAB_001b83fe;
		bVar17 = (*(code *)((wrapper->ptr->parent).vtable)->field9_0x24)(0x942,aiPathCnt);
		}
		bVar11 = UnkFamily27A::FUN_0020c0a0(wrapper->ptr);
		if (bVar11 == false) {
		LAB_001b843e:bVar18 = 0;
		}
		else if (wrapper->field1_0x4 == 0) {
		bVar18 = (*(code *)((wrapper->ptr->parent).vtable)->somethingTemplate)(0x92b,&positionCnt);
		}
		else {
		if (wrapper->field1_0x4 != 1) goto LAB_001b843e;
		bVar18 = (*(code *)((wrapper->ptr->parent).vtable)->field9_0x24)(0x92b,positionCnt);
		}
		bVar11 = UnkFamily27A::FUN_0020c0a0(wrapper->ptr);
		if (bVar11 == false) {
		LAB_001b847e:bVar19 = 0;
		}
		else if (wrapper->field1_0x4 == 0) {
		bVar19 = (*(code *)((wrapper->ptr->parent).vtable)->somethingTemplate)(0x9b8,&pathCnt);
		}
		else {
		if (wrapper->field1_0x4 != 1) goto LAB_001b847e;
		bVar19 = (*(code *)((wrapper->ptr->parent).vtable)->field9_0x24)(0x9b8,pathCnt);
		}
		bVar11 = UnkFamily27A::FUN_0020c0a0(wrapper->ptr);
		if (bVar11 == false) {
		LAB_001b84be:bVar20 = 0;
		}
		else if (wrapper->field1_0x4 == 0) {
		bVar20 = (*(code *)((wrapper->ptr->parent).vtable)->somethingTemplate)(0x993,&triggerCnt);
		}
		else {
		if (wrapper->field1_0x4 != 1) goto LAB_001b84be;
		bVar20 = (*(code *)((wrapper->ptr->parent).vtable)->field9_0x24)(0x993,triggerCnt);
		}
		bVar11 = UnkFamily27A::FUN_0020c0a0(wrapper->ptr);
		if (bVar11 == false) {
		LAB_001b84fe:bVar21 = 0;
		}
		else if (wrapper->field1_0x4 == 0) {
		bVar21 = (*(code *)((wrapper->ptr->parent).vtable)->somethingTemplate)(0x995,&cameraTriggerCnt);
		}
		else {
		if (wrapper->field1_0x4 != 1) goto LAB_001b84fe;
		bVar21 = (*(code *)((wrapper->ptr->parent).vtable)->field9_0x24)(0x995,cameraTriggerCnt);
		}
		bVar21 = bVar22 & bVar13 & bVar14 & bVar15 & bVar16 & bVar17 & bVar18 & bVar19 & bVar20 & bVar21;
		if (local_24 < 4) {
		bVar11 = UnkFamily27A::FUN_0020c0a0(wrapper->ptr);
		if (bVar11 != false) {
		if (wrapper->field1_0x4 == 0) {
		(*(code *)((wrapper->ptr->parent).vtable)->somethingTemplate)(0x9bc,&param_1);
		}
		else if (wrapper->field1_0x4 == 1) {
		(*(code *)((wrapper->ptr->parent).vtable)->field9_0x24)(0x9bc,param_1);
		}
		}
		goto LAB_001b858d;
		}
		bVar11 = UnkFamily27A::FUN_0020c0a0(wrapper->ptr);
		if (bVar11 != false) {
		if (wrapper->field1_0x4 == 0) {
		bVar22 = (*(code *)((wrapper->ptr->parent).vtable)->somethingTemplate)(0x9bc,&param_1);
		bVar21 = bVar21 & bVar22;
		goto LAB_001b858d;
		}
		if (wrapper->field1_0x4 == 1) {
		bVar22 = (*(code *)((wrapper->ptr->parent).vtable)->field9_0x24)(0x9bc,param_1);
		bVar21 = bVar21 & bVar22;
		goto LAB_001b858d;
		}
		}
		bVar21 = 0;
		LAB_001b858d:if (wrapper->field1_0x4 != 0) {
		bVar11 = DoAiPositions(this,wrapper);
		bVar23 = DoAiPaths(this,wrapper);
		bVar24 = DoPositions(this,wrapper);
		bVar25 = DoTemplates(this,wrapper);
		bVar26 = DoInstances(this,wrapper);
		bVar27 = DoPaths(this,wrapper);
		uVar29 = DoTriggers(this,wrapper);
		uVar30 = DoCameras(this,wrapper);
		bVar28 = DoSurfaces(this,wrapper);
		return (bool)(bVar21 & bVar11 & bVar23 & bVar24 & bVar25 & bVar26 & bVar27 & (byte)uVar29 &(byte)uVar30 & bVar28);
		}
		CollectionInstanceWrapper::CreateCollection(&this->instances,instancesCnt);
		CollectionInstanceTemplateWrapper::CreateCollection(&this->instanceTemplates,templateCnt);
		CollectionAiPositionWrapper::CreateCollection(&this->aiPositions,aiPositionCnt);
		CollectionAiPathWrapper::CreateCollection(&this->aiPaths,aiPathCnt);
		CollectionPositionWrapper::CreateCollection(&this->positions,positionCnt);
		CollectionPathWrapper::CreateCollection(&this->paths,pathCnt);
		CollectionTriggerWrapper::CreateCollection(&this->triggers,triggerCnt);
		CollectionCameraTriggerWrapper::CreateCollection(&this->cameras,cameraTriggerCnt);
		CollectionCollisionSurfaceWrapper::CreateCollection(&this->collisionSurfaces,(int)param_1);
		bVar22 = FUN_001b50e0(this,wrapper,aiPositionCnt);
		bVar13 = FUN_001b5240(this,wrapper,aiPathCnt);
		bVar11 = FUN_001b7ff0(this,wrapper,positionCnt);
		bVar14 = FUN_001b4f80(this,wrapper,templateCnt);
		bVar15 = FUN_001b4e20(this,wrapper,instancesCnt);
		uVar29 = FUN_001b53b0(this,wrapper,pathCnt);
		uVar30 = FUN_001b54c0(this,wrapper,triggerCnt);
		uVar31 = FUN_001b55c0(this,wrapper,cameraTriggerCnt);
		bVar11 = (bool)(bVar21 & bVar22 & bVar13 & bVar11 & bVar14 & bVar15 & (byte)uVar29 & (byte)uVar30& (byte)uVar31);
		if (local_24 < 4) {
		FUN_001b56c0(this,wrapper,param_1);
		(*((GameResourcesBase *)this->gameResources)->vtable->InitCodeModels)((GameResourcesBase *)this->gameResources,0);
		return bVar11;
		}
		bVar22 = FUN_001b56c0(this,wrapper,param_1);
		(*((GameResourcesBase *)this->gameResources)->vtable->InitCodeModels)((GameResourcesBase *)this->gameResources,0);
		return (bool)(bVar11 & bVar22);
		}
		
	*/
	return false;
}

void InstanceSectionResources::Construct(byte param_1, byte param_2, uint param_3, uint param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceSectionResources * __thiscall InstanceSectionResources::Construct(InstanceSectionResources *this,byte param_1,byte param_2,uint param_3,uint param_4){
		this->gameResources = (GameResources *)param_3;
		this->chunkMeta = (ChunkMeta *)param_4;
		(this->instanceTemplates).collectionPtr = (CollectionInstanceTemplate *)0x0;
		(this->instances).collectionPtr = (CollectionInstance *)0x0;
		(this->aiPositions).collectionPtr = (CollectionAiPosition *)0x0;
		(this->aiPaths).collectionPtr = (CollectionAiPath *)0x0;
		(this->positions).collectionPtr = (CollectionPosition *)0x0;
		(this->paths).collectionPtr = (CollectionPath *)0x0;
		(this->triggers).collectionPtr = (CollectionTrigger *)0x0;
		(this->cameras).collectionPtr = (CollectionCameraTrigger *)0x0;
		(this->collisionSurfaces).collectionPtr = (CollectionCollisionSurface *)0x0;
		this->ctxList = (InstanceContextList *)0x0;
		this->field13_0x34 = 0;
		this->collectionPosition = (CollectionPosition *)0x0;
		this->collectionPath = (CollectionPath *)0x0;
		this->flags = 0;
		this->flags = (param_2 & 1) << 1 | param_1 & 1 | this->flags & 0xfffffffc;
		return this;
		}
		
	*/
	return;
}

