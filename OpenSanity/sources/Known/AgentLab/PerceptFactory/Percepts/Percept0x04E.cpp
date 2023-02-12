#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x04E.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x04E::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x04E * __thiscall Percept0x04E::Dispose(Percept0x04E *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x04E::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x04E::GetUtilityScore(Percept0x04E *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		pIVar1 = (param_1->nodes).array[0xd];
		if (((pIVar1 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar1->field6_0x14 & 1) != 0)) &&((~(byte)((uint)(param_1->parent).field14_0x20.matrix2.m43 >> 0x14) & 1) != 0)) {
		(param_1->nodes).array[0xd] = (InstanceNodeAbstract *)0x0;
		}
		pIVar1 = (param_1->nodes).array[0xd];
		if (pIVar1 != (InstanceNodeAbstract *)0x0) {
		if ((*(byte *)&pIVar1->field6_0x14 & 1) == 0) {
		return FLOAT_0038639c;
		}
		(param_1->nodes).array[0xd] = (InstanceNodeAbstract *)0x0;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x04E::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x04E::Construct(Percept0x04E *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x4e;
		(this->parent).vtable = &Percept_VT_ID_0x4E;
		return;
		}
		
	*/
	return;
}

