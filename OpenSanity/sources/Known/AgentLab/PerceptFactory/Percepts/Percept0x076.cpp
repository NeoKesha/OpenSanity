#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x076.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x076::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x076 * __thiscall Percept0x076::Dispose(Percept0x076 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x076::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Removing unreachable block (ram,0x0019cb0a) float __thiscall Percept0x076::GetUtilityScore(Percept0x076 *this,InstanceContext *param_1){
		float fVar1;
		InstanceNodeObjectLink *pIVar2;
		pIVar2 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&((param_1->parent).ctx)->nodes,ObjectLink);
		if (pIVar2 == (InstanceNodeObjectLink *)0x0) {
		fVar1 = 0.0;
		}
		else {
		fVar1 = (float)(pIVar2->field7_0x18 & 0x1f);
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void Percept0x076::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x076::Construct(Percept0x076 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x76;
		(this->parent).vtable = &Percept_VT_ID_0x76;
		return;
		}
		
	*/
	return;
}

