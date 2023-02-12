#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptPlayerHeadCanSeeMe.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptPlayerHeadCanSeeMe::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall PerceptPlayerHeadCanSeeMe::GetUtilityScore(PerceptPlayerHeadCanSeeMe *this,InstanceContext *param_1){
		float *pfVar1;
		float fVar2;
		float fVar3;
		InstanceContextRefCounter *pIVar4;
		InstanceTransform *pIVar5;
		Method8 *pMVar6;
		uint uVar7;
		InstanceNodeAbstract *pIVar8;
		InstanceContext *pIVar9;
		float fVar10;
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
		uVar7 = (GameController4->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar7 == 6) {
		pIVar9 = (InstanceContext *)0x0;
		}
		else {
		pIVar4 = (GameController4->chunkDescriptor).playerInstanceContexts[uVar7];
		if (pIVar4 == (InstanceContextRefCounter *)0x0) {
		pIVar9 = (InstanceContext *)0x0;
		}
		else {
		pIVar9 = pIVar4->ctx;
		}
		}
		if (pIVar9 != (InstanceContext *)0x0) {
		uVar7 = FUN_00172520((int)pIVar9,(byte)((uint)(this->parent).PerceptID >> 0x11),&local_30,&local_20);
		if ((char)uVar7 != '\0') {
		pIVar5 = (((param_1->parent).ctx)->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar10 = (pIVar5->matrix).m44;
		fVar2 = (pIVar5->matrix).m43;
		fVar3 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar3;
		(pIVar5->position).z = fVar2;
		(pIVar5->position).w = fVar10;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		local_50 = (pIVar5->position).x;
		local_4c = (pIVar5->position).y;
		local_48 = (pIVar5->position).z;
		local_44 = (pIVar5->position).w;
		pIVar8 = InstanceDataList::GetNode(&pIVar9->nodes,Character);
		pMVar6 = pIVar8[1].vtable[4].Method8;
		if ((~(byte)(pIVar8[1].vtable)->Method8[0x1c] & 1) == 0) {
		local_3c = *(float *)(pMVar6 + 0xc);
		}
		else {
		local_3c = *(float *)(pMVar6 + 4);
		}
		local_3c = local_4c + local_3c;
		local_40 = local_50;
		local_50 = local_50 - local_30;
		local_2c = local_3c - local_2c;
		local_38 = local_48;
		local_48 = local_48 - local_28;
		local_34 = local_44;
		fVar10 = local_48 * local_48 + local_2c * local_2c + local_50 * local_50;
		if (fVar10 <= _DAT_0039d978) {
		fVar10 = 0.0;
		}
		else {
		fVar10 = FLOAT_0038639c / SQRT(fVar10);
		}
		local_50 = fVar10 * local_50;
		local_4c = fVar10 * local_2c;
		local_48 = local_48 * fVar10;
		fVar10 = local_18 * local_48 + local_1c * local_4c + local_20 * local_50;
		pfVar1 = &(this->parent).Threshold;
		if (*pfVar1 <= fVar10 && fVar10 != *pfVar1) {
		uVar7 = FUN_001eab70((uint)(((param_1->parent).ctx)->parent).chunkData,&local_30,&local_40,0x80,(float *)0x0,&local_50,0);
		if ((char)uVar7 == '\0') {
		fVar10 = (this->parent).Threshold;
		return fVar10 + fVar10;
		}
		}
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptPlayerHeadCanSeeMe::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptPlayerHeadCanSeeMe * __fastcall PerceptPlayerHeadCanSeeMe::Construct(PerceptPlayerHeadCanSeeMe *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x22c;
		(this->parent).vtable = &Percept_VT_PlayerHeadCanSeeMe;
		return this;
		}
		
	*/
	return;
}

void PerceptPlayerHeadCanSeeMe::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptPlayerHeadCanSeeMe * __thiscall PerceptPlayerHeadCanSeeMe::Dispose(PerceptPlayerHeadCanSeeMe *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

