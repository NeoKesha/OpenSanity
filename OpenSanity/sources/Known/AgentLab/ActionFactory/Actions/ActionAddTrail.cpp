#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAddTrail.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionAddTrail::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAddTrail * __fastcall ActionAddTrail::Construct(ActionAddTrail *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_AddTrail;
		FUN_0016f1c0((uint *)&this->unlabelled16);
		return this;
		}
		
	*/
	return;
}

void ActionAddTrail::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionAddTrail::Dispose(ActionAddTrail *this,byte param_1){
		UnkFamily2B::EmptyFunction();
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionAddTrail::UnkMethod(int* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionAddTrail::UnkMethod(int this,int *param_2){
		float fVar1;
		undefined4 uVar2;
		ushort uVar3;
		char cVar4;
		ushort *puVar5;
		uint uVar6;
		float fVar7;
		float local_40;
		float local_3c;
		int local_38;
		float local_34;
		IteratorE2 local_30;
		float fStack32;
		float fStack28;
		float fStack24;
		float fStack20;
		IteratorE2::Construct(&local_30,param_2);
		local_38 = 0x3f;
		local_34 = 0.0;
		local_40 = 0.0;
		local_3c = 0.0;
		IteratorE2::Rewind(&local_30);
		cVar4 = IteratorE2::IsEnd(&local_30);
		do {
		if (cVar4 != '\0') {
		if (((byte)*(undefined4 *)(this + 0x10) & 0xf) == 1) {
		*(float *)(this + 0x38) = *(float *)(this + 0x38) + *(float *)(this + 0x3c);
		*(float *)(this + 0x3c) = *(float *)(this + 0x3c) * FLOAT_003865d4;
		}
		if (((local_34 != 0.0) || (local_40 != 0.0)) || (local_3c != 0.0)) {
		fStack20 = FLOAT_0038639c;
		fStack32 = local_34;
		fStack28 = local_40;
		fStack24 = local_3c;
		FUN_0016f2a0(this + 0x10,&fStack32);
		}
		if (local_38 != 0x3f) {
		*(char *)(this + 0x32) = (char)local_38;
		}
		return;
		}
		puVar5 = (ushort *)(*(local_30.parent)->Get)((IteratorEAbstract *)&local_30);
		uVar3 = *puVar5;
		if (uVar3 < 0x6e) {
		switch(uVar3) {
		case 0:local_34 = *(float *)(puVar5 + 2);
		break;
		case 1:local_40 = *(float *)(puVar5 + 2);
		break;
		case 2:local_3c = *(float *)(puVar5 + 2);
		break;
		case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 0xc:case 0xd:case 0xe:case 0xf:case 0x10:case 0x11:case 0x13:case 0x14:break;
		case 0xb:*(undefined4 *)(this + 0x58) = *(undefined4 *)(puVar5 + 2);
		uVar6 = *(uint *)(this + 0x14) | 4;
		goto LAB_00196bdb;
		case 0x12:local_38 = *(int *)(puVar5 + 2);
		break;
		case 0x15:*(ushort *)(this + 0x1c) = puVar5[2];
		break;
		case 0x16:FUN_0018ba00(this + 0x10,puVar5[2]);
		break;
		case 0x17:goto switchD_001968c0_caseD_4;
		case 0x18:fVar1 = *(float *)(puVar5 + 2);
		fVar7 = 0.0 - fVar1;
		if (0.0 <= fVar1) {
		fVar7 = fVar1;
		}
		*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xfffffff4 | 4;
		*(float *)(this + 0x34) = fVar7 * fVar1;
		break;
		case 0x19:fVar1 = *(float *)(puVar5 + 2);
		fVar7 = 0.0 - fVar1;
		if (0.0 <= fVar1) {
		fVar7 = fVar1;
		}
		*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xfffffff3 | 3;
		*(float *)(this + 0x34) = fVar7 * fVar1;
		break;
		case 0x1a:uVar2 = *(undefined4 *)(puVar5 + 2);
		*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xfffffff1 | 1;
		*(undefined4 *)(this + 0x38) = uVar2;
		break;
		case 0x1b:*(undefined4 *)(this + 0x6c) = *(undefined4 *)(puVar5 + 2);
		*(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 0x4000000;
		break;
		case 0x1c:fVar1 = *(float *)(puVar5 + 2);
		fVar7 = 0.0 - fVar1;
		if (0.0 <= fVar1) {
		fVar7 = fVar1;
		}
		*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xfffffff5 | 5;
		*(float *)(this + 0x34) = fVar7 * fVar1;
		break;
		default:*(ushort *)(this + 0x30) = puVar5[2];
		}
		goto switchD_0019686a_caseD_93;
		}
		if (uVar3 < 0xe3) {
		switch(uVar3) {
		case 0x92:switch(*(undefined4 *)(puVar5 + 2)) {
		case 0x67:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xfc7fffff;
		*(ushort *)(this + 0x2e) = puVar5[2];
		break;
		case 0x68:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xfcffffff | 0x800000;
		*(ushort *)(this + 0x2e) = puVar5[2];
		break;
		case 0x69:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xfdffffff | 0x1800000;
		default:switchD_001968c0_caseD_4:*(ushort *)(this + 0x2e) = puVar5[2];
		break;
		case 0x6a:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xfd7fffff | 0x1000000;
		*(ushort *)(this + 0x2e) = puVar5[2];
		}
		case 0x93:case 0x94:case 0x95:case 0x96:case 0x99:case 0x9a:case 0x9b:case 0x9c:case 0x9d:case 0x9f:case 0xa0:case 0xa1:case 0xa2:case 0xa3:case 0xa4:case 0xa5:case 0xa6:case 0xa7:case 0xa8:case 0xa9:case 0xaa:case 0xab:case 0xac:case 0xad:case 0xae:case 0xaf:case 0xb0:case 0xb1:case 0xb2:case 0xb3:case 0xb4:case 0xb5:case 0xb6:case 0xb7:case 0xb8:case 0xb9:case 0xba:case 0xbb:case 0xbc:case 0xbd:case 0xbe:case 0xbf:case 0xc0:case 0xc1:case 0xc2:case 0xc3:case 0xc4:case 0xc5:case 0xc6:case 199:case 200:case 0xc9:case 0xca:case 0xcb:case 0xcc:case 0xcd:case 0xce:case 0xcf:case 0xd0:case 0xd1:case 0xd2:case 0xd3:case 0xd4:case 0xd5:case 0xd6:case 0xd7:case 0xd8:case 0xd9:case 0xda:case 0xdb:case 0xdc:case 0xdd:case 0xde:case 0xdf:goto switchD_0019686a_caseD_93;
		case 0x97:*(undefined4 *)(this + 0x5c) = *(undefined4 *)(puVar5 + 2);
		uVar6 = *(uint *)(this + 0x14) | 0x10;
		break;
		case 0x98:*(undefined4 *)(this + 0x60) = *(undefined4 *)(puVar5 + 2);
		uVar6 = *(uint *)(this + 0x14) | 8;
		break;
		case 0x9e:*(undefined4 *)(this + 0x34) = *(undefined4 *)(puVar5 + 2);
		*(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 0x8000000;
		goto switchD_0019686a_caseD_93;
		case 0xe0:*(undefined4 *)(this + 0x44) = *(undefined4 *)(puVar5 + 2);
		uVar6 = *(uint *)(this + 0x14) | 1;
		break;
		case 0xe1:*(undefined4 *)(this + 0x48) = *(undefined4 *)(puVar5 + 2);
		uVar6 = *(uint *)(this + 0x14) | 1;
		break;
		default:*(undefined4 *)(this + 0x4c) = *(undefined4 *)(puVar5 + 2);
		uVar6 = *(uint *)(this + 0x14) | 1;
		}
		goto LAB_00196bdb;
		}
		if (uVar3 < 0x117) {
		if (uVar3 == 0x116) {
		uVar2 = *(undefined4 *)(puVar5 + 2);
		*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xfffffff1 | 1;
		*(undefined4 *)(this + 0x3c) = uVar2;
		goto switchD_0019686a_caseD_93;
		}
		if (uVar3 == 0xe4) {
		*(undefined4 *)(this + 0x54) = *(undefined4 *)(puVar5 + 2);
		uVar6 = *(uint *)(this + 0x14) | 1;
		}
		else {
		if (uVar3 != 0xe5) {
		if (uVar3 == 0xfe) {
		*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xfffffff8 | 8;
		*(undefined4 *)(this + 0x68) = *(undefined4 *)(puVar5 + 2);
		}
		goto switchD_0019686a_caseD_93;
		}
		*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xfffffff7 | 7;
		*(undefined4 *)(this + 100) = *(undefined4 *)(puVar5 + 2);
		uVar6 = *(uint *)(this + 0x14) | 2;
		}
		goto LAB_00196bdb;
		}
		if (uVar3 == 0x128) {
		uVar6 = *(uint *)(this + 0x14) ^((uint)*(byte *)(puVar5 + 2) << 0x16 ^ *(uint *)(this + 0x14)) & 0x3c00000;
		goto LAB_00196bdb;
		}
		if ((uVar3 != 0xffff) || (*(char *)(puVar5 + 1) != '\x04')) goto switchD_0019686a_caseD_93;
		switch(*(undefined4 *)(puVar5 + 2)) {
		case 0xd5:uVar6 = *(uint *)(this + 0x14) & 0xffffc03f;
		goto LAB_00196bdb;
		case 0xd6:case 0xd8:case 0xda:case 0xdb:case 0xdc:case 0xdd:case 0xde:case 0xdf:case 0xe0:case 0xe1:case 0xe2:case 0xe3:case 0xe4:case 0xe5:case 0xe6:case 0xeb:case 0xec:case 0xed:case 0xee:case 0xef:case 0xf0:case 0xf1:case 0xf2:case 0xf3:case 0xf4:case 0xf5:case 0xf6:case 0xf8:case 0xf9:case 0xfa:case 0xfb:case 0xfc:case 0xfd:case 0xfe:case 0xff:case 0x100:case 0x101:case 0x102:case 0x103:case 0x104:case 0x105:case 0x106:case 0x107:case 0x108:case 0x109:case 0x10a:case 0x10b:case 0x10d:case 0x10e:case 0x10f:case 0x110:case 0x111:switchD_00196b13_caseD_d6:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffffc3ff;
		break;
		case 0xd7:uVar6 = *(uint *)(this + 0x14) & 0xffffc13f | 0x100;
		goto LAB_00196bdb;
		case 0xd9:*(uint *)(this + 0x14) = *(uint *)(this + 0x14) & 0xffffc17f | 0x140;
		break;
		case 0xe7:*(uint *)(this + 0x14) = *(uint *)(this + 0x14) & 0xffffc07f | 0x40;
		break;
		case 0xe8:uVar6 = *(uint *)(this + 0x14) & 0xffffc0bf | 0x80;
		goto LAB_00196bdb;
		case 0xe9:*(uint *)(this + 0x14) = *(uint *)(this + 0x14) & 0xffe7ffff | 0x40000;
		break;
		case 0xea:uVar6 = *(uint *)(this + 0x14) & 0xffebffff | 0x80000;
		goto LAB_00196bdb;
		case 0xf7:*(uint *)(this + 0x14) = *(uint *)(this + 0x14) & 0xffffc0ff | 0xc0;
		break;
		case 0x10c:uVar6 = *(uint *)(this + 0x14) | 0x200000;
		goto LAB_00196bdb;
		case 0x112:uVar6 = *(uint *)(this + 0x14) | 0x4000000;
		LAB_00196bdb:*(uint *)(this + 0x14) = uVar6;
		break;
		default:switch(*(undefined4 *)(puVar5 + 2)) {
		case 3:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffffc7ff | 0x400;
		break;
		case 4:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffffcbff | 0x800;
		break;
		case 5:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffffcfff | 0xc00;
		break;
		case 6:case 7:case 8:case 9:case 10:case 0xb:case 0xc:case 0xd:case 0xe:case 0x10:case 0x11:case 0x12:case 0x13:case 0x14:case 0x15:case 0x16:case 0x18:case 0x19:case 0x1a:case 0x1b:case 0x1c:case 0x1d:case 0x1e:case 0x1f:case 0x20:case 0x21:case 0x22:case 0x23:case 0x24:case 0x25:goto switchD_00196b13_caseD_d6;
		case 0xf:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xfffffff0;
		break;
		case 0x17:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 0x40000;
		break;
		case 0x26:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xff97ffff | 0x100000;
		break;
		case 0x27:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xff9fffff | 0x180000;
		break;
		case 0x28:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffa7ffff | 0x200000;
		break;
		case 0x29:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffafffff | 0x280000;
		break;
		case 0x2a:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xff87ffff;
		break;
		default:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xff8fffff | 0x80000;
		}
		}
		switchD_0019686a_caseD_93:IteratorE2::Iterate(&local_30);
		cVar4 = IteratorE2::IsEnd(&local_30);
		}
		 while( true );
		}
		
	*/
	return;
}

int ActionAddTrail::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionAddTrail::GetSize(void){
		return 0x80;
		}
		
	*/
	return 0;
}

void ActionAddTrail::Execute(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionAddTrail::Execute(ActionAddTrail *this,InstanceContext *ctx){
		(*(ctx->parent).vtable[4].Method2)(ctx);
		return;
		}
		
	*/
	return;
}

void ActionAddTrail::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionAddTrail::ExecuteFromCallContext(ActionAddTrail *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceContext *this_00;
		this_00 = (ctx->parent).ctx;
		(*(this_00->parent).vtable[4].Method2)(this_00);
		return;
		}
		
	*/
	return;
}

