#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptGotRoute.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptGotRoute::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptGotRoute * __thiscall PerceptGotRoute::Dispose(PerceptGotRoute *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptGotRoute::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptGotRoute::GetUtilityScore(PerceptGotRoute *this,InstanceContext *param_1){
		char cVar1;
		float fVar2;
		cVar1 = (*(param_1->parent).vtable[2].Method4)(param_1);
		if (cVar1 != '\0') {
		fVar2 = FLOAT_0038639c;
		if ((param_1->nodes).array[0xf][2].ctx == (InstanceContext *)0x0) {
		fVar2 = 0.0;
		}
		return fVar2;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptGotRoute::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptGotRoute::Construct(PerceptGotRoute *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0xd;
		(this->parent).vtable = &Percept_VT_GotRoute;
		return;
		}
		
	*/
	return;
}

