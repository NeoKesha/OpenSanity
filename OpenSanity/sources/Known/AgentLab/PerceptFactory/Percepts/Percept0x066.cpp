#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x066.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x066::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x066 * __thiscall Percept0x066::Dispose(Percept0x066 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x066::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x066::GetUtilityScore(Percept0x066 *this,InstanceContext *param_1){
		char cVar1;
		cVar1 = (*(param_1->parent).vtable[2].Method4)(param_1);
		if (cVar1 != '\0') {
		return (float)(uint)*(byte *)&(param_1->nodes).array[0xf][2].time;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x066::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x066::Construct(Percept0x066 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x66;
		(this->parent).vtable = &Percept_VT_ID_0x66;
		return;
		}
		
	*/
	return;
}

