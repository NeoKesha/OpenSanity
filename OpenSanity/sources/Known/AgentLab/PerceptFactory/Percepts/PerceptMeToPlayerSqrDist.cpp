#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptMeToPlayerSqrDist.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptMeToPlayerSqrDist::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptMeToPlayerSqrDist::GetUtilityScore(PerceptMeToPlayerSqrDist *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceContext *pIVar4;
		InstanceTransform *pIVar5;
		InstanceContext *pIVar6;
		InstanceContext *pIVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		pIVar4 = (param_1->parent).ctx;
		if (PTR_00496350 == (InstanceContextRefCounter *)0x0) {
		pIVar7 = (InstanceContext *)0x0;
		}
		else {
		pIVar7 = PTR_00496350->ctx;
		}
		if (pIVar7 != (InstanceContext *)0x0) {
		pIVar6 = (InstanceContext *)PTR_00496350;
		if (PTR_00496350 != (InstanceContextRefCounter *)0x0) {
		pIVar6 = PTR_00496350->ctx;
		}
		if ((pIVar4->parent).chunkData == (pIVar6->parent).chunkData) {
		pIVar5 = (pIVar4->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar8 = (pIVar5->matrix).m44;
		fVar9 = (pIVar5->matrix).m43;
		fVar10 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar10;
		(pIVar5->position).z = fVar9;
		(pIVar5->position).w = fVar8;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		fVar8 = (pIVar5->position).x;
		fVar9 = (pIVar5->position).y;
		fVar10 = (pIVar5->position).z;
		pIVar5 = (pIVar7->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar1 = (pIVar5->matrix).m44;
		fVar2 = (pIVar5->matrix).m43;
		fVar3 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar3;
		(pIVar5->position).z = fVar2;
		(pIVar5->position).w = fVar1;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		fVar10 = fVar10 - (pIVar5->position).z;
		fVar9 = fVar9 - (pIVar5->position).y;
		fVar8 = fVar8 - (pIVar5->position).x;
		return fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10;
		}
		}
		return FLOAT_0038ad18;
		}
		
	*/
	return 0.0f;
}

void PerceptMeToPlayerSqrDist::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptMeToPlayerSqrDist * __thiscall PerceptMeToPlayerSqrDist::Dispose(PerceptMeToPlayerSqrDist *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptMeToPlayerSqrDist::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptMeToPlayerSqrDist::Construct(PerceptMeToPlayerSqrDist *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x205;
		(this->parent).vtable = &Percept_VT_MeToPlayerSqrDist;
		return;
		}
		
	*/
	return;
}

