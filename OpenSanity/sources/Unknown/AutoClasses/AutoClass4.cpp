#include "headers/Unknown/AutoClasses/AutoClass4.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
void AutoClass4::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	AutoClass4 * __fastcall AutoClass4::Construct(AutoClass4 *this){
		this->field0_0x0 = 0;
		this->field1_0x4 = -1;
		this->nodeArray[0] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[1] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[2] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[3] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[4] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[5] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[6] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[7] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[8] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[9] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[10] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[0xb] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[0xc] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[0xd] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[0xe] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[0xf] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[0x10] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[0x11] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[0x12] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[0x13] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[0x14] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[0x15] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[0x16] = (InstanceNodeAbstract *)0x0;
		this->nodeArray[0x17] = (InstanceNodeAbstract *)0x0;
		return this;
		}
		
	*/
	return;
}

bool AutoClass4::AddNodeToSlot(InstanceNodeAbstract* instanceNode) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall AutoClass4::AddNodeToSlot(AutoClass4 *this,InstanceNodeAbstract *instanceNode){
		byte index;
		InstanceNodeAbstract **nodeSlot;
		index = (*instanceNode->vtable->GetIndex)();
		if ((instanceNode->field2_0x8 & 2U) != 0) {
		return false;
		}
		instanceNode->field2_0x8 = instanceNode->field2_0x8 | 2;
		nodeSlot = this->nodeArray + index;
		if (*nodeSlot == (InstanceNodeAbstract *)0x0) {
		*nodeSlot = instanceNode;
		instanceNode->field5_0x10 = (InstanceNodeAbstract *)0x0;
		instanceNode->field6_0x14 = 0;
		return true;
		}
		(*nodeSlot)->field5_0x10 = instanceNode;
		instanceNode->field6_0x14 = (uint)*nodeSlot;
		*nodeSlot = instanceNode;
		return true;
		}
		
	*/
	return false;
}

void AutoClass4::FUN_000f7710(AutoClass4* thos) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall AutoClass4::FUN_000f7710(AutoClass4 *thos){
		int *piVar1;
		int iVar2;
		piVar1 = (int *)thos->field0_0x0;
		while (piVar1 != (int *)0x0) {
		iVar2 = *piVar1;
		piVar1 = (int *)piVar1[0x55];
		(**(code **)(iVar2 + 0xc))();
		}
		return;
		}
		
	*/
	return;
}

