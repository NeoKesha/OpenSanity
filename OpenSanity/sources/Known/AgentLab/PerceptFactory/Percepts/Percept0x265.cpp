#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x265.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x265::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x265 * __fastcall Percept0x265::Construct(Percept0x265 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x265;
		(this->parent).vtable = &Percept_VT_ID_0x265;
		return this;
		}
		
	*/
	return;
}

void Percept0x265::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x265 * __thiscall Percept0x265::Dispose(Percept0x265 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x265::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x265::GetUtilityScore(Percept0x265 *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		InstanceContext *this_00;
		int iVar2;
		pIVar1 = (param_1->nodes).array[0xf];
		this_00 = pIVar1[2].ctx;
		if (this_00 != (InstanceContext *)0x0) {
		param_1._0_1_ = *(char *)&pIVar1[2].time - 1;
		if ((byte)param_1 == 0xff) {
		param_1._0_1_ = 0;
		}
		iVar2 = FUN_0015d930((int)this_00,(byte)param_1);
		if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x1c) >> 2 & 1) != 0)) {
		return FLOAT_0038639c;
		}
		}
		return 0.0;
		}
		
	*/
	return 0.0f;
}

