#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptPlayerCanSeeMe.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptPlayerCanSeeMe::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall PerceptPlayerCanSeeMe::GetUtilityScore(PerceptPlayerCanSeeMe *this,InstanceContext *param_1){
		float *pfVar1;
		float fVar2;
		InstanceContextRefCounter *pIVar3;
		InstanceTransform *pIVar4;
		uint index;
		InstanceContext *this_00;
		float fVar5;
		float fVar6;
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
		index = (GameController4->chunkDescriptor).flags >> 8 & 0xf;
		if (index == 6) {
		this_00 = (InstanceContext *)0x0;
		}
		else {
		pIVar3 = (GameController4->chunkDescriptor).playerInstanceContexts[index];
		if (pIVar3 == (InstanceContextRefCounter *)0x0) {
		this_00 = (InstanceContext *)0x0;
		}
		else {
		this_00 = pIVar3->ctx;
		}
		}
		if (this_00 != (InstanceContext *)0x0) {
		InstanceContext::thunk_FUN_0005a4c0(this_00,&local_40,&local_20);
		pIVar4 = (((param_1->parent).ctx)->parent).transform;
		if ((*(byte *)&pIVar4->field3_0x60 & 4) != 0) {
		fVar5 = (pIVar4->matrix).m44;
		fVar6 = (pIVar4->matrix).m43;
		fVar2 = (pIVar4->matrix).m42;
		(pIVar4->position).x = (pIVar4->matrix).m41;
		(pIVar4->position).y = fVar2;
		(pIVar4->position).z = fVar6;
		(pIVar4->position).w = fVar5;
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffffa);
		}
		local_30 = (pIVar4->position).x;
		local_28 = (pIVar4->position).z;
		local_44 = (pIVar4->position).w;
		local_40.y = local_40.y + FLOAT_00386ab4;
		local_40.x = local_30 - local_40.x;
		local_2c = (pIVar4->position).y + FLOAT_00386ab4;
		fVar6 = local_2c - local_40.y;
		local_40.z = local_28 - local_40.z;
		fVar5 = local_40.z * local_40.z + fVar6 * fVar6 + local_40.x * local_40.x;
		if (fVar5 <= _DAT_0039d978) {
		local_4c = 0.0;
		}
		else {
		local_4c = FLOAT_0038639c / SQRT(fVar5);
		}
		local_48 = local_40.z * local_4c;
		local_50 = local_4c * local_40.x;
		local_4c = local_4c * fVar6;
		fVar5 = local_20.z * local_48 + local_20.y * local_4c + local_20.x * local_50;
		pfVar1 = &(this->parent).Threshold;
		if (*pfVar1 <= fVar5 && fVar5 != *pfVar1) {
		local_24 = local_44;
		index = FUN_001eab70((uint)(((param_1->parent).ctx)->parent).chunkData,&local_40,&local_30,0x80,(float *)0x0,&local_50,0);
		if ((char)index == '\0') {
		fVar5 = (this->parent).Threshold;
		return fVar5 + fVar5;
		}
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptPlayerCanSeeMe::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptPlayerCanSeeMe * __fastcall PerceptPlayerCanSeeMe::Construct(PerceptPlayerCanSeeMe *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x220;
		(this->parent).vtable = &Percept_VT_PlayerCanSeeMe;
		return this;
		}
		
	*/
	return;
}

void PerceptPlayerCanSeeMe::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptPlayerCanSeeMe * __thiscall PerceptPlayerCanSeeMe::Dispose(PerceptPlayerCanSeeMe *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

