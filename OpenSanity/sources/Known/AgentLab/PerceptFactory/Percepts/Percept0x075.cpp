#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x075.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x075::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x075 * __thiscall Percept0x075::Dispose(Percept0x075 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x075::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x075::GetUtilityScore(Percept0x075 *this,InstanceContext *param_1){
		int in_stack_00000008;
		if (*(ushort *)(in_stack_00000008 + 0x1e) == (ushort)((uint)(this->parent).PerceptID >> 0x11)) {
		*(undefined2 *)(in_stack_00000008 + 0x1e) = 0xffff;
		return FLOAT_0038639c;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x075::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x075::Construct(Percept0x075 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x75;
		(this->parent).vtable = &Percept_VT_ID_0x75;
		return;
		}
		
	*/
	return;
}

