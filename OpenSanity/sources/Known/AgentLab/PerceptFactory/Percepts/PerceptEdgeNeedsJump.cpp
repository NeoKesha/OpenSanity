#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptEdgeNeedsJump.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptEdgeNeedsJump::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptEdgeNeedsJump * __fastcall PerceptEdgeNeedsJump::Construct(PerceptEdgeNeedsJump *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x223;
		(this->parent).vtable = &Percept_VT_EdgeNeedsJump;
		return this;
		}
		
	*/
	return;
}

void PerceptEdgeNeedsJump::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptEdgeNeedsJump * __thiscall PerceptEdgeNeedsJump::Dispose(PerceptEdgeNeedsJump *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptEdgeNeedsJump::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptEdgeNeedsJump::GetUtilityScore(PerceptEdgeNeedsJump *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		pIVar1 = (param_1->nodes).array[0xf];
		if ((((pIVar1[2].ctx != (InstanceContext *)0x0) && ((*(byte *)&pIVar1[2].field5_0x10 & 8) == 0))&& (*(int *)&pIVar1[2].field2_0x8 != 0)) &&((*(byte *)(*(int *)&pIVar1[2].field2_0x8 + 4) >> 2 & 1) != 0)) {
		return FLOAT_0038639c;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

