#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2Abstract.h"

#include "headers/Known/Game/GameResources/GameResources.h"
#include "headers/Known/GameData/GameObject/GameObject.h"
#include "headers/Known/Game/InstanceSystem/InstanceContextRefCounter.h"
#include "headers/Known/Game/InstanceSystem/Blackboard/BlackboardAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated1/NodeRelated1Abstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/InstanceMasterInfo.h"
#include "headers/Known/Time/UnkTimePack.h"
void NodeRelated2Abstract::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void NodeRelated2Abstract::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void NodeRelated2Abstract::InitOGINode(GameResources* resoruces) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2Abstract::InitOGINode(NodeRelated2Abstract *this,GameResources *resoruces){
		InstanceNodeOGI *nodeN;
		OGI *ogi;
		ushort index;
		nodeN = (InstanceNodeOGI *)InstanceDataList::GetNode(&this->ctx->nodes,OGI);
		if (nodeN != (InstanceNodeOGI *)0x0) {
		index = *(this->gameObject->ogiSlots).idList;
		if (index == 0xffff) {
		ogi = (OGI *)0x0;
		}
		else {
		ogi = ((resoruces->parent).ogis)->elements[index & 0x7fff];
		}
		InstanceNodeOGI::Init(nodeN,ogi,*(uint *)this->gameObject->field2_0x8 >> 6 & 0x3f,this->gameObject->field2_0x8[0] & 0x3f);
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2Abstract::Construct(InstanceMasterInfo* info, BlackboardAbstract* blackboard, NodeRelated1Abstract* related) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated2Abstract * __thiscall NodeRelated2Abstract::Construct(NodeRelated2Abstract *this,InstanceMasterInfo *info,BlackboardAbstract *blackboard,NodeRelated1Abstract *related){
		GameResources *gameResources;
		this->vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_Abstract;
		this->ctx = info->ctx;
		this->instanceIndex = 0xffff;
		this->objectId = info->instance->objectId;
		this->gameObject = info->gameObject;
		this->blackboard = blackboard;
		this->related = related;
		this->field19_0x24 = 0xffff;
		this->field20_0x26 = 0xffff;
		this->field25_0x2c = this->field25_0x2c & 0xfffffffe;
		(this->field27_0x40).x = 0.0;
		*(undefined *)&(this->field27_0x40).y = 0;
		(this->vec1).x = Vector4_0039ef70.x;
		(this->vec1).y = Vector4_0039ef70.y;
		(this->vec1).z = Vector4_0039ef70.z;
		(this->vec1).w = Vector4_0039ef70.w;
		gameResources = GameResources;
		this->field_0x28 = 0;
		this->field_0x29 = 0;
		this->field_0x2a = 0;
		this->field_0x2b = 0;
		GameObjectResourceReferences::LoadDependencies(this->gameObject->references,(uint)gameResources & 0xffff0000 | (uint)this->objectId,gameResources);
		return this;
		}
		
	*/
	return;
}

void NodeRelated2Abstract::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeRelated2Abstract::CleanUp(NodeRelated2Abstract *this){
		this->vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_Abstract;
		GameObjectResourceReferences::Dispose(this->gameObject->references,this->objectId,GameResources);
		return;
		}
		
	*/
	return;
}

void NodeRelated2Abstract::FUN_001ac8a0(ushort param_1, uint param_2, byte param_3, byte param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2Abstract::FUN_001ac8a0(NodeRelated2Abstract *this,undefined2 param_1,undefined4 param_2,byte param_3,bool param_4){
		undefined uVar1;
		UnkFamily5AA *pUVar2;
		InstanceContext *ctx;
		int iVar3;
		pUVar2 = (UnkFamily5AA *)VirtualPool::AllocateMemory(0x20);
		if (pUVar2 == (UnkFamily5AA *)0x0) {
		pUVar2 = (UnkFamily5AA *)0x0;
		}
		else {
		iVar3 = 2;
		ctx = this->ctx;
		if (ctx != (InstanceContext *)0x0) {
		ctx = (InstanceContext *)InstanceContextSmartPtr::CreateRef(&ctx->smartPtr,ctx,0);
		}
		pUVar2 = UnkFamily5AA::Construct(pUVar2,param_1,param_4,(bool)param_3,(InstanceContextRefCounter *)ctx,param_2,iVar3);
		}
		if (pUVar2 != (UnkFamily5AA *)0x0) {
		uVar1 = UnkFamily5SomeStruct::CreatePayload(&(pUVar2->parent).parent.someStruct,pUVar2,1);
		InstanceContext::FUN_000fa200(this->ctx,uVar1);
		return;
		}
		InstanceContext::FUN_000fa200(this->ctx,0);
		return;
		}
		
	*/
	return;
}

bool NodeRelated2Abstract::FUN_001ac940(uint index, InstanceContextRefCounter* param_2, bool param_3, bool param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall NodeRelated2Abstract::FUN_001ac940(NodeRelated2Abstract *this,uint index,InstanceContextRefCounter *param_2,bool param_3,bool param_4){
		short sVar1;
		UnkFamily5AA *memptr;
		UnkFamily5AA *puVar3;
		undefined extraout_CL;
		undefined extraout_CL_00;
		InstanceContextRefCounter *pIVar2;
		undefined uVar3;
		int pUVar4;
		GameObject *gameObject;
		gameObject = this->gameObject;
		if (((gameObject != (GameObject *)0x0) && ((*(byte *)&this->field25_0x2c & 1) == 0)) &&(index < gameObject->field2_0x8[5])) {
		sVar1 = (gameObject->scriptSlots).idList[index];
		if (sVar1 != -1) {
		memptr = (UnkFamily5AA *)VirtualPool::AllocateMemory(0x20);
		if (memptr == (UnkFamily5AA *)0x0) {
		puVar3 = (UnkFamily5AA *)0x0;
		uVar3 = extraout_CL;
		}
		else {
		pUVar4 = 2;
		pIVar2 = param_2;
		InstanceContextSmartPtr::SetCtx((InstanceContextSmartPtr *)&stack0xffffffe8,this->ctx);
		puVar3 = UnkFamily5AA::Construct(memptr,sVar1,param_4,param_3,param_2,pIVar2,pUVar4);
		uVar3 = extraout_CL_00;
		}
		UnkFamily5SomeStruct::thunk_FUN_00059cf0((UnkFamily5SomeStruct *)&stack0xfffffff0,puVar3);
		InstanceContext::FUN_000fa200(this->ctx,uVar3);
		}
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void NodeRelated2Abstract::FUN_001accf0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeRelated2Abstract::FUN_001accf0(NodeRelated2Abstract *this){
		GameResources *in_stack_00000004;
		(*this->vtable->Update)(this,0);
		InitOGINode(this,in_stack_00000004);
		if (this->gameObject != (GameObject *)0x0) {
		if (this->instanceIndex == 0xffff) {
		FUN_001ac940(this,0,(InstanceContextRefCounter *)0x0,true,false);
		}
		else {
		FUN_001ac8a0(this,this->instanceIndex,0,1,0);
		}
		}
		this->field_0x28 = 0;
		this->field_0x29 = 0;
		this->field_0x2a = 0;
		this->field_0x2b = 0;
		this->field25_0x2c = this->field25_0x2c & 0xfffffffe;
		return;
		}
		
	*/
	return;
}

void NodeRelated2Abstract::UpdateTime(GameResources* gameResources, UnkTimePack* time, int flags) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2Abstract::UpdateTime(NodeRelated2Abstract *this,GameResources *gameResources,UnkTimePack *time,int flags){
		(*this->vtable->Update)(this,flags);
		this->field25_0x2c = this->field25_0x2c & 0xfffffffe;
		(this->field27_0x40).x = 0.0;
		*(undefined *)&(this->field27_0x40).y = 0;
		(this->vec1).x = Vector4_0039ef70.x;
		(this->vec1).y = Vector4_0039ef70.y;
		(this->vec1).z = Vector4_0039ef70.z;
		(this->vec1).w = Vector4_0039ef70.w;
		InitOGINode(this,gameResources);
		if (this->gameObject != (GameObject *)0x0) {
		if (this->instanceIndex != 0xffff) {
		FUN_001ac8a0(this,this->instanceIndex,0,1,0);
		this->field_0x28 = 0;
		this->field_0x29 = 0;
		this->field_0x2a = 0;
		this->field_0x2b = 0;
		return;
		}
		FUN_001ac940(this,0,(InstanceContextRefCounter *)0x0,true,false);
		}
		this->field_0x28 = 0;
		this->field_0x29 = 0;
		this->field_0x2a = 0;
		this->field_0x2b = 0;
		return;
		}
		
	*/
	return;
}

void NodeRelated2Abstract::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated2Abstract * __thiscall NodeRelated2Abstract::Dispose(NodeRelated2Abstract *this,byte param_1){
		this->vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_Abstract;
		GameObjectResourceReferences::Dispose(this->gameObject->references,this->objectId,GameResources);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void NodeRelated2Abstract::Method6() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined NodeRelated2Abstract::Method6(void){
		return 1;
		}
		
	*/
	return;
}

void NodeRelated2Abstract::EmptyFunction_10() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void NodeRelated2Abstract::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void NodeRelated2Abstract::EmptyFunction_11() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void NodeRelated2Abstract::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

