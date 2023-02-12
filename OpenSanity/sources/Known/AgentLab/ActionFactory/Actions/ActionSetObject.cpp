#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetObject.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetObject::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetObject::Dispose(ActionSetObject *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetObject::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetObject * __fastcall ActionSetObject::Construct(ActionSetObject *this){
		uint uVar1;
		this->unlabelled12 = this->unlabelled12 & 0x80000000;
		uVar1 = this->unlabelled16;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetObject;
		this->unlabelled16 = uVar1 & 0xffffffc0;
		return this;
		}
		
	*/
	return;
}

void ActionSetObject::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetObject::UnkMethod(ActionSetObject *this,int *param_1){
		char cVar1;
		bool bVar2;
		undefined2 *puVar3;
		uint uVar4;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar1 != '\0') {
		return;
		}
		puVar3 = (undefined2 *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		switch(*puVar3) {
		case 0x7e:bVar2 = FUN_0017ef90((int)puVar3);
		this->unlabelled12 = this->unlabelled12 ^ ((bVar2 == false) + 1 ^ this->unlabelled12) & 3;
		break;
		case 0x7f:bVar2 = FUN_0017ef90((int)puVar3);
		this->unlabelled12 =this->unlabelled12 ^ (((bVar2 == false) + 1) * 4 ^ this->unlabelled12) & 0xc;
		break;
		case 0x80:bVar2 = FUN_0017ef90((int)puVar3);
		this->unlabelled12 =this->unlabelled12 ^ (((bVar2 == false) + 1) * 0x10 ^ this->unlabelled12) & 0x30;
		break;
		case 0x81:bVar2 = FUN_0017ef90((int)puVar3);
		this->unlabelled12 =this->unlabelled12 ^ (((bVar2 == false) + 1) * 0x40 ^ this->unlabelled12) & 0xc0;
		break;
		case 0x86:bVar2 = FUN_0017ef90((int)puVar3);
		this->unlabelled12 =this->unlabelled12 ^ (((bVar2 == false) + 1) * 0x100 ^ this->unlabelled12) & 0x300;
		break;
		case 0x9b:uVar4 = this->unlabelled12;
		this->unlabelled12 = uVar4 | 0x60000000;
		this->unlabelled12 =uVar4 & 0xe0001fff | 0x60000000 | (uint)*(byte *)(puVar3 + 2) << 0x15 |(uint)*(byte *)(puVar3 + 2) << 0xd;
		break;
		case 0xca:uVar4 = this->unlabelled12;
		this->unlabelled12 = uVar4 | 0x40000000;
		this->unlabelled12 = (uint)*(byte *)(puVar3 + 2) << 0x15 | uVar4 & 0xe01fffff | 0x40000000;
		case 0xc9:uVar4 = this->unlabelled12;
		this->unlabelled12 = uVar4 | 0x20000000;
		this->unlabelled12 = (uint)*(byte *)(puVar3 + 2) << 0xd | uVar4 & 0xffe01fff | 0x20000000;
		break;
		case 0x120:bVar2 = FUN_0017ef90((int)puVar3);
		this->unlabelled12 =this->unlabelled12 ^ (((bVar2 == false) + 1) * 0x400 ^ this->unlabelled12) & 0xc00;
		break;
		case 0x121:bVar2 = FUN_0017ef90((int)puVar3);
		uVar4 = this->unlabelled16 ^ ((bVar2 == false) + 1 ^ this->unlabelled16) & 3;
		goto LAB_00190298;
		case 0x12d:bVar2 = FUN_0017ef90((int)puVar3);
		uVar4 = (((bVar2 == false) + 1) * 4 ^ this->unlabelled16) & 0xc;
		goto LAB_00190293;
		case 0x138:bVar2 = FUN_0017ef90((int)puVar3);
		uVar4 = (((bVar2 == false) + 1) * 0x10 ^ this->unlabelled16) & 0x30;
		LAB_00190293:uVar4 = this->unlabelled16 ^ uVar4;
		LAB_00190298:this->unlabelled16 = uVar4;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void ActionSetObject::Execute(InstanceContext* node) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetObject::Execute(ActionSetObject *this,InstanceContext *node){
		ushort uVar1;
		InstanceNodeOGI *this_02;
		uint uVar2;
		InstanceNodeU *pIVar5;
		InstanceNodePhysics *pIVar4;
		InstanceNodePhysics *pIVar3;
		byte unaff_DI;
		int in_stack_00000008;
		int iVar3;
		InstanceContext *ctx;
		InstanceDataList *nodeList;
		ctx = (node->parent).ctx;
		nodeList = &ctx->nodes;
		InstanceDataList::GetNode(nodeList,OGI);
		uVar2 = this->unlabelled12 & 3;
		if (uVar2 == 1) {
		uVar2 = (ctx->parent).flags | 0x100;
		LAB_001903ee:(ctx->parent).flags = uVar2;
		}
		else if (uVar2 == 2) {
		uVar2 = (ctx->parent).flags & 0xfffffeff;
		goto LAB_001903ee;
		}
		uVar2 = (uint)this->unlabelled16 >> 2 & 3;
		if (uVar2 == 1) {
		pIVar5 = (InstanceNodeU *)InstanceDataList::GetNode(nodeList,NodeU);
		if (pIVar5 != (InstanceNodeU *)0x0) {
		uVar2 = pIVar5->flags | 1;
		LAB_00190428:pIVar5->flags = uVar2;
		}
		}
		else if (uVar2 == 2) {
		pIVar5 = (InstanceNodeU *)InstanceDataList::GetNode(nodeList,NodeU);
		if (pIVar5 != (InstanceNodeU *)0x0) {
		uVar2 = pIVar5->flags & 0xfffffffe;
		goto LAB_00190428;
		}
		}
		uVar2 = (uint)this->unlabelled12 >> 10 & 3;
		if (uVar2 == 1) {
		pIVar4 = (InstanceNodePhysics *)InstanceDataList::GetNode(nodeList,Physics);
		if (pIVar4 != (InstanceNodePhysics *)0x0) {
		uVar2 = (pIVar4->body).field1_0x14 | 0x20;
		LAB_00190462:(pIVar4->body).field1_0x14 = uVar2;
		}
		}
		else if (uVar2 == 2) {
		pIVar4 = (InstanceNodePhysics *)InstanceDataList::GetNode(nodeList,Physics);
		if (pIVar4 != (InstanceNodePhysics *)0x0) {
		uVar2 = (pIVar4->body).field1_0x14 & 0xffffffdf;
		goto LAB_00190462;
		}
		}
		uVar2 = this->unlabelled16 & 3;
		if (uVar2 == 1) {
		pIVar3 = (InstanceNodePhysics *)InstanceDataList::GetNode(nodeList,Physics);
		if (pIVar3 != (InstanceNodePhysics *)0x0) {
		uVar2 = (pIVar3->body).field1_0x14 | 0x40;
		LAB_00190499:(pIVar3->body).field1_0x14 = uVar2;
		}
		}
		else if (uVar2 == 2) {
		pIVar3 = (InstanceNodePhysics *)InstanceDataList::GetNode(nodeList,Physics);
		if (pIVar3 != (InstanceNodePhysics *)0x0) {
		uVar2 = (pIVar3->body).field1_0x14 & 0xffffffbf;
		goto LAB_00190499;
		}
		}
		uVar2 = (uint)this->unlabelled12 >> 2 & 3;
		if (uVar2 == 1) {
		uVar2 = (ctx->parent).flags | 0x400;
		LAB_001904bd:(ctx->parent).flags = uVar2;
		}
		else if (uVar2 == 2) {
		uVar2 = (ctx->parent).flags & 0xfffffbff;
		goto LAB_001904bd;
		}
		uVar2 = (uint)this->unlabelled12 >> 4 & 3;
		if (uVar2 == 1) {
		uVar2 = (ctx->parent).flags | 0x10;
		LAB_001904dd:(ctx->parent).flags = uVar2;
		}
		else if (uVar2 == 2) {
		uVar2 = (ctx->parent).flags & 0xffffffef;
		goto LAB_001904dd;
		}
		uVar2 = (uint)this->unlabelled12 >> 6 & 3;
		if (uVar2 == 1) {
		(*((ctx->parent).vtable)->Method1)(ctx);
		}
		else if (uVar2 == 2) {
		(*(node->parent).vtable[2].Dispose)(node,unaff_DI);
		(*((ctx->parent).vtable)->Method2)(ctx);
		}
		uVar2 = (uint)this->unlabelled16 >> 4 & 3;
		if (uVar2 == 1) {
		iVar3 = 1;
		}
		else {
		if (uVar2 != 2) goto LAB_00190525;
		iVar3 = 0;
		}
		FUN_00101c90(in_stack_00000008,iVar3);
		LAB_00190525:if (((this->unlabelled12 & 0x40000000U) != 0) &&(uVar1 = (ushort)((uint)this->unlabelled12 >> 0x15) & 0xff,*(ushort *)&(node->parent).field_0xa = uVar1 * uVar1,(this->unlabelled12 & 0x1fe00000U) == 0x1fe00000)) {
		*(undefined2 *)&(node->parent).field_0xa = 0xffff;
		}
		if ((this->unlabelled12 & 0x20000000U) != 0) {
		uVar1 = (ushort)((uint)this->unlabelled12 >> 0xd) & 0xff;
		*(ushort *)(in_stack_00000008 + 10) = uVar1 * uVar1;
		if ((this->unlabelled12 & 0x1fe000U) == 0x1fe000) {
		*(undefined2 *)(in_stack_00000008 + 10) = 0xffff;
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionSetObject::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetObject::ExecuteFromCallContext(ActionSetObject *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

int ActionSetObject::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetObject::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

