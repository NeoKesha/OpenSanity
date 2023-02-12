#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAgentWasTouched.h"

void PerceptAgentWasTouched::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAgentWasTouched * __fastcall PerceptAgentWasTouched::Construct(PerceptAgentWasTouched *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x208;
		(this->parent).vtable = &Percept_VT_AgentWasTouched;
		return this;
		}
		
	*/
	return;
}

void PerceptAgentWasTouched::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAgentWasTouched * __thiscall PerceptAgentWasTouched::Dispose(PerceptAgentWasTouched *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptAgentWasTouched::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptAgentWasTouched::GetUtilityScore(PerceptAgentWasTouched *this){
		InstanceNodeCharacter *pIVar1;
		undefined4 uVar2;
		float fVar3;
		int in_stack_00000004;
		int *in_stack_0000000c;
		pIVar1 = InstanceContext::GetCharacterNode(*(InstanceContext **)(in_stack_00000004 + 4));
		uVar2 = FUN_001a7b90((int)(pIVar1->field1_0x18->parent).parent.related,in_stack_0000000c,(this->parent).Interval);
		fVar3 = FLOAT_0038639c;
		if ((char)uVar2 == '\0') {
		fVar3 = 0.0;
		}
		return fVar3;
		}
		
	*/
	return 0.0f;
}

