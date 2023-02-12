#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAgentIsOnGround.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptAgentIsOnGround::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAgentIsOnGround * __fastcall PerceptAgentIsOnGround::Construct(PerceptAgentIsOnGround *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x206;
		(this->parent).vtable = &Percept_VT_AgentIsOnGround;
		return this;
		}
		
	*/
	return;
}

void PerceptAgentIsOnGround::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAgentIsOnGround * __thiscall PerceptAgentIsOnGround::Dispose(PerceptAgentIsOnGround *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptAgentIsOnGround::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptAgentIsOnGround::GetUtilityScore(PerceptAgentIsOnGround *this,InstanceContext *param_1){
		InstanceNodeCharacter *pIVar1;
		float fVar2;
		pIVar1 = InstanceContext::GetCharacterNode((param_1->parent).ctx);
		fVar2 = 0.0;
		if ((pIVar1 != (InstanceNodeCharacter *)0x0) &&((*(byte *)&((pIVar1->field1_0x18->parent).parent.blackboard)->field1_0x4 & 8) == 0)) {
		fVar2 = FLOAT_0038639c;
		}
		return fVar2;
		}
		
	*/
	return 0.0f;
}

