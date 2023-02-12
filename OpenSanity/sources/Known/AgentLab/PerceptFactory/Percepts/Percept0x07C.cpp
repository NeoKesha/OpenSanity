#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x07C.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x07C::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x07C * __thiscall Percept0x07C::Dispose(Percept0x07C *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x07C::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x07C::GetUtilityScore(Percept0x07C *this,InstanceContext *param_1){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if (((param_1->parent).ctx)->field27_0xe0 == 0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void Percept0x07C::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x07C::Construct(Percept0x07C *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x7c;
		(this->parent).vtable = &Percept_VT_ID_0x7c;
		return;
		}
		
	*/
	return;
}

