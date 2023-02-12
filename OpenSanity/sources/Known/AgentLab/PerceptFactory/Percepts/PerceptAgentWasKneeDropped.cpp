#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAgentWasKneeDropped.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptAgentWasKneeDropped::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAgentWasKneeDropped * __fastcall PerceptAgentWasKneeDropped::Construct(PerceptAgentWasKneeDropped *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x20a;
		(this->parent).vtable = &Percept_VT_AgentWasKneeDropped;
		return this;
		}
		
	*/
	return;
}

void PerceptAgentWasKneeDropped::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAgentWasKneeDropped * __thiscall PerceptAgentWasKneeDropped::Dispose(PerceptAgentWasKneeDropped *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptAgentWasKneeDropped::GetUtilityScore(InstanceContext* param_1, int param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptAgentWasKneeDropped::GetUtilityScore(PerceptAgentWasKneeDropped *this,InstanceContext *param_1,int param_2,int param_3){
		char cVar1;
		NodeRelated1Abstract *this_00;
		InstanceNodeCharacter *pIVar2;
		undefined4 uVar3;
		pIVar2 = InstanceContext::GetCharacterNode((param_1->parent).ctx);
		this_00 = (pIVar2->field1_0x18->parent).parent.related;
		uVar3 = FUN_001a7b90((int)this_00,(int *)param_3,(this->parent).Interval);
		if ((char)uVar3 == '\0') {
		return FLOAT_00386394;
		}
		cVar1 = this_00->field_0x4;
		if ((cVar1 != '\a') && (cVar1 != '\v')) {
		return 0.0;
		}
		return FLOAT_0038639c;
		}
		
	*/
	return 0.0f;
}

