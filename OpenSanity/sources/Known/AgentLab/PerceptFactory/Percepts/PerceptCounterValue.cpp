#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptCounterValue.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptCounterValue::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptCounterValue * __thiscall PerceptCounterValue::Dispose(PerceptCounterValue *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptCounterValue::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptCounterValue::GetUtilityScore(PerceptCounterValue *this,InstanceContext *param_1){
		int iVar1;
		iVar1 = UnkFamily16A::FUN_001b1ee0(PTR_DefaultRM_2,(uint)(this->parent).PerceptID >> 0x11);
		return (float)iVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptCounterValue::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptCounterValue::Construct(PerceptCounterValue *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x3b;
		(this->parent).vtable = &Percept_VT_CounterValue;
		return;
		}
		
	*/
	return;
}

