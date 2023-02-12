#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x082.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x082::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x082::Dispose(Action0x082 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x082::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x082 * __fastcall Action0x082::Construct(Action0x082 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x082;
		this->unlabelled12 = 0;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		return this;
		}
		
	*/
	return;
}

int Action0x082::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x082::GetSize(void){
		return 0x1c;
		}
		
	*/
	return 0;
}

void Action0x082::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x082::UnkMethod(Action0x082 *this,int *param_1){
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
		if (sVar1 == 0xcc) {
		this->unlabelled16 = *(int *)(psVar3 + 2);
		}
		else if (sVar1 == 0xcd) {
		this->unlabelled12 = *(int *)(psVar3 + 2);
		}
		else if ((sVar1 == -1) && (*(char *)(psVar3 + 1) == '\x04')) {
		switch(*(undefined4 *)(psVar3 + 2)) {
		case 0xa7:this->unlabelled24 = 2;
		break;
		case 0xa8:this->unlabelled24 = 1;
		break;
		case 0xa9:this->unlabelled20 = 0;
		break;
		case 0xaa:this->unlabelled20 = 1;
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

void Action0x082::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x082::ExecuteFromCallContext(Action0x082 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceNodeAbstract *pIVar2;
		InstanceNodeAbstract_VTable *pIVar3;
		pIVar1 = (ctx->parent).ctx;
		if (pIVar1 != (InstanceContext *)0x0) {
		pIVar2 = FUN_0016ebb0(pIVar1);
		if (pIVar2 != (InstanceNodeAbstract *)0x0) {
		*(int *)&pIVar2[6].field2_0x8 = this->unlabelled12;
		pIVar2[6].time = this->unlabelled16;
		pIVar3 = (InstanceNodeAbstract_VTable *)((uint)pIVar2[6].vtable ^((uint)*(ushort *)&this->unlabelled24 << 6 ^ (uint)pIVar2[6].vtable) & 0xc0);
		pIVar2[6].vtable = pIVar3;
		pIVar2[6].vtable =(InstanceNodeAbstract_VTable *)(((uint)*(ushort *)&this->unlabelled20 << 8 ^ (uint)pIVar3) & 0x300 ^ (uint)pIVar3);
		}
		}
		return;
		}
		
	*/
	return;
}

