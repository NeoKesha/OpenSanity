#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x254.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x254::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x254 * __fastcall Percept0x254::Construct(Percept0x254 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x254;
		(this->parent).vtable = &Percept_VT_ID_0x254;
		return this;
		}
		
	*/
	return;
}

void Percept0x254::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x254 * __thiscall Percept0x254::Dispose(Percept0x254 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x254::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x254::GetUtilityScore(Percept0x254 *this,InstanceContext *param_1){
		int *piVar1;
		InstanceNodeAbstract *pIVar2;
		int iVar3;
		pIVar2 = InstanceDataList::GetNode(&((param_1->parent).ctx)->nodes,Character);
		if (pIVar2 == (InstanceNodeAbstract *)0x0) {
		return FLOAT_00386394;
		}
		piVar1 = (int *)pIVar2[1].vtable[4].UpdateTime;
		if ((piVar1 != (int *)0x0) && (iVar3 = (**(code **)(*piVar1 + 0x1c))(), iVar3 == 3)) {
		return FLOAT_0038639c;
		}
		return 0.0;
		}
		
	*/
	return 0.0f;
}

