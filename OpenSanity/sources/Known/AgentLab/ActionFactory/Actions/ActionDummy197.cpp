#include "headers/Known/AgentLab/ActionFactory/Actions/ActionDummy197.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionDummy197::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionDummy197::Dispose(ActionDummy197 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionDummy197::UnkMethod(int* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDummy197::UnkMethod(int this,int *param_2){
		ushort uVar1;
		float fVar2;
		bool bVar3;
		ushort *puVar4;
		float local_18;
		float local_14;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_2);
		local_14 = 0.0;
		param_2 = (int *)0x0;
		local_18 = 0.0;
		IteratorE2::Rewind(&local_10);
		bVar3 = IteratorE2::IsEnd(&local_10);
		if (bVar3 == false) {
		do {
		puVar4 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *puVar4;
		if (uVar1 < 0x84) {
		if (uVar1 == 0x83) {
		param_2 = *(int **)(puVar4 + 2);
		}
		else if (uVar1 == 0xc) {
		*(undefined4 *)(this + 0x14) = *(undefined4 *)(puVar4 + 2);
		}
		else if (uVar1 == 0x12) {
		*(uint *)(this + 0x10) =(*(int *)(puVar4 + 2) << 5 ^ *(uint *)(this + 0x10)) & 0x7e0 ^ *(uint *)(this + 0x10)| 0x10;
		}
		else if (uVar1 == 0x82) {
		local_14 = *(float *)(puVar4 + 2);
		}
		}
		else if (uVar1 == 0x84) {
		local_18 = *(float *)(puVar4 + 2);
		}
		else if (uVar1 == 0x89) {
		*(ushort *)(this + 0xc) = puVar4[2];
		}
		IteratorE2::Iterate(&local_10);
		bVar3 = IteratorE2::IsEnd(&local_10);
		}
		 while (bVar3 == false);
		if (((local_14 != 0.0) || ((float)param_2 != 0.0)) || (local_18 != 0.0)) {
		*(int **)(this + 0x34) = param_2;
		*(float *)(this + 0x38) = local_18;
		fVar2 = FLOAT_0038639c;
		*(float *)(this + 0x30) = local_14;
		*(float *)(this + 0x3c) = fVar2;
		*(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 0x800;
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionDummy197::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionDummy197 * __fastcall ActionDummy197::Construct(ActionDummy197 *this){
		float fVar1;
		fVar1 = FLOAT_0038807c;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0C5;
		*(undefined2 *)&this->unlabelled12 = 0xffff;
		this->unlabelled20 = (int)fVar1;
		this->unlabelled24 = 0;
		this->unlabelled28 = 0;
		this->unlabelled32 = 0;
		this->unlabelled16 = this->unlabelled16 & 0xffff2000U | 0x2000;
		this->unlabelled48 = 0;
		this->unlabelled52 = 0;
		this->unlabelled56 = 0;
		this->unlabelled60 = (int)FLOAT_0038639c;
		return this;
		}
		
	*/
	return;
}

void ActionDummy197::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDummy197::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void ActionDummy197::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDummy197::ExecuteFromCallContext(ActionDummy197 *this,undefined4 time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

int ActionDummy197::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionDummy197::GetSize(void){
		return 0x40;
		}
		
	*/
	return 0;
}

