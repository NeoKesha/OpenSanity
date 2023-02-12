#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAnimationFinished.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptAnimationFinished::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAnimationFinished * __thiscall PerceptAnimationFinished::Dispose(PerceptAnimationFinished *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptAnimationFinished::GetUtilityScore(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptAnimationFinished::GetUtilityScore(PerceptAnimationFinished *this,InstanceContext *ctx){
		InstanceNodeOGI *nodeN;
		float fVar1;
		float fVar2;
		nodeN = (InstanceNodeOGI *)InstanceDataList::GetNode(&((ctx->parent).ctx)->nodes,OGI);
		if (nodeN->field4_0x24 == (InstanceNodeOGISub *)0x0) {
		return FLOAT_0038639c;
		}
		fVar2 = InstanceNodeOGISub::GetAnimationProgress(nodeN->field4_0x24,0xff);
		fVar1 = 0.0;
		if (fVar2 <= FLOAT_00386394) {
		fVar1 = FLOAT_0038639c;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptAnimationFinished::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptAnimationFinished::Construct(PerceptAnimationFinished *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 7;
		(this->parent).vtable = &Percept_VT_AnimationFinished;
		return;
		}
		
	*/
	return;
}

