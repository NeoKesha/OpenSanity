#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x25A.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x25A::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x25A * __fastcall Percept0x25A::Construct(Percept0x25A *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x25a;
		(this->parent).vtable = &Percept_VT_ID_0x25a;
		return this;
		}
		
	*/
	return;
}

void Percept0x25A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x25A * __thiscall Percept0x25A::Dispose(Percept0x25A *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x25A::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x25A::GetUtilityScore(Percept0x25A *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		pIVar1 = (param_1->nodes).array[0xf];
		if ((((pIVar1[2].ctx != (InstanceContext *)0x0) && ((*(byte *)&pIVar1[2].field5_0x10 & 8) == 0))&& (*(int *)&pIVar1[2].field2_0x8 != 0)) &&((*(byte *)(*(int *)&pIVar1[2].field2_0x8 + 5) & 1) != 0)) {
		return FLOAT_0038639c;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

