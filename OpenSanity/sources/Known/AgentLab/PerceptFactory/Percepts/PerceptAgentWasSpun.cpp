#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAgentWasSpun.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptAgentWasSpun::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAgentWasSpun * __fastcall PerceptAgentWasSpun::Construct(PerceptAgentWasSpun *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x209;
		(this->parent).vtable = &Percept_VT_AgentWasSpun;
		return this;
		}
		
	*/
	return;
}

void PerceptAgentWasSpun::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAgentWasSpun * __thiscall PerceptAgentWasSpun::Dispose(PerceptAgentWasSpun *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptAgentWasSpun::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptAgentWasSpun::GetUtilityScore(PerceptAgentWasSpun *this,InstanceContext *param_1){
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
		if ((cVar1 != '\x06') && (cVar1 != '\n')) {
		return 0.0;
		}
		return FLOAT_0038639c;
		}
		
	*/
	return 0.0f;
}

