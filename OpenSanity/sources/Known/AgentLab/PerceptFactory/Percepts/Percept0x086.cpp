#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x086.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x086::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x086 * __thiscall Percept0x086::Dispose(Percept0x086 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x086::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x086::GetUtilityScore(Percept0x086 *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		pIVar1 = (param_1->nodes).array[0xf];
		if (pIVar1 != (InstanceNodeAbstract *)0x0) {
		return (float)pIVar1[2].vtable;
		}
		return 0.0;
		}
		
	*/
	return 0.0f;
}

void Percept0x086::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x086::Construct(Percept0x086 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x86;
		(this->parent).vtable = &Percept_VT_ID_0x86;
		return;
		}
		
	*/
	return;
}

