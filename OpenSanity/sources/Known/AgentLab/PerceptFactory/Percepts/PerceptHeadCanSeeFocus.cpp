#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptHeadCanSeeFocus.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptHeadCanSeeFocus::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall PerceptHeadCanSeeFocus::GetUtilityScore(PerceptHeadCanSeeFocus *this,InstanceContext *param_1){
		float *pfVar1;
		float fVar2;
		float fVar3;
		InstanceTransform *pIVar4;
		bool bVar5;
		uint uVar6;
		InstanceContext *pIVar7;
		float fVar8;
		InstanceContext *local_58;
		float local_54;
		Vector4 local_50;
		float local_40;
		float local_3c;
		float local_38;
		float local_34;
		float local_30;
		float local_2c;
		float local_28;
		float local_20;
		float local_1c;
		float local_18;
		local_58 = (InstanceContext *)0x0;
		bVar5 = InstanceContext::GetFocusRelated(param_1,&local_58,&local_50);
		if (bVar5 != false) {
		if (local_58 != (InstanceContext *)0x0) {
		pIVar4 = (local_58->parent).transform;
		if ((*(byte *)&pIVar4->field3_0x60 & 4) != 0) {
		fVar8 = (pIVar4->matrix).m44;
		fVar2 = (pIVar4->matrix).m43;
		fVar3 = (pIVar4->matrix).m42;
		(pIVar4->position).x = (pIVar4->matrix).m41;
		(pIVar4->position).y = fVar3;
		(pIVar4->position).z = fVar2;
		(pIVar4->position).w = fVar8;
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffffa);
		}
		local_50.x = (pIVar4->position).x;
		local_50.y = (pIVar4->position).y;
		local_50.z = (pIVar4->position).z;
		local_50.w = (pIVar4->position).w;
		}
		uVar6 = (uint)(this->parent).PerceptID >> 0x11 & 0xff;
		local_58 = (InstanceContext *)((uint)local_58 & 0xffffff00 | uVar6);
		uVar6 = FUN_00172520((int)(param_1->parent).ctx,(byte)uVar6,&local_30,&local_20);
		if ((char)uVar6 != '\0') {
		local_3c = local_50.y + FLOAT_00394384;
		local_40 = local_50.x;
		local_50.x = local_50.x - local_30;
		local_34 = local_50.w;
		local_2c = local_3c - local_2c;
		local_38 = local_50.z;
		local_50.z = local_50.z - local_28;
		pIVar7 = (InstanceContext *)(local_50.z * local_50.z + local_2c * local_2c + local_50.x * local_50.x);
		if ((float)pIVar7 <= _DAT_004963dc) {
		fVar8 = 0.0;
		}
		else {
		local_54 = SQRT((float)pIVar7);
		fVar8 = FLOAT_0038639c / local_54;
		local_58 = pIVar7;
		}
		local_50.x = fVar8 * local_50.x;
		local_50.y = fVar8 * local_2c;
		local_50.z = local_50.z * fVar8;
		fVar8 = local_18 * local_50.z + local_1c * local_50.y + local_20 * local_50.x;
		pfVar1 = &(this->parent).Threshold;
		if (*pfVar1 <= fVar8 && fVar8 != *pfVar1) {
		uVar6 = FUN_001eab70((uint)(((param_1->parent).ctx)->parent).chunkData,&local_30,&local_40,0x80,(float *)0x0,&local_50,0);
		if ((char)uVar6 == '\0') {
		fVar8 = (this->parent).Threshold;
		return fVar8 + fVar8;
		}
		}
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptHeadCanSeeFocus::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptHeadCanSeeFocus * __thiscall PerceptHeadCanSeeFocus::Dispose(PerceptHeadCanSeeFocus *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptHeadCanSeeFocus::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptHeadCanSeeFocus::Construct(PerceptHeadCanSeeFocus *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x29;
		(this->parent).vtable = &Percept_VT_HeadCanSeeFocus;
		return;
		}
		
	*/
	return;
}

