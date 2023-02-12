#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x0A3.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x0A3::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x0A3::GetUtilityScore(Percept0x0A3 *this,InstanceContext *param_1){
		float fVar1;
		InstanceContext *pIVar2;
		InstanceNodeInstance *pIVar3;
		fVar1 = (param_1->parent).field14_0x20.matrix2.m43;
		if ((((uint)fVar1 & 1) != 0) &&(pIVar2 = (param_1->parent).field14_0x20.field4_0x10, pIVar2 != (InstanceContext *)0x0)) {
		if ((*(byte *)&(pIVar2->parent).flags & 1) == 0) {
		pIVar3 = (InstanceNodeInstance *)InstanceDataList::GetNode(&pIVar2->nodes,Instance);
		if ((float)(uint)*(byte *)((int)(pIVar3->body).field49_0x80 + this->unkField + 0x28) ==(this->parent).Threshold) {
		fVar1 = (this->parent).Threshold;
		return fVar1 + fVar1;
		}
		}
		else {
		(param_1->parent).field14_0x20.field4_0x10 = (InstanceContext *)0x0;
		(param_1->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar1 & 0xfffffffc);
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x0A3::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x0A3 * __thiscall Percept0x0A3::Dispose(Percept0x0A3 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x0A3::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x0A3 * __thiscall Percept0x0A3::Construct(Percept0x0A3 *this,int param_1){
		(this->parent).PerceptID = 0;
		(this->parent).vtable = &Percept_VT_ID_0xa3;
		this->unkField = param_1;
		switch(param_1) {
		case 0:*(undefined2 *)&(this->parent).PerceptID = 0xa3;
		return this;
		case 1:*(undefined2 *)&(this->parent).PerceptID = 0xa4;
		return this;
		case 2:*(undefined2 *)&(this->parent).PerceptID = 0xa5;
		return this;
		case 3:*(undefined2 *)&(this->parent).PerceptID = 0xa6;
		}
		return this;
		}
		
	*/
	return;
}

