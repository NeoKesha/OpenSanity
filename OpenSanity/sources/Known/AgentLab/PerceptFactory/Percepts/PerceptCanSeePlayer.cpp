#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptCanSeePlayer.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptCanSeePlayer::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling  WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall PerceptCanSeePlayer::GetUtilityScore(PerceptCanSeePlayer *this,InstanceContext *param_1){
		float *pfVar1;
		float fVar2;
		InstanceContextRefCounter *pIVar3;
		InstanceTransform *pIVar4;
		uint uVar5;
		InstanceContext *pIVar6;
		float fVar7;
		float fVar8;
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
		uVar5 = (GameController4->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar5 == 6) {
		pIVar6 = (InstanceContext *)0x0;
		}
		else {
		pIVar3 = (GameController4->chunkDescriptor).playerInstanceContexts[uVar5];
		if (pIVar3 == (InstanceContextRefCounter *)0x0) {
		pIVar6 = (InstanceContext *)0x0;
		}
		else {
		pIVar6 = pIVar3->ctx;
		}
		}
		if (pIVar6 != (InstanceContext *)0x0) {
		InstanceContext::thunk_FUN_0005a4c0((param_1->parent).ctx,&local_40,&local_20);
		pIVar4 = (pIVar6->parent).transform;
		if ((*(byte *)&pIVar4->field3_0x60 & 4) != 0) {
		fVar7 = (pIVar4->matrix).m44;
		fVar8 = (pIVar4->matrix).m43;
		fVar2 = (pIVar4->matrix).m42;
		(pIVar4->position).x = (pIVar4->matrix).m41;
		(pIVar4->position).y = fVar2;
		(pIVar4->position).z = fVar8;
		(pIVar4->position).w = fVar7;
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffffa);
		}
		local_30 = (pIVar4->position).x;
		local_28 = (pIVar4->position).z;
		local_44 = (pIVar4->position).w;
		local_40.y = local_40.y + FLOAT_00386ab4;
		local_40.x = local_30 - local_40.x;
		local_2c = (pIVar4->position).y + FLOAT_00386ab4;
		fVar8 = local_2c - local_40.y;
		local_40.z = local_28 - local_40.z;
		fVar7 = local_40.z * local_40.z + fVar8 * fVar8 + local_40.x * local_40.x;
		if (fVar7 <= _DAT_0039d978) {
		local_4c = 0.0;
		}
		else {
		local_4c = FLOAT_0038639c / SQRT(fVar7);
		}
		local_48 = local_40.z * local_4c;
		local_50 = local_4c * local_40.x;
		local_4c = local_4c * fVar8;
		fVar7 = local_20.z * local_48 + local_20.y * local_4c + local_20.x * local_50;
		pfVar1 = &(this->parent).Threshold;
		if (*pfVar1 <= fVar7 && fVar7 != *pfVar1) {
		local_24 = local_44;
		uVar5 = FUN_001eab70((uint)(((param_1->parent).ctx)->parent).chunkData,&local_40,&local_30,0x80,(float *)0x0,&local_50,0);
		if ((char)uVar5 == '\0') {
		fVar7 = (this->parent).Threshold;
		return fVar7 + fVar7;
		}
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptCanSeePlayer::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptCanSeePlayer * __fastcall PerceptCanSeePlayer::Construct(PerceptCanSeePlayer *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x21f;
		(this->parent).vtable = &Percept_VT_CanSeePlayer;
		return this;
		}
		
	*/
	return;
}

void PerceptCanSeePlayer::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptCanSeePlayer * __thiscall PerceptCanSeePlayer::Dispose(PerceptCanSeePlayer *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

