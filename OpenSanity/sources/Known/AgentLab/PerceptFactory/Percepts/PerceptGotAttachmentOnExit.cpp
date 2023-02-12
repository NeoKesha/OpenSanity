#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptGotAttachmentOnExit.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptGotAttachmentOnExit::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptGotAttachmentOnExit * __thiscall PerceptGotAttachmentOnExit::Dispose(PerceptGotAttachmentOnExit *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptGotAttachmentOnExit::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptGotAttachmentOnExit::GetUtilityScore(PerceptGotAttachmentOnExit *this,InstanceContext *param_1){
		InstanceNodeObjectLink *pIVar1;
		int iVar1;
		float fVar2;
		pIVar1 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&((param_1->parent).ctx)->nodes,ObjectLink);
		if ((pIVar1 != (InstanceNodeObjectLink *)0x0) && (pIVar1->field67_0x70 != (UNV009 *)0x0)) {
		iVar1 = FUN_000f8390((int)pIVar1->field67_0x70,(char)((uint)(this->parent).PerceptID >> 0x11));
		fVar2 = FLOAT_0038639c;
		if (iVar1 == 0) {
		fVar2 = 0.0;
		}
		return fVar2;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptGotAttachmentOnExit::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptGotAttachmentOnExit::Construct(PerceptGotAttachmentOnExit *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x37;
		(this->parent).vtable = &Percept_VT_GotAttachmentOnExit;
		return;
		}
		
	*/
	return;
}

