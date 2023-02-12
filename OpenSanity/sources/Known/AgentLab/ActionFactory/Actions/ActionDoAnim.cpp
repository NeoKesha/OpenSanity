#include "headers/Known/AgentLab/ActionFactory/Actions/ActionDoAnim.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionDoAnim::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionDoAnim * __fastcall ActionDoAnim::Construct(ActionDoAnim *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_DoAnim;
		FUN_00180380(&this->unlabelled16,0);
		FUN_00180380(&this->unlabelled20,0);
		FUN_00180380(&this->unlabelled24,0);
		this->unlabelled12 = 0;
		this->unlabelled12 = this->unlabelled12 | 0xff0;
		*(undefined *)&this->unlabelled32 = 0xff;
		*(undefined *)((int)&this->unlabelled32 + 1) = 0xff;
		*(undefined *)((int)&this->unlabelled32 + 2) = 0xff;
		*(undefined *)((int)&this->unlabelled32 + 3) = 0xff;
		this->unlabelled28 = 0;
		return this;
		}
		
	*/
	return;
}

void ActionDoAnim::Execute(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDoAnim::Execute(ActionDoAnim *this,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceNodeOGISub *this_00;
		Animation *pAVar2;
		GameResources *pGVar3;
		byte bVar4;
		GameObject *this_01;
		uint uVar5;
		int iVar6;
		InstanceNodeOGI *this_02;
		void *pvVar7;
		long lVar8;
		InstanceNodeShadow *pIVar9;
		float fVar9;
		uint local_10;
		uint local_c;
		OGI *local_8;
		uint local_4;
		iVar6 = (ctx->parent).field14_0x20.field27_0x78;
		if (iVar6 == 0) {
		this_01 = (GameObject *)(ctx->parent).field14_0x20.matrix2.m33;
		}
		else {
		this_01 = (GameObject *)FUN_00015286(iVar6);
		}
		pIVar1 = (ctx->parent).ctx;
		uVar5 = this->unlabelled12 & 0xf;
		if (uVar5 == 1) {
		bVar4 = *(byte *)&this->unlabelled32;
		}
		else {
		iVar6 = FUN_000d4360(uVar5);
		bVar4 = *(byte *)((int)&this->unlabelled32 + iVar6);
		}
		local_c = (uint)bVar4;
		GameObject::GetOGIId(this_01,(ushort *)&local_10,local_c);
		pGVar3 = GameResources;
		if ((short)local_10 != -1) {
		local_8 = ((GameResources->parent).ogis)->elements[local_10 & 0x7fff];
		this_02 = (InstanceNodeOGI *)InstanceDataList::GetNode(&pIVar1->nodes,OGI);
		iVar6 = (ctx->parent).field14_0x20.field27_0x78;
		if (iVar6 == 0) {
		pvVar7 = (void *)(ctx->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar7 = (void *)FUN_00017ba8(iVar6);
		}
		FUN_001a80a0((int)this_01,(undefined2 *)&local_4,local_c);
		InstanceNodeOGI::Init(this_02,local_8,*(uint *)this_01->field2_0x8 >> 6 & 0x3f,this_01->field2_0x8[0] & 0x3f);
		this_00 = this_02->field4_0x24;
		if (this_00 != (InstanceNodeOGISub *)0x0) {
		if (((short)local_4 == -1) ||(pAVar2 = ((pGVar3->parent).animations)->elements[local_4 & 0x7fff],pAVar2 == (Animation *)0x0)) {
		fVar9 = FUN_00180490(&this->unlabelled16,pvVar7);
		bVar4 = 0xff;
		lVar8 = __ftol2(fVar9 * TicksPerTime);
		FUN_001fd740(this_00,lVar8,bVar4);
		}
		else {
		FUN_0018cdd0((int)this,pvVar7,(int)pAVar2,this_00);
		}
		}
		}
		if (((this->unlabelled12 & 0x200000U) != 0) &&(pIVar9 = (InstanceNodeShadow *)InstanceDataList::GetNode(&pIVar1->nodes,Shadow),pIVar9 != (InstanceNodeShadow *)0x0)) {
		*(byte *)&pIVar9->field1_0x18 = (byte)((uint)this->unlabelled12 >> 0x16) & 0xf;
		}
		return;
		}
		
	*/
	return;
}

void ActionDoAnim::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionDoAnim::Dispose(ActionDoAnim *this,byte param_1){
		FUN_0019be60(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionDoAnim::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDoAnim::UnkMethod(ActionDoAnim *this,int *param_1){
		ushort uVar1;
		char cVar2;
		ushort *this_00;
		uint uVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar2 != '\0') {
		return;
		}
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *this_00;
		if (0x59 < uVar1) {
		if (uVar1 < 0x123) {
		if (uVar1 == 0x122) {
		uVar3 = (*(int *)(this_00 + 2) << 0x16 ^ this->unlabelled12) & 0x3c00000U ^this->unlabelled12 | 0x200000;
		}
		else if (uVar1 == 0x65) {
		FUN_00180840(this_00,(US002 *)&this->unlabelled24);
		uVar3 = this->unlabelled12 | 0x10000;
		}
		else {
		if (uVar1 != 0x11c) goto switchD_00190f6b_caseD_d;
		this->unlabelled28 = *(int *)(this_00 + 2);
		uVar3 = this->unlabelled12 | 0x20000;
		}
		goto LAB_00190f98;
		}
		if ((uVar1 == 0xffff) && (*(char *)(this_00 + 1) == '\x04')) {
		switch(*(undefined4 *)(this_00 + 2)) {
		case 0xc:uVar3 = this->unlabelled12 | 0x1000;
		break;
		default:goto switchD_00190f6b_caseD_d;
		case 0x27:uVar3 = this->unlabelled12 | 0x80000;
		break;
		case 0xf8:uVar3 = this->unlabelled12 | 0x40000;
		break;
		case 0xf9:uVar3 = this->unlabelled12 | 0x100000;
		}
		goto LAB_00190f98;
		}
		goto switchD_00190f6b_caseD_d;
		}
		switch(uVar1) {
		case 0xc:FUN_00180840(this_00,(US002 *)&this->unlabelled20);
		uVar3 = this->unlabelled12 | 0x8000;
		break;
		case 0xd:case 0xe:case 0xf:case 0x10:case 0x12:case 0x13:case 0x15:case 0x16:case 0x17:case 0x18:case 0x19:case 0x1a:case 0x1b:case 0x1c:case 0x1d:case 0x1e:case 0x1f:case 0x20:case 0x21:case 0x22:case 0x23:case 0x24:case 0x25:case 0x26:case 0x27:case 0x28:case 0x29:case 0x2a:case 0x2b:case 0x2c:case 0x2d:case 0x2e:case 0x2f:case 0x30:case 0x31:case 0x32:case 0x33:case 0x34:case 0x35:case 0x36:case 0x37:case 0x38:case 0x39:case 0x3a:case 0x3b:case 0x3c:case 0x3d:case 0x3e:case 0x3f:case 0x40:case 0x41:case 0x42:case 0x43:case 0x44:case 0x45:case 0x46:case 0x47:case 0x48:case 0x49:case 0x4a:case 0x4b:case 0x4c:case 0x4d:case 0x4e:goto switchD_00190f6b_caseD_d;
		case 0x11:*(undefined *)((int)&this->unlabelled32 + (this->unlabelled12 & 0xfU)) =*(undefined *)(this_00 + 2);
		uVar3 = this->unlabelled12;
		this->unlabelled12 = (uVar3 + 1 ^ uVar3) & 0xf ^ uVar3;
		goto switchD_00190f6b_caseD_d;
		case 0x14:FUN_00180840(this_00,(US002 *)&this->unlabelled16);
		uVar3 = this->unlabelled12 | 0x2000;
		break;
		case 0x4f:uVar3 = this->unlabelled12 ^ (*(int *)(this_00 + 2) << 4 ^ this->unlabelled12) & 0xff0U;
		break;
		default:FUN_00180840(this_00,(US002 *)&this->unlabelled20);
		uVar3 = this->unlabelled12 | 0x4000;
		}
		LAB_00190f98:this->unlabelled12 = uVar3;
		switchD_00190f6b_caseD_d:IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void ActionDoAnim::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDoAnim::ExecuteFromCallContext(ActionDoAnim *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

int ActionDoAnim::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionDoAnim::GetSize(void){
		return 0x24;
		}
		
	*/
	return 0;
}

