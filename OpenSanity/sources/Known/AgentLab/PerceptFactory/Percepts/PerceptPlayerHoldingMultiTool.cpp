#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptPlayerHoldingMultiTool.h"

void PerceptPlayerHoldingMultiTool::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptPlayerHoldingMultiTool * __thiscall PerceptPlayerHoldingMultiTool::Dispose(PerceptPlayerHoldingMultiTool *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptPlayerHoldingMultiTool::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptPlayerHoldingMultiTool::GetUtilityScore(PerceptPlayerHoldingMultiTool *this){
		float fVar1;
		if (PTR_003d0eec == (NodeRelated1C *)0x0) {
		return FLOAT_00386394;
		}
		fVar1 = FLOAT_0038639c;
		if ((PTR_003d0eec->field1_0x1c >> 5 & 1) == 0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptPlayerHoldingMultiTool::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptPlayerHoldingMultiTool::Construct(PerceptPlayerHoldingMultiTool *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x233;
		(this->parent).vtable = &Percept_VT_PlayerHoldingMultiTool;
		return;
		}
		
	*/
	return;
}

