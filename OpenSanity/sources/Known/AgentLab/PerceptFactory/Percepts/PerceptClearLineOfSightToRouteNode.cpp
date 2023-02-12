#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptClearLineOfSightToRouteNode.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptClearLineOfSightToRouteNode::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptClearLineOfSightToRouteNode::GetUtilityScore(PerceptClearLineOfSightToRouteNode *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		InstanceNodeAbstract *pIVar3;
		InstanceContext *this_00;
		InstanceTransform *pIVar4;
		undefined4 *puVar5;
		uint uVar6;
		float fVar7;
		undefined4 local_40;
		float local_3c;
		undefined4 local_38;
		float local_34;
		float local_30;
		float local_2c;
		float local_28;
		float local_24;
		undefined local_20 [28];
		pIVar3 = (param_1->nodes).array[0xf];
		this_00 = pIVar3[2].ctx;
		if (this_00 != (InstanceContext *)0x0) {
		puVar5 = (undefined4 *)FUN_0015d930((int)this_00,*(byte *)&pIVar3[2].time);
		if (puVar5 != (undefined4 *)0x0) {
		local_40 = *puVar5;
		local_3c = (float)puVar5[1];
		local_38 = puVar5[2];
		local_34 = FLOAT_0038639c;
		pIVar4 = (((param_1->parent).ctx)->parent).transform;
		if ((*(byte *)&pIVar4->field3_0x60 & 4) != 0) {
		fVar7 = (pIVar4->matrix).m43;
		fVar1 = (pIVar4->matrix).m44;
		fVar2 = (pIVar4->matrix).m42;
		(pIVar4->position).x = (pIVar4->matrix).m41;
		(pIVar4->position).y = fVar2;
		(pIVar4->position).z = fVar7;
		(pIVar4->position).w = fVar1;
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffffa);
		}
		local_30 = (pIVar4->position).x;
		local_28 = (pIVar4->position).z;
		local_24 = (pIVar4->position).w;
		local_2c = (pIVar4->position).y + FLOAT_00394384;
		local_3c = local_3c + FLOAT_00394384;
		uVar6 = FUN_001eab70((uint)(((param_1->parent).ctx)->parent).chunkData,&local_30,&local_40,0x80,(float *)0x0,local_20,0);
		fVar7 = 0.0;
		if ((char)uVar6 == '\0') {
		fVar7 = FLOAT_0038639c;
		}
		return fVar7;
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptClearLineOfSightToRouteNode::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptClearLineOfSightToRouteNode * __thiscall PerceptClearLineOfSightToRouteNode::Dispose(PerceptClearLineOfSightToRouteNode *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptClearLineOfSightToRouteNode::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptClearLineOfSightToRouteNode::Construct(PerceptClearLineOfSightToRouteNode *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x1c;
		(this->parent).vtable = &Percept_VT_ClearLineOfSightToRouteNode;
		return;
		}
		
	*/
	return;
}

