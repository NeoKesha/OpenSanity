#include "headers/Unknown/NonVirtualClasses/UNV030.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2C.h"
void UNV030::FUN_0007d5b0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UNV030::FUN_0007d5b0(UNV030 *this){
		bool bVar1;
		float fVar2;
		BlackboardAbstract *blackboard;
		blackboard = (this->field46_0x34->parent).parent.blackboard;
		this->field0_0x0 = 0;
		*(undefined *)&this->field0_0x0 = 0;
		this->field0_0x0 = this->field0_0x0 | 0x400;
		fVar2 = BlackboardAbstract::GetFloatByIndex(blackboard,0x29);
		if (fVar2 < FLOAT_00386394) {
		fVar2 = 0.0 - fVar2;
		}
		bVar1 = EPSILON < fVar2;
		this->field45_0x30 = FLOAT_0038639c;
		this->field0_0x0 = this->field0_0x0 ^ ((uint)bVar1 << 0xb ^ this->field0_0x0) & 0x800;
		return;
		}
		
	*/
	return;
}

UNV030* UNV030::FUN_00083fb0(NodeRelated2C* data2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UNV030 * __thiscall UNV030::FUN_00083fb0(UNV030 *this,NodeRelated2C *data2){
		this->field46_0x34 = data2;
		thunk_FUN_0007d5b0(this);
		return this;
		}
		
	*/
	return null;
}

