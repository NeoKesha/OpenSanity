#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptFocusAgentCanSeeMe.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptFocusAgentCanSeeMe::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall PerceptFocusAgentCanSeeMe::GetUtilityScore(PerceptFocusAgentCanSeeMe *this,InstanceContext *param_1){
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
		float local_50;
		float local_4c;
		float local_48;
		float local_44;
		Vector4 local_40;
		float local_30;
		float local_2c;
		float local_28;
		float local_24;
		Vector4 local_20;
		local_58 = (InstanceContext *)0x0;
		bVar5 = InstanceContext::GetFocusRelated(param_1,&local_58,&local_40);
		if ((bVar5 != false) && (local_58 != (InstanceContext *)0x0)) {
		InstanceContext::thunk_FUN_0005a4c0(local_58,&local_40,&local_20);
		pIVar4 = (((param_1->parent).ctx)->parent).transform;
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
		local_30 = (pIVar4->position).x;
		local_28 = (pIVar4->position).z;
		local_44 = (pIVar4->position).w;
		local_40.y = local_40.y + FLOAT_00394384;
		local_40.x = local_30 - local_40.x;
		local_2c = (pIVar4->position).y + FLOAT_00394384;
		fVar8 = local_2c - local_40.y;
		local_40.z = local_28 - local_40.z;
		pIVar7 = (InstanceContext *)(local_40.z * local_40.z + fVar8 * fVar8 + local_40.x * local_40.x);
		if ((float)pIVar7 <= _DAT_004963dc) {
		local_4c = 0.0;
		}
		else {
		local_54 = SQRT((float)pIVar7);
		local_4c = FLOAT_0038639c / local_54;
		local_58 = pIVar7;
		}
		local_48 = local_40.z * local_4c;
		local_50 = local_4c * local_40.x;
		local_4c = local_4c * fVar8;
		fVar8 = local_20.z * local_48 + local_20.y * local_4c + local_20.x * local_50;
		pfVar1 = &(this->parent).Threshold;
		if (*pfVar1 <= fVar8 && fVar8 != *pfVar1) {
		local_24 = local_44;
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

void PerceptFocusAgentCanSeeMe::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptFocusAgentCanSeeMe * __thiscall PerceptFocusAgentCanSeeMe::Dispose(PerceptFocusAgentCanSeeMe *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptFocusAgentCanSeeMe::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptFocusAgentCanSeeMe::Construct(PerceptFocusAgentCanSeeMe *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x19;
		(this->parent).vtable = &Percept_VT_FocusAgentCanSeeMe;
		return;
		}
		
	*/
	return;
}

