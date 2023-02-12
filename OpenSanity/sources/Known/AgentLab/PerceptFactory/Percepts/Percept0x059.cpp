#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x059.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x059::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x059::GetUtilityScore(Percept0x059 *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		float fVar2;
		float fVar3;
		InstanceTransform *pIVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		if (((uint)(param_1->parent).field14_0x20.matrix2.m43 >> 0xd & 1) != 0) {
		fVar5 = (float)param_1->field27_0xe0;
		fVar6 = (float)(param_1->nodes).cnt;
		pIVar1 = (param_1->nodes).array[0];
		pIVar4 = (((param_1->parent).ctx)->parent).transform;
		if ((*(byte *)&pIVar4->field3_0x60 & 4) != 0) {
		fVar7 = (pIVar4->matrix).m44;
		fVar2 = (pIVar4->matrix).m43;
		fVar3 = (pIVar4->matrix).m42;
		(pIVar4->position).x = (pIVar4->matrix).m41;
		(pIVar4->position).y = fVar3;
		(pIVar4->position).z = fVar2;
		(pIVar4->position).w = fVar7;
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffffa);
		}
		fVar7 = (pIVar4->position).z - (float)pIVar1;
		fVar6 = (pIVar4->position).y - fVar6;
		fVar5 = (pIVar4->position).x - fVar5;
		return fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
		}
		return FLOAT_00393c64;
		}
		
	*/
	return 0.0f;
}

void Percept0x059::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x059 * __thiscall Percept0x059::Dispose(Percept0x059 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x059::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x059::Construct(Percept0x059 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x59;
		(this->parent).vtable = &Percept_VT_ID_0x59;
		return;
		}
		
	*/
	return;
}

