#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptIsResting.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptIsResting::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptIsResting * __thiscall PerceptIsResting::Dispose(PerceptIsResting *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptIsResting::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptIsResting::GetUtilityScore(PerceptIsResting *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		uint uVar2;
		float fVar3;
		pIVar1 = (param_1->nodes).array[0x11];
		if ((pIVar1 == (InstanceNodeAbstract *)0x0) || (uVar2 = pIVar1[8].field6_0x14, uVar2 == 0)) {
		if ((param_1->nodes).array[0xe] == (InstanceNodeAbstract *)0x0) {
		pIVar1 = (param_1->nodes).array[0x10];
		fVar3 = FLOAT_0038639c;
		if (FLOAT_0039432c <=*(float *)&pIVar1[1].field2_0x8 * *(float *)&pIVar1[1].field2_0x8 +(float)pIVar1[1].time * (float)pIVar1[1].time +(float)pIVar1[1].field5_0x10 * (float)pIVar1[1].field5_0x10) {
		fVar3 = 0.0;
		}
		return fVar3;
		}
		}
		else if ((FLOAT_00394370 <=*(float *)(uVar2 + 0x150) * *(float *)(uVar2 + 0x150) +*(float *)(uVar2 + 0x154) * *(float *)(uVar2 + 0x154) +*(float *)(uVar2 + 0x158) * *(float *)(uVar2 + 0x158)) ||(FLOAT_00394370 <=*(float *)(uVar2 + 0x140) * *(float *)(uVar2 + 0x140) +*(float *)(uVar2 + 0x144) * *(float *)(uVar2 + 0x144) +*(float *)(uVar2 + 0x148) * *(float *)(uVar2 + 0x148))) {
		return FLOAT_00386394;
		}
		return FLOAT_0038639c;
		}
		
	*/
	return 0.0f;
}

void PerceptIsResting::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptIsResting::Construct(PerceptIsResting *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x3d;
		(this->parent).vtable = &Percept_VT_IsResting;
		return;
		}
		
	*/
	return;
}

