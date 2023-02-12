#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAgentWasHeadbutted.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptAgentWasHeadbutted::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAgentWasHeadbutted * __fastcall PerceptAgentWasHeadbutted::Construct(PerceptAgentWasHeadbutted *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x219;
		(this->parent).vtable = &Percept_VT_AgentWasHeadbutted;
		return this;
		}
		
	*/
	return;
}

void PerceptAgentWasHeadbutted::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAgentWasHeadbutted * __thiscall PerceptAgentWasHeadbutted::Dispose(PerceptAgentWasHeadbutted *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptAgentWasHeadbutted::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptAgentWasHeadbutted::GetUtilityScore(PerceptAgentWasHeadbutted *this,InstanceContext *param_1){
		InstanceNodeCharacter *pIVar1;
		undefined4 uVar2;
		int *in_stack_0000000c;
		pIVar1 = InstanceContext::GetCharacterNode((param_1->parent).ctx);
		uVar2 = FUN_001a7b50((int)(pIVar1->field1_0x18->parent).parent.related,5,in_stack_0000000c,(this->parent).Interval);
		if ((char)uVar2 != '\0') {
		return FLOAT_0038639c;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

