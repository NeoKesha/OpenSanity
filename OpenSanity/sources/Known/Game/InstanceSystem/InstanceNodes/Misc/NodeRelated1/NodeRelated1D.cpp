#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated1/NodeRelated1D.h"

void NodeRelated1D::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated1D * __fastcall NodeRelated1D::Construct(NodeRelated1D *this){
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
		(this->parent).vtable = &NodeRelated1_VT_D;
		NodeRelated1Abstract::InitTime(&this->parent);
		this->wumpaRelated = 0;
		return this;
		}
		
	*/
	return;
}

void NodeRelated1D::Init(byte param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeRelated1D::Init(NodeRelated1D *this,undefined param_2,undefined4 param_3){
		(this->parent).field7_0x10 = 0;
		*(undefined *)&(this->parent).field7_0x10 = 3;
		(this->parent).field7_0x10 = (this->parent).field7_0x10 | 0xfe000;
		NodeRelated1Abstract::InitTime(&this->parent);
		this->wumpaRelated = 0;
		return;
		}
		
	*/
	return;
}

void NodeRelated1D::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated1Abstract * __thiscall NodeRelated1D::Dispose(NodeRelated1D *this,byte param_1){
		(this->parent).vtable = &NodeRelated1_VT_Abstract2;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

