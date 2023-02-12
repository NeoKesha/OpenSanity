#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x05C.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x05C::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x05C * __thiscall Percept0x05C::Dispose(Percept0x05C *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x05C::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x05C::GetUtilityScore(Percept0x05C *this,InstanceContext *param_1){
		float fVar1;
		if ((float)(uint)*(byte *)(((uint)(this->parent).PerceptID >> 0x11) + 0x28 +(int)(param_1->parent).field14_0x20.matrix2.m42) ==(this->parent).Threshold) {
		fVar1 = (this->parent).Threshold;
		return fVar1 + fVar1;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x05C::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x05C::Construct(Percept0x05C *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x5c;
		(this->parent).vtable = &Percept_VT_ID_0x5C;
		return;
		}
		
	*/
	return;
}

