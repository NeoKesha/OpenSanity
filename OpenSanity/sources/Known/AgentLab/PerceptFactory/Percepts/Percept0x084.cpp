#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x084.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x084::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x084 * __thiscall Percept0x084::Dispose(Percept0x084 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x084::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x084::GetUtilityScore(Percept0x084 *this,InstanceContext *param_1){
		int iVar1;
		InstanceNodeAbstract *pIVar2;
		float fVar3;
		iVar1 = (param_1->parent).field14_0x20.field27_0x78;
		if (iVar1 == 0) {
		pIVar2 = (param_1->nodes).array[0xf];
		}
		else {
		pIVar2 = *(InstanceNodeAbstract **)(iVar1 + 0x124);
		}
		if (*(byte *)&pIVar2[2].field6_0x14 != 0xff) {
		fVar3 = FLOAT_0038639c;
		if ((int)(uint)*(byte *)&pIVar2[2].field6_0x14 <(int)(*(byte *)((int)&pIVar2[2].field5_0x10 + 1) - 1)) {
		fVar3 = 0.0;
		}
		return fVar3;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x084::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x084::Construct(Percept0x084 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x84;
		(this->parent).vtable = &Percept_VT_ID_0x84;
		return;
		}
		
	*/
	return;
}

