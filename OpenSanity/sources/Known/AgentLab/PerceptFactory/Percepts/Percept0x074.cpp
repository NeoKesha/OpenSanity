#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x074.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x074::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x074 * __thiscall Percept0x074::Dispose(Percept0x074 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x074::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x074::GetUtilityScore(Percept0x074 *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		char cVar2;
		float fVar3;
		cVar2 = (*(param_1->parent).vtable[2].Method4)(param_1);
		if ((cVar2 != '\0') &&(pIVar1 = (param_1->nodes).array[0x11], pIVar1 != (InstanceNodeAbstract *)0x0)) {
		fVar3 = FLOAT_0038639c;
		if (((uint)pIVar1[6].vtable >> 5 & 1) == 0) {
		fVar3 = 0.0;
		}
		return fVar3;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x074::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x074::Construct(Percept0x074 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x74;
		(this->parent).vtable = &Percept_VT_ID_0x74;
		return;
		}
		
	*/
	return;
}

