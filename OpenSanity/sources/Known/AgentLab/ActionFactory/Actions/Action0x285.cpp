#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x285.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x285::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x285::Dispose(Action0x285 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x285::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x285::ExecuteFromCallContext(Action0x285 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *this_00;
		UnkFamily2A *pUVar1;
		UnkFamily2B *pUVar2;
		UnkFamily2C *this_01;
		UnkFamily2C *piVar3;
		UnkFamily2D *pUVar3;
		this_00 = (ctx->parent).ctx;
		if (((this->arg & 0x100U) == 0) || ((this_00->nodes).array[0xb] == (InstanceNodeAbstract *)0x0)) {
		switch(this->arg & 0xff) {
		case 0:pUVar1 = (UnkFamily2A *)VirtualPool::AllocateMemory(0x220);
		if (pUVar1 != (UnkFamily2A *)0x0) {
		pUVar1 = UnkFamily2A::Construct(pUVar1,(InstanceNodeAbstract *)this_00,*(undefined *)&this->arg);
		InstanceNodeAbstract::FUN_0016eb3f((InstanceNodeAbstract *)this_00,&pUVar1->parent);
		return;
		}
		break;
		case 1:pUVar2 = (UnkFamily2B *)VirtualPool::AllocateMemory(0x6e0);
		if (pUVar2 != (UnkFamily2B *)0x0) {
		pUVar2 = UnkFamily2B::Construct(pUVar2,this_00,*(undefined *)&this->arg);
		InstanceNodeAbstract::FUN_0016eb3f((InstanceNodeAbstract *)this_00,&pUVar2->parent);
		return;
		}
		break;
		case 2:this_01 = (UnkFamily2C *)VirtualPool::AllocateMemory(0x30);
		if (this_01 != (UnkFamily2C *)0x0) {
		piVar3 = (UnkFamily2C *)UnkFamily2C::Construct(this_01,this_00,*(undefined *)&this->arg);
		InstanceNodeAbstract::FUN_0016eb3f((InstanceNodeAbstract *)this_00,(UnkFamily2Base *)piVar3);
		return;
		}
		break;
		case 3:pUVar3 = (UnkFamily2D *)VirtualPool::AllocateMemory(0x3f0);
		if (pUVar3 != (UnkFamily2D *)0x0) {
		pUVar3 = UnkFamily2D::Construct(pUVar3,this_00,*(undefined *)&this->arg);
		InstanceNodeAbstract::FUN_0016eb3f((InstanceNodeAbstract *)this_00,&pUVar3->parent);
		return;
		}
		break;
		default:goto switchD_0004992f_caseD_4;
		}
		InstanceNodeAbstract::FUN_0016eb3f((InstanceNodeAbstract *)this_00,(UnkFamily2Base *)0x0);
		}
		switchD_0004992f_caseD_4:return;
		}
		
	*/
	return;
}

void Action0x285::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x285 * __fastcall Action0x285::Construct(Action0x285 *this){
		uint uVar1;
		uVar1 = this->arg;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x285;
		this->arg = uVar1 & 0xfffffeff | 0xff;
		return this;
		}
		
	*/
	return;
}

int Action0x285::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x285::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

