#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x0AC.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x0AC::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x0AC * __thiscall Percept0x0AC::Dispose(Percept0x0AC *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x0AC::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x0AC::GetUtilityScore(Percept0x0AC *this,InstanceContext *param_1){
		float fVar1;
		int *in_stack_0000000c;
		if (((float)*(int *)(DAT_00495d24 + 0x5c) * TimePerTick1 != 0.0) &&(fVar1 = (float)(*in_stack_0000000c - *(int *)(DAT_00495d24 + 0x5c)) * TimePerTick1,0.0 <= fVar1)) {
		return fVar1;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x0AC::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x0AC::Construct(Percept0x0AC *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0xac;
		(this->parent).vtable = &Percept_VT_ID_0xac;
		return;
		}
		
	*/
	return;
}

