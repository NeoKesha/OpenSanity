#include "headers/Known/AgentLab/ActionFactory/Actions/ActionDamageOriginator.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionDamageOriginator::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDamageOriginator::ExecuteFromCallContext(ActionDamageOriginator *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceContext *pIVar2;
		void *pvVar3;
		int iVar4;
		InstanceNodeCharacter *pIVar5;
		float local_30;
		float local_2c;
		float local_28;
		float local_24;
		int local_20;
		undefined local_1c;
		pIVar1 = (ctx->parent).ctx;
		pIVar2 = (pIVar1->parent).ctx;
		iVar4 = (pIVar1->parent).field14_0x20.field27_0x78;
		if (iVar4 == 0) {
		pvVar3 = (void *)(pIVar1->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar3 = (void *)FUN_00017ba8(iVar4);
		}
		pIVar1 = (ctx->parent).field14_0x20.ctx;
		if (pIVar1 != (InstanceContext *)0x0) {
		local_20 = this->unlabelled48;
		local_30 = Vector4_0039ef70.x;
		local_2c = Vector4_0039ef70.y;
		local_28 = Vector4_0039ef70.z;
		local_1c = 0;
		local_24 = Vector4_0039ef70.w;
		iVar4 = FUN_001804d0(&this->unlabelled52,pvVar3);
		local_1c = (undefined)iVar4;
		pIVar5 = InstanceContext::GetCharacterNode(pIVar1);
		if (pIVar5 != (InstanceNodeCharacter *)0x0) {
		(*((pIVar5->field1_0x18->parent).parent.vtable)->Method8)((NodeRelated2Abstract *)pIVar5->field1_0x18,&local_30,pIVar2,'\0');
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionDamageOriginator::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionDamageOriginator::Dispose(ActionDamageOriginator *this,byte param_1){
		::EmptyFunction();
		::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionDamageOriginator::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionDamageOriginator * __fastcall ActionDamageOriginator::Construct(ActionDamageOriginator *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_CreateDamageAbstract;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		this->unlabelled28 = (int)FLOAT_0038639c;
		this->unlabelled36 = 0;
		FUN_001803a0(&this->unlabelled40,1);
		FUN_00180380(&this->unlabelled44,0);
		this->unlabelled32 = 0x1fe0;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_DamageOriginator;
		this->unlabelled48 = 0;
		FUN_001803a0(&this->unlabelled52,1);
		return this;
		}
		
	*/
	return;
}

int ActionDamageOriginator::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionDamageOriginator::GetSize(void){
		return 0x40;
		}
		
	*/
	return 0;
}

