#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated1/NodeRelated1B.h"

void NodeRelated1B::FUN_000670f0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeRelated1B::FUN_000670f0(NodeRelated1B *this){
		this->field1_0x14 = 0;
		return;
		}
		
	*/
	return;
}

void NodeRelated1B::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall NodeRelated1B::Dispose(NodeRelated1B *this,byte param_1){
		(this->parent).vtable = &NodeRelated1_VT_Abstract2;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void NodeRelated1B::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated1B * __fastcall NodeRelated1B::Construct(NodeRelated1B *this){
		int *piVar1;
		(this->parent).field7_0x10 = 0;
		*(undefined *)&(this->parent).field7_0x10 = 3;
		piVar1 = &(this->parent).field7_0x10;
		*piVar1 = *piVar1 | 0xfe000;
		(this->parent).field_0x4 = 0;
		(this->parent).field6_0xc = 0;
		(this->parent).vtable = &NodeRelated1_VT_Abstract;
		NodeRelated1Abstract::InitTime(&this->parent);
		(this->parent).vtable = &NodeRelated1_VT_B;
		this->field1_0x14 = 0;
		return this;
		}
		
	*/
	return;
}

