#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptCrateHasRedWumpa.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptCrateHasRedWumpa::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptCrateHasRedWumpa * __fastcall PerceptCrateHasRedWumpa::Construct(PerceptCrateHasRedWumpa *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x207;
		(this->parent).vtable = &Percept_VT_CrateHasRedWumpa;
		return this;
		}
		
	*/
	return;
}

void PerceptCrateHasRedWumpa::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptCrateHasRedWumpa * __thiscall PerceptCrateHasRedWumpa::Dispose(PerceptCrateHasRedWumpa *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptCrateHasRedWumpa::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptCrateHasRedWumpa::GetUtilityScore(PerceptCrateHasRedWumpa *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		float fVar2;
		pIVar1 = InstanceDataList::GetNode(&((param_1->parent).ctx)->nodes,Crate);
		if (pIVar1 == (InstanceNodeAbstract *)0x0) {
		return FLOAT_00386394;
		}
		fVar2 = FLOAT_0038639c;
		if ((*(uint *)((pIVar1[1].vtable)->Method8 + 0x14) >> 2 & 0xff) == 0) {
		fVar2 = 0.0;
		}
		return fVar2;
		}
		
	*/
	return 0.0f;
}

