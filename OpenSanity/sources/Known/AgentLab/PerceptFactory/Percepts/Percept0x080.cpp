#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x080.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x080::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall Percept0x080::GetUtilityScore(Percept0x080 *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		InstanceContext *pIVar3;
		InstanceNodeAbstract *pIVar4;
		InstanceNodeCharacter *this_00;
		InstanceTransform *pIVar5;
		InstanceTransform *transform;
		bool bVar6;
		float fVar7;
		InstanceContext *local_38 [2];
		float local_30;
		float local_2c;
		float local_28;
		Vector4 local_20;
		pIVar3 = (param_1->parent).ctx;
		local_38[0] = (InstanceContext *)0x0;
		if (this->field1_0x14 == 0) {
		bVar6 = InstanceContext::GetFocusRelated(param_1,local_38,&local_20);
		if (bVar6 == false) {
		return FLOAT_00386394;
		}
		}
		else if (this->field1_0x14 == 1) {
		pIVar4 = (param_1->nodes).array[0xc];
		if ((pIVar4 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar4->field6_0x14 & 1) != 0)) {
		(param_1->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		this_00 = (InstanceNodeCharacter *)(param_1->nodes).array[0xc];
		if (this_00 == (InstanceNodeCharacter *)0x0) {
		return FLOAT_00386394;
		}
		InstanceNodeCharacter::GetPosition(this_00,&local_20);
		}
		pIVar5 = (pIVar3->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar7 = (pIVar5->matrix).m44;
		fVar1 = (pIVar5->matrix).m43;
		fVar2 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar2;
		(pIVar5->position).z = fVar1;
		(pIVar5->position).w = fVar7;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		transform = (pIVar3->parent).transform;
		local_30 = local_20.x - (pIVar5->position).x;
		local_2c = local_20.y - (pIVar5->position).y;
		local_28 = local_20.z - (pIVar5->position).z;
		InstanceTransform::FillMatrix(transform);
		fVar7 = local_28 * local_28 + local_2c * local_2c + local_30 * local_30;
		if (fVar7 <= _DAT_004963dc) {
		fVar7 = 0.0;
		}
		else {
		fVar7 = FLOAT_0038639c / SQRT(fVar7);
		}
		fVar7 = (transform->matrix).m13 * local_28 * fVar7 + (transform->matrix).m12 * local_2c * fVar7 +(transform->matrix).m11 * fVar7 * local_30;
		if (((this->field2_0x18 == 1) && (fVar7 < 0.0)) || ((this->field2_0x18 == 0 && (0.0 < fVar7)))) {
		fVar7 = 0.0;
		}
		else if (fVar7 < 0.0) {
		return 0.0 - fVar7;
		}
		return fVar7;
		}
		
	*/
	return 0.0f;
}

void Percept0x080::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x080 * __thiscall Percept0x080::Dispose(Percept0x080 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x080::Construct(ushort param_1, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Percept0x080::Construct(Percept0x080 *this,undefined2 param_1,undefined4 param_2,undefined4 param_3){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = param_1;
		(this->parent).vtable = &Percept_VT_ID_0x80;
		this->field1_0x14 = param_2;
		this->field2_0x18 = param_3;
		return;
		}
		
	*/
	return;
}

