#include "headers/Known/AgentLab/ActionFactory/Actions/ActionDoSound.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionDoSound::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionDoSound * __fastcall ActionDoSound::Construct(ActionDoSound *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_DoSound;
		this->unlabelled12 = uVar1 & 0xff7800f0 | 0x7800f0;
		FUN_00180380(&this->unlabelled32,0);
		this->unlabelled36 = (int)FLOAT_00386ab4;
		this->unlabelled60 = 0;
		this->unlabelled64 = 0;
		this->unlabelled68 = 0;
		return this;
		}
		
	*/
	return;
}

void ActionDoSound::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionDoSound::Dispose(ActionDoSound *this,byte param_1){
		::EmptyFunction();
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionDoSound::Execute(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDoSound::Execute(ActionDoSound *this,InstanceContext *ctx){
		float fVar1;
		float fVar2;
		InstanceTransform *pIVar3;
		uint uVar4;
		bool bVar5;
		InstanceContextBase *pIVar6;
		char cVar7;
		void *pvVar8;
		InstanceNodeAbstract *pIVar9;
		uint uVar10;
		int iVar11;
		bool bVar12;
		bool bVar13;
		bool bVar14;
		float fVar15;
		float fStack72;
		InstanceContext *pIStack68;
		ushort uStack64;
		InstanceContext *local_3c;
		InstanceContext *local_38;
		float fStack52;
		float local_30;
		float local_2c;
		float local_28;
		float local_24;
		undefined4 uStack32;
		float fStack28;
		undefined4 uStack24;
		float fStack20;
		local_3c = (InstanceContext *)FLOAT_003869d8;
		if ((this->unlabelled12 & 0x20000U) != 0) {
		iVar11 = (ctx->parent).field14_0x20.field27_0x78;
		if (iVar11 == 0) {
		pvVar8 = (void *)(ctx->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar8 = (void *)FUN_00017ba8(iVar11);
		}
		local_3c = (InstanceContext *)FUN_00180490(&this->unlabelled32,pvVar8);
		if (FLOAT_0038807c < (float)local_3c) {
		local_3c = (InstanceContext *)FLOAT_0038807c;
		}
		}
		local_38 = (ctx->parent).ctx;
		pIVar3 = (local_38->parent).transform;
		if ((*(byte *)&pIVar3->field3_0x60 & 4) != 0) {
		fVar15 = (pIVar3->matrix).m44;
		fVar1 = (pIVar3->matrix).m43;
		fVar2 = (pIVar3->matrix).m42;
		(pIVar3->position).x = (pIVar3->matrix).m41;
		(pIVar3->position).y = fVar2;
		(pIVar3->position).z = fVar1;
		(pIVar3->position).w = fVar15;
		pIVar3->field3_0x60 = (float)((uint)pIVar3->field3_0x60 & 0xfffffffa);
		}
		local_30 = (pIVar3->position).x;
		local_2c = (pIVar3->position).y;
		local_28 = (pIVar3->position).z;
		local_24 = (pIVar3->position).w;
		if (((this->unlabelled12 & 0x780000U) == 0x780000) ||(cVar7 = (*(ctx->parent).vtable[2].Method4)(ctx), cVar7 == '\0')) {
		iVar11 = FUN_000d4360(this->unlabelled12 & 0xf);
		uVar10 = InstanceContext::FUN_0018f1e0(ctx,*(ushort *)((int)&this->unlabelled16 + iVar11 * 2));
		uStack64 = (ushort)uVar10;
		}
		else {
		pIVar9 = (ctx->nodes).array[0x13];
		if ((pIVar9 == (InstanceNodeAbstract *)0xffffffff) &&(pIVar9 = (ctx->nodes).array[0x12], pIVar9 == (InstanceNodeAbstract *)0xffffffff))goto LAB_00198db1;
		uVar10 = FUN_001e6d80((int)(&DAT_0049d820 + (int)pIVar9 * 0x48),(byte)((uint)this->unlabelled12 >> 0x13) & 0xf,(uint *)&local_3c);
		uStack64 = (ushort)uVar10;
		if (((this->unlabelled12 & 0x780000U) == 0x180000) &&((cVar7 = (**(code **)(*(int *)(ctx->parent).field14_0x20.matrix2.m42 + 0x2c))(),cVar7 != '\0' && (*(short *)(&DAT_0049d880 + (int)pIVar9 * 0x90) == 10)))) {
		uStack32 = 0;
		fStack28 = FLOAT_0038639c;
		uStack24 = 0;
		fStack20 = FLOAT_0038639c;
		(**(code **)(*(int *)(ctx->parent).field14_0x20.matrix2.m42 + 0x44))(&DAT_0049d820 + (int)pIVar9 * 0x48,&uStack32);
		}
		}
		if ((uStack64 != 0xffff) &&(((local_38->field35_0x160 & 0xffffffU) < DAT_004962ec ||((this->unlabelled12 & 0x801000U) != 0)))) {
		pIStack68 = (InstanceContext *)FLOAT_0038639c;
		bVar5 = FLOAT_00386394 < (float)local_3c;
		if (bVar5) {
		pIStack68 = local_3c;
		}
		bVar14 = (char)((uint)this->unlabelled12 >> 8) < '\0';
		if (bVar14) {
		fVar15 = FUN_000d4420((float)this->unlabelled48);
		pIStack68 = (InstanceContext *)(fVar15 + (float)pIStack68);
		}
		bVar12 = (this->unlabelled12 & 0x10000U) != 0;
		fStack72 = FLOAT_0038639c;
		if (bVar12) {
		fStack72 = (float)this->unlabelled40;
		}
		bVar13 = (this->unlabelled12 & 0x4000U) != 0;
		if (bVar13) {
		fVar15 = FUN_000d4420((float)this->unlabelled44);
		fStack72 = fVar15 + fStack72;
		}
		uVar10 = FUN_00177160();
		fStack52 = -NAN;
		if (((this->unlabelled12 & 0x800000U) != 0) &&(cVar7 = (*(ctx->parent).vtable[7].Method4)(ctx), cVar7 != '\0')) {
		fStack52 = 0.0;
		}
		fVar15 = fStack52;
		uVar4 = this->unlabelled12;
		if ((uVar4 & 0x800) == 0) {
		if ((uVar4 & 0x801000) == 0) {
		pIVar6 = &local_38->parent;
		if (!bVar13 && !bVar12) {
		fStack72 = FLOAT_003869d8;
		}
		if (!bVar14 && !bVar5) {
		pIStack68 = (InstanceContext *)FLOAT_003869d8;
		}
		local_38 = pIStack68;
		fStack52 = fStack72;
		FUN_00133d40(uStack64,uVar4 >> 8 & 7,(int)pIVar6->chunkData,&local_30,(uint)pIStack68,(uint)fStack72,uVar10,(int)fVar15);
		goto LAB_00198db1;
		}
		if (!bVar13 && !bVar12) {
		fStack72 = FLOAT_003869d8;
		}
		if (!bVar14 && !bVar5) {
		pIStack68 = (InstanceContext *)FLOAT_003869d8;
		}
		uVar10 = FUN_00134590(uStack64,uVar4 >> 8 & 7,(int *)local_38,(uint)pIStack68,(uint)fStack72,uVar10,(int)fStack52);
		cVar7 = (char)uVar10;
		}
		else {
		if (fStack52 != 0.0) {
		if (!bVar13 && !bVar12) {
		fStack72 = FLOAT_003869d8;
		}
		if (!bVar14 && !bVar5) {
		pIStack68 = (InstanceContext *)FLOAT_003869d8;
		}
		local_38 = pIStack68;
		fStack52 = fStack72;
		FUN_00133d20(uStack64,uVar4 >> 8 & 7,(float)pIStack68,fStack72,uVar10,(int)fVar15);
		goto LAB_00198db1;
		}
		if (!bVar13 && !bVar12) {
		fStack72 = FLOAT_003869d8;
		}
		if (!bVar14 && !bVar5) {
		pIStack68 = (InstanceContext *)FLOAT_003869d8;
		}
		uVar10 = FUN_001345d0(uStack64,uVar4 >> 8 & 7,(int *)local_38,(float)pIStack68,(uint)fStack72,uVar10);
		cVar7 = (char)uVar10;
		}
		if (((cVar7 != -1) && ((this->unlabelled12 & 0x800000U) != 0)) && (fStack52 == 0.0)) {
		*(char *)&ctx->field36_0x164 = cVar7;
		}
		}
		LAB_00198db1:if ((this->unlabelled12 & 0x40000U) != 0) {
		if (((float)this->unlabelled60 <= FLOAT_0038a928) &&((float)this->unlabelled64 <= FLOAT_0038a928)) {
		FUN_001cb5b0((int)&DAT_0049d240,&local_30,(float)this->unlabelled56,(float)this->unlabelled68);
		return;
		}
		FUN_001cb7c0((int)&DAT_0049d240,&local_30,(float)this->unlabelled60,(float)this->unlabelled64,(float)this->unlabelled60,(float)this->unlabelled68);
		}
		return;
		}
		
	*/
	return;
}

void ActionDoSound::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDoSound::UnkMethod(ActionDoSound *this,int *param_1){
		ushort uVar1;
		uint uVar2;
		char cVar3;
		ushort *this_00;
		IteratorE2 local_10;
		*(undefined2 *)&this->unlabelled16 = 0xffff;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		while (cVar3 == '\0') {
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *this_00;
		if (uVar1 < 0x99) {
		switch(uVar1) {
		case 0xb:this->unlabelled32 = this->unlabelled32 & 0xfffffffdU | 4;
		FUN_00180840(this_00,(US002 *)&this->unlabelled32);
		this->unlabelled12 = this->unlabelled12 | 0x20000;
		break;
		case 0xc:case 0xd:case 0xe:case 0xf:case 0x10:case 0x11:case 0x12:case 0x13:case 0x14:case 0x15:case 0x17:case 0x18:case 0x19:case 0x1a:case 0x1b:case 0x1c:case 0x1d:case 0x1e:case 0x1f:case 0x20:case 0x21:case 0x22:case 0x23:case 0x24:case 0x25:case 0x26:case 0x27:case 0x28:case 0x29:case 0x2a:case 0x2b:case 0x2c:case 0x2d:case 0x2e:case 0x2f:case 0x30:case 0x31:case 0x32:case 0x33:case 0x34:case 0x35:case 0x36:case 0x37:case 0x38:case 0x39:case 0x3a:case 0x3b:case 0x3c:case 0x3d:case 0x3e:case 0x3f:case 0x40:case 0x41:case 0x42:case 0x43:case 0x44:case 0x45:case 0x46:case 0x47:case 0x48:case 0x49:case 0x4a:case 0x4b:case 0x4c:case 0x4d:case 0x4e:case 0x4f:case 0x50:case 0x51:case 0x52:case 0x53:case 0x54:case 0x55:case 0x56:case 0x57:case 0x58:case 0x59:case 0x5a:case 0x5b:case 0x5c:case 0x5d:case 0x5e:case 0x5f:case 0x60:case 0x61:case 0x62:case 99:case 100:case 0x65:case 0x66:case 0x67:case 0x68:case 0x69:case 0x6a:case 0x6b:case 0x6c:case 0x6d:case 0x6e:case 0x6f:case 0x70:case 0x71:case 0x72:case 0x73:case 0x74:case 0x75:case 0x76:case 0x77:case 0x78:case 0x79:case 0x7a:case 0x7b:case 0x7c:case 0x7d:case 0x7e:case 0x7f:case 0x80:case 0x81:case 0x82:case 0x83:case 0x84:case 0x85:case 0x86:case 0x87:case 0x88:case 0x89:case 0x8a:case 0x8b:case 0x8c:case 0x8d:case 0x8e:case 0x8f:case 0x90:case 0x91:case 0x93:case 0x94:case 0x95:break;
		case 0x16:*(ushort *)((int)&this->unlabelled16 + (this->unlabelled12 & 0xfU) * 2) = this_00[2];
		uVar2 = this->unlabelled12;
		this->unlabelled12 = (uVar2 + 1 ^ uVar2) & 0xf ^ uVar2;
		break;
		case 0x92:switch(*(undefined4 *)(this_00 + 2)) {
		case 0x67:this->unlabelled12 = this->unlabelled12 & 0xfffff8ff;
		break;
		case 0x68:this->unlabelled12 = this->unlabelled12 & 0xfffff9ffU | 0x100;
		break;
		case 0x69:this->unlabelled12 = this->unlabelled12 & 0xfffffbffU | 0x300;
		break;
		case 0x6a:this->unlabelled12 = this->unlabelled12 & 0xfffffaffU | 0x200;
		}
		break;
		case 0x96:this->unlabelled48 = *(int *)(this_00 + 2);
		this->unlabelled12 = this->unlabelled12 | 0x8000;
		break;
		case 0x97:this->unlabelled44 = *(int *)(this_00 + 2);
		this->unlabelled12 = this->unlabelled12 | 0x4000;
		break;
		default:this->unlabelled40 = *(int *)(this_00 + 2);
		this->unlabelled12 = this->unlabelled12 | 0x10000;
		}
		}
		else if (uVar1 < 0xe3) {
		if (uVar1 == 0xe2) {
		this->unlabelled56 = *(int *)(this_00 + 2);
		this->unlabelled12 = this->unlabelled12 | 0x40000;
		}
		else if (uVar1 == 0xe0) {
		this->unlabelled60 = *(int *)(this_00 + 2);
		this->unlabelled12 = this->unlabelled12 | 0x40000;
		}
		else if (uVar1 == 0xe1) {
		this->unlabelled64 = *(int *)(this_00 + 2);
		this->unlabelled12 = this->unlabelled12 | 0x40000;
		}
		}
		else if (uVar1 == 0xe4) {
		this->unlabelled68 = *(int *)(this_00 + 2);
		}
		else if ((uVar1 == 0xffff) && (*(char *)(this_00 + 1) == '\x04')) {
		switch(*(undefined4 *)(this_00 + 2)) {
		case 0xc:this->unlabelled12 = this->unlabelled12 | 0x800000;
		break;
		case 0x52:this->unlabelled12 = this->unlabelled12 | 0x1000;
		break;
		case 0x62:this->unlabelled12 = this->unlabelled12 | 0x800;
		break;
		case 0xd5:this->unlabelled12 = this->unlabelled12 & 0xff87ffff;
		break;
		case 0xd7:this->unlabelled12 = this->unlabelled12 & 0xffa7ffffU | 0x200000;
		break;
		case 0xd9:this->unlabelled12 = this->unlabelled12 & 0xffafffffU | 0x280000;
		break;
		case 0xe7:this->unlabelled12 = this->unlabelled12 & 0xff8fffffU | 0x80000;
		break;
		case 0xe8:this->unlabelled12 = this->unlabelled12 & 0xff97ffffU | 0x100000;
		break;
		case 0xf7:this->unlabelled12 = this->unlabelled12 & 0xff9fffffU | 0x180000;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionDoSound::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDoSound::ExecuteFromCallContext(ActionDoSound *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

int ActionDoSound::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionDoSound::GetSize(void){
		return 0x48;
		}
		
	*/
	return 0;
}

