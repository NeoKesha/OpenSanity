#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x04D.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x04D::Dispose(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x04D::Dispose(int *param_1){
		int in_EAX;
		undefined4 *puVar1;
		byte in_CF;
		puVar1 = (undefined4 *)((in_EAX + 0x2316fffc) - (uint)in_CF);
		*param_1 = *param_1 + (int)param_1;
		puVar1[2] = 0;
		puVar1[1] = 0xffffff;
		*puVar1 = &Action_VT_UnsupportAbove;
		puVar1[3] = puVar1[3] & 0xffc0ffff | 0xffff;
		return;
		}
		
	*/
	return;
}

float Percept0x04D::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x04D::GetUtilityScore(Percept0x04D *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		pIVar1 = (param_1->nodes).array[0xc];
		if ((pIVar1 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar1->field6_0x14 & 1) != 0)) {
		(param_1->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		pIVar1 = (param_1->nodes).array[0xc];
		if (pIVar1 != (InstanceNodeAbstract *)0x0) {
		if ((*(byte *)&pIVar1->field6_0x14 & 1) == 0) {
		return FLOAT_0038639c;
		}
		(param_1->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x04D::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x04D::Construct(Percept0x04D *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x4d;
		(this->parent).vtable = &Percept_VT_ID_0x4D;
		return;
		}
		
	*/
	return;
}

void Percept0x04D::Dispose_3(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall Percept0x04D::Dispose(Percept0x04D *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

