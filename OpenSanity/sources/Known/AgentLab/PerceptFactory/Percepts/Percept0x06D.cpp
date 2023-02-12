#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x06D.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x06D::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x06D * __thiscall Percept0x06D::Dispose(Percept0x06D *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x06D::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x06D::GetUtilityScore(Percept0x06D *this,InstanceContext *param_1){
		InstanceNodeObjectLink *pIVar1;
		float fVar1;
		pIVar1 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&((param_1->parent).ctx)->nodes,ObjectLink);
		if (pIVar1 != (InstanceNodeObjectLink *)0x0) {
		fVar1 = FLOAT_0038639c;
		if ((pIVar1->field7_0x18 >> 7 & 0x1f) != (pIVar1->field7_0x18 & 0x1f) - 1) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x06D::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x06D::Construct(Percept0x06D *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x6d;
		(this->parent).vtable = &Percept_VT_ID_0x6d;
		return;
		}
		
	*/
	return;
}

