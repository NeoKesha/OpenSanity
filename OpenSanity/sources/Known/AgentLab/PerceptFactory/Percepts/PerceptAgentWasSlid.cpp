#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAgentWasSlid.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptAgentWasSlid::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAgentWasSlid * __fastcall PerceptAgentWasSlid::Construct(PerceptAgentWasSlid *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x20b;
		(this->parent).vtable = &Percept_VT_AgentWasSlid;
		return this;
		}
		
	*/
	return;
}

void PerceptAgentWasSlid::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAgentWasSlid * __thiscall PerceptAgentWasSlid::Dispose(PerceptAgentWasSlid *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptAgentWasSlid::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptAgentWasSlid::GetUtilityScore(PerceptAgentWasSlid *this,InstanceContext *param_1){
		char cVar1;
		NodeRelated1Abstract *this_00;
		InstanceNodeCharacter *pIVar2;
		undefined4 uVar3;
		int *in_stack_0000000c;
		pIVar2 = InstanceContext::GetCharacterNode((param_1->parent).ctx);
		this_00 = (pIVar2->field1_0x18->parent).parent.related;
		uVar3 = FUN_001a7b90((int)this_00,in_stack_0000000c,(this->parent).Interval);
		if ((char)uVar3 == '\0') {
		return FLOAT_00386394;
		}
		cVar1 = this_00->field_0x4;
		if ((cVar1 != '\b') && (cVar1 != '\f')) {
		return 0.0;
		}
		return FLOAT_0038639c;
		}
		
	*/
	return 0.0f;
}

