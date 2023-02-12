#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptHeightAbovePlayer.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptHeightAbovePlayer::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling float __thiscall PerceptHeightAbovePlayer::GetUtilityScore(PerceptHeightAbovePlayer *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		InstanceTransform *pIVar5;
		uint uVar6;
		InstanceContext *pIVar7;
		uVar6 = (GameController4->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar6 == 6) {
		pIVar7 = (InstanceContext *)0x0;
		}
		else {
		pIVar7 = (InstanceContext *)(GameController4->chunkDescriptor).playerInstanceContexts[uVar6];
		if (pIVar7 != (InstanceContext *)0x0) {
		pIVar7 = *(InstanceContext **)&pIVar7->parent;
		}
		}
		if (pIVar7 != (InstanceContext *)0x0) {
		pIVar5 = (pIVar7->parent).transform;
		if ((*(byte *)((Vector4 *)(&pIVar5->matrix + 1) + 2) & 4) != 0) {
		fVar1 = (pIVar5->matrix).m44;
		fVar2 = (pIVar5->matrix).m43;
		fVar3 = (pIVar5->matrix).m42;
		((Vector4 *)(&pIVar5->matrix + 1))->x = (pIVar5->matrix).m41;
		((Vector4 *)(&pIVar5->matrix + 1))->y = fVar3;
		((Vector4 *)(&pIVar5->matrix + 1))->z = fVar2;
		((Vector4 *)(&pIVar5->matrix + 1))->w = fVar1;
		*(uint *)((Vector4 *)(&pIVar5->matrix + 1) + 2) =(uint)((Vector4 *)(&pIVar5->matrix + 1))[2].x & 0xfffffffa;
		}
		fVar1 = ((Vector4 *)(&pIVar5->matrix + 1))->y;
		pIVar5 = (((param_1->parent).ctx)->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar2 = (pIVar5->matrix).m44;
		fVar3 = (pIVar5->matrix).m43;
		fVar4 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar4;
		(pIVar5->position).z = fVar3;
		(pIVar5->position).w = fVar2;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		return (pIVar5->position).y - fVar1;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptHeightAbovePlayer::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptHeightAbovePlayer * __fastcall PerceptHeightAbovePlayer::Construct(PerceptHeightAbovePlayer *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x228;
		(this->parent).vtable = &Percept_VT_HeightAbovePlayer;
		return this;
		}
		
	*/
	return;
}

void PerceptHeightAbovePlayer::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptHeightAbovePlayer * __thiscall PerceptHeightAbovePlayer::Dispose(PerceptHeightAbovePlayer *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

