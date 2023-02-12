#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptNodeIsAirborne.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptNodeIsAirborne::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptNodeIsAirborne * __fastcall PerceptNodeIsAirborne::Construct(PerceptNodeIsAirborne *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x222;
		(this->parent).vtable = &Percept_VT_NodeIsAirborne;
		return this;
		}
		
	*/
	return;
}

void PerceptNodeIsAirborne::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptNodeIsAirborne * __thiscall PerceptNodeIsAirborne::Dispose(PerceptNodeIsAirborne *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptNodeIsAirborne::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptNodeIsAirborne::GetUtilityScore(PerceptNodeIsAirborne *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		InstanceContext *this_00;
		int iVar2;
		pIVar1 = (param_1->nodes).array[0xf];
		this_00 = pIVar1[2].ctx;
		if (this_00 != (InstanceContext *)0x0) {
		iVar2 = FUN_0015d930((int)this_00,*(byte *)&pIVar1[2].time);
		if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x1c) >> 1 & 1) != 0)) {
		return FLOAT_0038639c;
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

