#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptMeFacingRouteNode.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptMeFacingRouteNode::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall PerceptMeFacingRouteNode::GetUtilityScore(PerceptMeFacingRouteNode *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		InstanceContext *this_00;
		float *pfVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		Vector4 local_30;
		Vector4 local_20;
		pIVar1 = (param_1->nodes).array[0xf];
		this_00 = pIVar1[2].ctx;
		if (this_00 != (InstanceContext *)0x0) {
		pfVar2 = (float *)FUN_0015d930((int)this_00,*(byte *)&pIVar1[2].time);
		if (pfVar2 != (float *)0x0) {
		fVar5 = *pfVar2;
		fVar4 = pfVar2[1];
		fVar3 = pfVar2[2];
		InstanceContext::thunk_FUN_0005a4c0((param_1->parent).ctx,&local_30,&local_20);
		local_30.y = (fVar4 + FLOAT_00394384) - local_30.y;
		fVar5 = fVar5 - local_30.x;
		fVar3 = fVar3 - local_30.z;
		fVar4 = fVar3 * fVar3 + fVar5 * fVar5 + local_30.y * local_30.y;
		if (fVar4 <= _DAT_004963dc) {
		fVar4 = 0.0;
		}
		else {
		fVar4 = FLOAT_0038639c / SQRT(fVar4);
		}
		return local_20.x * fVar4 * fVar5 +local_20.y * fVar4 * local_30.y + local_20.z * fVar4 * fVar3;
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptMeFacingRouteNode::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptMeFacingRouteNode * __thiscall PerceptMeFacingRouteNode::Dispose(PerceptMeFacingRouteNode *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptMeFacingRouteNode::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptMeFacingRouteNode::Construct(PerceptMeFacingRouteNode *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x1b;
		(this->parent).vtable = &Percept_VT_MeFacingRouteNode;
		return;
		}
		
	*/
	return;
}

