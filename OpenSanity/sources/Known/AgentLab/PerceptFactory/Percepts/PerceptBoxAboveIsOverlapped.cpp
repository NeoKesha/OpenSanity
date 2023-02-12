#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptBoxAboveIsOverlapped.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptBoxAboveIsOverlapped::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptBoxAboveIsOverlapped::GetUtilityScore(PerceptBoxAboveIsOverlapped *this,InstanceContext *param_1){
		InstanceContext *pIVar1;
		InstanceTransform *transform;
		undefined4 uVar2;
		float fVar3;
		Vector4 local_100;
		Vector4 local_f0;
		undefined *local_d4;
		undefined2 local_d0;
		undefined2 local_ce;
		float local_cc;
		uint local_c8;
		undefined4 local_c4;
		undefined4 local_c0;
		undefined4 local_bc;
		undefined4 local_b8;
		undefined4 local_b4;
		float local_b0;
		float fStack172;
		float fStack168;
		float fStack164;
		float local_a0;
		float fStack156;
		float fStack152;
		float fStack148;
		float local_90;
		float fStack140;
		float fStack136;
		float fStack132;
		float local_80;
		float fStack124;
		float fStack120;
		float fStack116;
		AutoClass40 local_70;
		undefined local_50 [76];
		pIVar1 = (param_1->parent).ctx;
		transform = (pIVar1->parent).transform;
		InstanceTransform::FillMatrix(transform);
		local_b0 = (transform->matrix).m11;
		fStack172 = (transform->matrix).m12;
		fStack168 = (transform->matrix).m13;
		fStack164 = (transform->matrix).m14;
		local_a0 = (transform->matrix).m21;
		fStack156 = (transform->matrix).m22;
		fStack152 = (transform->matrix).m23;
		fStack148 = (transform->matrix).m24;
		local_90 = (transform->matrix).m31;
		fStack140 = (transform->matrix).m32;
		fStack136 = (transform->matrix).m33;
		fStack132 = (transform->matrix).m34;
		local_80 = (transform->matrix).m41;
		fStack124 = (transform->matrix).m42;
		fStack120 = (transform->matrix).m43;
		fStack116 = (transform->matrix).m44;
		AutoClass40::Construct(&local_70);
		local_100.x = (pIVar1->parent).field14_0x20.matrix2.m31;
		local_100.y = (pIVar1->parent).field14_0x20.matrix2.m32;
		local_100.z = (pIVar1->parent).field14_0x20.matrix2.m33;
		local_100.w = (pIVar1->parent).field14_0x20.matrix2.m34;
		local_f0.x = (pIVar1->parent).field14_0x20.matrix2.m41;
		local_f0.y = (pIVar1->parent).field14_0x20.matrix2.m42;
		local_f0.z = (pIVar1->parent).field14_0x20.matrix2.m43;
		local_f0.w = (pIVar1->parent).field14_0x20.matrix2.m44;
		AutoClass40::Set(&local_70,&local_100,&local_f0);
		fStack124 = fStack124 + ((local_f0.y + FLOAT_0038a928) - local_100.y);
		local_c8 = local_c8 & 0xfffffffe | 2;
		local_d4 = local_50;
		local_d0 = 0;
		local_ce = 0x10;
		local_cc = FLOAT_00393c64;
		local_c4 = 0;
		local_c0 = 1;
		local_bc = 0;
		local_b4 = 0;
		local_b8 = 0;
		FUN_00137280((int)&local_d4,(int)pIVar1);
		uVar2 = FUN_0013e350((int)(pIVar1->parent).chunkData,&local_70,&local_b0,DAT_003a3518,&local_d4,'\0');
		fVar3 = FLOAT_0038639c;
		if ((short)uVar2 == 0) {
		fVar3 = 0.0;
		}
		AutoClass40::Dispose(&local_70);
		return fVar3;
		}
		
	*/
	return 0.0f;
}

void PerceptBoxAboveIsOverlapped::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptBoxAboveIsOverlapped * __thiscall PerceptBoxAboveIsOverlapped::Dispose(PerceptBoxAboveIsOverlapped *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptBoxAboveIsOverlapped::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptBoxAboveIsOverlapped::Construct(PerceptBoxAboveIsOverlapped *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x48;
		(this->parent).vtable = &Percept_VT_BoxAboveIsOverlapped;
		return;
		}
		
	*/
	return;
}

