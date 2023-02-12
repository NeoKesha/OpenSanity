#include "headers/Known/AgentLab/ActionFactory/Actions/ActionBeginMusic.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionBeginMusic::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionBeginMusic::Dispose(ActionBeginMusic *this,byte param_1){
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

void ActionBeginMusic::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionBeginMusic * __fastcall ActionBeginMusic::Construct(ActionBeginMusic *this){
		float fVar1;
		fVar1 = FLOAT_00386ab4;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_BeginMusic;
		this->unlabelled12 = 0;
		*(undefined *)&this->unlabelled16 = 0;
		this->unlabelled20 = (int)fVar1;
		this->unlabelled24 = (int)FLOAT_003865d0;
		this->unlabelled16 = this->unlabelled16 & 0xffff8fffU | 0x8f00;
		this->unlabelled28 = 0;
		return this;
		}
		
	*/
	return;
}

int ActionBeginMusic::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionBeginMusic::GetSize(void){
		return 0x20;
		}
		
	*/
	return 0;
}

void ActionBeginMusic::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionBeginMusic::UnkMethod(ActionBeginMusic *this,int *param_1){
		float fVar1;
		ushort uVar2;
		float fVar3;
		char cVar4;
		ushort *this_00;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar4 = IteratorE2::IsEnd(&local_10);
		while (cVar4 == '\0') {
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		fVar3 = FLOAT_0038639c;
		uVar2 = *this_00;
		if (uVar2 < 0x66) {
		if (uVar2 == 0x65) {
		this->unlabelled28 = *(int *)(this_00 + 2);
		}
		else if (uVar2 == 0xb) {
		fVar1 = *(float *)(this_00 + 2);
		this->unlabelled20 = (int)fVar1;
		if (fVar1 <= fVar3) {
		if (fVar1 < 0.0) {
		this->unlabelled20 = 0;
		}
		}
		else {
		this->unlabelled20 = (int)fVar3;
		}
		}
		else if (uVar2 == 0x14) {
		this->unlabelled24 = *(int *)(this_00 + 2);
		}
		}
		else if (uVar2 == 0x9a) {
		this->unlabelled12 = this->unlabelled12 & 0xfffffff9;
		FUN_00180840(this_00,(US002 *)&this->unlabelled12);
		}
		else if ((uVar2 == 0xffff) && (*(char *)(this_00 + 1) == '\x04')) {
		switch(*(undefined4 *)(this_00 + 2)) {
		case 0x71:this->unlabelled16 = this->unlabelled16 & 0xffff9fffU | 0x1000;
		break;
		case 0x72:this->unlabelled16 = this->unlabelled16 & 0xffff8fff;
		break;
		case 0x111:this->unlabelled16 = this->unlabelled16 & 0xffff7fff;
		break;
		case 0x11c:this->unlabelled16 = this->unlabelled16 & 0xffffbfffU | 0x3000;
		break;
		case 0x126:this->unlabelled16 = this->unlabelled16 & 0xffffafffU | 0x2000;
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

void ActionBeginMusic::Execute(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionBeginMusic::Execute(ActionBeginMusic *this,InstanceContext *ctx){
		int iVar1;
		void *pvVar2;
		uint uVar3;
		UnkDesc local_10;
		iVar1 = (ctx->parent).field14_0x20.field27_0x78;
		if (iVar1 == 0) {
		pvVar2 = (void *)(ctx->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar2 = (void *)FUN_00017ba8(iVar1);
		}
		uVar3 = FUN_001804d0(&this->unlabelled12,pvVar2);
		local_10.field3_0xc = (float)this->unlabelled24;
		local_10.soundId = local_10.soundId & 0xfffa0000U | uVar3 & 0xffff | 0xa0000;
		local_10.soundId = local_10.soundId ^ (this->unlabelled16 << 5 ^ local_10.soundId) & 0x100000U;
		local_10.field2_0x8 = (float)this->unlabelled20;
		if ((((((this->unlabelled16 & 0x7000U) == 0) &&(local_10.field2_0x8 = FLOAT_0038639c, uVar3 != 0x1d)) && (uVar3 != 0x1e)) &&((uVar3 != 0x23 && (uVar3 != 0x36)))) &&((uVar3 != 0x37 && ((uVar3 != 0x3d && (local_10.field2_0x8 = FLOAT_0038a838, uVar3 == 0x3b)))))) {
		local_10.field2_0x8 = FLOAT_0038adb8;
		}
		uVar3 = (uint)this->unlabelled16 >> 0xc & 7;
		local_10.field1_0x4 = local_10.field2_0x8;
		switch(uVar3) {
		case 2:local_10.soundId = local_10.soundId & 0xfff8ffff;
		case 0:case 1:PlaySoundTrack(uVar3,&local_10);
		return;
		case 3:local_10.soundId = local_10.soundId & 0xfff8ffff;
		FUN_00134110((int *)(ctx->parent).ctx,(uint *)&local_10,(int *)this->unlabelled28);
		default:return;
		}
		}
		
	*/
	return;
}

void ActionBeginMusic::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionBeginMusic::ExecuteFromCallContext(ActionBeginMusic *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

