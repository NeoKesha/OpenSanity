#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptGotFocusPosition.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptGotFocusPosition::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptGotFocusPosition * __thiscall PerceptGotFocusPosition::Dispose(PerceptGotFocusPosition *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptGotFocusPosition::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptGotFocusPosition::GetUtilityScore(PerceptGotFocusPosition *this,InstanceContext *param_1){
		return (float)(uint)((byte)((uint)(param_1->parent).field14_0x20.matrix2.m43 >> 1) & 1);
		}
		
	*/
	return 0.0f;
}

void PerceptGotFocusPosition::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptGotFocusPosition::Construct(PerceptGotFocusPosition *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x39;
		(this->parent).vtable = &Percept_VT_GotFocusPosition;
		return;
		}
		
	*/
	return;
}

