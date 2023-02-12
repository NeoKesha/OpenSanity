#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptGotAttachedObject.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptGotAttachedObject::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptGotAttachedObject * __thiscall PerceptGotAttachedObject::Dispose(PerceptGotAttachedObject *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptGotAttachedObject::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptGotAttachedObject::GetUtilityScore(PerceptGotAttachedObject *this,InstanceContext *param_1){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if (-1 < *(char *)&(((param_1->parent).ctx)->parent).flags) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptGotAttachedObject::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptGotAttachedObject::Construct(PerceptGotAttachedObject *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x31;
		(this->parent).vtable = &Percept_VT_GotAttachedObject;
		return;
		}
		
	*/
	return;
}

