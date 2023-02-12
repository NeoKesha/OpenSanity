#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0CD.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0CD::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0CD::Dispose(Action0x0CD *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0CD::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall Action0x0CD::ExecuteFromCallContext(Action0x0CD *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		float fVar2;
		InstanceContext *this_00;
		InstanceTransform *pIVar3;
		float fVar4;
		InstanceContext *local_40;
		float local_3c;
		float local_38;
		Matrix4 *local_34;
		float local_30;
		float local_2c;
		float local_28;
		float local_24;
		float local_20;
		float local_1c;
		undefined4 local_18;
		float local_14;
		local_24 = FLOAT_0038639c;
		this_00 = (ctx->parent).ctx;
		local_40 = (InstanceContext *)0x0;
		local_3c = 0.0;
		local_38 = 0.0;
		local_34 = (Matrix4 *)FLOAT_0038639c;
		if ((*(byte *)&(this_00->parent).field14_0x20.matrix2.m43 & 2) != 0) {
		local_40 = (this_00->parent).field14_0x20.field4_0x10;
		local_3c = (float)(this_00->parent).field14_0x20.field5_0x14;
		local_38 = (float)(this_00->parent).field14_0x20.field6_0x18;
		local_34 = (this_00->parent).field14_0x20.matrix1;
		}
		pIVar3 = (((this_00->parent).ctx)->parent).transform;
		if ((*(byte *)&pIVar3->field3_0x60 & 4) != 0) {
		fVar4 = (pIVar3->matrix).m44;
		fVar1 = (pIVar3->matrix).m43;
		fVar2 = (pIVar3->matrix).m42;
		(pIVar3->position).x = (pIVar3->matrix).m41;
		(pIVar3->position).y = fVar2;
		(pIVar3->position).z = fVar1;
		(pIVar3->position).w = fVar4;
		pIVar3->field3_0x60 = (float)((uint)pIVar3->field3_0x60 & 0xfffffffa);
		}
		local_28 = local_38 - (pIVar3->position).z;
		local_30 = (float)local_40 - (pIVar3->position).x;
		fVar4 = local_30 * local_30 + 0.0 + local_28 * local_28;
		if (fVar4 <= _DAT_004962e0) {
		fVar4 = 0.0;
		}
		else {
		fVar4 = local_24 / SQRT(fVar4);
		}
		local_30 = fVar4 * local_30;
		local_2c = fVar4 * 0.0;
		local_28 = local_28 * fVar4;
		local_20 = 0.0;
		local_1c = local_24;
		local_18 = 0;
		local_14 = local_24;
		FUN_000ebf10(&local_30,&local_20,(int)(this->unlabelled16 * FLOAT_003863a4),1);
		fVar4 = this->unlabelled12;
		local_40 = (InstanceContext *)(fVar4 * local_30 + (float)local_40);
		local_3c = local_2c * fVar4 + local_3c;
		local_38 = local_28 * fVar4 + local_38;
		InstanceContext::FUN_0016dda0(this_00,&local_40);
		return;
		}
		
	*/
	return;
}

void Action0x0CD::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0CD * __fastcall Action0x0CD::Construct(Action0x0CD *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0CD;
		this->unlabelled12 = 0.0;
		this->unlabelled16 = 0.0;
		return this;
		}
		
	*/
	return;
}

int Action0x0CD::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0CD::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

void Action0x0CD::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0CD::UnkMethod(Action0x0CD *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0xcd) {
		this->unlabelled12 = *(float *)(psVar2 + 2);
		}
		else if (*psVar2 == 0x132) {
		this->unlabelled16 = *(float *)(psVar2 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

