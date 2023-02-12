#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAttachedToAnAgent.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptAttachedToAnAgent::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAttachedToAnAgent * __thiscall PerceptAttachedToAnAgent::Dispose(PerceptAttachedToAnAgent *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptAttachedToAnAgent::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptAttachedToAnAgent::GetUtilityScore(PerceptAttachedToAnAgent *this,InstanceContext *param_1){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if ((*(byte *)&(((param_1->parent).ctx)->parent).flags & 0x40) == 0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptAttachedToAnAgent::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptAttachedToAnAgent::Construct(PerceptAttachedToAnAgent *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x30;
		(this->parent).vtable = &Percept_VT_AttachedToAnAgent;
		return;
		}
		
	*/
	return;
}

