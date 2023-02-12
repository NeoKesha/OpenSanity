#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x241.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x241::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x241 * __thiscall Percept0x241::Dispose(Percept0x241 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x241::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x241::GetUtilityScore(Percept0x241 *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		float fVar2;
		pIVar1 = InstanceDataList::GetNode(&((param_1->parent).ctx)->nodes,Character);
		fVar2 = FLOAT_0038639c;
		if (pIVar1[1].vtable[4].UpdateTime == (UpdateTime *)0x0) {
		fVar2 = 0.0;
		}
		return fVar2;
		}
		
	*/
	return 0.0f;
}

void Percept0x241::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x241::Construct(Percept0x241 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x241;
		(this->parent).vtable = &Percept_VT_ID_0x241;
		return;
		}
		
	*/
	return;
}

