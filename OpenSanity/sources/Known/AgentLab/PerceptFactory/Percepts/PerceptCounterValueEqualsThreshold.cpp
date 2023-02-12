#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptCounterValueEqualsThreshold.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptCounterValueEqualsThreshold::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptCounterValueEqualsThreshold::GetUtilityScore(PerceptCounterValueEqualsThreshold *this,InstanceContext *param_1){
		float fVar1;
		int iVar2;
		iVar2 = UnkFamily16A::FUN_001b1ee0(PTR_DefaultRM_2,(uint)(this->parent).PerceptID >> 0x11);
		if ((float)iVar2 == (this->parent).Threshold) {
		fVar1 = (this->parent).Threshold;
		return fVar1 + fVar1;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptCounterValueEqualsThreshold::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptCounterValueEqualsThreshold * __thiscall PerceptCounterValueEqualsThreshold::Dispose(PerceptCounterValueEqualsThreshold *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptCounterValueEqualsThreshold::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptCounterValueEqualsThreshold::Construct(PerceptCounterValueEqualsThreshold *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x3c;
		(this->parent).vtable = &Percept_VT_CounterValueEqualsThreshold;
		return;
		}
		
	*/
	return;
}

