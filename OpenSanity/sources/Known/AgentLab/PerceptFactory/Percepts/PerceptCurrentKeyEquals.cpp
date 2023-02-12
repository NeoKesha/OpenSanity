#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptCurrentKeyEquals.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptCurrentKeyEquals::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptCurrentKeyEquals * __thiscall PerceptCurrentKeyEquals::Dispose(PerceptCurrentKeyEquals *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptCurrentKeyEquals::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptCurrentKeyEquals::GetUtilityScore(PerceptCurrentKeyEquals *this,InstanceContext *param_1){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if ((uint)(byte)(*(char *)&(param_1->nodes).array[0xf][2].field6_0x14 + 1) !=(uint)(this->parent).PerceptID >> 0x11) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptCurrentKeyEquals::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptCurrentKeyEquals::Construct(PerceptCurrentKeyEquals *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x34;
		(this->parent).vtable = &Percept_VT_CurrentKeyEquals;
		return;
		}
		
	*/
	return;
}

