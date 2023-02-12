#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x05A.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x05A::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x05A::GetUtilityScore(Percept0x05A *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceTransform *pIVar4;
		char cVar5;
		InstanceContext *local_170;
		float local_16c;
		undefined4 local_168;
		Matrix4 *local_164;
		float local_160;
		float local_15c;
		undefined4 local_158;
		float local_154;
		undefined *local_144;
		undefined2 local_140;
		undefined2 local_13e;
		float local_13c;
		uint local_138;
		undefined4 local_134;
		undefined4 local_130;
		undefined4 local_12c;
		undefined4 local_128;
		undefined4 local_124;
		float local_11c;
		undefined local_110 [268];
		if ((*(byte *)&(param_1->parent).field14_0x20.matrix2.m43 & 2) != 0) {
		local_170 = (param_1->parent).field14_0x20.field4_0x10;
		local_168 = (param_1->parent).field14_0x20.field6_0x18;
		local_16c = (float)(param_1->parent).field14_0x20.field5_0x14;
		local_164 = (param_1->parent).field14_0x20.matrix1;
		pIVar4 = (((param_1->parent).ctx)->parent).transform;
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
		local_11c = (pIVar4->position).y;
		local_16c = local_16c + FLOAT_00393c90;
		local_160 = 0.0;
		local_158 = 0;
		local_138 = local_138 & 0xfffffffe | 2;
		local_154 = FLOAT_0038639c;
		local_144 = local_110;
		local_15c = FLOAT_00393ccc;
		local_140 = 0;
		local_13e = 0x40;
		local_13c = FLOAT_00393c64;
		local_134 = 0;
		local_130 = 1;
		local_12c = 0;
		local_124 = 0;
		local_128 = 0;
		cVar5 = FUN_001eb7a0((int)(((param_1->parent).ctx)->parent).chunkData,(float *)&local_170,&local_160,0x40,&local_144,DAT_00495d28);
		if (cVar5 != '\0') {
		local_11c = (local_15c + FLOAT_00393c90) - local_11c;
		if (local_11c < 0.0) {
		return 0.0 - local_11c;
		}
		return local_11c;
		}
		}
		return FLOAT_00393c94;
		}
		
	*/
	return 0.0f;
}

void Percept0x05A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x05A * __thiscall Percept0x05A::Dispose(Percept0x05A *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x05A::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x05A::Construct(Percept0x05A *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x5a;
		(this->parent).vtable = &Percept_VT_ID_0x5A;
		return;
		}
		
	*/
	return;
}

