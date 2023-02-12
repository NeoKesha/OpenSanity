#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptTimeInUnit.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptTimeInUnit::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptTimeInUnit * __thiscall PerceptTimeInUnit::Dispose(PerceptTimeInUnit *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptTimeInUnit::GetUtilityScore(InstanceContext* ctx, int param_2, int* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptTimeInUnit::GetUtilityScore(PerceptTimeInUnit *this,InstanceContext *ctx,int param_2,int *param_3){
		return (float)(*param_3 - *(int *)(param_2 + 0x18)) * TimePerTick1;
		}
		
	*/
	return 0.0f;
}

void PerceptTimeInUnit::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptTimeInUnit::Construct(PerceptTimeInUnit *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 5;
		(this->parent).vtable = &Percept_VT_TimeInUnit;
		return;
		}
		
	*/
	return;
}

