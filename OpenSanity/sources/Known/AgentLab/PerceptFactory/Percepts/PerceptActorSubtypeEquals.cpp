#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptActorSubtypeEquals.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptActorSubtypeEquals::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptActorSubtypeEquals * __thiscall PerceptActorSubtypeEquals::Dispose(PerceptActorSubtypeEquals *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptActorSubtypeEquals::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptActorSubtypeEquals::GetUtilityScore(PerceptActorSubtypeEquals *this,InstanceContext *param_1){
		uint uVar1;
		float fVar2;
		uVar1 = BlackboardAbstract::GetIntValue((BlackboardAbstract *)(param_1->parent).field14_0x20.matrix2.m41,0);
		fVar2 = FLOAT_0038639c;
		if (uVar1 != (uint)(this->parent).PerceptID >> 0x11) {
		fVar2 = 0.0;
		}
		return fVar2;
		}
		
	*/
	return 0.0f;
}

void PerceptActorSubtypeEquals::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptActorSubtypeEquals::Construct(PerceptActorSubtypeEquals *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x2f;
		(this->parent).vtable = &Percept_VT_ActorSubtypeEquals;
		return;
		}
		
	*/
	return;
}

