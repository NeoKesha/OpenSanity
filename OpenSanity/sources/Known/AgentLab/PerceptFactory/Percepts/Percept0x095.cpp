#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x095.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x095::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x095::GetUtilityScore(Percept0x095 *this,InstanceContext *param_1){
		float fVar1;
		InstanceNodeAbstract *pIVar2;
		InstanceNodeAbstract_VTable *pIVar3;
		InstanceContext *pIVar4;
		char cVar5;
		undefined *local_254;
		undefined2 local_250;
		undefined2 local_24e;
		float local_24c;
		uint local_248;
		undefined4 local_244;
		undefined4 local_240;
		undefined4 local_23c;
		undefined4 local_238;
		InstanceNodeAbstract *local_234;
		UpdateTime *local_230;
		Step *local_22c;
		Method8 *local_228;
		GetBuilderIndex *local_224;
		float local_220;
		float local_21c;
		float local_218;
		float local_214;
		undefined local_210 [524];
		pIVar2 = (param_1->nodes).array[0xc];
		if ((pIVar2 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar2->field6_0x14 & 1) != 0)) {
		(param_1->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		pIVar2 = (param_1->nodes).array[0xc];
		if (pIVar2 != (InstanceNodeAbstract *)0x0) {
		pIVar3 = pIVar2[1].vtable;
		if ((*(byte *)&pIVar3[2].GetIndex & 4) != 0) {
		pIVar3[1].UpdateTime = (UpdateTime *)pIVar3[1].SetCtx;
		pIVar3[1].Step = (Step *)pIVar3[1].IsA;
		pIVar3[1].Method8 = (Method8 *)pIVar3[1].GetIndex;
		pIVar3[1].GetBuilderIndex = (GetBuilderIndex *)pIVar3[1].Method5;
		pIVar3[2].GetIndex = (GetIndex *)((uint)pIVar3[2].GetIndex & 0xfffffffa);
		}
		local_230 = pIVar3[1].UpdateTime;
		local_22c = pIVar3[1].Step;
		local_228 = pIVar3[1].Method8;
		local_224 = pIVar3[1].GetBuilderIndex;
		pIVar4 = (param_1->parent).ctx;
		local_214 = (pIVar4->parent).field14_0x20.matrix2.m14;
		local_254 = local_210;
		local_220 = ((pIVar4->parent).field14_0x20.matrix2.m21 +(pIVar4->parent).field14_0x20.matrix2.m11) * FLOAT_00386ab4 - (float)local_230;
		local_248 = local_248 & 0xfffffffe | 2;
		local_240 = 1;
		local_21c = ((pIVar4->parent).field14_0x20.matrix2.m22 +(pIVar4->parent).field14_0x20.matrix2.m12) * FLOAT_00386ab4 - (float)local_22c;
		local_218 = ((pIVar4->parent).field14_0x20.matrix2.m23 +(pIVar4->parent).field14_0x20.matrix2.m13) * FLOAT_00386ab4 - (float)local_228;
		local_250 = 0;
		local_24e = 0x80;
		local_24c = FLOAT_0039434c;
		local_244 = 0x10;
		local_23c = 0;
		local_234 = (InstanceNodeAbstract *)0x0;
		local_238 = 0;
		FUN_00137280((int)&local_254,(int)pIVar4);
		cVar5 = FUN_001eb7a0((int)(((param_1->parent).ctx)->parent).chunkData,(float *)&local_230,&local_220,0x80,&local_254,DAT_003a3518);
		if ((cVar5 == '\0') || (local_234 == pIVar2)) {
		fVar1 = (this->parent).Threshold;
		return fVar1 + fVar1;
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x095::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x095 * __thiscall Percept0x095::Dispose(Percept0x095 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x095::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x095::Construct(Percept0x095 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x95;
		(this->parent).vtable = &Percept_VT_ID_0x95;
		return;
		}
		
	*/
	return;
}

