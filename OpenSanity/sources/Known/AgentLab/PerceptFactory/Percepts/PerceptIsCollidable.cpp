#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptIsCollidable.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptIsCollidable::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAbstract * __thiscall PerceptIsCollidable::Dispose(PerceptIsCollidable *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

float PerceptIsCollidable::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptIsCollidable::GetUtilityScore(PerceptIsCollidable *this,InstanceContext *param_1){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if ((*(byte *)&(((param_1->parent).ctx)->parent).flags & 0x10) == 0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptIsCollidable::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptIsCollidable::Construct(PerceptIsCollidable *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 1;
		(this->parent).vtable = &Percept_VT_IsCollidable;
		return;
		}
		
	*/
	return;
}

