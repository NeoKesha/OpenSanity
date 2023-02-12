#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptWillHitWall.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptWillHitWall::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptWillHitWall * __fastcall PerceptWillHitWall::Construct(PerceptWillHitWall *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x214;
		(this->parent).vtable = &Percept_VT_WillHitWall;
		return this;
		}
		
	*/
	return;
}

void PerceptWillHitWall::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptWillHitWall * __thiscall PerceptWillHitWall::Dispose(PerceptWillHitWall *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptWillHitWall::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptWillHitWall::GetUtilityScore(PerceptWillHitWall *this,InstanceContext *param_1){
		NodeRelated1Abstract *this_00;
		InstanceNodeCharacter *pIVar1;
		undefined4 uVar2;
		float fVar3;
		int *in_stack_0000000c;
		pIVar1 = InstanceContext::GetCharacterNode((param_1->parent).ctx);
		this_00 = (pIVar1->field1_0x18->parent).parent.related;
		uVar2 = FUN_001a7b90((int)this_00,in_stack_0000000c,(this->parent).Interval);
		if ((char)uVar2 != '\0') {
		fVar3 = FLOAT_0038639c;
		if (this_00->field_0x4 != '\t') {
		fVar3 = 0.0;
		}
		return fVar3;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

