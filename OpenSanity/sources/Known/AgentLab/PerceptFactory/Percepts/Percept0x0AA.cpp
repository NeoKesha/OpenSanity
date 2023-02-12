#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x0AA.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x0AA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x0AA * __thiscall Percept0x0AA::Dispose(Percept0x0AA *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x0AA::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x0AA::GetUtilityScore(Percept0x0AA *this,InstanceContext *param_1){
		char cVar1;
		cVar1 = (*(param_1->parent).vtable[2].Method4)(param_1);
		if (cVar1 != '\0') {
		return *(float *)&param_1[1].parent.field_0x8;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x0AA::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x0AA::Construct(Percept0x0AA *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0xaa;
		(this->parent).vtable = &Percept_VT_ID_0xaa;
		return;
		}
		
	*/
	return;
}

