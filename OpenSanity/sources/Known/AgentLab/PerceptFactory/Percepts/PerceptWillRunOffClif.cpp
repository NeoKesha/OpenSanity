#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptWillRunOffClif.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptWillRunOffClif::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptWillRunOffClif * __fastcall PerceptWillRunOffClif::Construct(PerceptWillRunOffClif *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x215;
		(this->parent).vtable = &Percept_VT_WillRunOffClif;
		return this;
		}
		
	*/
	return;
}

void PerceptWillRunOffClif::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptWillRunOffClif * __thiscall PerceptWillRunOffClif::Dispose(PerceptWillRunOffClif *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptWillRunOffClif::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptWillRunOffClif::GetUtilityScore(PerceptWillRunOffClif *this,InstanceContext *param_1){
		char cVar1;
		NodeRelated1Abstract *this_00;
		InstanceNodeCharacter *pIVar2;
		undefined4 uVar3;
		int *in_stack_0000000c;
		pIVar2 = InstanceContext::GetCharacterNode((param_1->parent).ctx);
		this_00 = (pIVar2->field1_0x18->parent).parent.related;
		uVar3 = FUN_001a7b90((int)this_00,in_stack_0000000c,(this->parent).Interval);
		if ((char)uVar3 == '\0') {
		return FLOAT_00386394;
		}
		cVar1 = this_00->field_0x4;
		if ((cVar1 != '\r') && (cVar1 != '\x0e')) {
		return 0.0;
		}
		return FLOAT_0038639c;
		}
		
	*/
	return 0.0f;
}

