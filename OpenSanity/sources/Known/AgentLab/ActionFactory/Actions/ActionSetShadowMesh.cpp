#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetShadowMesh.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetShadowMesh::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetShadowMesh * __fastcall ActionSetShadowMesh::Construct(ActionSetShadowMesh *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetShadowMesh;
		FUN_00180380(&this->unlabelled16,0);
		FUN_00180380(&this->unlabelled20,0);
		FUN_00180380(&this->unlabelled24,0);
		FUN_00180380(&this->unlabelled28,0);
		this->unlabelled12 = 0;
		return this;
		}
		
	*/
	return;
}

void ActionSetShadowMesh::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetShadowMesh::Dispose(ActionSetShadowMesh *this,byte param_1){
		thunk_FUN_000562d0(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetShadowMesh::Execute(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetShadowMesh::Execute(ActionSetShadowMesh *this,InstanceContext *ctx){
		undefined uVar1;
		int iVar2;
		void *this_02;
		InstanceNodeShadow *pIVar2;
		void *pvVar3;
		UNV004 *this_01;
		UNV004 *pUVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		pIVar2 = (InstanceNodeShadow *)InstanceDataList::GetNode(&((ctx->parent).ctx)->nodes,Shadow);
		if (pIVar2 != (InstanceNodeShadow *)0x0) {
		iVar2 = (ctx->parent).field14_0x20.field27_0x78;
		if (iVar2 == 0) {
		pvVar3 = (void *)(ctx->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar3 = (void *)FUN_00017ba8(iVar2);
		}
		uVar1 = *(undefined *)((int)&this->unlabelled12 + 1);
		this_02 = (void *)pIVar2->array[this->unlabelled12 & 0xff]->field2_0x8;
		this_01 = (UNV004 *)VirtualPool::AllocateMemory(0x20);
		if (this_01 == (UNV004 *)0x0) {
		pUVar4 = (UNV004 *)0x0;
		}
		else {
		fVar5 = FUN_00180490(&this->unlabelled16,pvVar3);
		pUVar4 = UNV004::Construct(this_01,uVar1,*(undefined *)((int)&this->unlabelled12 + 2),*(undefined *)((int)&this->unlabelled12 + 3),fVar5);
		}
		fVar6 = FUN_00180490(&this->unlabelled28,pvVar3);
		fVar7 = FUN_00180490(&this->unlabelled24,pvVar3);
		fVar5 = FUN_00180490(&this->unlabelled20,pvVar3);
		(pUVar4->vec).x = fVar5;
		fVar5 = FLOAT_0038639c;
		(pUVar4->vec).y = fVar7;
		(pUVar4->vec).z = fVar6;
		(pUVar4->vec).w = fVar5;
		FUN_00100630(this_02,(uint)pUVar4);
		}
		return;
		}
		
	*/
	return;
}

int ActionSetShadowMesh::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetShadowMesh::GetSize(void){
		return 0x20;
		}
		
	*/
	return 0;
}

void ActionSetShadowMesh::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetShadowMesh::UnkMethod(ActionSetShadowMesh *this,int *param_1){
		ushort uVar1;
		char cVar2;
		ushort *this_00;
		undefined4 uVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *this_00;
		if (uVar1 < 0x123) {
		switch(uVar1) {
		case 0x29:FUN_00180840(this_00,(US002 *)&this->unlabelled20);
		break;
		case 0x2a:FUN_00180840(this_00,(US002 *)&this->unlabelled24);
		break;
		case 0x2b:FUN_00180840(this_00,(US002 *)&this->unlabelled28);
		break;
		case 0x2c:case 0x2d:case 0x2e:case 0x2f:case 0x30:case 0x31:case 0x32:case 0x33:case 0x34:case 0x35:case 0x36:case 0x37:case 0x38:case 0x39:case 0x3a:case 0x3b:case 0x3c:case 0x3d:case 0x3e:case 0x3f:case 0x40:case 0x41:case 0x42:case 0x43:case 0x44:case 0x45:case 0x46:case 0x47:case 0x48:case 0x49:case 0x4a:case 0x4b:case 0x4c:case 0x4d:case 0x4e:case 0x4f:case 0x50:case 0x51:case 0x52:case 0x53:case 0x54:case 0x55:case 0x56:case 0x57:case 0x58:case 0x59:case 0x5a:case 0x5b:case 0x5c:case 0x5d:case 0x5e:case 0x5f:case 0x60:case 0x61:case 0x62:case 99:case 100:case 0x65:case 0x66:case 0x67:case 0x68:case 0x69:case 0x6a:case 0x6b:case 0x6c:case 0x6d:case 0x6e:case 0x6f:case 0x70:case 0x71:case 0x72:case 0x73:case 0x74:case 0x75:case 0x76:case 0x77:case 0x78:case 0x79:case 0x7a:case 0x7b:case 0x7c:case 0x7d:case 0x7e:case 0x7f:case 0x80:case 0x81:case 0x82:case 0x83:case 0x84:case 0x85:case 0x86:case 0x87:case 0x88:case 0x89:case 0x8a:case 0x8b:case 0x8c:case 0x8d:case 0x8e:case 0x8f:case 0x90:case 0x91:case 0x92:case 0x93:case 0x94:case 0x95:case 0x96:case 0x97:case 0x98:case 0x99:case 0x9a:case 0x9b:case 0x9c:case 0x9d:case 0x9e:case 0x9f:case 0xa0:case 0xa1:case 0xa2:case 0xa3:case 0xa4:case 0xa5:case 0xa6:case 0xa7:case 0xa8:case 0xa9:case 0xaa:case 0xab:case 0xac:case 0xad:case 0xae:case 0xaf:case 0xb0:case 0xb1:case 0xb2:case 0xb3:case 0xb4:case 0xb5:case 0xb6:case 0xb7:case 0xb8:case 0xb9:case 0xba:case 0xbb:case 0xbc:case 0xbd:case 0xbe:case 0xbf:case 0xc0:case 0xc1:case 0xc2:case 0xc3:case 0xc4:case 0xc5:case 0xc6:case 199:case 200:case 0xc9:case 0xca:case 0xcb:case 0xcc:break;
		case 0xcd:FUN_00180840(this_00,(US002 *)&this->unlabelled16);
		break;
		default:*(undefined *)&this->unlabelled12 = *(undefined *)(this_00 + 2);
		}
		}
		else if (uVar1 == 0x126) {
		*(undefined *)((int)&this->unlabelled12 + 2) = *(undefined *)(this_00 + 2);
		}
		else if (uVar1 == 0x127) {
		*(undefined *)((int)&this->unlabelled12 + 3) = *(undefined *)(this_00 + 2);
		}
		else if (uVar1 == 0xffff) {
		uVar3 = FUN_000ffd30(*(undefined4 *)(this_00 + 2));
		*(char *)((int)&this->unlabelled12 + 1) = (char)uVar3;
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionSetShadowMesh::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetShadowMesh::ExecuteFromCallContext(ActionSetShadowMesh *this,undefined4 time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

