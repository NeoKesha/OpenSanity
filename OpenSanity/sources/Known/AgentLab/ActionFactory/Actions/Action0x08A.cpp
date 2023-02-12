#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x08A.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x08A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x08A::Dispose(Action0x08A *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x08A::ExecuteFromCallContext(int time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x08A::ExecuteFromCallContext(Action0x08A *this,int time_clock,InstanceContext *ctx){
		float fVar1;
		InstanceContext *pIVar2;
		InstanceNodeAbstract *pIVar3;
		int iVar4;
		InstanceNodeAbstract *pIVar5;
		InstanceNodeAbstract_VTable *pIVar6;
		float local_30;
		float local_2c;
		float local_28;
		InstanceContext *local_24;
		InstanceContext *local_20;
		AutoClass40 *local_1c;
		undefined4 local_18;
		float local_14;
		pIVar2 = (ctx->parent).ctx;
		if ((pIVar2 != (InstanceContext *)0x0) &&(pIVar3 = (pIVar2->nodes).array[10], pIVar3 != (InstanceNodeAbstract *)0x0)) {
		pIVar5 = (InstanceNodeAbstract *)0x0;
		pIVar6 = (InstanceNodeAbstract_VTable *)0x0;
		local_24 = (InstanceContext *)FLOAT_0038639c;
		if (this->unlabelled12 == 0) {
		local_24 = pIVar3[5].ctx;
		pIVar5 = pIVar3[4].field5_0x10;
		pIVar6 = pIVar3[5].vtable;
		}
		fVar1 = (float)this->unlabelled16;
		iVar4 = *(int *)&(pIVar2->parent).field_0xc;
		if (iVar4 == 0) {
		iVar4 = 0;
		}
		else {
		iVar4 = *(int *)(time_clock + 4) - iVar4;
		}
		local_28 = (float)iVar4 * TimePerTick1;
		local_30 = (float)pIVar5 * fVar1 * local_28;
		local_2c = fVar1 * 0.0 * local_28;
		local_28 = (float)pIVar6 * fVar1 * local_28;
		FUN_0017b310(pIVar2);
		pIVar3 = (pIVar2->nodes).array[0x11];
		if (pIVar3 != (InstanceNodeAbstract *)0x0) {
		pIVar6 = pIVar3[6].vtable;
		pIVar3[5].field6_0x14 = pIVar3[5].field6_0x14 | 0x3000000;
		pIVar3[6].vtable = (InstanceNodeAbstract_VTable *)((uint)pIVar6 & 0xffff87ff);
		local_20 = (pIVar2->parent).field14_0x20.ctx;
		local_1c = (pIVar2->parent).field14_0x20.field1_0x4;
		local_18 = (pIVar2->parent).field14_0x20.field2_0x8;
		local_14 = FLOAT_0038639c;
		InstanceNodeAbstract::FUN_0015eb60(pIVar3,&local_30,(float *)&local_20);
		}
		}
		return;
		}
		
	*/
	return;
}

void Action0x08A::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x08A * __fastcall Action0x08A::Construct(Action0x08A *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x08A;
		this->unlabelled12 = 0;
		this->unlabelled16 = 0;
		return this;
		}
		
	*/
	return;
}

int Action0x08A::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x08A::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

void Action0x08A::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x08A::UnkMethod(Action0x08A *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0xd6) {
		this->unlabelled16 = *(int *)(psVar2 + 2);
		}
		else if (*psVar2 == -1) {
		switch(*(undefined4 *)(psVar2 + 2)) {
		case 0xad:this->unlabelled12 = 0;
		break;
		case 0xae:this->unlabelled12 = 1;
		break;
		case 0xaf:this->unlabelled12 = 2;
		break;
		case 0xb3:this->unlabelled12 = 3;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

