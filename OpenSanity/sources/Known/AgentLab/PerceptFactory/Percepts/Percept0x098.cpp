#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x098.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x098::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x098 * __fastcall Percept0x098::Construct(Percept0x098 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x98;
		(this->parent).vtable = &Percept_VT_ID_0x98;
		return this;
		}
		
	*/
	return;
}

void Percept0x098::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x098 * __thiscall Percept0x098::Dispose(Percept0x098 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x098::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x098::GetUtilityScore(Percept0x098 *this,InstanceContext *param_1){
		ChunkData *pCVar1;
		float fVar2;
		if ((PTR_00496350 == (InstanceContextRefCounter *)0x0) ||(PTR_00496350->ctx == (InstanceContext *)0x0)) {
		pCVar1 = (ChunkData *)0x0;
		}
		else {
		pCVar1 = (PTR_00496350->ctx->parent).chunkData;
		}
		fVar2 = FLOAT_0038639c;
		if ((((param_1->parent).ctx)->parent).chunkData != pCVar1) {
		fVar2 = 0.0;
		}
		return fVar2;
		}
		
	*/
	return 0.0f;
}

