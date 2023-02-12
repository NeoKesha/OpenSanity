#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x258.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x258::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x258::ExecuteFromCallContext(Action0x258 *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceContext *this_00;
		InstanceContext *this_01;
		ChunkData *pCVar4;
		InstanceTransform *pIVar5;
		ChunkData *this_02;
		void *this_03;
		bool bVar6;
		InstanceNodeAbstract *pIVar7;
		InstanceContext *pIVar8;
		uint *puVar9;
		Vector4 local_30;
		float local_20;
		float local_1c;
		float local_18;
		this_00 = (ctx->parent).ctx;
		this_01 = (this_00->parent).ctx;
		pIVar7 = InstanceDataList::GetNode(&this_01->nodes,Character);
		if (pIVar7 != (InstanceNodeAbstract *)0x0) {
		pIVar8 = (InstanceContext *)PTR_00496350;
		if (PTR_00496350 != (InstanceContextRefCounter *)0x0) {
		pIVar8 = PTR_00496350->ctx;
		}
		pCVar4 = (pIVar8->parent).chunkData;
		pIVar5 = (pIVar8->parent).transform;
		this_02 = (this_01->parent).chunkData;
		if ((*(byte *)((Vector4 *)(&pIVar5->matrix + 1) + 2) & 4) != 0) {
		fVar1 = (pIVar5->matrix).m44;
		fVar2 = (pIVar5->matrix).m43;
		fVar3 = (pIVar5->matrix).m42;
		((Vector4 *)(&pIVar5->matrix + 1))->x = (pIVar5->matrix).m41;
		((Vector4 *)(&pIVar5->matrix + 1))->y = fVar3;
		((Vector4 *)(&pIVar5->matrix + 1))->z = fVar2;
		((Vector4 *)(&pIVar5->matrix + 1))->w = fVar1;
		*(uint *)((Vector4 *)(&pIVar5->matrix + 1) + 2) =(uint)((Vector4 *)(&pIVar5->matrix + 1))[2].x & 0xfffffffa;
		}
		if (this_02 != pCVar4) {
		puVar9 = (uint *)FUN_00138490((int)this_02,(int)pCVar4);
		if ((puVar9 != (uint *)0x0) && ((*puVar9 >> 0x12 & 1) != 0)) {
		this_03 = (void *)puVar9[0x24];
		fVar1 = *(float *)((int)this_03 + 0x40);
		fVar2 = *(float *)((int)this_03 + 0x44);
		fVar3 = *(float *)((int)this_03 + 0x48);
		FUN_00137ea0(this_03,&local_20);
		local_30.w = FLOAT_0038639c;
		local_30.x = fVar1 * FLOAT_00386ab4 + local_20;
		local_30.y = local_1c + fVar2 * FLOAT_00386ab4;
		local_30.z = local_18 + fVar3 * FLOAT_00386ab4;
		bVar6 = InstanceTransform::SetupPosition((this_01->parent).transform,&local_30);
		if (bVar6 != false) {
		InstanceContext::RegisterCtxPtrToList(this_01);
		}
		thunk_FUN_000276e0((int)this_00,&local_30);
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void Action0x258::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x258::Dispose(Action0x258 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x258::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x258::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

int Action0x258::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x258::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x258::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x258::Construct(Action0x258 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x258;
		return;
		}
		
	*/
	return;
}

