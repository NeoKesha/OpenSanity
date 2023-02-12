#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x0A2.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x0A2::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x0A2 * __thiscall Percept0x0A2::Dispose(Percept0x0A2 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x0A2::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x0A2::GetUtilityScore(Percept0x0A2 *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		pIVar1 = (param_1->nodes).array[0x11];
		if ((pIVar1 != (InstanceNodeAbstract *)0x0) && (pIVar1[8].field6_0x14 != 0)) {
		return FLOAT_0038639c;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x0A2::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x0A2::Construct(Percept0x0A2 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0xa2;
		(this->parent).vtable = &Percept_VT_ID_0xa2;
		return;
		}
		
	*/
	return;
}

