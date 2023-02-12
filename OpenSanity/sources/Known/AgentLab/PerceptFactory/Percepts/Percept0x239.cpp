#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x239.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x239::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x239 * __fastcall Percept0x239::Construct(Percept0x239 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x239;
		(this->parent).vtable = &Percept_VT_ID_0x239;
		return this;
		}
		
	*/
	return;
}

void Percept0x239::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x239 * __thiscall Percept0x239::Dispose(Percept0x239 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x239::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x239::GetUtilityScore(Percept0x239 *this,InstanceContext *param_1){
		InstanceNodeCharacter *pIVar1;
		float fVar2;
		pIVar1 = InstanceContext::GetCharacterNode((param_1->parent).ctx);
		fVar2 = FLOAT_0038639c;
		if (((uint)((pIVar1->field1_0x18->parent).parent.related)->field7_0x10 >> 8 & 1) == 0) {
		fVar2 = 0.0;
		}
		return fVar2;
		}
		
	*/
	return 0.0f;
}

