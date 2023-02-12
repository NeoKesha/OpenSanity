#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptElse.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptElse::GetUtilityScore(InstanceContext* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptElse::GetUtilityScore(PerceptElse *this,InstanceContext *param_1,int param_2){
		float fVar1;
		fVar1 = FLOAT_00386394;
		*(undefined4 *)(param_2 + 0x14) = DAT_004961c4;
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptElse::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAbstract * __thiscall PerceptElse::Dispose(PerceptElse *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void PerceptElse::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptElse::Construct(PerceptElse *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 2;
		(this->parent).vtable = &Percept_VT_Else;
		return;
		}
		
	*/
	return;
}

