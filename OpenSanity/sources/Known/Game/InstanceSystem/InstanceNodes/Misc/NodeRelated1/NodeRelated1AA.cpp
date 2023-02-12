#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated1/NodeRelated1AA.h"

void NodeRelated1AA::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void NodeRelated1AA::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void NodeRelated1AA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated1AA * __thiscall NodeRelated1AA::Dispose(NodeRelated1AA *this,byte param_1){
		(this->parent).vtable = &NodeRelated1_VT_Abstract2;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void NodeRelated1AA::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated1AA * __fastcall NodeRelated1AA::Construct(NodeRelated1AA *this){
		int *piVar1;
		(this->parent).field7_0x10 = 0;
		*(undefined *)&(this->parent).field7_0x10 = 3;
		piVar1 = &(this->parent).field7_0x10;
		*piVar1 = *piVar1 | 0xfe000;
		(this->parent).field_0x4 = 0;
		(this->parent).field6_0xc = 0;
		(this->parent).vtable = &NodeRelated1_VT_Abstract;
		NodeRelated1Abstract::InitTime(&this->parent);
		(this->parent).vtable = &NodeRelated1_VT_AA;
		return this;
		}
		
	*/
	return;
}

