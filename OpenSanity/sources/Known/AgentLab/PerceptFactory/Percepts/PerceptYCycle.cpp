#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptYCycle.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptYCycle::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptYCycle * __thiscall PerceptYCycle::Dispose(PerceptYCycle *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptYCycle::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptYCycle::GetUtilityScore(PerceptYCycle *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		char cVar2;
		cVar2 = (*(param_1->parent).vtable[2].Method4)(param_1);
		if ((cVar2 != '\0') && (pIVar1 = (param_1->nodes).array[8], pIVar1 != (InstanceNodeAbstract *)0x0)) {
		return (float)(int)pIVar1[9].field5_0x10 * FLOAT_0038bb84 * FLOAT_00394378;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptYCycle::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptYCycle::Construct(PerceptYCycle *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x4b;
		(this->parent).vtable = &Percept_VT_YCycle;
		return;
		}
		
	*/
	return;
}

