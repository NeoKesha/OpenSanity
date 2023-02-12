#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x26F.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x26F::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x26F * __fastcall Percept0x26F::Construct(Percept0x26F *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x26f;
		(this->parent).vtable = &Percept_VT_ID_0x26f;
		return this;
		}
		
	*/
	return;
}

void Percept0x26F::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x26F * __thiscall Percept0x26F::Dispose(Percept0x26F *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x26F::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x26F::GetUtilityScore(Percept0x26F *this,InstanceContext *param_1){
		uint uVar1;
		float fVar2;
		uVar1 = thunk_FUN_0006c670((int)PTR_003d0ee8,(uint)(param_1->parent).ctx);
		fVar2 = FLOAT_0038639c;
		if ((char)uVar1 == '\0') {
		fVar2 = 0.0;
		}
		return fVar2;
		}
		
	*/
	return 0.0f;
}

