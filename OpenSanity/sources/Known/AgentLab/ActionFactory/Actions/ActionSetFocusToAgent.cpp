#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetFocusToAgent.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetFocusToAgent::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetFocusToAgent::Dispose(ActionSetFocusToAgent *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetFocusToAgent::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetFocusToAgent::ExecuteFromCallContext(ActionSetFocusToAgent *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		int iVar1;
		InstanceNodeCharacter *this_00;
		InstanceNodeCharacter *local_24;
		Vector4 local_20;
		local_24 = (InstanceNodeCharacter *)0x0;
		switch(*(undefined *)&this->unlabelled12) {
		case 0xde:this_00 = (InstanceNodeCharacter *)((((ctx->parent).ctx)->parent).ctx)->field27_0xe0;
		break;
		case 0xdf:iVar1 = ((((ctx->parent).ctx)->parent).ctx)->field36_0x164;
		if (iVar1 == -1) {
		return;
		}
		if (UF16SUB->array + iVar1 * 2 == (int *)0x0) {
		return;
		}
		this_00 = (InstanceNodeCharacter *)(UF16SUB->array + iVar1 * 2)[1];
		break;
		default:this_00 = *(InstanceNodeCharacter **)((ctx->parent).flags + 4 + (uint)*(byte *)&this->unlabelled12 * 4);
		break;
		case 0xf7:this_00 = (InstanceNodeCharacter *)thunk_FUN_00054db0((int)(ctx->parent).ctx);
		break;
		case 0xf8:this_00 = (InstanceNodeCharacter *)thunk_FUN_00054d80((int)(ctx->parent).ctx);
		break;
		case 0xfb:InstanceContext::thunk_FUN_00054ce0((ctx->parent).ctx,(int *)&local_24);
		this_00 = local_24;
		}
		if (this_00 != (InstanceNodeCharacter *)0x0) {
		switch((*(ushort *)&this->unlabelled12 & 0x700) >> 8) {
		case 0:thunk_FUN_00027370((int)(ctx->parent).ctx,(int)this_00);
		return;
		case 1:(((ctx->parent).ctx)->nodes).array[0xc] = &this_00->parent;
		return;
		case 2:(((ctx->parent).ctx)->nodes).array[0xd] = &this_00->parent;
		return;
		case 3:InstanceNodeCharacter::GetPosition(this_00,&local_20);
		InstanceContext::FUN_0016dda0((ctx->parent).ctx,&local_20.x);
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionSetFocusToAgent::Construct(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetFocusToAgent * __thiscall ActionSetFocusToAgent::Construct(ActionSetFocusToAgent *this,byte param_1){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetFocusToAgent;
		*(ushort *)&this->unlabelled12 =((ushort)param_1 << 8 ^ *(ushort *)&this->unlabelled12) & 0x700 ^*(ushort *)&this->unlabelled12 | 0xff;
		return this;
		}
		
	*/
	return;
}

void ActionSetFocusToAgent::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetFocusToAgent::UnkMethod(ActionSetFocusToAgent *this,int *param_1){
		uint uVar1;
		char cVar2;
		short *psVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		psVar3 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar3 == 6) {
		*(undefined *)&this->unlabelled12 = *(undefined *)(psVar3 + 2);
		}
		else if (*psVar3 == -1) {
		uVar1 = *(uint *)(psVar3 + 2);
		if (uVar1 < 0x76) {
		if (uVar1 == 0x75) {
		*(undefined *)&this->unlabelled12 = 0xf7;
		}
		else if (uVar1 == 0x1c) {
		*(undefined *)&this->unlabelled12 = 0xfb;
		}
		else if (uVar1 == 0x74) {
		*(undefined *)&this->unlabelled12 = 0xf8;
		}
		}
		else if (uVar1 == 0xce) {
		*(undefined *)&this->unlabelled12 = 0xdf;
		}
		else if (uVar1 == 0x11d) {
		*(undefined *)&this->unlabelled12 = 0xde;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

int ActionSetFocusToAgent::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetFocusToAgent::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

