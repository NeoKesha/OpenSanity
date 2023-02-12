#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x09D.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x09D::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x09D::GetUtilityScore(Percept0x09D *this,InstanceContext *param_1){
		InstanceTransform *transform;
		transform = (((param_1->parent).ctx)->parent).transform;
		InstanceTransform::FillMatrix(transform);
		return (transform->matrix).m23 * FLOAT_00386394 + (transform->matrix).m21 * FLOAT_00386394 +(transform->matrix).m22;
		}
		
	*/
	return 0.0f;
}

void Percept0x09D::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x09D * __thiscall Percept0x09D::Dispose(Percept0x09D *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x09D::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x09D::Construct(Percept0x09D *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x9d;
		(this->parent).vtable = &Percept_VT_ID_0x9d;
		return;
		}
		
	*/
	return;
}

