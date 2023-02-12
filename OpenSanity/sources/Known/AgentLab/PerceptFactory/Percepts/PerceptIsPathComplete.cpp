#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptIsPathComplete.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptIsPathComplete::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptIsPathComplete * __thiscall PerceptIsPathComplete::Dispose(PerceptIsPathComplete *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptIsPathComplete::GetUtilityScore(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptIsPathComplete::GetUtilityScore(PerceptIsPathComplete *this,InstanceContext *ctx){
		char cVar1;
		float fVar2;
		cVar1 = (*(ctx->parent).vtable[2].Method4)(ctx);
		if (cVar1 != '\0') {
		fVar2 = FLOAT_0038639c;
		if ((*(byte *)&(ctx->nodes).array[0xf][2].field5_0x10 & 8) == 0) {
		fVar2 = 0.0;
		}
		return fVar2;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptIsPathComplete::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptIsPathComplete::Construct(PerceptIsPathComplete *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 8;
		(this->parent).vtable = &Percept_VT_IsPathComplete;
		return;
		}
		
	*/
	return;
}

