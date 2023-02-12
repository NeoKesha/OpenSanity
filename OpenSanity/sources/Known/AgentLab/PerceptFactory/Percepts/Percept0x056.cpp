#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x056.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x056::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x056 * __thiscall Percept0x056::Dispose(Percept0x056 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x056::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x056::GetUtilityScore(Percept0x056 *this,InstanceContext *param_1){
		char cVar1;
		cVar1 = (*(param_1->parent).vtable[2].Method4)(param_1);
		if (cVar1 != '\0') {
		return (float)(uint)*(byte *)&param_1->next * FLOAT_00394374;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x056::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x056::Construct(Percept0x056 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x56;
		(this->parent).vtable = &Percept_VT_ID_0x56;
		return;
		}
		
	*/
	return;
}

