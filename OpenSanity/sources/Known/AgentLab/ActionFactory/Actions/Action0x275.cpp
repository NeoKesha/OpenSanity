#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x275.h"

void Action0x275::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall Action0x275::ExecuteFromCallContext(Action0x275 *this){
		int iVar1;
		uint uVar2;
		InstanceContext *pIVar3;
		InstanceNodeAbstract *pIVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		uVar2 = (GameController1->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar2 == 6) {
		pIVar3 = (InstanceContext *)0x0;
		}
		else {
		pIVar3 = (InstanceContext *)(GameController1->chunkDescriptor).playerInstanceContexts[uVar2];
		if (pIVar3 != (InstanceContext *)0x0) {
		pIVar3 = *(InstanceContext **)&pIVar3->parent;
		}
		}
		pIVar4 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar3->field27_0xe0 + 1),Camera);
		if (pIVar4 != (InstanceNodeAbstract *)0x0) {
		switch(this->unlabelled12 & 7) {
		case 0:fVar5 = (float)this->unlabelled20 * FLOAT_003863a4;
		fVar6 = (float)this->unlabelled16 * FLOAT_003863a4;
		*(uint *)&pIVar4[0x43].field2_0x8 = *(uint *)&pIVar4[0x43].field2_0x8 | 4;
		pIVar4[0x46].field5_0x10 = (InstanceNodeAbstract *)(int)fVar6;
		pIVar4[0x46].field6_0x14 = (int)fVar5;
		return;
		case 1:uVar2 = this->unlabelled20;
		iVar1 = this->unlabelled16;
		*(uint *)&pIVar4[0x43].field2_0x8 = *(uint *)&pIVar4[0x43].field2_0x8 | 8;
		*(int *)&pIVar4[0x47].field2_0x8 = iVar1;
		pIVar4[0x47].time = uVar2;
		return;
		case 2:fVar5 = (float)this->unlabelled20 * FLOAT_003863a4;
		fVar6 = (float)this->unlabelled16 * FLOAT_003863a4;
		*(uint *)&pIVar4[0x43].field2_0x8 = *(uint *)&pIVar4[0x43].field2_0x8 | 0x40;
		pIVar4[0x47].vtable = (InstanceNodeAbstract_VTable *)(int)fVar6;
		pIVar4[0x47].ctx = (InstanceContext *)(int)fVar5;
		return;
		case 3:fVar5 = (float)this->unlabelled20;
		fVar7 = FLOAT_003863a8 / FLOAT_0039d7e8;
		fVar6 = (float)this->unlabelled16;
		*(uint *)&pIVar4[0x43].field2_0x8 = *(uint *)&pIVar4[0x43].field2_0x8 | 0x80;
		*(int *)&pIVar4[0x46].field2_0x8 = (int)(fVar7 * fVar6);
		pIVar4[0x46].time = (int)(fVar7 * fVar5);
		}
		}
		return;
		}
		
	*/
	return;
}

void Action0x275::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x275::Dispose(Action0x275 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x275::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x275 * __fastcall Action0x275::Construct(Action0x275 *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x275;
		this->unlabelled12 = uVar1 & 0xfffffff8;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		return this;
		}
		
	*/
	return;
}

int Action0x275::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x275::GetSize(void){
		return 0x18;
		}
		
	*/
	return 0;
}

