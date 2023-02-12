#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptLostAllAttachments.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptLostAllAttachments::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptLostAllAttachments * __thiscall PerceptLostAllAttachments::Dispose(PerceptLostAllAttachments *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptLostAllAttachments::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptLostAllAttachments::GetUtilityScore(PerceptLostAllAttachments *this,InstanceContext *param_1){
		float fVar1;
		InstanceNodeObjectLink *pIVar1;
		pIVar1 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&((param_1->parent).ctx)->nodes,ObjectLink);
		fVar1 = FLOAT_0038639c;
		if ((pIVar1 != (InstanceNodeObjectLink *)0x0) && ((pIVar1->field7_0x18 & 0x20) != 0)) {
		pIVar1->field7_0x18 = pIVar1->field7_0x18 & 0xffffffdf;
		return fVar1;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptLostAllAttachments::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptLostAllAttachments::Construct(PerceptLostAllAttachments *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x40;
		(this->parent).vtable = &Percept_VT_LostAllAttachments;
		return;
		}
		
	*/
	return;
}

