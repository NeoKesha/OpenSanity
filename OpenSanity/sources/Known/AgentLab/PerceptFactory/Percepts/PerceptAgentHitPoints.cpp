#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAgentHitPoints.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptAgentHitPoints::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAgentHitPoints * __fastcall PerceptAgentHitPoints::Construct(PerceptAgentHitPoints *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x20c;
		(this->parent).vtable = &Percept_VT_AgentHitPoints;
		return this;
		}
		
	*/
	return;
}

void PerceptAgentHitPoints::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAgentHitPoints * __thiscall PerceptAgentHitPoints::Dispose(PerceptAgentHitPoints *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptAgentHitPoints::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Removing unreachable block (ram,0x0005b661) float __thiscall PerceptAgentHitPoints::GetUtilityScore(PerceptAgentHitPoints *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		pIVar1 = InstanceDataList::GetNode(&((param_1->parent).ctx)->nodes,Creature);
		return (float)(*(uint *)((pIVar1[1].vtable)->Method8 + 0x14) >> 6 & 0xff);
		}
		
	*/
	return 0.0f;
}

