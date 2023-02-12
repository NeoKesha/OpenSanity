#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptHeadLookingAtRouteNode.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptHeadLookingAtRouteNode::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall PerceptHeadLookingAtRouteNode::GetUtilityScore(PerceptHeadLookingAtRouteNode *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		InstanceContext *this_00;
		float *pfVar2;
		uint uVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float local_30;
		float local_2c;
		float local_28;
		float local_20;
		float local_1c;
		float local_18;
		pIVar1 = (param_1->nodes).array[0xf];
		this_00 = pIVar1[2].ctx;
		if (this_00 != (InstanceContext *)0x0) {
		pfVar2 = (float *)FUN_0015d930((int)this_00,*(byte *)&pIVar1[2].time);
		if (pfVar2 != (float *)0x0) {
		fVar7 = *pfVar2;
		fVar5 = pfVar2[2];
		fVar4 = pfVar2[1] + FLOAT_00394384;
		uVar3 = FUN_00172520((int)(param_1->parent).ctx,(byte)((uint)(this->parent).PerceptID >> 0x11),&local_30,&local_20);
		if ((char)uVar3 != '\0') {
		fVar7 = fVar7 - local_30;
		fVar5 = fVar5 - local_28;
		fVar4 = fVar4 - local_2c;
		fVar6 = fVar5 * fVar5 + fVar7 * fVar7 + fVar4 * fVar4;
		if (fVar6 <= _DAT_004963dc) {
		fVar6 = 0.0;
		}
		else {
		fVar6 = FLOAT_0038639c / SQRT(fVar6);
		}
		return local_20 * fVar6 * fVar7 + local_1c * fVar6 * fVar4 + local_18 * fVar6 * fVar5;
		}
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptHeadLookingAtRouteNode::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptHeadLookingAtRouteNode * __thiscall PerceptHeadLookingAtRouteNode::Dispose(PerceptHeadLookingAtRouteNode *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptHeadLookingAtRouteNode::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptHeadLookingAtRouteNode::Construct(PerceptHeadLookingAtRouteNode *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x2a;
		(this->parent).vtable = &Percept_VT_HeadLookingAtRouteNode;
		return;
		}
		
	*/
	return;
}

