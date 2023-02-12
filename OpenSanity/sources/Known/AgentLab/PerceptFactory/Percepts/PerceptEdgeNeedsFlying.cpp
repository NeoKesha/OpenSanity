#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptEdgeNeedsFlying.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptEdgeNeedsFlying::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptEdgeNeedsFlying * __fastcall PerceptEdgeNeedsFlying::Construct(PerceptEdgeNeedsFlying *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x224;
		(this->parent).vtable = &Percept_VT_EdgeNeedsFlying;
		return this;
		}
		
	*/
	return;
}

void PerceptEdgeNeedsFlying::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptEdgeNeedsFlying * __thiscall PerceptEdgeNeedsFlying::Dispose(PerceptEdgeNeedsFlying *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptEdgeNeedsFlying::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptEdgeNeedsFlying::GetUtilityScore(PerceptEdgeNeedsFlying *this,InstanceContext *param_1){
		int iVar1;
		iVar1 = *(int *)&(param_1->nodes).array[0xf][2].field2_0x8;
		if ((iVar1 != 0) && ((*(byte *)(iVar1 + 4) >> 5 & 1) != 0)) {
		return FLOAT_0038639c;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

