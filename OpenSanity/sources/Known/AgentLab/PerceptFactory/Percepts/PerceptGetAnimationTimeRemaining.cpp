#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptGetAnimationTimeRemaining.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptGetAnimationTimeRemaining::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptGetAnimationTimeRemaining * __thiscall PerceptGetAnimationTimeRemaining::Dispose(PerceptGetAnimationTimeRemaining *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptGetAnimationTimeRemaining::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptGetAnimationTimeRemaining::GetUtilityScore(PerceptGetAnimationTimeRemaining *this,InstanceContext *param_1){
		InstanceNodeOGI *pIVar1;
		float fVar1;
		pIVar1 = (InstanceNodeOGI *)InstanceDataList::GetNode(&((param_1->parent).ctx)->nodes,OGI);
		if (pIVar1->field4_0x24 == (InstanceNodeOGISub *)0x0) {
		return FLOAT_00386394;
		}
		fVar1 = InstanceNodeOGISub::GetAnimationProgress(pIVar1->field4_0x24,0xff);
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptGetAnimationTimeRemaining::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptGetAnimationTimeRemaining::Construct(PerceptGetAnimationTimeRemaining *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x3a;
		(this->parent).vtable = &Percept_VT_GetAnimationTimeRemaining;
		return;
		}
		
	*/
	return;
}

