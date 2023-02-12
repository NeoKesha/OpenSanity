#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x08C.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x08C::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x08C::GetUtilityScore(Percept0x08C *this,InstanceContext *param_1){
		Step *pSVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		InstanceNodeAbstract *pIVar5;
		InstanceNodeAbstract_VTable *pIVar6;
		InstanceTransform *pIVar7;
		pIVar5 = (param_1->nodes).array[0xc];
		if ((pIVar5 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar5->field6_0x14 & 1) != 0)) {
		(param_1->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		pIVar5 = (param_1->nodes).array[0xc];
		if (pIVar5 != (InstanceNodeAbstract *)0x0) {
		pIVar6 = pIVar5[1].vtable;
		if ((*(byte *)&pIVar6[2].GetIndex & 4) != 0) {
		pIVar6[1].UpdateTime = (UpdateTime *)pIVar6[1].SetCtx;
		pIVar6[1].Step = (Step *)pIVar6[1].IsA;
		pIVar6[1].Method8 = (Method8 *)pIVar6[1].GetIndex;
		pIVar6[1].GetBuilderIndex = (GetBuilderIndex *)pIVar6[1].Method5;
		pIVar6[2].GetIndex = (GetIndex *)((uint)pIVar6[2].GetIndex & 0xfffffffa);
		}
		pSVar1 = pIVar6[1].Step;
		pIVar7 = (((param_1->parent).ctx)->parent).transform;
		if ((*(byte *)&pIVar7->field3_0x60 & 4) != 0) {
		fVar2 = (pIVar7->matrix).m44;
		fVar3 = (pIVar7->matrix).m43;
		fVar4 = (pIVar7->matrix).m42;
		(pIVar7->position).x = (pIVar7->matrix).m41;
		(pIVar7->position).y = fVar4;
		(pIVar7->position).z = fVar3;
		(pIVar7->position).w = fVar2;
		pIVar7->field3_0x60 = (float)((uint)pIVar7->field3_0x60 & 0xfffffffa);
		}
		return (pIVar7->position).y - (float)pSVar1;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x08C::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x08C * __thiscall Percept0x08C::Dispose(Percept0x08C *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x08C::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x08C::Construct(Percept0x08C *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x8c;
		(this->parent).vtable = &Percept_VT_ID_0x8c;
		return;
		}
		
	*/
	return;
}

