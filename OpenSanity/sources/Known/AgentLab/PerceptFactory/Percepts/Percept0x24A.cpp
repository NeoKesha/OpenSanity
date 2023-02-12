#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x24A.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x24A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x24A * __thiscall Percept0x24A::Dispose(Percept0x24A *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x24A::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x24A::GetUtilityScore(Percept0x24A *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		float fVar2;
		pIVar1 = InstanceDataList::GetNode(&((param_1->parent).ctx)->nodes,Character);
		fVar2 = FLOAT_0038639c;
		if ((*(uint *)((pIVar1[1].vtable)->Method8 + 0x1c) >> 0x16 & 1) == 0) {
		fVar2 = 0.0;
		}
		return fVar2;
		}
		
	*/
	return 0.0f;
}

void Percept0x24A::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x24A::Construct(Percept0x24A *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x24a;
		(this->parent).vtable = &Percept_VT_ID_0x24a;
		return;
		}
		
	*/
	return;
}

