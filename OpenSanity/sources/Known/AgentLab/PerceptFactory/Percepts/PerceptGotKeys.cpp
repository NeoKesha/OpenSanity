#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptGotKeys.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptGotKeys::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptGotKeys::GetUtilityScore(PerceptGotKeys *this,InstanceContext *param_1){
		char cVar1;
		float fVar2;
		cVar1 = (*(param_1->parent).vtable[2].Method4)(param_1);
		if (cVar1 != '\0') {
		fVar2 = FLOAT_0038639c;
		if (*(char *)((int)&(param_1->nodes).array[0xf][2].field5_0x10 + 1) == '\0') {
		fVar2 = 0.0;
		}
		return fVar2;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptGotKeys::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptGotKeys * __thiscall PerceptGotKeys::Dispose(PerceptGotKeys *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptGotKeys::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptGotKeys::Construct(PerceptGotKeys *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0xe;
		(this->parent).vtable = &Percept_VT_GotKeys;
		return;
		}
		
	*/
	return;
}

