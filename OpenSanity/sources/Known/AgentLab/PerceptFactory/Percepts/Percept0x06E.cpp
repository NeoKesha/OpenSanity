#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x06E.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x06E::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x06E::GetUtilityScore(Percept0x06E *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		InstanceTransform *pIVar5;
		fVar4 = (param_1->parent).field14_0x20.matrix2.m32;
		pIVar5 = (((param_1->parent).ctx)->parent).transform;
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
		return (pIVar5->position).y - *(float *)((int)fVar4 + 0x14);
		}
		
	*/
	return 0.0f;
}

void Percept0x06E::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x06E * __thiscall Percept0x06E::Dispose(Percept0x06E *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x06E::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x06E::Construct(Percept0x06E *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x6e;
		(this->parent).vtable = &Percept_VT_ID_0x6e;
		return;
		}
		
	*/
	return;
}

