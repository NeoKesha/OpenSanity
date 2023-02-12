#include "headers/Known/AgentLab/ActionFactory/Actions/ActionDestroyMe.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionDestroyMe::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionDestroyMe::Dispose(ActionDestroyMe *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionDestroyMe::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionDestroyMe * __fastcall ActionDestroyMe::Construct(ActionDestroyMe *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_DestroyMe;
		this->unlabelled12 = uVar1 & 0xffffffc0;
		return this;
		}
		
	*/
	return;
}

void ActionDestroyMe::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDestroyMe::UnkMethod(ActionDestroyMe *this,int *param_1){
		char cVar1;
		short *psVar2;
		uint uVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar1 != '\0') {
		return;
		}
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if ((*psVar2 != -1) || (*(char *)(psVar2 + 1) != '\x04')) goto switchD_0018ffda_caseD_61;
		switch(*(undefined4 *)(psVar2 + 2)) {
		case 0x5e:uVar3 = this->unlabelled12 & 0xffffffd7U | 0x10;
		goto LAB_00190011;
		case 0x5f:this->unlabelled12 = this->unlabelled12 & 0xffffffcfU | 8;
		break;
		case 0x60:uVar3 = this->unlabelled12 & 0xfffffff9U | 1;
		LAB_00190011:this->unlabelled12 = uVar3;
		break;
		case 0x6d:this->unlabelled12 = this->unlabelled12 & 0xfffffffaU | 2;
		}
		switchD_0018ffda_caseD_61:IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void ActionDestroyMe::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDestroyMe::ExecuteFromCallContext(ActionDestroyMe *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceContext *this_00;
		InstanceContext *this_01;
		byte unaff_SI;
		this_00 = (ctx->parent).ctx;
		this_01 = (this_00->parent).ctx;
		if (((byte)this->unlabelled12 & 7) < 3) {
		(*(this_00->parent).vtable[2].Dispose)(this_00,unaff_SI);
		(*((this_01->parent).vtable)->Method2)(this_01);
		}
		return;
		}
		
	*/
	return;
}

int ActionDestroyMe::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionDestroyMe::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

