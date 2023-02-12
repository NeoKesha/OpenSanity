#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptTouchingAnyAgent.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptTouchingAnyAgent::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptTouchingAnyAgent * __thiscall PerceptTouchingAnyAgent::Dispose(PerceptTouchingAnyAgent *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptTouchingAnyAgent::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptTouchingAnyAgent::GetUtilityScore(PerceptTouchingAnyAgent *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		char cVar2;
		float fVar3;
		cVar2 = (*(param_1->parent).vtable[2].Method4)(param_1);
		if ((cVar2 != '\0') &&(pIVar1 = (param_1->nodes).array[0x11], pIVar1 != (InstanceNodeAbstract *)0x0)) {
		fVar3 = FLOAT_0038639c;
		if ((pIVar1[5].field6_0x14 >> 0x13 & 1) == 0) {
		fVar3 = 0.0;
		}
		return fVar3;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptTouchingAnyAgent::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptTouchingAnyAgent::Construct(PerceptTouchingAnyAgent *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x36;
		(this->parent).vtable = &Percept_VT_TouchingAnyAgent;
		return;
		}
		
	*/
	return;
}

