#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x242.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x242::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x242 * __thiscall Percept0x242::Dispose(Percept0x242 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x242::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x242::GetUtilityScore(Percept0x242 *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		float fVar2;
		pIVar1 = InstanceDataList::GetNode(&((param_1->parent).ctx)->nodes,Character);
		fVar2 = FLOAT_0038639c;
		if ((*(uint *)((pIVar1[1].vtable)->Method8 + 0x1c) >> 0x17 & 1) == 0) {
		fVar2 = 0.0;
		}
		return fVar2;
		}
		
	*/
	return 0.0f;
}

void Percept0x242::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x242::Construct(Percept0x242 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x242;
		(this->parent).vtable = &Percept_VT_ID_0x242;
		return;
		}
		
	*/
	return;
}

