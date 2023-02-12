#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptSoftFlagSet.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptSoftFlagSet::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptSoftFlagSet * __thiscall PerceptSoftFlagSet::Dispose(PerceptSoftFlagSet *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptSoftFlagSet::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptSoftFlagSet::GetUtilityScore(PerceptSoftFlagSet *this,InstanceContext *param_1){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if ((*(uint *)((int)(param_1->parent).field14_0x20.matrix2.m41 + 4) &1 << ((byte)((uint)(this->parent).PerceptID >> 0x11) & 0x1f)) == 0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptSoftFlagSet::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptSoftFlagSet::Construct(PerceptSoftFlagSet *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x43;
		(this->parent).vtable = &Percept_VT_SoftFlagSet;
		return;
		}
		
	*/
	return;
}

