#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x06C.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x06C::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x06C * __thiscall Percept0x06C::Dispose(Percept0x06C *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x06C::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x06C::GetUtilityScore(Percept0x06C *this,InstanceContext *param_1){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if (*(int *)&(param_1->nodes).array[0x11][5].field2_0x8 == 0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void Percept0x06C::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x06C::Construct(Percept0x06C *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x6c;
		(this->parent).vtable = &Percept_VT_ID_0x6c;
		return;
		}
		
	*/
	return;
}

