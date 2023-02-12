#include "headers/Unknown/Families/Families0X/Family2/UnkFamily2A.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
void UnkFamily2A::Construct(InstanceNodeAbstract* node, byte param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily2A * __thiscall UnkFamily2A::Construct(UnkFamily2A *this,InstanceNodeAbstract *node,undefined param_2){
		(this->parent).node = node;
		(this->parent).field_0x4 = param_2;
		(this->parent).vtable = (UnkFamily2_VTable *)&UnkFamily2_VT_A;
		UnkFamily3A::Construct(&this->field5_0x10);
		return this;
		}
		
	*/
	return;
}

void UnkFamily2A::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily2A::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily2A::EmptyFunction_2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily2A::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily2A::EmptyFunction_3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily2A::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily2A::FUN_00057950() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily2A::FUN_00057950(UnkFamily2A *this){
		InstanceContext *pIVar1;
		InstanceNodeOGI *nodeN;
		pIVar1 = (this->field5_0x10).field1_0x4;
		if (pIVar1 != (InstanceContext *)0x0) {
		nodeN = (InstanceNodeOGI *)InstanceDataList::GetNode(&((pIVar1->parent).ctx)->nodes,OGI);
		(*(code *)((this->field5_0x10).parent.vtable)->field2_0x8)(nodeN->field4_0x24);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily2A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily2Base * __thiscall UnkFamily2A::Dispose(UnkFamily2A *this,byte param_1){
		(this->field5_0x10).parent.vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_Abstract;
		(this->parent).vtable = (UnkFamily2_VTable *)&UnkFamily2_VT_Base;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

