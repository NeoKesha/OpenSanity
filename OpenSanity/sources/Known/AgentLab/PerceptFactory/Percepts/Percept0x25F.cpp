#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x25F.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x25F::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x25F * __fastcall Percept0x25F::Construct(Percept0x25F *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x25f;
		(this->parent).vtable = &Percept_VT_ID_0x25f;
		return this;
		}
		
	*/
	return;
}

void Percept0x25F::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x25F * __thiscall Percept0x25F::Dispose(Percept0x25F *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x25F::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x25F::GetUtilityScore(Percept0x25F *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		InstanceContext *this_00;
		int iVar2;
		pIVar1 = (param_1->nodes).array[0xf];
		this_00 = pIVar1[2].ctx;
		if (((this_00 != (InstanceContext *)0x0) &&(iVar2 = FUN_0015d930((int)this_00,*(byte *)&pIVar1[2].time), iVar2 != 0)) &&((*(byte *)(iVar2 + 0x1c) >> 4 & 1) != 0)) {
		return FLOAT_0038639c;
		}
		return 0.0;
		}
		
	*/
	return 0.0f;
}

