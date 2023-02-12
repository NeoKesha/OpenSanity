#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptTouchingTerrain.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptTouchingTerrain::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptTouchingTerrain::GetUtilityScore(PerceptTouchingTerrain *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		uint uVar2;
		char cVar3;
		float fVar4;
		cVar3 = (*(param_1->parent).vtable[2].Method4)(param_1);
		if ((cVar3 != '\0') &&(pIVar1 = (param_1->nodes).array[0x11], pIVar1 != (InstanceNodeAbstract *)0x0)) {
		if (pIVar1[8].field6_0x14 != 0) {
		uVar2 = *(uint *)(pIVar1[8].field6_0x14 + 0x18);
		if (((uVar2 >> 4 & 1) != 0) || (fVar4 = 0.0, (uVar2 >> 2 & 1) != 0)) {
		fVar4 = FLOAT_0038639c;
		}
		return fVar4;
		}
		if (((this->parent).PerceptID & 0xfffe0000U) == 0) {
		if (((pIVar1[5].field6_0x14 >> 0x14 & 1) != 0) ||(fVar4 = 0.0, (pIVar1[5].field6_0x14 >> 0x13 & 1) != 0)) {
		fVar4 = FLOAT_0038639c;
		}
		return fVar4;
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptTouchingTerrain::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptTouchingTerrain * __thiscall PerceptTouchingTerrain::Dispose(PerceptTouchingTerrain *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptTouchingTerrain::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptTouchingTerrain::Construct(PerceptTouchingTerrain *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x35;
		(this->parent).vtable = &Percept_VT_TouchingTerrain;
		return;
		}
		
	*/
	return;
}

