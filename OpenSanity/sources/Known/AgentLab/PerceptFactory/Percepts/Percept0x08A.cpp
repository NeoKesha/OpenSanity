#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x08A.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x08A::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x08A::GetUtilityScore(Percept0x08A *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceTransform *pIVar4;
		InstanceNodeAbstract *pIVar5;
		InstanceNodeAbstract_VTable *pIVar6;
		bool bVar7;
		bool bVar8;
		Method8 *pMVar9;
		Step *pSVar10;
		InstanceContext *pIVar11;
		InstanceContext *local_20;
		Step *local_1c;
		Method8 *local_18;
		fVar3 = (param_1->parent).field14_0x20.matrix2.m43;
		bVar8 = true;
		if ((((uint)fVar3 & 1) != 0) &&(pIVar11 = (param_1->parent).field14_0x20.field4_0x10, pIVar11 != (InstanceContext *)0x0)) {
		if ((*(byte *)&(pIVar11->parent).flags & 1) == 0) {
		pIVar4 = (pIVar11->parent).transform;
		if ((*(byte *)&pIVar4->field3_0x60 & 4) != 0) {
		fVar3 = (pIVar4->matrix).m44;
		fVar1 = (pIVar4->matrix).m43;
		fVar2 = (pIVar4->matrix).m42;
		(pIVar4->position).x = (pIVar4->matrix).m41;
		(pIVar4->position).y = fVar2;
		(pIVar4->position).z = fVar1;
		(pIVar4->position).w = fVar3;
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffffa);
		}
		pIVar11 = (InstanceContext *)(pIVar4->position).x;
		pSVar10 = (Step *)(pIVar4->position).y;
		pMVar9 = (Method8 *)(pIVar4->position).z;
		goto LAB_0016018b;
		}
		(param_1->parent).field14_0x20.field4_0x10 = (InstanceContext *)0x0;
		(param_1->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar3 & 0xfffffffc);
		}
		if ((*(byte *)&(param_1->parent).field14_0x20.matrix2.m43 & 2) == 0) {
		bVar8 = false;
		pMVar9 = local_18;
		pSVar10 = local_1c;
		pIVar11 = local_20;
		}
		else {
		pMVar9 = (Method8 *)(param_1->parent).field14_0x20.field6_0x18;
		pSVar10 = (Step *)(param_1->parent).field14_0x20.field5_0x14;
		pIVar11 = (param_1->parent).field14_0x20.field4_0x10;
		}
		LAB_0016018b:pIVar5 = (param_1->nodes).array[0xc];
		bVar7 = true;
		if ((pIVar5 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar5->field6_0x14 & 1) != 0)) {
		(param_1->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		pIVar5 = (param_1->nodes).array[0xc];
		if (pIVar5 == (InstanceNodeAbstract *)0x0) {
		bVar7 = false;
		}
		else {
		pIVar6 = pIVar5[1].vtable;
		if ((*(byte *)&pIVar6[2].GetIndex & 4) != 0) {
		pIVar6[1].UpdateTime = (UpdateTime *)pIVar6[1].SetCtx;
		pIVar6[1].Step = (Step *)pIVar6[1].IsA;
		pIVar6[1].Method8 = (Method8 *)pIVar6[1].GetIndex;
		pIVar6[1].GetBuilderIndex = (GetBuilderIndex *)pIVar6[1].Method5;
		pIVar6[2].GetIndex = (GetIndex *)((uint)pIVar6[2].GetIndex & 0xfffffffa);
		}
		local_20 = (InstanceContext *)pIVar6[1].UpdateTime;
		local_1c = pIVar6[1].Step;
		local_18 = pIVar6[1].Method8;
		}
		if ((bVar8) && (bVar7)) {
		return ((float)local_18 - (float)pMVar9) * ((float)local_18 - (float)pMVar9) +((float)local_1c - (float)pSVar10) * ((float)local_1c - (float)pSVar10) +((float)local_20 - (float)pIVar11) * ((float)local_20 - (float)pIVar11);
		}
		return 0.0;
		}
		
	*/
	return 0.0f;
}

void Percept0x08A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x08A * __thiscall Percept0x08A::Dispose(Percept0x08A *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x08A::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x08A::Construct(Percept0x08A *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x8a;
		(this->parent).vtable = &Percept_VT_ID_0x8a;
		return;
		}
		
	*/
	return;
}

