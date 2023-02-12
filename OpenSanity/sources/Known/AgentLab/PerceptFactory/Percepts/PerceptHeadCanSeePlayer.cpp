#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptHeadCanSeePlayer.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptHeadCanSeePlayer::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling  WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall PerceptHeadCanSeePlayer::GetUtilityScore(PerceptHeadCanSeePlayer *this,InstanceContext *param_1){
		float *pfVar1;
		float fVar2;
		float fVar3;
		InstanceContextRefCounter *pIVar4;
		InstanceTransform *pIVar5;
		uint uVar6;
		InstanceNodeAbstract *pIVar7;
		InstanceContext *pIVar8;
		float fVar9;
		float local_50;
		float local_4c;
		float local_48;
		float local_44;
		float local_40;
		float local_3c;
		float local_38;
		float local_34;
		float local_30;
		float local_2c;
		float local_28;
		float local_20;
		float local_1c;
		float local_18;
		uVar6 = (GameController4->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar6 == 6) {
		pIVar8 = (InstanceContext *)0x0;
		}
		else {
		pIVar4 = (GameController4->chunkDescriptor).playerInstanceContexts[uVar6];
		if (pIVar4 == (InstanceContextRefCounter *)0x0) {
		pIVar8 = (InstanceContext *)0x0;
		}
		else {
		pIVar8 = pIVar4->ctx;
		}
		}
		if (pIVar8 != (InstanceContext *)0x0) {
		uVar6 = FUN_00172520((int)(param_1->parent).ctx,(byte)((uint)(this->parent).PerceptID >> 0x11),&local_30,&local_20);
		if ((char)uVar6 != '\0') {
		pIVar5 = (pIVar8->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar9 = (pIVar5->matrix).m44;
		fVar2 = (pIVar5->matrix).m43;
		fVar3 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar3;
		(pIVar5->position).z = fVar2;
		(pIVar5->position).w = fVar9;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		local_50 = (pIVar5->position).x;
		local_4c = (pIVar5->position).y;
		local_48 = (pIVar5->position).z;
		local_44 = (pIVar5->position).w;
		pIVar7 = InstanceDataList::GetNode(&pIVar8->nodes,Character);
		local_3c = *(float *)(pIVar7[1].vtable[4].Method8 + 4) + local_4c;
		local_40 = local_50;
		local_50 = local_50 - local_30;
		local_34 = local_44;
		local_2c = local_3c - local_2c;
		local_38 = local_48;
		local_48 = local_48 - local_28;
		fVar9 = local_48 * local_48 + local_2c * local_2c + local_50 * local_50;
		if (fVar9 <= _DAT_0039d978) {
		fVar9 = 0.0;
		}
		else {
		fVar9 = FLOAT_0038639c / SQRT(fVar9);
		}
		local_50 = fVar9 * local_50;
		local_4c = fVar9 * local_2c;
		local_48 = local_48 * fVar9;
		fVar9 = local_18 * local_48 + local_1c * local_4c + local_20 * local_50;
		pfVar1 = &(this->parent).Threshold;
		if (*pfVar1 <= fVar9 && fVar9 != *pfVar1) {
		uVar6 = FUN_001eab70((uint)(((param_1->parent).ctx)->parent).chunkData,&local_30,&local_40,0x80,(float *)0x0,&local_50,0);
		if ((char)uVar6 == '\0') {
		fVar9 = (this->parent).Threshold;
		return fVar9 + fVar9;
		}
		}
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptHeadCanSeePlayer::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptHeadCanSeePlayer * __fastcall PerceptHeadCanSeePlayer::Construct(PerceptHeadCanSeePlayer *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x22a;
		(this->parent).vtable = &Percept_VT_HeadCanSeePlayer;
		return this;
		}
		
	*/
	return;
}

void PerceptHeadCanSeePlayer::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptHeadCanSeePlayer * __thiscall PerceptHeadCanSeePlayer::Dispose(PerceptHeadCanSeePlayer *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

