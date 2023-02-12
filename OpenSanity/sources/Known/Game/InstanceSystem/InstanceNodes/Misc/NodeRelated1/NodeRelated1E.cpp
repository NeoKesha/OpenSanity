#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated1/NodeRelated1E.h"

void NodeRelated1E::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated1E * __fastcall NodeRelated1E::Construct(NodeRelated1E *this){
		int *piVar1;
		(this->parent).field7_0x10 = 0;
		*(undefined *)&(this->parent).field7_0x10 = 3;
		(this->parent).field_0x4 = 0;
		(this->parent).field6_0xc = 0;
		(this->parent).vtable = &NodeRelated1_VT_Abstract;
		(this->parent).field7_0x10 = (this->parent).field7_0x10 | 0xfe000;
		NodeRelated1Abstract::InitTime(&this->parent);
		(this->parent).field7_0x10 = 0;
		*(undefined *)&(this->parent).field7_0x10 = 3;
		piVar1 = &(this->parent).field7_0x10;
		*piVar1 = *piVar1 | 0xfe000;
		(this->parent).vtable = &NodeRelated1_VT_E;
		NodeRelated1Abstract::InitTime(&this->parent);
		this->field1_0x14 = 2;
		this->field2_0x18 = 0;
		return this;
		}
		
	*/
	return;
}

void NodeRelated1E::FUN_0006b370(byte param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeRelated1E::FUN_0006b370(NodeRelated1E *this,undefined param_2,undefined4 param_3){
		(this->parent).field7_0x10 = 0;
		*(undefined *)&(this->parent).field7_0x10 = 3;
		(this->parent).field7_0x10 = (this->parent).field7_0x10 | 0xfe000;
		NodeRelated1Abstract::InitTime(&this->parent);
		this->field1_0x14 = 2;
		this->field2_0x18 = 0;
		return;
		}
		
	*/
	return;
}

void NodeRelated1E::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall NodeRelated1E::Dispose(NodeRelated1E *this,byte param_1){
		(this->parent).vtable = &NodeRelated1_VT_Abstract2;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

