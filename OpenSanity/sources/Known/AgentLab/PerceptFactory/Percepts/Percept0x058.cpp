#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x058.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x058::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x058::GetUtilityScore(Percept0x058 *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		InstanceTransform *pIVar2;
		InstanceNodeAbstract_VTable *pIVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		pIVar1 = (param_1->nodes).array[0xc];
		if ((pIVar1 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar1->field6_0x14 & 1) != 0)) {
		(param_1->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		pIVar1 = (param_1->nodes).array[0xc];
		if (pIVar1 != (InstanceNodeAbstract *)0x0) {
		pIVar2 = (((param_1->parent).ctx)->parent).transform;
		if ((*(byte *)&pIVar2->field3_0x60 & 4) != 0) {
		fVar4 = (pIVar2->matrix).m44;
		fVar5 = (pIVar2->matrix).m43;
		fVar6 = (pIVar2->matrix).m42;
		(pIVar2->position).x = (pIVar2->matrix).m41;
		(pIVar2->position).y = fVar6;
		(pIVar2->position).z = fVar5;
		(pIVar2->position).w = fVar4;
		pIVar2->field3_0x60 = (float)((uint)pIVar2->field3_0x60 & 0xfffffffa);
		}
		fVar4 = (pIVar2->position).x;
		fVar5 = (pIVar2->position).y;
		fVar6 = (pIVar2->position).z;
		pIVar3 = pIVar1[1].vtable;
		if ((*(byte *)&pIVar3[2].GetIndex & 4) != 0) {
		pIVar3[1].UpdateTime = (UpdateTime *)pIVar3[1].SetCtx;
		pIVar3[1].Step = (Step *)pIVar3[1].IsA;
		pIVar3[1].Method8 = (Method8 *)pIVar3[1].GetIndex;
		pIVar3[1].GetBuilderIndex = (GetBuilderIndex *)pIVar3[1].Method5;
		pIVar3[2].GetIndex = (GetIndex *)((uint)pIVar3[2].GetIndex & 0xfffffffa);
		}
		fVar6 = fVar6 - (float)pIVar3[1].Method8;
		fVar5 = fVar5 - (float)pIVar3[1].Step;
		fVar4 = fVar4 - (float)pIVar3[1].UpdateTime;
		return fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6;
		}
		return FLOAT_00393c64;
		}
		
	*/
	return 0.0f;
}

void Percept0x058::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x058 * __thiscall Percept0x058::Dispose(Percept0x058 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x058::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x058::Construct(Percept0x058 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x58;
		(this->parent).vtable = &Percept_VT_ID_0x58;
		return;
		}
		
	*/
	return;
}

