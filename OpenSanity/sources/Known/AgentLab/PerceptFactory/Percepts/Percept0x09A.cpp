#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x09A.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x09A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x09A * __thiscall Percept0x09A::Dispose(Percept0x09A *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x09A::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Removing unreachable block (ram,0x0019d00d) float __thiscall Percept0x09A::GetUtilityScore(Percept0x09A *this,InstanceContext *param_1){
		char cVar1;
		cVar1 = *(char *)&(param_1->nodes).array[0xf][2].field6_0x14;
		if ((cVar1 != -1) && ((cVar1 + 1U & 1) == 0)) {
		return FLOAT_0038639c;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x09A::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x09A::Construct(Percept0x09A *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x9a;
		(this->parent).vtable = &Percept_VT_ID_0x9a;
		return;
		}
		
	*/
	return;
}

