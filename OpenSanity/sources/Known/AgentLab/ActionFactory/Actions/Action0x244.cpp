#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x244.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x244::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x244::Dispose(Action0x244 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x244::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x244::ExecuteFromCallContext(Action0x244 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceTransform *transform;
		int iVar2;
		int *piVar3;
		Vector4 local_30;
		float local_20;
		int local_1c;
		int local_18;
		float local_14;
		pIVar1 = (((ctx->parent).ctx)->parent).ctx;
		iVar2 = thunk_FUN_00066e10((int)pIVar1);
		if (((iVar2 != 0) && (*(int **)(iVar2 + 0x200) != (int *)0x0)) &&(iVar2 = **(int **)(iVar2 + 0x200), iVar2 != 0)) {
		piVar3 = FUN_0016edc0(iVar2);
		if ((piVar3 != (int *)0x0) && (iVar2 = piVar3[0x4b], iVar2 != 0)) {
		FUN_0017b310(piVar3);
		local_30.x = this->unlabelled16;
		local_30.y = this->unlabelled20;
		local_30.z = this->unlabelled24;
		local_30.w = this->unlabelled28;
		transform = (pIVar1->parent).transform;
		InstanceTransform::FillMatrix(transform);
		InstanceTransform::FUN_000d3ed0(transform,&local_30);
		local_20 = (float)piVar3[8];
		local_1c = piVar3[9];
		local_18 = piVar3[10];
		local_14 = FLOAT_0038639c;
		FUN_0015ea30(iVar2,&local_30.x,&local_20);
		}
		}
		return;
		}
		
	*/
	return;
}

void Action0x244::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x244::Construct(Action0x244 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x244;
		return;
		}
		
	*/
	return;
}

int Action0x244::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x244::GetSize(void){
		return 0x20;
		}
		
	*/
	return 0;
}

void Action0x244::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x244::UnkMethod(Action0x244 *this,int *param_1){
		short sVar1;
		char cVar2;
		short *psVar3;
		IteratorE2 local_10;
		this->unlabelled16 = Vector4_0039ef70.x;
		this->unlabelled20 = Vector4_0039ef70.y;
		this->unlabelled24 = Vector4_0039ef70.z;
		this->unlabelled28 = FLOAT_0038639c;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		psVar3 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		sVar1 = *psVar3;
		if (sVar1 == 0x49) {
		this->unlabelled16 = *(float *)(psVar3 + 2);
		}
		else if (sVar1 == 0x4a) {
		this->unlabelled20 = *(float *)(psVar3 + 2);
		}
		else if (sVar1 == 0x4b) {
		this->unlabelled24 = *(float *)(psVar3 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

