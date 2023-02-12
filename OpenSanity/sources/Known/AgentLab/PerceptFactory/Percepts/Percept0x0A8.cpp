#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x0A8.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x0A8::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x0A8::GetUtilityScore(Percept0x0A8 *this,InstanceContext *param_1){
		char cVar1;
		float fVar2;
		Vector4 local_180;
		float local_170;
		float local_16c;
		undefined4 local_168;
		float local_164;
		undefined *local_154;
		undefined2 local_150;
		undefined2 local_14e;
		float local_14c;
		uint local_148;
		undefined4 local_144;
		undefined4 local_140;
		undefined4 local_13c;
		undefined4 local_138;
		undefined4 local_134;
		Vector4 local_130;
		float local_120;
		float local_11c;
		float local_118;
		float local_114;
		undefined local_110 [268];
		InstanceContext::thunk_FUN_0005a4c0((param_1->parent).ctx,&local_130,&local_180);
		fVar2 = FLOAT_0038bddc;
		if (((this->parent).PerceptID & 0xfffe0000U) != 0x20000) {
		fVar2 = FLOAT_0038807c;
		}
		local_114 = local_130.w;
		local_120 = local_130.x + local_180.x * fVar2;
		local_11c = local_130.y + local_180.y * fVar2 + FLOAT_00393c90;
		local_148 = local_148 & 0xfffffffe | 2;
		local_170 = 0.0;
		local_168 = 0;
		local_118 = local_130.z + local_180.z * fVar2;
		local_164 = FLOAT_0038639c;
		local_154 = local_110;
		local_16c = FLOAT_00393ccc;
		local_150 = 0;
		local_14e = 0x40;
		local_14c = FLOAT_00393c64;
		local_144 = 0;
		local_140 = 1;
		local_13c = 0;
		local_134 = 0;
		local_138 = 0;
		cVar1 = FUN_001eb7a0((int)(((param_1->parent).ctx)->parent).chunkData,&local_120,&local_170,0x40,&local_154,DAT_00495d28);
		if (cVar1 != '\0') {
		local_16c = local_16c + FLOAT_00393c90;
		if (local_16c < 0.0) {
		return 0.0 - local_16c;
		}
		return local_16c;
		}
		return FLOAT_00393c94;
		}
		
	*/
	return 0.0f;
}

void Percept0x0A8::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x0A8 * __thiscall Percept0x0A8::Dispose(Percept0x0A8 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x0A8::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x0A8::Construct(Percept0x0A8 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0xa8;
		(this->parent).vtable = &Percept_VT_ID_0xa8;
		return;
		}
		
	*/
	return;
}

