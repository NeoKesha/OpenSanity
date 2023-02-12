#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptHeadLookingAtFocus.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptHeadLookingAtFocus::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall PerceptHeadLookingAtFocus::GetUtilityScore(PerceptHeadLookingAtFocus *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		InstanceTransform *pIVar3;
		bool bVar4;
		uint uVar5;
		float fVar6;
		InstanceContext *local_48 [2];
		Vector4 local_40;
		float local_30;
		float local_2c;
		float local_28;
		float local_20;
		float local_1c;
		float local_18;
		local_48[0] = (InstanceContext *)0x0;
		bVar4 = InstanceContext::GetFocusRelated(param_1,local_48,&local_40);
		if (bVar4 != false) {
		if (local_48[0] != (InstanceContext *)0x0) {
		pIVar3 = (local_48[0]->parent).transform;
		if ((*(byte *)&pIVar3->field3_0x60 & 4) != 0) {
		fVar6 = (pIVar3->matrix).m44;
		fVar1 = (pIVar3->matrix).m43;
		fVar2 = (pIVar3->matrix).m42;
		(pIVar3->position).x = (pIVar3->matrix).m41;
		(pIVar3->position).y = fVar2;
		(pIVar3->position).z = fVar1;
		(pIVar3->position).w = fVar6;
		pIVar3->field3_0x60 = (float)((uint)pIVar3->field3_0x60 & 0xfffffffa);
		}
		local_40.x = (pIVar3->position).x;
		local_40.z = (pIVar3->position).z;
		local_40.y = (pIVar3->position).y;
		}
		local_40.y = local_40.y + FLOAT_00394384;
		uVar5 = (uint)(this->parent).PerceptID >> 0x11 & 0xff;
		local_48[0] = (InstanceContext *)((uint)local_48[0] & 0xffffff00 | uVar5);
		uVar5 = FUN_00172520((int)(param_1->parent).ctx,(byte)uVar5,&local_30,&local_20);
		if ((char)uVar5 != '\0') {
		local_40.x = local_40.x - local_30;
		local_40.z = local_40.z - local_28;
		local_40.y = local_40.y - local_2c;
		fVar6 = local_40.z * local_40.z + local_40.x * local_40.x + local_40.y * local_40.y;
		if (fVar6 <= _DAT_004963dc) {
		fVar6 = 0.0;
		}
		else {
		fVar6 = FLOAT_0038639c / SQRT(fVar6);
		}
		return local_20 * fVar6 * local_40.x +local_1c * fVar6 * local_40.y + local_18 * fVar6 * local_40.z;
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptHeadLookingAtFocus::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptHeadLookingAtFocus * __thiscall PerceptHeadLookingAtFocus::Dispose(PerceptHeadLookingAtFocus *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptHeadLookingAtFocus::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptHeadLookingAtFocus::Construct(PerceptHeadLookingAtFocus *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x28;
		(this->parent).vtable = &Percept_VT_HeadLookingAtFocus;
		return;
		}
		
	*/
	return;
}

