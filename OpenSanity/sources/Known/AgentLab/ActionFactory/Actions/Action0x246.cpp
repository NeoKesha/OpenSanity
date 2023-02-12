#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x246.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x246::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x246::Dispose(Action0x246 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x246::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x246 * __fastcall Action0x246::Construct(Action0x246 *this){
		float fVar1;
		float fVar2;
		fVar1 = FLOAT_0038639c;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x246;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		*(undefined *)&this->unlabelled40 = 0;
		this->unlabelled44 = 0;
		this->unlabelled48 = 0;
		this->unlabelled52 = 0;
		this->unlabelled56 = 0;
		this->unlabelled60 = 0;
		this->unlabelled68 = 0;
		fVar2 = FLOAT_00386660;
		this->unlabelled16 = (int)fVar1;
		this->unlabelled20 = 2;
		this->unlabelled64 = (int)fVar1;
		this->unlabelled72 = (int)fVar1;
		this->unlabelled12 = this->unlabelled12 & 0xfffffff0;
		this->unlabelled24 = -1;
		this->unlabelled28 = -1;
		this->unlabelled32 = -1;
		this->unlabelled36 = -1;
		this->unlabelled20 = 0x15b010;
		this->unlabelled56 = (int)fVar2;
		return this;
		}
		
	*/
	return;
}

int Action0x246::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x246::GetSize(void){
		return 0x4c;
		}
		
	*/
	return 0;
}

void Action0x246::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x246::UnkMethod(Action0x246 *this,int *param_1){
		float fVar1;
		ushort uVar2;
		uint uVar3;
		char cVar4;
		ushort *puVar5;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar4 = IteratorE2::IsEnd(&local_10);
		while (cVar4 == '\0') {
		puVar5 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar2 = *puVar5;
		if (uVar2 < 0xda) {
		switch(uVar2) {
		case 0x10:*(ushort *)((int)&this->unlabelled24 + (uint)*(byte *)&this->unlabelled40 * 2) = puVar5[2];
		*(char *)&this->unlabelled40 = *(char *)&this->unlabelled40 + '\x01';
		break;
		case 0x11:case 0x12:case 0x13:case 0x14:case 0x15:case 0x16:case 0x17:case 0x18:case 0x19:case 0x1a:case 0x1b:case 0x1c:case 0x1d:case 0x1e:case 0x1f:case 0x20:case 0x21:case 0x22:case 0x23:case 0x24:case 0x25:case 0x26:case 0x27:case 0x28:case 0x29:case 0x2a:case 0x2b:case 0x2c:case 0x2d:case 0x2e:case 0x2f:case 0x30:case 0x31:case 0x32:case 0x33:case 0x34:case 0x35:case 0x36:case 0x37:case 0x38:case 0x39:case 0x3a:case 0x3b:case 0x3c:case 0x3d:case 0x3e:case 0x3f:case 0x40:case 0x41:case 0x42:case 0x43:case 0x44:case 0x45:case 0x46:case 0x47:case 0x48:case 0x49:case 0x4a:case 0x4b:case 0x4c:case 0x4d:case 0x4e:case 0x4f:case 0x50:case 0x51:case 0x52:case 0x53:case 0x54:case 0x55:case 0x56:case 0x57:case 0x58:case 0x59:case 0x5a:case 0x5b:case 0x5c:case 0x5d:case 0x5e:case 0x5f:case 0x60:case 0x61:case 0x62:case 99:case 100:case 0x66:case 0x67:case 0x68:case 0x69:case 0x6a:case 0x6b:case 0x6c:case 0x6d:case 0x6e:case 0x6f:case 0x70:case 0x71:case 0x72:case 0x73:case 0x74:case 0x75:case 0x76:case 0x77:case 0x78:case 0x79:case 0x7a:case 0x7b:case 0x7c:case 0x7d:case 0x7e:case 0x7f:case 0x80:case 0x81:case 0x82:case 0x83:case 0x84:case 0x85:case 0x86:case 0x87:case 0x88:case 0x89:case 0x8a:case 0x8b:case 0x8c:case 0x8d:case 0x8e:case 0x8f:case 0x90:case 0x91:case 0x92:case 0x93:case 0x94:case 0x95:case 0x96:case 0x97:case 0x98:case 0x99:case 0x9a:case 0x9b:case 0x9c:case 0x9d:case 0x9e:case 0x9f:case 0xa0:case 0xa1:case 0xa2:case 0xa3:case 0xa4:case 0xa5:case 0xa6:case 0xa7:case 0xa8:case 0xa9:case 0xaa:case 0xab:case 0xac:case 0xad:case 0xae:case 0xaf:case 0xb0:case 0xb1:case 0xb2:case 0xb3:case 0xb4:case 0xb5:case 0xb6:case 0xb7:case 0xb8:case 0xb9:case 0xba:case 0xbb:case 0xbc:case 0xbd:case 0xbe:case 0xbf:case 0xc0:case 0xc1:case 0xc2:case 0xc3:case 0xc4:case 0xc5:case 0xc6:case 199:case 200:case 0xc9:case 0xca:case 0xcb:case 0xcc:case 0xcd:case 0xce:case 0xcf:case 0xd0:case 0xd1:case 0xd2:case 0xd5:case 0xd6:case 0xd7:break;
		case 0x65:fVar1 = *(float *)(puVar5 + 2);
		this->unlabelled44 = (int)fVar1;
		this->unlabelled48 = (int)(fVar1 * fVar1);
		break;
		case 0xd3:this->unlabelled16 = *(int *)(puVar5 + 2);
		break;
		case 0xd4:this->unlabelled52 = *(int *)(puVar5 + 2);
		break;
		case 0xd8:this->unlabelled56 = *(int *)(puVar5 + 2);
		break;
		default:this->unlabelled60 = *(int *)(puVar5 + 2);
		}
		}
		else if (uVar2 < 0x244) {
		if (uVar2 == 0x243) {
		this->unlabelled72 = *(int *)(puVar5 + 2);
		}
		else if (uVar2 == 0xda) {
		this->unlabelled64 = *(int *)(puVar5 + 2);
		}
		else if (uVar2 == 0xdb) {
		this->unlabelled68 = *(int *)(puVar5 + 2);
		}
		}
		else if (uVar2 == 0xffff) {
		uVar3 = *(uint *)(puVar5 + 2);
		if (uVar3 < 0xb0) {
		if (uVar3 == 0xaf) {
		this->unlabelled12 = this->unlabelled12 & 0xfffffffaU | 2;
		}
		else if (uVar3 == 0xad) {
		this->unlabelled12 = this->unlabelled12 & 0xfffffff8;
		}
		else if (uVar3 == 0xae) {
		this->unlabelled12 = this->unlabelled12 & 0xfffffff9U | 1;
		}
		}
		else if (uVar3 == 0xb3) {
		this->unlabelled12 = this->unlabelled12 & 0xfffffffbU | 3;
		}
		else if (uVar3 == 0x211) {
		this->unlabelled12 = this->unlabelled12 | 8;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar4 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x246::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x246::ExecuteFromCallContext(Action0x246 *this,undefined4 time_clock,InstanceContext *ctx){
		float *pfVar1;
		InstanceNodeAbstract::FUN_00177d20((InstanceNodeAbstract *)(ctx->parent).ctx,(uint *)&this->unlabelled12);
		pfVar1 = &(((ctx->parent).ctx)->parent).field14_0x20.matrix2.m43;
		*pfVar1 = (float)((uint)*pfVar1 | 0x400000);
		return;
		}
		
	*/
	return;
}

