#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x091.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x091::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x091::GetUtilityScore(Percept0x091 *this,InstanceContext *param_1){
		InstanceContext *pIVar1;
		InstanceTransform *transform;
		InstanceTransform *pIVar2;
		InstanceNodeAbstract *pIVar3;
		InstanceNodeAbstract_VTable *pIVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		pIVar1 = (param_1->parent).ctx;
		transform = (pIVar1->parent).transform;
		InstanceTransform::FillMatrix(transform);
		pIVar2 = (pIVar1->parent).transform;
		fVar5 = (transform->matrix).m21;
		fVar6 = (transform->matrix).m22;
		fVar7 = (transform->matrix).m23;
		if ((*(byte *)&pIVar2->field3_0x60 & 4) != 0) {
		fVar9 = (pIVar2->matrix).m44;
		fVar10 = (pIVar2->matrix).m43;
		fVar11 = (pIVar2->matrix).m42;
		(pIVar2->position).x = (pIVar2->matrix).m41;
		(pIVar2->position).y = fVar11;
		(pIVar2->position).z = fVar10;
		(pIVar2->position).w = fVar9;
		pIVar2->field3_0x60 = (float)((uint)pIVar2->field3_0x60 & 0xfffffffa);
		}
		fVar9 = (pIVar2->position).x;
		fVar10 = (pIVar2->position).y;
		fVar11 = (pIVar2->position).z;
		pIVar3 = (param_1->nodes).array[0xc];
		if ((pIVar3 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar3->field6_0x14 & 1) != 0)) {
		(param_1->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		pIVar3 = (param_1->nodes).array[0xc];
		if (pIVar3 != (InstanceNodeAbstract *)0x0) {
		pIVar4 = pIVar3[1].vtable;
		if ((*(byte *)&pIVar4[2].GetIndex & 4) != 0) {
		pIVar4[1].UpdateTime = (UpdateTime *)pIVar4[1].SetCtx;
		pIVar4[1].Step = (Step *)pIVar4[1].IsA;
		pIVar4[1].Method8 = (Method8 *)pIVar4[1].GetIndex;
		pIVar4[1].GetBuilderIndex = (GetBuilderIndex *)pIVar4[1].Method5;
		pIVar4[2].GetIndex = (GetIndex *)((uint)pIVar4[2].GetIndex & 0xfffffffa);
		}
		fVar8 = fVar7 * ((float)pIVar4[1].Method8 - fVar11) + fVar6 * ((float)pIVar4[1].Step - fVar10) +fVar5 * ((float)pIVar4[1].UpdateTime - fVar9);
		fVar11 = fVar11 - (fVar7 * fVar8 + fVar11);
		fVar10 = fVar10 - (fVar6 * fVar8 + fVar10);
		fVar9 = fVar9 - (fVar5 * fVar8 + fVar9);
		return fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x091::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x091 * __thiscall Percept0x091::Dispose(Percept0x091 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x091::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x091::Construct(Percept0x091 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x91;
		(this->parent).vtable = &Percept_VT_ID_0x91;
		return;
		}
		
	*/
	return;
}

