#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x083.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x083::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x083::Dispose(Action0x083 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x083::ExecuteFromCallContext(int time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x083::ExecuteFromCallContext(Action0x083 *this,int time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceContext *pIVar2;
		InstanceNodeAbstract_VTable *pIVar3;
		InstanceNodeAbstract *this_00;
		byte bVar4;
		InstanceContext *pIVar5;
		InstanceNodeAbstract *pIVar6;
		int iVar7;
		InstanceNodeAbstract *this_01;
		float fVar8;
		float local_40;
		float local_3c;
		float local_38;
		float local_34;
		InstanceContext *local_30;
		AutoClass40 *local_2c;
		float local_28;
		float local_24;
		Vector4 local_20;
		pIVar1 = (ctx->parent).ctx;
		if (((pIVar1 != (InstanceContext *)0x0) &&(fVar8 = (pIVar1->parent).field14_0x20.matrix2.m43, ((uint)fVar8 & 1) != 0)) &&(pIVar2 = (pIVar1->parent).field14_0x20.field4_0x10, pIVar2 != (InstanceContext *)0x0)) {
		if ((*(byte *)&(pIVar2->parent).flags & 1) != 0) {
		(pIVar1->parent).field14_0x20.field4_0x10 = (InstanceContext *)0x0;
		(pIVar1->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar8 & 0xfffffffc);
		return;
		}
		pIVar5 = (InstanceContext *)FUN_0016edc0((int)pIVar2);
		if (pIVar5 != (InstanceContext *)0x0) {
		pIVar6 = FUN_0016ebb0(pIVar5);
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)(pIVar1->parent).ctx,&local_20);
		local_40 = 0.0;
		local_3c = 0.0;
		local_38 = 0.0;
		local_34 = FLOAT_0038639c;
		FUN_001653a0((int)pIVar6,&local_20.x,&local_40);
		iVar7 = *(int *)&(pIVar1->parent).field_0xc;
		if (iVar7 == 0) {
		iVar7 = 0;
		}
		else {
		iVar7 = *(int *)(time_clock + 4) - iVar7;
		}
		fVar8 = (float)iVar7 * TimePerTick1;
		local_40 = local_40 * fVar8;
		local_3c = local_3c * fVar8;
		local_38 = local_38 * fVar8;
		FUN_0017b310(pIVar1);
		pIVar6 = (pIVar1->nodes).array[0x11];
		if (pIVar6 != (InstanceNodeAbstract *)0x0) {
		pIVar3 = pIVar6[6].vtable;
		pIVar6[5].field6_0x14 = pIVar6[5].field6_0x14 | 0x3000000;
		pIVar6[6].vtable = (InstanceNodeAbstract_VTable *)((uint)pIVar3 & 0xffff87ff);
		local_30 = (pIVar1->parent).field14_0x20.ctx;
		local_2c = (pIVar1->parent).field14_0x20.field1_0x4;
		local_28 = (float)(pIVar1->parent).field14_0x20.field2_0x8;
		local_24 = FLOAT_0038639c;
		if ((*(byte *)&(pIVar2->parent).flags & 0x40) != 0) {
		this_01 = InstanceDataList::GetNode((InstanceDataList *)(pIVar2->field27_0xe0 + 0xe4),Instance);
		bVar4 = (*this_01->vtable[1].GetIndex)();
		if ((bVar4 != 0) &&(this_00 = (InstanceNodeAbstract *)this_01[0xc].time,this_00 != (InstanceNodeAbstract *)0x0)) {
		thunk_FUN_0005a6c0((int)this_01,&local_30);
		local_24 = FLOAT_0038639c;
		local_30 = (InstanceContext *)(((float)local_30 + local_20.x) * FLOAT_00386ab4);
		local_40 = local_40 * FLOAT_00386ab4;
		local_3c = local_3c * FLOAT_00386ab4;
		local_2c = (AutoClass40 *)((local_20.y + (float)local_2c) * FLOAT_00386ab4);
		local_28 = (local_20.z + local_28) * FLOAT_00386ab4;
		local_38 = local_38 * FLOAT_00386ab4;
		InstanceNodeAbstract::FUN_0015eb60(pIVar6,&local_40,(float *)&local_30);
		local_40 = 0.0 - local_40;
		local_3c = 0.0 - local_3c;
		local_38 = 0.0 - local_38;
		InstanceNodeAbstract::FUN_0015eb60(this_00,&local_40,(float *)&local_30);
		return;
		}
		}
		InstanceNodeAbstract::FUN_0015eb60(pIVar6,&local_40,(float *)&local_30);
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void Action0x083::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x083::Construct(Action0x083 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x083;
		return;
		}
		
	*/
	return;
}

int Action0x083::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x083::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

