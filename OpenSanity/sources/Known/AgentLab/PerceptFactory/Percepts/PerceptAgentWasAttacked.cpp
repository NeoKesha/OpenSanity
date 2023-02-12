#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAgentWasAttacked.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptAgentWasAttacked::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAgentWasAttacked * __fastcall PerceptAgentWasAttacked::Construct(PerceptAgentWasAttacked *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x216;
		(this->parent).vtable = &Percept_VT_AgentWasAttacked;
		return this;
		}
		
	*/
	return;
}

void PerceptAgentWasAttacked::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAgentWasAttacked * __thiscall PerceptAgentWasAttacked::Dispose(PerceptAgentWasAttacked *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptAgentWasAttacked::GetUtilityScore(InstanceContext* param_1, int param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptAgentWasAttacked::GetUtilityScore(PerceptAgentWasAttacked *this,InstanceContext *param_1,int param_2,int param_3){
		InstanceNodeCharacter *pIVar1;
		uint uVar2;
		float fVar3;
		pIVar1 = InstanceContext::GetCharacterNode((param_1->parent).ctx);
		uVar2 = thunk_FUN_00067880((int)(pIVar1->field1_0x18->parent).parent.related,(int *)param_3,(this->parent).Interval);
		fVar3 = FLOAT_0038639c;
		if ((char)uVar2 == '\0') {
		fVar3 = 0.0;
		}
		return fVar3;
		}
		
	*/
	return 0.0f;
}

