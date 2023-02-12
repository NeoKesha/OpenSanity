#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x251.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x251::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x251 * __fastcall Percept0x251::Construct(Percept0x251 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x251;
		(this->parent).vtable = &Percept_VT_ID_0x251;
		return this;
		}
		
	*/
	return;
}

void Percept0x251::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x251 * __thiscall Percept0x251::Dispose(Percept0x251 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x251::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x251::GetUtilityScore(Percept0x251 *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		float fVar2;
		pIVar1 = InstanceDataList::GetNode(&((param_1->parent).ctx)->nodes,Character);
		if (pIVar1 == (InstanceNodeAbstract *)0x0) {
		return FLOAT_00386394;
		}
		fVar2 = FLOAT_0038639c;
		if (pIVar1[1].vtable[4].UpdateTime == (UpdateTime *)0x0) {
		fVar2 = 0.0;
		}
		return fVar2;
		}
		
	*/
	return 0.0f;
}

