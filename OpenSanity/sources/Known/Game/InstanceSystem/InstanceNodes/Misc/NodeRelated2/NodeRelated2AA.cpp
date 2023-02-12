#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2AA.h"

void NodeRelated2AA::Update(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2AA::Update(NodeRelated2AA *this,undefined4 param_1){
		NodeRelated1Abstract *pNVar1;
		InstanceContext *pIVar2;
		BlackboardAbstract *pBVar3;
		uint uVar4;
		pNVar1 = (this->parent).related;
		pIVar2 = (this->parent).ctx;
		pBVar3 = (this->parent).blackboard;
		if ((*(byte *)&pBVar3->field1_0x4 & 1) == 0) {
		(*((pIVar2->parent).vtable)->Method1)(pIVar2);
		}
		else {
		(*((pIVar2->parent).vtable)->Method2)(pIVar2);
		}
		pIVar2 = (this->parent).ctx;
		uVar4 = (pIVar2->parent).flags;
		if ((*(byte *)&pBVar3->field1_0x4 & 2) == 0) {
		uVar4 = uVar4 & 0xffffffef;
		}
		else {
		uVar4 = uVar4 | 0x10;
		}
		(pIVar2->parent).flags = uVar4;
		pIVar2 = (this->parent).ctx;
		uVar4 = (pIVar2->parent).flags;
		if ((*(byte *)&pBVar3->field1_0x4 & 4) == 0) {
		uVar4 = uVar4 & 0xfffffbff;
		}
		else {
		uVar4 = uVar4 | 0x400;
		}
		(pIVar2->parent).flags = uVar4;
		pIVar2 = (this->parent).ctx;
		uVar4 = (pIVar2->parent).flags;
		if ((*(byte *)&pBVar3->field1_0x4 & 8) == 0) {
		uVar4 = uVar4 & 0xffffefff;
		}
		else {
		uVar4 = uVar4 | 0x1000;
		}
		(pIVar2->parent).flags = uVar4;
		(*(code *)pNVar1->vtable[1])(param_1);
		pIVar2 = (this->parent).ctx;
		uVar4 = (pIVar2->parent).flags;
		if ((pBVar3->field1_0x4 & 0x100) == 0) {
		uVar4 = uVar4 & 0xfffffff7;
		}
		else {
		uVar4 = uVar4 | 8;
		}
		(pIVar2->parent).flags = uVar4;
		uVar4 = pNVar1->field7_0x10 ^(((uint)pBVar3->field1_0x4 >> 9 & 0xff) << 8 ^ pNVar1->field7_0x10) & 0x100;
		pNVar1->field7_0x10 = uVar4;
		uVar4 = (((uint)pBVar3->field1_0x4 >> 0xf & 0xff) << 9 ^ uVar4) & 0x200 ^ uVar4;
		pNVar1->field7_0x10 = uVar4;
		uVar4 = ((uint)*(byte *)((int)&pBVar3->field1_0x4 + 2) << 10 ^ uVar4) & 0x400 ^ uVar4;
		pNVar1->field7_0x10 = uVar4;
		pNVar1->field7_0x10 = (((uint)pBVar3->field1_0x4 >> 0x11 & 0xff) << 0xc ^ uVar4) & 0x1000 ^ uVar4;
		NodeRelated2Abstract::EmptyFunction();
		return;
		}
		
	*/
	return;
}

void NodeRelated2AA::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeRelated2AA::CleanUp(NodeRelated2AA *this){
		NodeRelated1Abstract *pNVar1;
		BlackboardAbstract *blackboard;
		blackboard = (this->parent).blackboard;
		(this->parent).vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_J;
		if (blackboard != (BlackboardAbstract *)0x0) {
		(*blackboard->vtable->Dispose)(blackboard,1);
		}
		pNVar1 = (this->parent).related;
		if (pNVar1 != (NodeRelated1Abstract *)0x0) {
		(*(code *)*pNVar1->vtable)(1);
		}
		NodeRelated2Abstract::CleanUp(&this->parent);
		return;
		}
		
	*/
	return;
}

void NodeRelated2AA::FUN_000676d0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2AA::FUN_000676d0(NodeRelated2AA *this,int param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		NodeRelated2C *this_00;
		InstanceTransform *pIVar4;
		InstanceNodeCharacter *pIVar5;
		float local_30;
		float local_2c;
		float local_28;
		undefined4 local_24;
		undefined4 local_20;
		undefined local_1c;
		pIVar5 = InstanceContext::GetCharacterNode((InstanceContext *)param_1);
		if (pIVar5 != (InstanceNodeCharacter *)0x0) {
		this_00 = pIVar5->field1_0x18;
		pIVar4 = (((this->parent).ctx)->parent).transform;
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
		local_30 = (pIVar4->position).x;
		local_2c = (pIVar4->position).y;
		local_28 = (pIVar4->position).z;
		local_20 = 0x400;
		local_1c = 1;
		local_24 = 0;
		(*((this_00->parent).parent.vtable)->Method8)((NodeRelated2Abstract *)this_00,&local_30,(this->parent).ctx,'\x01');
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2AA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall NodeRelated2AA::Dispose(NodeRelated2AA *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void NodeRelated2AA::Update_4(int flags) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2AA::Update(NodeRelated2AA *this,int flags){
		InstanceContext *pIVar1;
		Update(this,flags);
		pIVar1 = (this->parent).ctx;
		(pIVar1->parent).flags = (pIVar1->parent).flags | 0x20000;
		return;
		}
		
	*/
	return;
}

void NodeRelated2AA::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void NodeRelated2AA::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void NodeRelated2AA::EmptyFunction_6() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void NodeRelated2AA::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void NodeRelated2AA::EmptyFunction_7() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void NodeRelated2AA::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void NodeRelated2AA::IsC() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined NodeRelated2AA::IsC(void){
		return 0;
		}
		
	*/
	return;
}

void NodeRelated2AA::Construct(int* param_1, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated2AA * __thiscall NodeRelated2AA::Construct(NodeRelated2AA *this,int *param_1,BlackboardAbstract *param_2,NodeRelated1Abstract *param_3){
		NodeRelated2Abstract::Construct(&this->parent,(InstanceMasterInfo *)param_1,param_2,param_3);
		(this->parent).vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_AA;
		return this;
		}
		
	*/
	return;
}

