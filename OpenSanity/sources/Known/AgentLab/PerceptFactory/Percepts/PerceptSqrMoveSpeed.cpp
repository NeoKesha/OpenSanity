#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptSqrMoveSpeed.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptSqrMoveSpeed::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptSqrMoveSpeed * __thiscall PerceptSqrMoveSpeed::Dispose(PerceptSqrMoveSpeed *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptSqrMoveSpeed::GetUtilityScore(InstanceContext* param1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptSqrMoveSpeed::GetUtilityScore(PerceptSqrMoveSpeed *this,InstanceContext *param1){
		InstanceNodeAbstract *pIVar1;
		pIVar1 = (param1->nodes).array[0x10];
		return (float)pIVar1[1].field5_0x10 * (float)pIVar1[1].field5_0x10 +(float)pIVar1[1].time * (float)pIVar1[1].time +*(float *)&pIVar1[1].field2_0x8 * *(float *)&pIVar1[1].field2_0x8;
		}
		
	*/
	return 0.0f;
}

void PerceptSqrMoveSpeed::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptSqrMoveSpeed::Construct(PerceptSqrMoveSpeed *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x3e;
		(this->parent).vtable = &Percept_VT_SqrMoveSpeed;
		return;
		}
		
	*/
	return;
}

