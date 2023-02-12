#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x26B.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x26B::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling float __thiscall Percept0x26B::GetUtilityScore(Percept0x26B *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		byte bVar4;
		InstanceNodeAbstract *pIVar5;
		InstanceTransform *pIVar6;
		float *pfVar7;
		uint uVar8;
		InstanceContext *pIVar9;
		float *pfVar10;
		uint uVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		float fVar17;
		uVar8 = (GameController4->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar8 == 6) {
		pIVar9 = (InstanceContext *)0x0;
		}
		else {
		pIVar9 = (InstanceContext *)(GameController4->chunkDescriptor).playerInstanceContexts[uVar8];
		if (pIVar9 != (InstanceContext *)0x0) {
		pIVar9 = *(InstanceContext **)&pIVar9->parent;
		}
		}
		if (pIVar9 != (InstanceContext *)0x0) {
		pIVar5 = (param_1->nodes).array[0xf];
		pIVar6 = (pIVar9->parent).transform;
		pfVar7 = (float *)(&pIVar5->vtable->DisposeSomething)[*(byte *)&pIVar5[2].field6_0x14];
		if ((*(byte *)((Vector4 *)(&pIVar6->matrix + 1) + 2) & 4) != 0) {
		fVar1 = (pIVar6->matrix).m44;
		fVar2 = (pIVar6->matrix).m43;
		fVar3 = (pIVar6->matrix).m42;
		((Vector4 *)(&pIVar6->matrix + 1))->x = (pIVar6->matrix).m41;
		((Vector4 *)(&pIVar6->matrix + 1))->y = fVar3;
		((Vector4 *)(&pIVar6->matrix + 1))->z = fVar2;
		((Vector4 *)(&pIVar6->matrix + 1))->w = fVar1;
		*(uint *)((Vector4 *)(&pIVar6->matrix + 1) + 2) =(uint)((Vector4 *)(&pIVar6->matrix + 1))[2].x & 0xfffffffa;
		}
		fVar1 = ((Vector4 *)(&pIVar6->matrix + 1))->z;
		bVar4 = *(byte *)((int)&pIVar5[2].field5_0x10 + 1);
		fVar2 = ((Vector4 *)(&pIVar6->matrix + 1))->y;
		fVar3 = ((Vector4 *)(&pIVar6->matrix + 1))->x;
		fVar16 = pfVar7[2] - fVar1;
		fVar14 = pfVar7[1] - fVar2;
		uVar11 = (uint)bVar4;
		fVar12 = *pfVar7 - fVar3;
		uVar8 = 0;
		if (uVar11 != 0) {
		do {
		if (bVar4 == 0) {
		pfVar10 = (float *)0x0;
		}
		else if ((int)uVar8 < (int)uVar11) {
		pfVar10 = (float *)(&pIVar5->vtable->DisposeSomething)[uVar8];
		}
		else {
		pfVar10 = (float *)0x0;
		}
		if ((pfVar10 != pfVar7) &&(fVar17 = pfVar10[2] - fVar1, fVar15 = pfVar10[1] - fVar2, fVar13 = *pfVar10 - fVar3,fVar17 * fVar17 + fVar15 * fVar15 + fVar13 * fVar13 <fVar16 * fVar16 + fVar14 * fVar14 + fVar12 * fVar12)) {
		return FLOAT_0038639c;
		}
		uVar8 = uVar8 + 1;
		}
		 while (uVar8 < uVar11);
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x26B::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x26B * __fastcall Percept0x26B::Construct(Percept0x26B *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x26b;
		(this->parent).vtable = &Percept_VT_ID_0x26b;
		return this;
		}
		
	*/
	return;
}

void Percept0x26B::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x26B * __thiscall Percept0x26B::Dispose(Percept0x26B *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

