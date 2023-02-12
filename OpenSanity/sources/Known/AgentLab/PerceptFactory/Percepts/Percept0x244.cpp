#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x244.h"

void Percept0x244::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x244 * __fastcall Percept0x244::Construct(Percept0x244 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x244;
		(this->parent).vtable = &Percept_VT_ID_0x244;
		return this;
		}
		
	*/
	return;
}

void Percept0x244::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x244 * __thiscall Percept0x244::Dispose(Percept0x244 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x244::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x244::GetUtilityScore(Percept0x244 *this){
		uint uVar1;
		if ((uint *)PTR_003d0ee8->field13_0xa0 == (uint *)0x0) {
		return FLOAT_00386394;
		}
		uVar1 = *(uint *)PTR_003d0ee8->field13_0xa0 & 0x1f;
		if (((uVar1 != 0xc) && (uVar1 != 0xd)) && (uVar1 != 0xe)) {
		return 0.0;
		}
		return FLOAT_0038639c;
		}
		
	*/
	return 0.0f;
}

