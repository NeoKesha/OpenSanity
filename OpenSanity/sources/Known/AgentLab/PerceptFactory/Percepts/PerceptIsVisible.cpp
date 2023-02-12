#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptIsVisible.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptIsVisible::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptIsVisible * __thiscall PerceptIsVisible::Dispose(PerceptIsVisible *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptIsVisible::GetUtilityScore(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptIsVisible::GetUtilityScore(PerceptIsVisible *this,InstanceContext *ctx){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if (((((ctx->parent).ctx)->parent).flags & 0x400U) == 0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptIsVisible::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptIsVisible::Construct(PerceptIsVisible *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 4;
		(this->parent).vtable = &Percept_VT_IsVisible;
		return;
		}
		
	*/
	return;
}

