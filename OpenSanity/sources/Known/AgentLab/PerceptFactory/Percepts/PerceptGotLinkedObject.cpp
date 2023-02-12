#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptGotLinkedObject.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptGotLinkedObject::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptGotLinkedObject * __thiscall PerceptGotLinkedObject::Dispose(PerceptGotLinkedObject *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptGotLinkedObject::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptGotLinkedObject::GetUtilityScore(PerceptGotLinkedObject *this,InstanceContext *param_1){
		InstanceNodeObjectLink *pIVar1;
		float fVar1;
		pIVar1 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&((param_1->parent).ctx)->nodes,ObjectLink);
		fVar1 = FLOAT_0038639c;
		if (pIVar1 == (InstanceNodeObjectLink *)0x0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptGotLinkedObject::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptGotLinkedObject::Construct(PerceptGotLinkedObject *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x49;
		(this->parent).vtable = &Percept_VT_GotLinkedObject;
		return;
		}
		
	*/
	return;
}

