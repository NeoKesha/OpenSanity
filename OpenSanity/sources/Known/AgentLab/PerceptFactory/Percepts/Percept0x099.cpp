#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x099.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x099::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x099 * __thiscall Percept0x099::Dispose(Percept0x099 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x099::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x099::GetUtilityScore(Percept0x099 *this,InstanceContext *param_1){
		int iVar1;
		float fVar2;
		iVar1 = (param_1->parent).field14_0x20.field27_0x78;
		if (iVar1 == 0) {
		fVar2 = (param_1->parent).field14_0x20.matrix2.m33;
		}
		else {
		fVar2 = (float)FUN_00015286(iVar1);
		}
		FUN_001a80c0((int)fVar2,(undefined2 *)&param_1,(uint)(this->parent).PerceptID >> 0x11);
		fVar2 = FLOAT_0038639c;
		if ((short)param_1 == -1) {
		fVar2 = 0.0;
		}
		return fVar2;
		}
		
	*/
	return 0.0f;
}

void Percept0x099::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x099::Construct(Percept0x099 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x99;
		(this->parent).vtable = &Percept_VT_ID_0x99;
		return;
		}
		
	*/
	return;
}

