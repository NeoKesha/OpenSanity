#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0C2.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0C2::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0C2::Dispose(Action0x0C2 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0C2::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0C2 * __fastcall Action0x0C2::Construct(Action0x0C2 *this){
		uint uVar1;
		float fVar2;
		fVar2 = FLOAT_003869d8;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0C2;
		this->unlabelled12 = uVar1 & 0xfffeffff | 0xffff;
		this->unlabelled16 = (int)fVar2;
		return this;
		}
		
	*/
	return;
}

int Action0x0C2::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0C2::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

void Action0x0C2::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0C2::UnkMethod(Action0x0C2 *this,int *param_1){
		short sVar1;
		char cVar2;
		short *psVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		psVar3 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		sVar1 = *psVar3;
		if (sVar1 == 0x129) {
		if (*(uint *)(psVar3 + 2) < 0xff) {
		*(char *)&this->unlabelled12 = (char)*(uint *)(psVar3 + 2);
		}
		}
		else if (sVar1 == 0x12a) {
		if (*(uint *)(psVar3 + 2) < 0xff) {
		*(char *)((int)&this->unlabelled12 + 1) = (char)*(uint *)(psVar3 + 2);
		}
		}
		else if (((sVar1 == -1) && (*(char *)(psVar3 + 1) == '\x04')) && (*(int *)(psVar3 + 2) == 0x114)) {
		this->unlabelled12 = this->unlabelled12 | 0x10000;
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x0C2::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0C2::ExecuteFromCallContext(Action0x0C2 *this,undefined4 time_clock,InstanceContext *ctx){
		int *piVar1;
		InstanceContext *this_00;
		this_00 = (ctx->parent).ctx;
		InstanceNodeAbstract::FUN_0016ebf0((InstanceNodeAbstract *)this_00,*(undefined *)&this->unlabelled12,*(undefined *)((int)&this->unlabelled12 + 1),this->unlabelled16);
		if ((*(byte *)((int)&this->unlabelled12 + 2) & 1) != 0) {
		piVar1 = &this_00->field33_0x158;
		*piVar1 = *piVar1 | 2;
		}
		return;
		}
		
	*/
	return;
}

