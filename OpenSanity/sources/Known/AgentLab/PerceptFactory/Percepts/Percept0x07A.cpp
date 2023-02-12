#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x07A.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x07A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x07A * __thiscall Percept0x07A::Dispose(Percept0x07A *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x07A::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x07A::GetUtilityScore(Percept0x07A *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		uint uVar2;
		float fVar3;
		pIVar1 = (param_1->nodes).array[0xc];
		if ((pIVar1 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar1->field6_0x14 & 1) != 0)) {
		(param_1->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		pIVar1 = (param_1->nodes).array[0xc];
		if (pIVar1 != (InstanceNodeAbstract *)0x0) {
		uVar2 = pIVar1->field6_0x14;
		if ((uVar2 & 1) != 0) {
		(param_1->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		return FLOAT_00386394;
		}
		fVar3 = FLOAT_0038639c;
		if ((uVar2 & 0x100) == 0) {
		fVar3 = 0.0;
		}
		return fVar3;
		}
		return FLOAT_0038639c;
		}
		
	*/
	return 0.0f;
}

void Percept0x07A::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x07A::Construct(Percept0x07A *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x7a;
		(this->parent).vtable = &Percept_VT_ID_0x7a;
		return;
		}
		
	*/
	return;
}

