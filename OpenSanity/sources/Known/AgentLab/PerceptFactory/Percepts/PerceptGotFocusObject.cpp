#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptGotFocusObject.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptGotFocusObject::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptGotFocusObject * __thiscall PerceptGotFocusObject::Dispose(PerceptGotFocusObject *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptGotFocusObject::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptGotFocusObject::GetUtilityScore(PerceptGotFocusObject *this,InstanceContext *param_1){
		return (float)(uint)(*(byte *)&(param_1->parent).field14_0x20.matrix2.m43 & 1);
		}
		
	*/
	return 0.0f;
}

void PerceptGotFocusObject::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptGotFocusObject::Construct(PerceptGotFocusObject *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x38;
		(this->parent).vtable = &Percept_VT_GotFocusObject;
		return;
		}
		
	*/
	return;
}

