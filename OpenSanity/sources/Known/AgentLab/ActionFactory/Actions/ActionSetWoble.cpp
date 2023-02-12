#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetWoble.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetWoble::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetWoble * __fastcall ActionSetWoble::Construct(ActionSetWoble *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetWobble;
		AutoClass28::Construct((AutoClass28 *)&this->unlabelled12,'\0','\0');
		return this;
		}
		
	*/
	return;
}

void ActionSetWoble::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetWoble::Dispose(ActionSetWoble *this,byte param_1){
		::EmptyFunction();
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetWoble::UnkMethod(int* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps void __thiscall ActionSetWoble::UnkMethod(int this,int *param_2){
		ushort uVar1;
		char cVar2;
		ushort *puVar3;
		uint uVar4;
		float local_28;
		undefined4 local_24;
		float local_20;
		undefined4 local_1c;
		float local_18;
		float local_14;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_2);
		local_14 = 0.0;
		local_18 = 0.0;
		local_20 = 0.0;
		local_28 = 0.0;
		local_1c = local_1c & 0xffffff00;
		local_24 = local_24 & 0xffffff00;
		param_2 = (int *)((uint)param_2 & 0xffffff00);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar2 != '\0') {
		FUN_00178550(this + 0xc,local_14,local_18,local_1c,local_20,local_24,local_28,param_2);
		*(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 0x4000;
		return;
		}
		puVar3 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *puVar3;
		if (uVar1 < 0x2b) {
		switch(uVar1) {
		case 0xc:local_14 = *(float *)(puVar3 + 2);
		break;
		case 0xd:case 0xe:case 0xf:case 0x10:case 0x11:case 0x12:case 0x13:case 0x14:case 0x15:case 0x16:case 0x17:case 0x18:case 0x19:case 0x1a:case 0x1b:case 0x1c:break;
		case 0x1d:switch(*(undefined4 *)(puVar3 + 2)) {
		case 0x10:*(uint *)(this + 0x74) = *(uint *)(this + 0x74) & 0xffffffcf | 8;
		*(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 8;
		break;
		case 0x11:*(uint *)(this + 0x74) = *(uint *)(this + 0x74) & 0xffffffd7 | 0x10;
		*(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 8;
		break;
		case 0x12:*(uint *)(this + 0x74) = *(uint *)(this + 0x74) & 0xffffffdf | 0x18;
		*(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 8;
		break;
		case 0x13:*(uint *)(this + 0x74) = *(uint *)(this + 0x74) & 0xffffffe7 | 0x20;
		*(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 8;
		break;
		case 0x22:*(uint *)(this + 0x74) = *(uint *)(this + 0x74) & 0xffffffef | 0x28;
		*(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 8;
		}
		break;
		case 0x1e:switch(*(undefined4 *)(puVar3 + 2)) {
		case 0x10:FUN_0018bd80(this + 0xc,1);
		break;
		case 0x11:FUN_0018bd80(this + 0xc,2);
		break;
		case 0x12:FUN_0018bd80(this + 0xc,3);
		break;
		case 0x13:FUN_0018bd80(this + 0xc,4);
		break;
		case 0x22:FUN_0018bd80(this + 0xc,5);
		}
		break;
		case 0x1f:switch(*(undefined4 *)(puVar3 + 2)) {
		case 0x10:FUN_0018bdb0(this + 0xc,1);
		break;
		case 0x11:FUN_0018bdb0(this + 0xc,2);
		break;
		case 0x12:FUN_0018bdb0(this + 0xc,3);
		break;
		case 0x13:FUN_0018bdb0(this + 0xc,4);
		break;
		case 0x22:FUN_0018bdb0(this + 0xc,5);
		}
		break;
		case 0x20:*(undefined4 *)(this + 0x18) = *(undefined4 *)(puVar3 + 2);
		if ((*(byte *)(this + 0x74) & 0x38) == 0) {
		*(uint *)(this + 0x74) = *(uint *)(this + 0x74) & 0xffffffcf | 8;
		*(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 8;
		}
		break;
		case 0x21:*(undefined4 *)(this + 0x1c) = *(undefined4 *)(puVar3 + 2);
		if ((*(uint *)(this + 0x74) & 0x1c0) == 0) {
		FUN_0018bd80(this + 0xc,1);
		}
		break;
		case 0x22:*(undefined4 *)(this + 0x20) = *(undefined4 *)(puVar3 + 2);
		if ((*(uint *)(this + 0x74) & 0xe00) == 0) {
		FUN_0018bdb0(this + 0xc,1);
		}
		break;
		case 0x23:*(float *)(this + 0xc) = DAT_00496378 / *(float *)(puVar3 + 2);
		break;
		case 0x24:*(float *)(this + 0x10) = DAT_00496378 / *(float *)(puVar3 + 2);
		break;
		case 0x25:*(float *)(this + 0x14) = DAT_00496378 / *(float *)(puVar3 + 2);
		break;
		case 0x26:*(float *)(this + 0x24) = *(float *)(puVar3 + 2) * DAT_004962ac;
		break;
		case 0x27:*(float *)(this + 0x28) = *(float *)(puVar3 + 2) * DAT_004962ac;
		break;
		case 0x28:*(float *)(this + 0x2c) = *(float *)(puVar3 + 2) * DAT_004962ac;
		break;
		case 0x29:local_18 = *(float *)(puVar3 + 2);
		break;
		default:local_20 = *(float *)(puVar3 + 2);
		}
		goto switchD_0019732a_caseD_5;
		}
		if (uVar1 < 0x50) {
		switch(uVar1) {
		case 0x2b:local_28 = *(float *)(puVar3 + 2);
		break;
		case 0x2c:if (*(int *)(puVar3 + 2) == 0x14) {
		local_1c = CONCAT31((int3)(local_1c >> 8),1);
		}
		break;
		case 0x2d:if (*(int *)(puVar3 + 2) == 0x14) {
		local_24 = CONCAT31((int3)(local_24 >> 8),1);
		}
		break;
		case 0x2e:if (*(int *)(puVar3 + 2) == 0x14) {
		param_2 = (int *)CONCAT31((int3)((uint)param_2 >> 8),1);
		}
		break;
		case 0x2f:case 0x30:case 0x31:case 0x32:case 0x33:case 0x34:case 0x35:case 0x36:case 0x37:case 0x38:case 0x39:case 0x3a:case 0x3b:case 0x3c:case 0x3d:case 0x3e:case 0x3f:case 0x40:case 0x41:break;
		case 0x42:*(float *)(this + 0x24) = *(float *)(puVar3 + 2) * DAT_004962ac;
		uVar4 = *(uint *)(this + 0x74) | 0x10000;
		goto LAB_001973ec;
		case 0x43:*(float *)(this + 0x28) = *(float *)(puVar3 + 2) * DAT_004962ac;
		uVar4 = *(uint *)(this + 0x74) | 0x20000;
		goto LAB_001973ec;
		case 0x44:*(float *)(this + 0x2c) = *(float *)(puVar3 + 2) * DAT_004962ac;
		uVar4 = *(uint *)(this + 0x74) | 0x40000;
		goto LAB_001973ec;
		default:*(undefined *)(this + 0x3c) = *(undefined *)(puVar3 + 2);
		}
		goto switchD_0019732a_caseD_5;
		}
		if (uVar1 < 0x96) {
		if (uVar1 == 0x95) {
		if (*(int *)(puVar3 + 2) == 0x1c) {
		*(uint *)(this + 0x78) = *(uint *)(this + 0x78) & 0xfffffff9 | 1;
		}
		else if (*(int *)(puVar3 + 2) == 0x3d) {
		*(uint *)(this + 0x78) = *(uint *)(this + 0x78) & 0xfffffffa | 2;
		}
		goto switchD_0019732a_caseD_5;
		}
		if (uVar1 == 0x54) {
		uVar4 = *(uint *)(this + 0x74) ^(((*(int *)(puVar3 + 2) == 0x1e) + 1) * 0x100000 ^ *(uint *)(this + 0x74)) &0x300000;
		}
		else if (uVar1 == 0x55) {
		uVar4 = *(uint *)(this + 0x74) ^(((*(int *)(puVar3 + 2) == 0x1e) + 1) * 0x400000 ^ *(uint *)(this + 0x74)) &0xc00000;
		}
		else {
		if (uVar1 != 0x56) goto switchD_0019732a_caseD_5;
		uVar4 = *(uint *)(this + 0x74) ^(((*(int *)(puVar3 + 2) == 0x1e) + 1) * 0x1000000 ^ *(uint *)(this + 0x74)) &0x3000000;
		}
		goto LAB_001973ec;
		}
		if (uVar1 == 0x99) {
		uVar4 = *(uint *)(this + 0x74) | 0xc000000;
		*(undefined4 *)(this + 0x30) = *(undefined4 *)(puVar3 + 2);
		goto LAB_001973ec;
		}
		if ((uVar1 != 0xffff) || (*(char *)(puVar3 + 1) != '\x04')) goto switchD_0019732a_caseD_5;
		switch(*(undefined4 *)(puVar3 + 2)) {
		case 2:uVar4 = *(uint *)(this + 0x74) & 0xfffffff8;
		goto LAB_001973ec;
		case 3:*(uint *)(this + 0x74) = *(uint *)(this + 0x74) & 0xfffffff9 | 1;
		break;
		case 4:uVar4 = *(uint *)(this + 0x74) & 0xfffffffa | 2;
		goto LAB_001973ec;
		case 0x16:uVar4 = *(uint *)(this + 0x74) | 0x1000;
		goto LAB_001973ec;
		case 0x17:uVar4 = *(uint *)(this + 0x74) | 0x8000;
		goto LAB_001973ec;
		case 0x1a:uVar4 = *(uint *)(this + 0x74) | 0x80000;
		goto LAB_001973ec;
		case 0x21:uVar4 = *(uint *)(this + 0x74) | 7;
		goto LAB_001973ec;
		case 0x58:uVar4 = *(uint *)(this + 0x74) & 0xf7ffffff | 0x4000000;
		LAB_001973ec:*(uint *)(this + 0x74) = uVar4;
		break;
		case 0x59:*(uint *)(this + 0x74) = *(uint *)(this + 0x74) & 0xfbffffff | 0x8000000;
		break;
		case 0x6f:*(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 0x40;
		break;
		case 0x70:*(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 0x80;
		break;
		case 0x7c:*(uint *)(this + 0x74) = *(uint *)(this + 0x74) & 0xfffffffc | 4;
		break;
		case 0x7d:*(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 0x200;
		break;
		case 0xa1:*(uint *)(this + 0x74) = *(uint *)(this + 0x74) & 0xfffffffd | 5;
		}
		switchD_0019732a_caseD_5:IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

int ActionSetWoble::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetWoble::GetSize(void){
		return 0x94;
		}
		
	*/
	return 0;
}

void ActionSetWoble::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetWoble::ExecuteFromCallContext(ActionSetWoble *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceContext::FUN_0017afa0((ctx->parent).ctx,(int)&this->unlabelled12,(int)time_clock);
		return;
		}
		
	*/
	return;
}

