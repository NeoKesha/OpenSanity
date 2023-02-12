#include "headers/Known/AgentLab/ActionFactory/Actions/ActionToggleCutsceneCamera.h"

void ActionToggleCutsceneCamera::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionToggleCutsceneCamera::ExecuteFromCallContext(ActionToggleCutsceneCamera *this){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		InstanceContextRefCounter *pIVar8;
		InstanceNodeAbstract *pIVar9;
		uint uVar10;
		uint uVar11;
		InstanceContext *pIVar12;
		InstanceNodeAbstract *pIVar13;
		int local_38;
		int local_34;
		InstanceNodeAbstract_VTable *local_30;
		InstanceContext *local_2c;
		float local_28;
		float local_14;
		uVar11 = this->arg1;
		uVar10 = uVar11 & 7;
		if (uVar10 == 0) {
		if ((float)this->arg2 <= FLOAT_00386394) {
		GameController::thunk_FUN_000bc490(GameController1,0,(byte)(uVar11 >> 4) & 1);
		}
		else {
		local_34 = (int)((float)this->arg2 * TicksPerTime);
		GameController::thunk_FUN_000ba6c0(GameController1,0,&local_34,(byte)((uint)this->arg1 >> 4) & 1,(byte)((uint)this->arg1 >> 5) & 7);
		}
		if ((*(byte *)&this->arg1 & 8) != 0) {
		uVar11 = (GameController1->chunkDescriptor).flags >> 8 & 0xf;
		if ((uVar11 == 6) ||(pIVar8 = (GameController1->chunkDescriptor).playerInstanceContexts[uVar11],pIVar8 == (InstanceContextRefCounter *)0x0)) {
		pIVar12 = (InstanceContext *)0x0;
		}
		else {
		pIVar12 = pIVar8->ctx;
		}
		pIVar13 = InstanceDataList::GetNode(&pIVar12->nodes,Camera);
		local_14 = (GameController1->unkStruct3).struct4.parent.vec1.w;
		fVar1 = (GameController1->unkStruct3).struct4.parent.vec2.y;
		fVar2 = (GameController1->unkStruct3).struct4.parent.vec2.z;
		fVar3 = (GameController1->unkStruct3).struct4.parent.vec2.w;
		fVar4 = (GameController1->unkStruct3).struct4.parent.vec1.x;
		fVar5 = (GameController1->unkStruct3).struct4.parent.vec1.y;
		fVar6 = (GameController1->unkStruct3).struct4.parent.vec1.z;
		local_30 = (InstanceNodeAbstract_VTable *)(GameController1->unkStruct3).struct3.parent.field27_0x30.x;
		local_2c = (InstanceContext *)(GameController1->unkStruct3).struct3.parent.field27_0x30.y;
		local_28 = (GameController1->unkStruct3).struct3.parent.field27_0x30.z;
		fVar7 = (GameController1->unkStruct3).struct3.parent.field27_0x30.w;
		uVar11 = pIVar13[4].field6_0x14;
		*(float *)(uVar11 + 0x30) = (GameController1->unkStruct3).struct4.parent.vec2.x;
		*(float *)(uVar11 + 0x34) = fVar1;
		*(float *)(uVar11 + 0x38) = fVar2;
		*(float *)(uVar11 + 0x3c) = fVar3;
		uVar11 = pIVar13[4].field6_0x14;
		*(float *)(uVar11 + 0x2c) = local_14;
		*(float *)(uVar11 + 0x20) = fVar4;
		*(float *)(uVar11 + 0x24) = fVar5;
		*(float *)(uVar11 + 0x28) = fVar6;
		pIVar9 = pIVar13[4].field5_0x10;
		pIVar9[2].vtable = local_30;
		pIVar9[2].ctx = local_2c;
		*(float *)&pIVar9[2].field2_0x8 = local_28;
		pIVar9[2].time = (uint)fVar7;
		FUN_001cdd30((void *)pIVar13[4].field6_0x14);
		}
		}
		else {
		if (uVar10 == 1) {
		if (FLOAT_00386394 < (float)this->arg2) {
		local_38 = (int)((float)this->arg2 * TicksPerTime);
		GameController::thunk_FUN_000ba6c0(GameController1,3,&local_38,'\0',(byte)(uVar11 >> 5) & 7);
		return;
		}
		GameController::thunk_FUN_000bc490(GameController1,3,'\x01');
		return;
		}
		if (uVar10 == 2) {
		GameController::thunk_FUN_000bc490(GameController1,4,(byte)(uVar11 >> 4) & 1);
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionToggleCutsceneCamera::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionToggleCutsceneCamera::Dispose(ActionToggleCutsceneCamera *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionToggleCutsceneCamera::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionToggleCutsceneCamera * __fastcall ActionToggleCutsceneCamera::Construct(ActionToggleCutsceneCamera *this){
		uint uVar1;
		uVar1 = this->arg1;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ToggleCutsceneCamera;
		this->arg1 = uVar1 & 0xffffff00;
		this->arg2 = 0;
		return this;
		}
		
	*/
	return;
}

int ActionToggleCutsceneCamera::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionToggleCutsceneCamera::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

