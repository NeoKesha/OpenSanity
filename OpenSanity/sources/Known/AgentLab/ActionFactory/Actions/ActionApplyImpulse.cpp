#include "headers/Known/AgentLab/ActionFactory/Actions/ActionApplyImpulse.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionApplyImpulse::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionApplyImpulse::Dispose(ActionApplyImpulse *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionApplyImpulse::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionApplyImpulse::ExecuteFromCallContext(ActionApplyImpulse *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceDataList *this_00;
		InstanceTransform *transform;
		int this_01;
		uint uVar1;
		InstanceContext *pIVar2;
		InstanceNodeAbstract *pIVar3;
		int *piVar4;
		Vector4 VStack48;
		Vector4 VStack32;
		uVar1 = this->unlabelled12 & 0xff;
		if (uVar1 == 0xff) {
		if ((this->unlabelled12 & 0x400U) == 0) {
		pIVar2 = (((ctx->parent).ctx)->parent).ctx;
		}
		else {
		pIVar2 = (ctx->parent).field14_0x20.ctx;
		}
		}
		else {
		pIVar2 = (ctx->parent).ctx;
		pIVar2 = (*(pIVar2->parent).vtable[7].Dispose)(pIVar2,(byte)uVar1);
		}
		if (pIVar2 != (InstanceContext *)0x0) {
		this_00 = &pIVar2->nodes;
		pIVar3 = InstanceDataList::GetNode(this_00,Instance);
		if (pIVar3 != (InstanceNodeAbstract *)0x0) {
		if ((this->unlabelled12 & 0x1000U) != 0) {
		VStack48.x = (float)this->unlabelled16;
		VStack48.y = (float)this->unlabelled20;
		VStack48.z = (float)this->unlabelled24;
		VStack48.w = (float)this->unlabelled28;
		transform = (((((ctx->parent).ctx)->parent).ctx)->parent).transform;
		InstanceTransform::FillMatrix(transform);
		InstanceTransform::FUN_000d3ed0(transform,&VStack48);
		piVar4 = FUN_0016edc0((int)pIVar2);
		FUN_0017b310(piVar4);
		this_01 = piVar4[0x4b];
		if (this_01 != 0) {
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)piVar4[1],&VStack32);
		FUN_0015ea30(this_01,&VStack48.x,&VStack32.x);
		return;
		}
		pIVar3 = InstanceDataList::GetNode(this_00,Physics);
		if ((pIVar3 == (InstanceNodeAbstract *)0x0) &&(pIVar3 = InstanceDataList::GetNode(this_00,Physics),pIVar3 == (InstanceNodeAbstract *)0x0)) {
		return;
		}
		VStack32.x = 0.0;
		VStack32.y = 0.0;
		VStack32.z = 0.0;
		VStack32.w = FLOAT_0038639c;
		FUN_001e0260((int)pIVar3,&VStack48.x,&VStack32.x);
		return;
		}
		if (((this->unlabelled12 & 0x800U) != 0) &&(pIVar3 = InstanceDataList::GetNode(this_00,Physics), pIVar3 != (InstanceNodeAbstract *)0x0)) {
		thunk_FUN_0007a810((int)pIVar3,(float *)&this->unlabelled32);
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionApplyImpulse::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionApplyImpulse * __fastcall ActionApplyImpulse::Construct(ActionApplyImpulse *this){
		uint uVar1;
		float fVar2;
		fVar2 = FLOAT_0038639c;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ApplyImpulse;
		this->unlabelled12 = uVar1 & 0xffffe0ff | 0xff;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		this->unlabelled28 = (int)fVar2;
		this->unlabelled32 = 0;
		this->unlabelled36 = 0;
		this->unlabelled40 = 0;
		this->unlabelled44 = (int)fVar2;
		return this;
		}
		
	*/
	return;
}

int ActionApplyImpulse::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionApplyImpulse::GetSize(void){
		return 0x30;
		}
		
	*/
	return 0;
}

void ActionApplyImpulse::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionApplyImpulse::UnkMethod(ActionApplyImpulse *this,int *param_1){
		ushort uVar1;
		char cVar2;
		ushort *puVar3;
		uint uVar4;
		IteratorE2 local_10;
		this->unlabelled16 = (int)Vector4_0039ef70.x;
		this->unlabelled20 = (int)Vector4_0039ef70.y;
		this->unlabelled24 = (int)Vector4_0039ef70.z;
		this->unlabelled28 = (int)FLOAT_0038639c;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar2 != '\0') {
		return;
		}
		puVar3 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *puVar3;
		if (uVar1 < 0x4c) {
		if (uVar1 == 0x4b) {
		this->unlabelled24 = *(int *)(puVar3 + 2);
		uVar4 = this->unlabelled12 | 0x1000;
		}
		else {
		if (uVar1 == 6) {
		*(undefined *)&this->unlabelled12 = *(undefined *)(puVar3 + 2);
		goto switchD_001625f9_caseD_1d;
		}
		if (uVar1 == 0x49) {
		this->unlabelled16 = *(int *)(puVar3 + 2);
		uVar4 = this->unlabelled12 | 0x1000;
		}
		else {
		if (uVar1 != 0x4a) goto switchD_001625f9_caseD_1d;
		this->unlabelled20 = *(int *)(puVar3 + 2);
		uVar4 = this->unlabelled12 | 0x1000;
		}
		}
		goto LAB_00162641;
		}
		if (uVar1 == 0x9f) {
		this->unlabelled36 = *(int *)(puVar3 + 2);
		LAB_0016263c:uVar4 = this->unlabelled12 | 0x800;
		goto LAB_00162641;
		}
		if (uVar1 == 0xa0) {
		this->unlabelled32 = *(int *)(puVar3 + 2);
		goto LAB_0016263c;
		}
		if ((uVar1 != 0xffff) || (*(char *)(puVar3 + 1) != '\x04')) goto switchD_001625f9_caseD_1d;
		switch(*(undefined4 *)(puVar3 + 2)) {
		case 0x1c:*(undefined *)&this->unlabelled12 = 0xfb;
		default:goto switchD_001625f9_caseD_1d;
		case 0x44:uVar4 = this->unlabelled12 & 0xfffffeff;
		break;
		case 0x45:uVar4 = this->unlabelled12 | 0x100;
		break;
		case 0x46:uVar4 = this->unlabelled12 | 0x200;
		break;
		case 0x85:uVar4 = this->unlabelled12 | 0x400;
		}
		LAB_00162641:this->unlabelled12 = uVar4;
		switchD_001625f9_caseD_1d:IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

