#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Input/InstanceNodeInput.h"

#include "headers/Known/Input/InputController/InputStruct.h"
void InstanceNodeInput::FUN_000aea70(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInput::FUN_000aea70(InstanceNodeInput *this,int param_1){
		int unaff_retaddr;
		if ((undefined4 *)this->field18_0x2c != (undefined4 *)0x0) {
		(***(code ***)(undefined4 *)this->field18_0x2c)(1);
		this->field18_0x2c = unaff_retaddr;
		return;
		}
		this->field18_0x2c = param_1;
		return;
		}
		
	*/
	return;
}

void InstanceNodeInput::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeInput * __fastcall InstanceNodeInput::Construct(InstanceNodeInput *this){
		InstanceNodeAbstract::Contruct(&this->parent);
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_Input;
		this->input = (InputStruct *)0x0;
		NodeInputA::Construct((NodeInputA *)&this->field_0x1c);
		this->field19_0x30 = this->field19_0x30 & 0xfffffffe;
		this->field18_0x2c = 0;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeInput::Dispose(InstanceNodeInput* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInput::Dispose(InstanceNodeInput *param_1){
		undefined4 *puVar1;
		puVar1 = (undefined4 *)param_1->field18_0x2c;
		(param_1->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_Input;
		if (puVar1 != (undefined4 *)0x0) {
		(**(code **)*puVar1)(1);
		}
		NodeInputAbstract::Dispose((NodeInputAbstract *)&param_1->field_0x1c);
		(param_1->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_L;
		InstanceNodeAbstract::UnrollVtable(&param_1->parent);
		return;
		}
		
	*/
	return;
}

void InstanceNodeInput::UpdateTime() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInput::UpdateTime(InstanceNodeInput *this){
		if ((undefined4 *)this->field18_0x2c != (undefined4 *)0x0) {
		(***(code ***)(undefined4 *)this->field18_0x2c)(1);
		}
		this->field18_0x2c = 0;
		this->field19_0x30 = this->field19_0x30 & 0xfffffffe;
		(**(code **)(*(int *)&this->field_0x1c + 4))();
		return;
		}
		
	*/
	return;
}

bool InstanceNodeInput::Step(byte* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeInput::Step(InstanceNodeInput *this,byte *param_1){
		bool bVar1;
		InstanceNodeInstance *nodeQ;
		InstanceNodeCamera *nodeK;
		int *this_00;
		float local_20;
		float local_1c;
		float local_18;
		undefined4 local_14;
		if ((*param_1 & 1) != 0) {
		if ((*(byte *)&this->field19_0x30 & 1) != 0) {
		nodeQ = (InstanceNodeInstance *)InstanceDataList::GetNode(&((this->parent).ctx)->nodes,Instance);
		local_14 = *(undefined4 *)&(nodeQ->body).field_0xc8;
		local_18 = FLOAT_0038639c / ((float)*(int *)(param_1 + 8) * TimePerTick1);
		local_20 = local_18 * (float)(nodeQ->body).field63_0xbc;
		local_1c = *(float *)&(nodeQ->body).field_0xc0 * local_18;
		local_18 = *(float *)&(nodeQ->body).field_0xc4 * local_18;
		thunk_FUN_000a8520(param_1,&local_20,(int)(this->parent).ctx);
		bVar1 = InstanceNodeAbstract::Step(&this->parent,(UnkTimePack *)param_1);
		return bVar1;
		}
		if (this->input != (InputStruct *)0x0) {
		nodeK = (InstanceNodeCamera *)InstanceDataList::GetNode(&((this->parent).ctx)->nodes,Camera);
		this_00 = (int *)this->field18_0x2c;
		if (this_00 == (int *)0x0) {
		this_00 = (int *)&this->field_0x1c;
		}
		(**(code **)(*this_00 + 8))(param_1,this->input,(this->parent).ctx);
		thunk_FUN_000a6ae0((int)this_00,this->input,(this->parent).ctx);
		thunk_FUN_0007d130(&(nodeK->struct).field0_0x0);
		}
		}
		bVar1 = InstanceNodeAbstract::Step(&this->parent,(UnkTimePack *)param_1);
		return bVar1;
		}
		
	*/
	return false;
}

void InstanceNodeInput::Dispose_5(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodeInput::Dispose(InstanceNodeInput *this,byte param_1){
		undefined4 *puVar1;
		puVar1 = (undefined4 *)this->field18_0x2c;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_Input;
		if (puVar1 != (undefined4 *)0x0) {
		(**(code **)*puVar1)(1);
		}
		NodeInputAbstract::Dispose((NodeInputAbstract *)&this->field_0x1c);
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_L;
		InstanceNodeAbstract::UnrollVtable(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

uint InstanceNodeInput::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodeInput::GetBuilderIndex(void){
		return 0x9006;
		}
		
	*/
	return 0;
}

