#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptIsBusy.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptIsBusy::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptIsBusy * __thiscall PerceptIsBusy::Dispose(PerceptIsBusy *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptIsBusy::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptIsBusy::GetUtilityScore(PerceptIsBusy *this,InstanceContext *param_1){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if (((((param_1->parent).ctx)->parent).flags & 0x100U) == 0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptIsBusy::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptIsBusy::Construct(PerceptIsBusy *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x41;
		(this->parent).vtable = &Percept_VT_IsBusy;
		return;
		}
		
	*/
	return;
}

