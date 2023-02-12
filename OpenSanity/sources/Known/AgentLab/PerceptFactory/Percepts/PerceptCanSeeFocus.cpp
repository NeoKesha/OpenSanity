#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptCanSeeFocus.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptCanSeeFocus::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall PerceptCanSeeFocus::GetUtilityScore(PerceptCanSeeFocus *this,InstanceContext *param_1){
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
		Vector4 local_40;
		float local_30;
		float local_2c;
		float local_28;
		float local_24;
		Vector4 local_20;
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
		InstanceContext::thunk_FUN_0005a4c0((param_1->parent).ctx,&local_40,&local_20);
		local_40.y = local_40.y + FLOAT_00394384;
		local_2c = local_50.y + FLOAT_00394384;
		local_24 = local_50.w;
		local_50.y = local_2c - local_40.y;
		local_28 = local_50.z;
		local_50.z = local_50.z - local_40.z;
		local_30 = local_50.x;
		local_50.x = local_50.x - local_40.x;
		pIVar7 = (InstanceContext *)(local_50.z * local_50.z + local_50.y * local_50.y + local_50.x * local_50.x);
		if ((float)pIVar7 <= _DAT_004963dc) {
		fVar8 = 0.0;
		}
		else {
		local_54 = SQRT((float)pIVar7);
		fVar8 = FLOAT_0038639c / local_54;
		local_58 = pIVar7;
		}
		local_50.x = fVar8 * local_50.x;
		local_50.y = fVar8 * local_50.y;
		local_50.z = local_50.z * fVar8;
		fVar8 = local_20.z * local_50.z + local_20.y * local_50.y + local_20.x * local_50.x;
		pfVar1 = &(this->parent).Threshold;
		if (*pfVar1 <= fVar8 && fVar8 != *pfVar1) {
		uVar6 = FUN_001eab70((uint)(((param_1->parent).ctx)->parent).chunkData,&local_40,&local_30,0x80,(float *)0x0,&local_50,0);
		if ((char)uVar6 == '\0') {
		fVar8 = (this->parent).Threshold;
		return fVar8 + fVar8;
		}
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptCanSeeFocus::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptCanSeeFocus * __thiscall PerceptCanSeeFocus::Dispose(PerceptCanSeeFocus *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptCanSeeFocus::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptCanSeeFocus::Construct(PerceptCanSeeFocus *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x1a;
		(this->parent).vtable = &Percept_VT_CanSeeFocus;
		return;
		}
		
	*/
	return;
}

