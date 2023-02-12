#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptClearLineOfSightToPlayer.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptClearLineOfSightToPlayer::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling float __thiscall PerceptClearLineOfSightToPlayer::GetUtilityScore(PerceptClearLineOfSightToPlayer *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		InstanceTransform *pIVar3;
		uint uVar4;
		InstanceContext *pIVar5;
		float fVar6;
		float local_40;
		float local_3c;
		float local_38;
		float local_34;
		float local_30;
		float local_2c;
		float local_28;
		float local_24;
		undefined local_20 [28];
		uVar4 = (GameController4->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar4 == 6) {
		pIVar5 = (InstanceContext *)0x0;
		}
		else {
		pIVar5 = (InstanceContext *)(GameController4->chunkDescriptor).playerInstanceContexts[uVar4];
		if (pIVar5 != (InstanceContext *)0x0) {
		pIVar5 = *(InstanceContext **)&pIVar5->parent;
		}
		}
		if (pIVar5 != (InstanceContext *)0x0) {
		pIVar3 = (pIVar5->parent).transform;
		if ((*(byte *)((Vector4 *)(&pIVar3->matrix + 1) + 2) & 4) != 0) {
		fVar6 = (pIVar3->matrix).m44;
		fVar1 = (pIVar3->matrix).m43;
		fVar2 = (pIVar3->matrix).m42;
		((Vector4 *)(&pIVar3->matrix + 1))->x = (pIVar3->matrix).m41;
		((Vector4 *)(&pIVar3->matrix + 1))->y = fVar2;
		((Vector4 *)(&pIVar3->matrix + 1))->z = fVar1;
		((Vector4 *)(&pIVar3->matrix + 1))->w = fVar6;
		*(uint *)((Vector4 *)(&pIVar3->matrix + 1) + 2) =(uint)((Vector4 *)(&pIVar3->matrix + 1))[2].x & 0xfffffffa;
		}
		local_40 = ((Vector4 *)(&pIVar3->matrix + 1))->x;
		local_3c = ((Vector4 *)(&pIVar3->matrix + 1))->y;
		local_38 = ((Vector4 *)(&pIVar3->matrix + 1))->z;
		local_34 = ((Vector4 *)(&pIVar3->matrix + 1))->w;
		pIVar3 = (((param_1->parent).ctx)->parent).transform;
		if ((*(byte *)&pIVar3->field3_0x60 & 4) != 0) {
		fVar6 = (pIVar3->matrix).m43;
		fVar1 = (pIVar3->matrix).m44;
		fVar2 = (pIVar3->matrix).m42;
		(pIVar3->position).x = (pIVar3->matrix).m41;
		(pIVar3->position).y = fVar2;
		(pIVar3->position).z = fVar6;
		(pIVar3->position).w = fVar1;
		pIVar3->field3_0x60 = (float)((uint)pIVar3->field3_0x60 & 0xfffffffa);
		}
		local_30 = (pIVar3->position).x;
		local_28 = (pIVar3->position).z;
		local_24 = (pIVar3->position).w;
		local_2c = (pIVar3->position).y + FLOAT_00386ab4;
		local_3c = local_3c + FLOAT_00386ab4;
		uVar4 = FUN_001eab70((uint)(((param_1->parent).ctx)->parent).chunkData,&local_30,&local_40,0x80,(float *)0x0,local_20,0);
		fVar6 = 0.0;
		if ((char)uVar4 == '\0') {
		fVar6 = FLOAT_0038639c;
		}
		return fVar6;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptClearLineOfSightToPlayer::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptClearLineOfSightToPlayer * __fastcall PerceptClearLineOfSightToPlayer::Construct(PerceptClearLineOfSightToPlayer *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x21e;
		(this->parent).vtable = &Percept_VT_ClearLineOfSightToPlayer;
		return this;
		}
		
	*/
	return;
}

void PerceptClearLineOfSightToPlayer::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptClearLineOfSightToPlayer * __thiscall PerceptClearLineOfSightToPlayer::Dispose(PerceptClearLineOfSightToPlayer *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

