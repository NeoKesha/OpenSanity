#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x276.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x276::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x276 * __fastcall Percept0x276::Construct(Percept0x276 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x276;
		(this->parent).vtable = &Percept_VT_ID_0x276;
		return this;
		}
		
	*/
	return;
}

void Percept0x276::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x276 * __thiscall Percept0x276::Dispose(Percept0x276 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x276::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x276::GetUtilityScore(Percept0x276 *this,InstanceContext *param_1){
		if ((param_1->nodes).array[0x13] != (InstanceNodeAbstract *)0xffffffff) {
		return FLOAT_0038639c;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

