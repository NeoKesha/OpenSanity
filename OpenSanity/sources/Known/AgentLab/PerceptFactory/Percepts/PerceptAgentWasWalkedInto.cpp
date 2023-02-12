#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAgentWasWalkedInto.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptAgentWasWalkedInto::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAgentWasWalkedInto * __fastcall PerceptAgentWasWalkedInto::Construct(PerceptAgentWasWalkedInto *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x218;
		(this->parent).vtable = &Percept_VT_AgentWasWalkedInto;
		return this;
		}
		
	*/
	return;
}

void PerceptAgentWasWalkedInto::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAgentWasWalkedInto * __thiscall PerceptAgentWasWalkedInto::Dispose(PerceptAgentWasWalkedInto *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptAgentWasWalkedInto::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptAgentWasWalkedInto::GetUtilityScore(PerceptAgentWasWalkedInto *this,InstanceContext *param_1){
		InstanceNodeCharacter *pIVar1;
		undefined4 uVar2;
		int *in_stack_0000000c;
		pIVar1 = InstanceContext::GetCharacterNode((param_1->parent).ctx);
		uVar2 = FUN_001a7b50((int)(pIVar1->field1_0x18->parent).parent.related,3,in_stack_0000000c,(this->parent).Interval);
		if ((char)uVar2 != '\0') {
		return FLOAT_0038639c;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

