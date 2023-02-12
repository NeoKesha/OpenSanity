#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x07B.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x07B::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x07B::Dispose(Action0x07B *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x07B::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x07B::ExecuteFromCallContext(Action0x07B *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceContext *pIVar4;
		InstanceTransform *pIVar5;
		int this_00;
		float *pfVar6;
		InstanceNodeObjectLink *this_01;
		float local_20;
		float local_1c;
		float local_18;
		float local_14;
		pIVar4 = (((ctx->parent).ctx)->parent).ctx;
		this_00 = UnkFamily16A::FUN_001b3ac0(PTR_DefaultRM,pIVar4);
		pIVar5 = (pIVar4->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar1 = (pIVar5->matrix).m44;
		fVar2 = (pIVar5->matrix).m43;
		fVar3 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar3;
		(pIVar5->position).z = fVar2;
		(pIVar5->position).w = fVar1;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		local_20 = (pIVar5->position).x;
		local_1c = (pIVar5->position).y;
		local_18 = (pIVar5->position).z;
		local_14 = (pIVar5->position).w;
		pfVar6 = FUN_001b1cc0(this_00,&local_20,(ushort *)0x0);
		if ((pfVar6 != (float *)0x0) &&((local_18 - pfVar6[2]) * (local_18 - pfVar6[2]) +(local_1c - pfVar6[1]) * (local_1c - pfVar6[1]) + (local_20 - *pfVar6) * (local_20 - *pfVar6)< FLOAT_0038d38c)) {
		this_01 = InstanceNodeObjectLink::Build((int)pIVar4);
		InstanceNodeObjectLink::FUN_000f9df0(this_01,pIVar4,pfVar6);
		}
		return;
		}
		
	*/
	return;
}

void Action0x07B::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x07B::Construct(Action0x07B *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x07B;
		return;
		}
		
	*/
	return;
}

int Action0x07B::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x07B::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

