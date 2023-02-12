#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x27B.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x27B::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x27B::GetUtilityScore(Percept0x27B *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceContext *pIVar4;
		InstanceTransform *pIVar5;
		InstanceContext *this_00;
		Vector4 local_30;
		Vector4 local_20;
		this_00 = (InstanceContext *)FUN_00182480();
		if ((this_00 != (InstanceContext *)0x0) &&(pIVar4 = (param_1->parent).ctx, ((pIVar4->parent).flags & 0x200U) == 0)) {
		InstanceContext::thunk_FUN_0005a4c0(this_00,&local_30,&local_20);
		pIVar5 = (pIVar4->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar1 = (pIVar5->matrix).m44;
		fVar2 = (pIVar5->matrix).m43;
		fVar3 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar3;
		(pIVar5->position).z = fVar2;
		(pIVar5->position).w = fVar1;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		return local_20.x * (local_30.x - (pIVar5->position).x) +local_20.y * (local_30.y - (pIVar5->position).y) +local_20.z * (local_30.z - (pIVar5->position).z);
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x27B::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x27B * __thiscall Percept0x27B::Dispose(Percept0x27B *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x27B::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x27B::Construct(Percept0x27B *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x27b;
		(this->parent).vtable = &Percept_VT_ID_0x27b;
		return;
		}
		
	*/
	return;
}

