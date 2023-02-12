#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAmIHarmful.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptAmIHarmful::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling  WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall PerceptAmIHarmful::GetUtilityScore(PerceptAmIHarmful *this,InstanceContext *param_1){
		float *pfVar1;
		float fVar2;
		float fVar3;
		InstanceContextRefCounter *pIVar4;
		InstanceTransform *pIVar5;
		Method8 *pMVar6;
		char cVar7;
		uint uVar8;
		InstanceNodeAbstract *pIVar9;
		InstanceContext *pIVar10;
		float fVar11;
		float local_280;
		float local_27c;
		float local_278;
		float local_274;
		float local_270;
		float local_26c;
		float local_268;
		float local_254;
		float local_250;
		float local_24c;
		float local_248;
		AutoClass14 local_234;
		InstanceContext *local_210 [131];
		uVar8 = (GameController4->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar8 == 6) {
		pIVar10 = (InstanceContext *)0x0;
		}
		else {
		pIVar4 = (GameController4->chunkDescriptor).playerInstanceContexts[uVar8];
		if (pIVar4 == (InstanceContextRefCounter *)0x0) {
		pIVar10 = (InstanceContext *)0x0;
		}
		else {
		pIVar10 = pIVar4->ctx;
		}
		}
		if (pIVar10 != (InstanceContext *)0x0) {
		uVar8 = FUN_00172520((int)(param_1->parent).ctx,(byte)((uint)(this->parent).PerceptID >> 0x11),&local_270,&local_250);
		if ((char)uVar8 != '\0') {
		pIVar5 = (pIVar10->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar11 = (pIVar5->matrix).m44;
		fVar2 = (pIVar5->matrix).m43;
		fVar3 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar3;
		(pIVar5->position).z = fVar2;
		(pIVar5->position).w = fVar11;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		local_280 = (pIVar5->position).x;
		local_27c = (pIVar5->position).y;
		local_278 = (pIVar5->position).z;
		local_274 = (pIVar5->position).w;
		if ((local_268 - local_278) * (local_268 - local_278) +(local_26c - local_27c) * (local_26c - local_27c) +(local_270 - local_280) * (local_270 - local_280) < FLOAT_0038ad68) {
		pIVar9 = InstanceDataList::GetNode(&pIVar10->nodes,Character);
		pMVar6 = pIVar9[1].vtable[4].Method8;
		if ((~(byte)(pIVar9[1].vtable)->Method8[0x1c] & 1) == 0) {
		fVar11 = *(float *)(pMVar6 + 0xc);
		}
		else {
		fVar11 = *(float *)(pMVar6 + 4);
		}
		local_27c = (fVar11 + local_27c) - local_26c;
		local_280 = local_280 - local_270;
		local_278 = local_278 - local_268;
		fVar11 = local_278 * local_278 + local_27c * local_27c + local_280 * local_280;
		if (fVar11 <= _DAT_0039d978) {
		fVar11 = 0.0;
		}
		else {
		local_254 = SQRT(fVar11);
		fVar11 = FLOAT_0038639c / local_254;
		}
		fVar11 = local_248 * local_278 * fVar11 + local_24c * local_27c * fVar11 +local_250 * fVar11 * local_280;
		pfVar1 = &(this->parent).Threshold;
		if (*pfVar1 <= fVar11 && fVar11 != *pfVar1) {
		AutoClass14::Construct(&local_234,local_210,0x80,0x10,1,0);
		FUN_00137280((int)&local_234,(int)(param_1->parent).ctx);
		cVar7 = FUN_001eb7a0((int)(((param_1->parent).ctx)->parent).chunkData,&local_270,&local_280,0x80,&local_234,0x15b010);
		if ((cVar7 == '\0') || (local_234.field9_0x20 == pIVar10)) {
		fVar11 = (this->parent).Threshold;
		return fVar11 + fVar11;
		}
		}
		}
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptAmIHarmful::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAmIHarmful * __fastcall PerceptAmIHarmful::Construct(PerceptAmIHarmful *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x238;
		(this->parent).vtable = &Percept_VT_AmIHarmful;
		return this;
		}
		
	*/
	return;
}

void PerceptAmIHarmful::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAmIHarmful * __thiscall PerceptAmIHarmful::Dispose(PerceptAmIHarmful *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

