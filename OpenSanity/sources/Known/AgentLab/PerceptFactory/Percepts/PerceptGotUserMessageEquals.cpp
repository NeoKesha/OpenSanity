#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptGotUserMessageEquals.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptGotUserMessageEquals::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptGotUserMessageEquals * __thiscall PerceptGotUserMessageEquals::Dispose(PerceptGotUserMessageEquals *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptGotUserMessageEquals::GetUtilityScore(InstanceContext* param_1, uint param_2, int* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptGotUserMessageEquals::GetUtilityScore(PerceptGotUserMessageEquals *this,InstanceContext *param_1,undefined4 param_2,int *param_3){
		uint uVar1;
		if (*param_3 < (int)(param_1->parent).field14_0x20.matrixArray) {
		return FLOAT_00386394;
		}
		uVar1 = FUN_0016d7c0((int)param_1,(ushort)((uint)(this->parent).PerceptID >> 0x11),param_3,(this->parent).Interval);
		return (float)(uVar1 & 0xff);
		}
		
	*/
	return 0.0f;
}

void PerceptGotUserMessageEquals::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptGotUserMessageEquals::Construct(PerceptGotUserMessageEquals *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x33;
		(this->parent).vtable = &Percept_VT_GotUserMessageEquals;
		return;
		}
		
	*/
	return;
}

