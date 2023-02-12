#include "headers/Known/AgentLab/ActionFactory/Actions/ActionCameraTopdownMode.h"

void ActionCameraTopdownMode::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionCameraTopdownMode::Dispose(ActionCameraTopdownMode *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionCameraTopdownMode::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall ActionCameraTopdownMode::ExecuteFromCallContext(ActionCameraTopdownMode *this){
		float fVar1;
		float fVar2;
		uint uVar3;
		InstanceContext *pIVar4;
		InstanceNodeAbstract *pIVar5;
		GameCameraAbstract *this_00;
		uVar3 = (GameController1->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar3 == 6) {
		pIVar4 = (InstanceContext *)0x0;
		}
		else {
		pIVar4 = (InstanceContext *)(GameController1->chunkDescriptor).playerInstanceContexts[uVar3];
		if (pIVar4 != (InstanceContext *)0x0) {
		pIVar4 = *(InstanceContext **)&pIVar4->parent;
		}
		}
		pIVar5 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar4->field27_0xe0 + 1),Camera);
		if (pIVar5 != (InstanceNodeAbstract *)0x0) {
		this_00 = (GameCameraAbstract *)VirtualPool::AllocateMemory(0x50);
		if (this_00 == (GameCameraAbstract *)0x0) {
		this_00 = (GameCameraAbstract *)0x0;
		}
		else {
		GameCameraAbstract::Construct(this_00);
		this_00->vtable = (GameCameraAbstract_VTable *)&GameCamera_VT_Unk2;
		}
		fVar2 = FLOAT_0038abf0;
		this_00[1].vtable = (GameCameraAbstract_VTable *)FLOAT_0038abf4;
		this_00[1].field1_0x4 = 0;
		this_00[2].field1_0x4 = 0;
		fVar1 = FLOAT_0038abec;
		this_00[1].field2_0x8 = (int)fVar2;
		this_00[1].field3_0xc = fVar2;
		this_00[2].vtable = (GameCameraAbstract_VTable *)FLOAT_0038a760;
		this_00[3].vtable = (GameCameraAbstract_VTable *)fVar1;
		this_00[3].field1_0x4 = (int)FLOAT_0038abe8;
		this_00[3].field2_0x8 = (int)FLOAT_0038abe4;
		this_00[3].field3_0xc = FLOAT_0038639c;
		*(undefined *)&this_00[4].vtable = 1;
		*(uint *)&pIVar5[0x43].field2_0x8 = *(uint *)&pIVar5[0x43].field2_0x8 | 0x80;
		*(undefined4 *)&pIVar5[0x46].field2_0x8 = 0x2aaa;
		pIVar5[0x46].time = 0x2aaa;
		pIVar5[0x43].field6_0x14 = (uint)this_00;
		pIVar5[0x26].field5_0x10 = (InstanceNodeAbstract *)((uint)pIVar5[0x26].field5_0x10 | 0x800);
		FUN_001cde90((int)&pIVar5[0x23].field2_0x8);
		*(undefined4 *)&pIVar5[0x1d].field2_0x8 = 0x10;
		pIVar5[0x12].vtable = (InstanceNodeAbstract_VTable *)((uint)pIVar5[0x12].vtable | 0x100000);
		FUN_001c8fd0((int)&pIVar5[0xc].field5_0x10);
		}
		return;
		}
		
	*/
	return;
}

void ActionCameraTopdownMode::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionCameraTopdownMode::Construct(ActionCameraTopdownMode *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_CameraTopdownMode;
		return;
		}
		
	*/
	return;
}

int ActionCameraTopdownMode::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionCameraTopdownMode::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

