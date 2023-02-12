#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Input/NodeInputB.h"

#include "headers/Known/Input/InputController/InputStruct.h"
void NodeInputB::Construct(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeInputB * __thiscall NodeInputB::Construct(NodeInputB *this,undefined param_1){
		InputWrapper *this_00;
		NodeInputAbstract::Construct(&this->parent,2,7);
		this_00 = &(this->parent).inputWrapper;
		(this->parent).vtable = &NodeInput_VT_B;
		*(undefined *)&this->field1_0x10 = param_1;
		InputWrapper::AddAxis(this_00,0,0,0.3);
		InputWrapper::AddAxis(this_00,0,4,0.3);
		InputWrapper::AddAxis(this_00,1,1,0.3);
		InputWrapper::AddAxis(this_00,1,5,0.3);
		return this;
		}
		
	*/
	return;
}

void NodeInputB::FUN_000a99f0(uint param_1, InputStruct* param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall NodeInputB::FUN_000a99f0(NodeInputB *this,undefined4 param_1,InputStruct *param_2,int param_3){
		InputWrapper *this_00;
		float fVar1;
		NodeRelated2C *pNVar2;
		InstanceTransform *transform;
		InstanceTransform *transform_00;
		InstanceNodeCharacter *pIVar6;
		InstanceNodeCamera *pIVar3;
		InstanceContext *pIVar4;
		int *piVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float local_78;
		Vector4 local_60;
		undefined4 local_50 [19];
		this_00 = &(this->parent).inputWrapper;
		fVar8 = InputWrapper::FUN_0020a8c0(this_00,param_2,0);
		local_78 = InputWrapper::FUN_0020a8c0(this_00,param_2,1);
		pIVar6 = (InstanceNodeCharacter *)InstanceDataList::GetNode((InstanceDataList *)(param_3 + 0xe4),Character);
		pNVar2 = pIVar6->field1_0x18;
		piVar5 = &pNVar2->field36_0xf0;
		fVar9 = InputWrapper::FUN_0020a7c0(this_00,param_2,0);
		fVar10 = InputWrapper::FUN_0020a7c0(this_00,param_2,2);
		fVar11 = InputWrapper::FUN_0020a7c0(this_00,param_2,1);
		if (*(char *)&this->field1_0x10 == '\0') {
		if ((*(byte *)piVar5 & 8) != 0) {
		fVar9 = 0.0;
		}
		*(float *)&pNVar2->field_0x100 = fVar9;
		}
		else if ((*(byte *)piVar5 & 8) == 0) {
		*(float *)&pNVar2->field_0x100 = local_78;
		local_78 = 0.0;
		}
		else {
		*(undefined4 *)&pNVar2->field_0x100 = 0;
		local_78 = 0.0;
		}
		if ((*(byte *)piVar5 & 0x10) == 0) {
		*(float *)&pNVar2->field_0x104 = fVar11;
		}
		else {
		*(undefined4 *)&pNVar2->field_0x104 = 0;
		}
		if ((*(byte *)piVar5 & 0x20) == 0) {
		*(float *)&pNVar2->field_0x108 = fVar10;
		}
		else {
		*(undefined4 *)&pNVar2->field_0x108 = 0;
		}
		*piVar5 = *piVar5 & 0xffffffc7;
		if ((fVar8 != 0.0) || (local_78 != 0.0)) {
		pIVar3 = (InstanceNodeCamera *)InstanceDataList::GetNode((InstanceDataList *)(param_3 + 0xe4),Camera);
		pIVar4 = (InstanceContext *)pIVar3->ctxPtr;
		if (pIVar4 != (InstanceContext *)0x0) {
		pIVar4 = *(InstanceContext **)&pIVar4->parent;
		}
		transform = (pIVar4->parent).transform;
		transform_00 = *(InstanceTransform **)(param_3 + 0x18);
		InstanceTransform::FillMatrix(transform);
		InstanceTransform::FillMatrix(transform_00);
		local_60.x = (transform_00->matrix).m31;
		local_60.y = (transform_00->matrix).m32;
		local_60.z = (transform_00->matrix).m33;
		local_60.w = (transform_00->matrix).m34;
		FUN_000d3050(transform,3,local_50);
		InstanceTransform::FUN_000d3ed0((InstanceTransform *)local_50,&local_60);
		fVar9 = (transform->matrix).m11;
		fVar10 = (transform->matrix).m13;
		fVar11 = (transform->matrix).m31;
		fVar1 = (&(transform->matrix).m31)[2];
		fVar6 = fVar10 * fVar10 + fVar9 * fVar9;
		if (fVar6 <= _DAT_0039df48) {
		fVar6 = 0.0;
		}
		else {
		fVar6 = FLOAT_0038639c / SQRT(fVar6);
		}
		fVar7 = fVar1 * fVar1 + fVar11 * fVar11;
		if (fVar7 <= _DAT_0039df48) {
		fVar7 = 0.0;
		}
		else {
		fVar7 = FLOAT_0038639c / SQRT(fVar7);
		}
		fVar11 = fVar6 * fVar9 * fVar8 + fVar7 * fVar11 * local_78;
		fVar8 = fVar10 * fVar6 * fVar8 + fVar1 * fVar7 * local_78;
		fVar9 = SQRT(fVar8 * fVar8 + fVar11 * fVar11);
		if (FLOAT_0038639c < fVar9) {
		fVar9 = FLOAT_0038639c / fVar9;
		fVar11 = fVar11 * fVar9;
		fVar8 = fVar8 * fVar9;
		}
		if ((*(byte *)piVar5 & 4) == 0) {
		*(float *)&pNVar2->field_0xfc = fVar11;
		}
		else {
		*(undefined4 *)&pNVar2->field_0xfc = 0;
		}
		if ((*(byte *)piVar5 & 2) == 0) {
		*(float *)&pNVar2->field_0xf8 = fVar8;
		return;
		}
		*(undefined4 *)&pNVar2->field_0xf8 = 0;
		}
		return;
		}
		
	*/
	return;
}

void NodeInputB::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeInputB * __thiscall NodeInputB::Dispose(NodeInputB *this,byte param_1){
		(this->parent).vtable = &NodeInput_VT_Abstract;
		InputWrapper::Dispose(&(this->parent).inputWrapper);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void NodeInputB::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void NodeInputB::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

