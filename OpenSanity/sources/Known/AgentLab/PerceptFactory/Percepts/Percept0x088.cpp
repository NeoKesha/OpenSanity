#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x088.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x088::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x088::GetUtilityScore(Percept0x088 *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceTransform *pIVar4;
		InstanceContext *pIVar5;
		InstanceContext *pIVar6;
		bool bVar7;
		char cVar8;
		InstanceContext *local_264;
		Vector4 local_260;
		Percept0x088 *local_248;
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
		float local_214;
		undefined local_210 [524];
		local_264 = (InstanceContext *)0x0;
		local_248 = this;
		bVar7 = InstanceContext::GetFocusRelated(param_1,&local_264,&local_260);
		pIVar6 = local_264;
		if (bVar7 != false) {
		if (local_264 != (InstanceContext *)0x0) {
		pIVar4 = (local_264->parent).transform;
		if ((*(byte *)&pIVar4->field3_0x60 & 4) != 0) {
		fVar1 = (pIVar4->matrix).m44;
		fVar2 = (pIVar4->matrix).m43;
		fVar3 = (pIVar4->matrix).m42;
		(pIVar4->position).x = (pIVar4->matrix).m41;
		(pIVar4->position).y = fVar3;
		(pIVar4->position).z = fVar2;
		(pIVar4->position).w = fVar1;
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffffa);
		}
		local_260.x = (pIVar4->position).x;
		local_260.y = (pIVar4->position).y;
		local_260.z = (pIVar4->position).z;
		local_260.w = (pIVar4->position).w;
		}
		pIVar5 = (param_1->parent).ctx;
		local_214 = (pIVar5->parent).field14_0x20.matrix2.m14;
		local_220 = ((pIVar5->parent).field14_0x20.matrix2.m21 +(pIVar5->parent).field14_0x20.matrix2.m11) * FLOAT_00386ab4 - local_260.x;
		local_244 = local_210;
		local_21c = ((pIVar5->parent).field14_0x20.matrix2.m22 +(pIVar5->parent).field14_0x20.matrix2.m12) * FLOAT_00386ab4 - local_260.y;
		local_218 = ((pIVar5->parent).field14_0x20.matrix2.m23 +(pIVar5->parent).field14_0x20.matrix2.m13) * FLOAT_00386ab4 - local_260.z;
		local_238 = local_238 & 0xfffffffe | 2;
		local_240 = 0;
		local_23e = 0x80;
		local_23c = FLOAT_0039434c;
		local_234 = 0x10;
		local_230 = 1;
		local_22c = 0;
		local_224 = (InstanceContext *)0x0;
		local_228 = 0;
		FUN_00137280((int)&local_244,(int)pIVar5);
		cVar8 = FUN_001eb7a0((int)(((param_1->parent).ctx)->parent).chunkData,&local_260.x,&local_220,0x80,&local_244,DAT_003a3518);
		if ((cVar8 == '\0') || (local_224 == pIVar6)) {
		fVar1 = (local_248->parent).Threshold;
		return fVar1 + fVar1;
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x088::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x088 * __thiscall Percept0x088::Dispose(Percept0x088 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x088::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x088::Construct(Percept0x088 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x88;
		(this->parent).vtable = &Percept_VT_ID_0x88;
		return;
		}
		
	*/
	return;
}

