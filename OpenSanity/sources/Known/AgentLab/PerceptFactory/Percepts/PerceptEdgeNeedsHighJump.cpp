#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptEdgeNeedsHighJump.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptEdgeNeedsHighJump::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptEdgeNeedsHighJump * __fastcall PerceptEdgeNeedsHighJump::Construct(PerceptEdgeNeedsHighJump *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x227;
		(this->parent).vtable = &Percept_VT_EdgeNeedsHighJump;
		return this;
		}
		
	*/
	return;
}

void PerceptEdgeNeedsHighJump::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptEdgeNeedsHighJump * __thiscall PerceptEdgeNeedsHighJump::Dispose(PerceptEdgeNeedsHighJump *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptEdgeNeedsHighJump::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptEdgeNeedsHighJump::GetUtilityScore(PerceptEdgeNeedsHighJump *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		pIVar1 = (param_1->nodes).array[0xf];
		if ((((pIVar1[2].ctx != (InstanceContext *)0x0) && ((*(byte *)&pIVar1[2].field5_0x10 & 8) == 0))&& (*(int *)&pIVar1[2].field2_0x8 != 0)) &&((*(byte *)(*(int *)&pIVar1[2].field2_0x8 + 4) >> 4 & 1) != 0)) {
		return FLOAT_0038639c;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

