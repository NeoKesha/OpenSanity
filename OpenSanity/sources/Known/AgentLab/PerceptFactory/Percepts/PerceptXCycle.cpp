#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptXCycle.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptXCycle::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptXCycle * __thiscall PerceptXCycle::Dispose(PerceptXCycle *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptXCycle::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptXCycle::GetUtilityScore(PerceptXCycle *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		char cVar2;
		float local_4;
		local_4 = 0.0;
		cVar2 = (*(param_1->parent).vtable[2].Method4)(param_1);
		if ((cVar2 != '\0') && (pIVar1 = (param_1->nodes).array[8], pIVar1 != (InstanceNodeAbstract *)0x0)) {
		local_4 = (float)pIVar1[9].time * FLOAT_0038bb84 * FLOAT_00394378;
		}
		return local_4;
		}
		
	*/
	return 0.0f;
}

void PerceptXCycle::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptXCycle::Construct(PerceptXCycle *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x4a;
		(this->parent).vtable = &Percept_VT_XCycle;
		return;
		}
		
	*/
	return;
}

