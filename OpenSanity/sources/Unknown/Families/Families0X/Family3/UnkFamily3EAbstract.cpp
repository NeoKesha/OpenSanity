#include "headers/Unknown/Families/Families0X/Family3/UnkFamily3EAbstract.h"

bool UnkFamily3EAbstract::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall UnkFamily3EAbstract::CleanUp(UnkFamily3EAbstract *this){
		InstanceNodeOGISub *pIVar1;
		int **ppiVar2;
		InstanceNodeOGI *nodeN;
		if ((((*(byte *)&this->field1_0x4 & 1) != 0) &&(ppiVar2 = *(int ***)&this->field_0x60, ppiVar2 != (int **)0x0)) && (*ppiVar2 != (int *)0x0)){
		if (ppiVar2 != (int **)0x0) {
		ppiVar2 = (int **)*ppiVar2;
		}
		nodeN = (InstanceNodeOGI *)InstanceDataList::GetNode((InstanceDataList *)((int *)ppiVar2 + 0x39),OGI);
		if ((nodeN != (InstanceNodeOGI *)0x0) &&(pIVar1 = nodeN->field4_0x24, pIVar1 != (InstanceNodeOGISub *)0x0)) {
		this->field1_0x4 = this->field1_0x4 & 0xfffffffe;
		(*(code *)((this->parent).vtable)->field2_0x8)(pIVar1);
		return true;
		}
		}
		return false;
		}
		
	*/
	return false;
}

void UnkFamily3EAbstract::Construct(uint param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily3EAbstract * __thiscall UnkFamily3EAbstract::Construct(UnkFamily3EAbstract *this,undefined4 param_1,int param_2){
		undefined4 uVar1;
		(this->parent).vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_E_Abstract;
		*(undefined4 *)&this->field_0x8 = 0;
		FUN_000f4530(&this->field_0x20,param_1);
		if (param_2 == 0) {
		*(undefined4 *)&this->field_0x60 = 0;
		}
		else {
		uVar1 = InstanceContextSmartPtr::CreateRef((InstanceContextSmartPtr *)(param_2 + 0xc0),(InstanceContext *)param_2,0);
		*(undefined4 *)&this->field_0x60 = uVar1;
		}
		this->field1_0x4 = 0;
		this->field1_0x4 = this->field1_0x4 & 0xfffffa07 | 0x200;
		return this;
		}
		
	*/
	return;
}

void UnkFamily3EAbstract::Unroll() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily3EAbstract::Unroll(UnkFamily3EA *this){
		(this->parent).parent.vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_E_Abstract;
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)&(this->parent).field_0x60);
		FUN_000f51c0((int)&(this->parent).field_0x20);
		(this->parent).parent.vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void UnkFamily3EAbstract::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily3Abstract * __thiscall UnkFamily3EAbstract::Dispose(UnkFamily3EAbstract *this,byte param_1){
		(this->parent).vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_E_Abstract;
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)&this->field_0x60);
		FUN_000f51c0((int)&this->field_0x20);
		(this->parent).vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

