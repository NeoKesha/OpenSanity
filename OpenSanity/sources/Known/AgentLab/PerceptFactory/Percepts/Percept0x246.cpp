#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x246.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x246::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling float __thiscall Percept0x246::GetUtilityScore(Percept0x246 *this,InstanceContext *param_1){
		float fVar1;
		InstanceContextRefCounter *pIVar2;
		InstanceContext *pIVar3;
		char cVar4;
		uint uVar5;
		InstanceContext *pIVar6;
		float local_260;
		float local_25c;
		float local_258;
		float local_254;
		Percept0x246 *local_248;
		undefined *local_244;
		undefined2 local_240;
		undefined2 local_23e;
		float local_23c;
		uint local_238;
		undefined4 local_234;
		undefined4 local_230;
		undefined4 local_22c;
		undefined4 local_228;
		InstanceContext *local_224;
		float local_220;
		float local_21c;
		float local_218;
		undefined4 local_214;
		undefined local_210 [524];
		uVar5 = (GameController4->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar5 == 6) {
		pIVar6 = (InstanceContext *)0x0;
		}
		else {
		pIVar2 = (GameController4->chunkDescriptor).playerInstanceContexts[uVar5];
		if (pIVar2 == (InstanceContextRefCounter *)0x0) {
		pIVar6 = (InstanceContext *)0x0;
		}
		else {
		pIVar6 = pIVar2->ctx;
		}
		}
		if (pIVar6 != (InstanceContext *)0x0) {
		pIVar3 = (param_1->parent).ctx;
		local_254 = (pIVar3->parent).field14_0x20.matrix2.m14;
		local_260 = ((pIVar3->parent).field14_0x20.matrix2.m11 +(pIVar3->parent).field14_0x20.matrix2.m21) * FLOAT_00386ab4;
		local_25c = ((pIVar3->parent).field14_0x20.matrix2.m22 +(pIVar3->parent).field14_0x20.matrix2.m12) * FLOAT_00386ab4;
		local_220 = (*(float *)((int)&(pIVar6->parent).field14_0x20.matrix2 + 0x10) +(pIVar6->parent).field14_0x20.matrix2.m11) * FLOAT_00386ab4 - local_260;
		local_244 = local_210;
		local_258 = ((pIVar3->parent).field14_0x20.matrix2.m23 +(pIVar3->parent).field14_0x20.matrix2.m13) * FLOAT_00386ab4;
		local_214 = *(undefined4 *)((int)&(pIVar6->parent).field14_0x20.matrix2 + 0xc);
		local_238 = local_238 & 0xfffffffe | 2;
		local_21c = (*(float *)((int)&(pIVar6->parent).field14_0x20.matrix2 + 0x14) +*(float *)((int)&(pIVar6->parent).field14_0x20.matrix2 + 4)) * FLOAT_00386ab4 -local_25c;
		local_218 = (*(float *)((int)&(pIVar6->parent).field14_0x20.matrix2 + 0x18) +*(float *)((int)&(pIVar6->parent).field14_0x20.matrix2 + 8)) * FLOAT_00386ab4 -local_258;
		local_240 = 0;
		local_23e = 0x80;
		local_23c = FLOAT_0038ad18;
		local_234 = 0x10;
		local_230 = 1;
		local_22c = 0;
		local_224 = (InstanceContext *)0x0;
		local_228 = 0;
		local_248 = this;
		FUN_00137280((int)&local_244,(int)pIVar3);
		cVar4 = FUN_001eb7a0((int)(((param_1->parent).ctx)->parent).chunkData,&local_260,&local_220,0x80,&local_244,DAT_003a3518);
		if ((cVar4 == '\0') || (local_224 == pIVar6)) {
		fVar1 = (local_248->parent).Threshold;
		return fVar1 + fVar1;
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x246::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x246 * __fastcall Percept0x246::Construct(Percept0x246 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x246;
		(this->parent).vtable = &Percept_VT_ID_0x246;
		return this;
		}
		
	*/
	return;
}

void Percept0x246::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x246 * __thiscall Percept0x246::Dispose(Percept0x246 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

