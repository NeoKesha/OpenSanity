#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x26A.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x26A::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling  WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall Percept0x26A::GetUtilityScore(Percept0x26A *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		InstanceContextRefCounter *pIVar6;
		InstanceTransform *pIVar7;
		InstanceTransform *transform;
		uint uVar8;
		InstanceContext *pIVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		uVar8 = (GameController4->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar8 == 6) {
		pIVar9 = (InstanceContext *)0x0;
		}
		else {
		pIVar6 = (GameController4->chunkDescriptor).playerInstanceContexts[uVar8];
		if (pIVar6 == (InstanceContextRefCounter *)0x0) {
		pIVar9 = (InstanceContext *)0x0;
		}
		else {
		pIVar9 = pIVar6->ctx;
		}
		}
		if (pIVar9 != (InstanceContext *)0x0) {
		pIVar7 = (pIVar9->parent).transform;
		if ((*(byte *)&pIVar7->field3_0x60 & 4) != 0) {
		fVar10 = (pIVar7->matrix).m44;
		fVar12 = (pIVar7->matrix).m43;
		fVar13 = (pIVar7->matrix).m42;
		(pIVar7->position).x = (pIVar7->matrix).m41;
		(pIVar7->position).y = fVar13;
		(pIVar7->position).z = fVar12;
		(pIVar7->position).w = fVar10;
		pIVar7->field3_0x60 = (float)((uint)pIVar7->field3_0x60 & 0xfffffffa);
		}
		fVar10 = (pIVar7->position).x;
		transform = (pIVar9->parent).transform;
		fVar12 = (pIVar7->position).y;
		fVar13 = (pIVar7->position).z;
		InstanceTransform::FillMatrix(transform);
		fVar1 = (transform->matrix).m11;
		pIVar7 = (((param_1->parent).ctx)->parent).transform;
		fVar2 = (transform->matrix).m12;
		fVar3 = (transform->matrix).m13;
		if ((*(byte *)&pIVar7->field3_0x60 & 4) != 0) {
		fVar11 = (pIVar7->matrix).m44;
		fVar4 = (pIVar7->matrix).m43;
		fVar5 = (pIVar7->matrix).m42;
		(pIVar7->position).x = (pIVar7->matrix).m41;
		(pIVar7->position).y = fVar5;
		(pIVar7->position).z = fVar4;
		(pIVar7->position).w = fVar11;
		pIVar7->field3_0x60 = (float)((uint)pIVar7->field3_0x60 & 0xfffffffa);
		}
		fVar10 = (pIVar7->position).x - fVar10;
		fVar12 = ((pIVar7->position).y + FLOAT_00386ab4) - fVar12;
		fVar13 = (pIVar7->position).z - fVar13;
		fVar11 = fVar13 * fVar13 + fVar12 * fVar12 + fVar10 * fVar10;
		if (fVar11 <= _DAT_0039d978) {
		fVar11 = 0.0;
		}
		else {
		fVar11 = FLOAT_0038639c / SQRT(fVar11);
		}
		return fVar11 * fVar10 * fVar1 + fVar12 * fVar11 * fVar2 + fVar13 * fVar11 * fVar3;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x26A::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x26A * __fastcall Percept0x26A::Construct(Percept0x26A *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x26a;
		(this->parent).vtable = &Percept_VT_ID_0x26a;
		return this;
		}
		
	*/
	return;
}

void Percept0x26A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x26A * __thiscall Percept0x26A::Dispose(Percept0x26A *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

