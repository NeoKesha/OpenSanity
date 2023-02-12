#include "headers/Known/Builders/UnkBuilder6/UnkBuilder6.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
void UnkBuilder6::Dispose(byte flag) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkBuilder6 * __thiscall UnkBuilder6::Dispose(UnkBuilder6 *this,byte flag){
		this->vtable = (UnkBuilder6_VTable *)&Builder_VT_Abstract;
		if ((flag & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void* UnkBuilder6::BUILD(uint id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * UnkBuilder6::BUILD(int id){
		Animation *pAVar1;
		InstanceNodeOGI *this;
		OGI *pOVar2;
		if (id == 0x1407) {
		pOVar2 = (OGI *)VirtualPool::AllocateMemory(0x90);
		if (pOVar2 != (OGI *)0x0) {
		pOVar2 = OGI::Construct(pOVar2);
		return (InstanceNodeAbstract *)pOVar2;
		}
		}
		else {
		if (id == 0x141e) {
		this = (InstanceNodeOGI *)VirtualPool::AllocateMemory(0x30);
		if (this != (InstanceNodeOGI *)0x0) {
		InstanceNodeAbstract::Contruct((InstanceNodeAbstract *)this);
		this->ogi = (OGI *)0x0;
		this->field3_0x20 = 0;
		this->field4_0x24 = (InstanceNodeOGISub *)0x0;
		this->field5_0x28 = 0;
		this->field6_0x2c = 0;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_OGI;
		this->field1_0x18 = 0;
		return &this->parent;
		}
		return (InstanceNodeAbstract *)0x0;
		}
		if (id == 0x1702) {
		pAVar1 = (Animation *)VirtualPool::AllocateMemory(0x24);
		if (pAVar1 != (Animation *)0x0) {
		pAVar1 = Animation::Construct(pAVar1);
		return (InstanceNodeAbstract *)pAVar1;
		}
		}
		}
		return (InstanceNodeAbstract *)0x0;
		}
		
	*/
	return null;
}

void UnkBuilder6::Construct(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkBuilder6::Construct(undefined4 *param_1){
		*param_1 = &Builder_VT_6;
		return;
		}
		
	*/
	return;
}

