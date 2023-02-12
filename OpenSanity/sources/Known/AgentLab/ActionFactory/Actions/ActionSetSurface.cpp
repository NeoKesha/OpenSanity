#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetSurface.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetSurface::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetSurface::Dispose(ActionSetSurface *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetSurface::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetSurface * __fastcall ActionSetSurface::Construct(ActionSetSurface *this){
		uint uVar1;
		*(undefined2 *)&this->field1_0xc = 0;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		uVar1 = this->field1_0xc;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetSurface;
		this->field1_0xc = uVar1 | 0x1ff0000;
		return this;
		}
		
	*/
	return;
}

int ActionSetSurface::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetSurface::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionSetSurface::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetSurface::UnkMethod(ActionSetSurface *this,int *param_1){
		short sVar1;
		char cVar2;
		short *psVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		psVar3 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		sVar1 = *psVar3;
		if (sVar1 == 0x45) {
		*(short *)&this->field1_0xc = psVar3[2];
		}
		else if (sVar1 == 0x102) {
		this->field1_0xc = (uint)*(byte *)(psVar3 + 2) << 0x11 | this->field1_0xc & 0xfe00ffffU;
		}
		else if (((sVar1 == -1) && (*(char *)(psVar3 + 1) == '\x04')) && (*(int *)(psVar3 + 2) == 0x3e)){
		this->field1_0xc = this->field1_0xc | 0x10000;
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionSetSurface::Execute(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetSurface::Execute(ActionSetSurface *this,InstanceContext *ctx){
		AutoClass2 *this_00;
		this_00 = &(((ctx->parent).ctx)->parent).field14_0x20;
		if (this_00 != (AutoClass2 *)0x0) {
		if ((*(byte *)((int)&this->field1_0xc + 2) & 1) != 0) {
		FUN_001374f0(this_00,*(undefined2 *)&this->field1_0xc);
		return;
		}
		FUN_00137550(this_00,(byte)((uint)this->field1_0xc >> 0x11),*(undefined2 *)&this->field1_0xc);
		}
		return;
		}
		
	*/
	return;
}

void ActionSetSurface::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetSurface::ExecuteFromCallContext(ActionSetSurface *this,undefined4 time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

