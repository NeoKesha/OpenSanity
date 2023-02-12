#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x252.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x252::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x252 * __fastcall Percept0x252::Construct(Percept0x252 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x252;
		(this->parent).vtable = &Percept_VT_ID_0x252;
		return this;
		}
		
	*/
	return;
}

void Percept0x252::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x252 * __thiscall Percept0x252::Dispose(Percept0x252 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x252::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x252::GetUtilityScore(Percept0x252 *this,InstanceContext *param_1){
		float fVar1;
		fVar1 = thunk_FUN_0005cc10((param_1->parent).ctx);
		return fVar1;
		}
		
	*/
	return 0.0f;
}

