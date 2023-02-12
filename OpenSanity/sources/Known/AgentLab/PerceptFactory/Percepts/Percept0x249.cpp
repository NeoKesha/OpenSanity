#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x249.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x249::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling  WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall Percept0x249::GetUtilityScore(Percept0x249 *this,InstanceContext *param_1){
		InstanceContextRefCounter *pIVar1;
		InstanceContext *pIVar2;
		char cVar3;
		uint uVar4;
		InstanceContext *pIVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float local_290;
		float local_28c;
		float local_288;
		undefined4 local_284;
		float local_280;
		float local_27c;
		float local_278;
		float local_274;
		float local_270;
		float local_26c;
		float local_268;
		undefined4 local_264;
		float local_25c;
		float local_258;
		float local_254;
		float local_250;
		float local_24c;
		float local_248;
		AutoClass14 local_234;
		InstanceContext *local_210 [131];
		uVar4 = (GameController4->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar4 == 6) {
		pIVar5 = (InstanceContext *)0x0;
		}
		else {
		pIVar1 = (GameController4->chunkDescriptor).playerInstanceContexts[uVar4];
		if (pIVar1 == (InstanceContextRefCounter *)0x0) {
		pIVar5 = (InstanceContext *)0x0;
		}
		else {
		pIVar5 = pIVar1->ctx;
		}
		}
		pIVar2 = (param_1->parent).ctx;
		if (((pIVar2->parent).flags & 0x200U) != 0) {
		local_264 = *(undefined4 *)((int)&(pIVar5->parent).field14_0x20.matrix2 + 0xc);
		local_274 = (pIVar2->parent).field14_0x20.matrix2.m14;
		local_26c = (*(float *)((int)&(pIVar5->parent).field14_0x20.matrix2 + 0x14) +*(float *)((int)&(pIVar5->parent).field14_0x20.matrix2 + 4)) * FLOAT_00386ab4;
		local_270 = (*(float *)((int)&(pIVar5->parent).field14_0x20.matrix2 + 0x10) +(pIVar5->parent).field14_0x20.matrix2.m11) * FLOAT_00386ab4;
		local_280 = ((pIVar2->parent).field14_0x20.matrix2.m11 +(pIVar2->parent).field14_0x20.matrix2.m21) * FLOAT_00386ab4;
		local_27c = ((pIVar2->parent).field14_0x20.matrix2.m22 +(pIVar2->parent).field14_0x20.matrix2.m12) * FLOAT_00386ab4;
		local_278 = ((pIVar2->parent).field14_0x20.matrix2.m23 +(pIVar2->parent).field14_0x20.matrix2.m13) * FLOAT_00386ab4;
		local_268 = (*(float *)((int)&(pIVar5->parent).field14_0x20.matrix2 + 0x18) +*(float *)((int)&(pIVar5->parent).field14_0x20.matrix2 + 8)) * FLOAT_00386ab4;
		if ((local_278 - local_268) * (local_278 - local_268) +(local_27c - local_26c) * (local_27c - local_26c) +(local_280 - local_270) * (local_280 - local_270) < FLOAT_0038ad6c) {
		local_25c = FUN_00147550(&(pIVar2->parent).field14_0x20.matrix2.m11);
		local_284 = local_264;
		local_28c = local_26c;
		fVar9 = local_26c - local_27c;
		local_288 = local_268;
		fVar10 = local_268 - local_278;
		local_290 = local_270;
		fVar8 = local_270 - local_280;
		fVar6 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8;
		if (fVar6 <= _DAT_0039d978) {
		fVar7 = 0.0;
		}
		else {
		local_258 = SQRT(fVar6);
		fVar7 = FLOAT_0038639c / local_258;
		local_254 = fVar6;
		}
		local_250 = (fVar10 * fVar7 - fVar9 * fVar7 * 0.0) * local_25c;
		local_24c = (fVar8 * fVar7 * 0.0 - fVar10 * fVar7 * 0.0) * local_25c;
		local_248 = (fVar9 * fVar7 * 0.0 - fVar8 * fVar7) * local_25c;
		AutoClass14::Construct(&local_234,local_210,0x80,0x10,1,0);
		FUN_00137280((int)&local_234,(int)(param_1->parent).ctx);
		local_290 = local_290 - local_280;
		local_28c = local_28c - local_27c;
		local_288 = local_288 - local_278;
		cVar3 = FUN_001eb7a0((int)(((param_1->parent).ctx)->parent).chunkData,&local_280,&local_290,0x80,&local_234,DAT_00495d28);
		if ((cVar3 != '\0') &&(local_288 * local_288 + local_28c * local_28c + local_290 * local_290 <local_25c * FLOAT_0038ad74 * local_25c * FLOAT_0038ad74)) {
		local_280 = local_250 + local_280;
		local_27c = local_24c + local_27c;
		local_278 = local_248 + local_278;
		local_284 = local_264;
		local_290 = local_270 - local_280;
		local_28c = local_26c - local_27c;
		local_288 = local_268 - local_278;
		cVar3 = FUN_001eb7a0((int)(((param_1->parent).ctx)->parent).chunkData,&local_280,&local_290,0x80,&local_234,DAT_00495d28);
		if ((cVar3 == '\0') || (local_234.field9_0x20 == pIVar5)) {
		return FLOAT_0038639c;
		}
		}
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x249::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x249 * __fastcall Percept0x249::Construct(Percept0x249 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x249;
		(this->parent).vtable = &Percept_VT_ID_0x249;
		return this;
		}
		
	*/
	return;
}

void Percept0x249::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x249 * __thiscall Percept0x249::Dispose(Percept0x249 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

