#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptWumpaNeededForPayGate.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptWumpaNeededForPayGate::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptWumpaNeededForPayGate * __fastcall PerceptWumpaNeededForPayGate::Construct(PerceptWumpaNeededForPayGate *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x21b;
		(this->parent).vtable = &Percept_VT_WumpaNeededForPayGate;
		return this;
		}
		
	*/
	return;
}

void PerceptWumpaNeededForPayGate::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptWumpaNeededForPayGate * __thiscall PerceptWumpaNeededForPayGate::Dispose(PerceptWumpaNeededForPayGate *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptWumpaNeededForPayGate::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Removing unreachable block (ram,0x0005c49b) float __thiscall PerceptWumpaNeededForPayGate::GetUtilityScore(PerceptWumpaNeededForPayGate *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		pIVar1 = InstanceDataList::GetNode(&((param_1->parent).ctx)->nodes,PayGate);
		if (pIVar1 != (InstanceNodeAbstract *)0x0) {
		return (float)(*(uint *)((pIVar1[1].vtable)->Method8 + 0x14) & 0xfff);
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

