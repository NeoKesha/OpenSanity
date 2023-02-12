#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x253.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x253::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x253::ExecuteFromCallContext(Action0x253 *this,undefined4 time_clock,InstanceContext *ctx){
		InputWrapper *pIVar1;
		byte bVar2;
		InstanceContext *this_00;
		GameController *pGVar3;
		bool bVar4;
		InstanceContext *pIVar5;
		float unaff_EBX;
		float unaff_ESI;
		float unaff_EDI;
		uint uVar6;
		float fStack36;
		float fStack32;
		float fStack28;
		pGVar3 = GameController1;
		this_00 = (ctx->parent).ctx;
		FUN_001d24d0(&GameController1->unkStruct3);
		if (*(byte *)&this->arg3 == 0xff) {
		pIVar5 = (*(this_00->parent).vtable[7].Dispose)(this_00,(byte)this->arg1);
		if (pIVar5 == (InstanceContext *)0x0) {
		bVar4 = (*(this_00->parent).vtable[7].Method1)(this_00);
		if (bVar4 != false) {
		(pGVar3->unkStruct3).parent.inputWrapper.array2 = (InputBinding2 *)0x0;
		(pGVar3->unkStruct3).vec1.x = unaff_EBX;
		(pGVar3->unkStruct3).vec1.y = fStack36;
		(pGVar3->unkStruct3).vec1.z = fStack32;
		(pGVar3->unkStruct3).vec1.w = fStack28;
		pIVar1 = &(pGVar3->unkStruct3).parent.inputWrapper;
		*(uint *)pIVar1 = *(uint *)pIVar1 | 0x40;
		}
		}
		else {
		(pGVar3->unkStruct3).vec1.x = Vector4_0039ef70.x;
		(pGVar3->unkStruct3).vec1.y = Vector4_0039ef70.y;
		(pGVar3->unkStruct3).vec1.z = Vector4_0039ef70.z;
		pIVar1 = &(pGVar3->unkStruct3).parent.inputWrapper;
		*(uint *)pIVar1 = *(uint *)pIVar1 & 0xffffffbf;
		(pGVar3->unkStruct3).parent.inputWrapper.array2 = (InputBinding2 *)pIVar5;
		}
		}
		else {
		(pGVar3->unkStruct3).field75_0xb4 =(&(this_00->nodes).array[0xf]->field5_0x10->vtable)[*(byte *)&this->arg3];
		}
		bVar2 = *(byte *)((int)&this->arg3 + 1);
		if (bVar2 == 0xff) {
		pIVar5 = (*(this_00->parent).vtable[7].Dispose)(this_00,*(byte *)((int)&this->arg1 + 1));
		if (pIVar5 == (InstanceContext *)0x0) {
		bVar4 = (*(this_00->parent).vtable[7].Method1)(this_00);
		if (bVar4 != false) {
		(pGVar3->unkStruct3).parent.inputWrapper.array1 = (InputBinding1 *)0x0;
		(pGVar3->unkStruct3).vec2.x = unaff_EDI;
		(pGVar3->unkStruct3).vec2.y = unaff_ESI;
		(pGVar3->unkStruct3).vec2.z = unaff_EBX;
		(pGVar3->unkStruct3).vec2.w = fStack36;
		pIVar1 = &(pGVar3->unkStruct3).parent.inputWrapper;
		*(uint *)pIVar1 = *(uint *)pIVar1 | 0x80;
		}
		}
		else {
		(pGVar3->unkStruct3).vec2.x = Vector4_0039ef70.x;
		(pGVar3->unkStruct3).vec2.y = Vector4_0039ef70.y;
		(pGVar3->unkStruct3).vec2.z = Vector4_0039ef70.z;
		pIVar1 = &(pGVar3->unkStruct3).parent.inputWrapper;
		*(uint *)pIVar1 = *(uint *)pIVar1 & 0xffffff7f;
		(pGVar3->unkStruct3).parent.inputWrapper.array1 = (InputBinding1 *)pIVar5;
		}
		}
		else {
		(pGVar3->unkStruct3).field76_0xb8 = (&(this_00->nodes).array[0xf]->field5_0x10->vtable)[bVar2];
		}
		uVar6 = *(uint *)&(pGVar3->unkStruct3).parent.inputWrapper;
		uVar6 = uVar6 ^ ((uint)*(byte *)&this->arg2 << 3 ^ uVar6) & 8;
		*(uint *)&(pGVar3->unkStruct3).parent.inputWrapper = uVar6;
		*(uint *)&(pGVar3->unkStruct3).parent.inputWrapper =(((uint)this->arg2 >> 1 & 0xff) << 4 ^ uVar6) & 0x10 ^ uVar6;
		return;
		}
		
	*/
	return;
}

void Action0x253::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x253::Dispose(Action0x253 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x253::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x253 * __fastcall Action0x253::Construct(Action0x253 *this){
		this->arg2 = this->arg2 & 0xfffffffeU | 2;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x253;
		this->arg1 = -1;
		*(undefined *)&this->arg3 = 0xff;
		*(undefined *)((int)&this->arg3 + 1) = 0xff;
		return this;
		}
		
	*/
	return;
}

int Action0x253::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x253::GetSize(void){
		return 0x18;
		}
		
	*/
	return 0;
}

void Action0x253::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x253::UnkMethod(Action0x253 *this,int *param_1){
		ushort uVar1;
		char cVar2;
		ushort *this_00;
		uint uVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *this_00;
		if (uVar1 < 0x112) {
		if (uVar1 == 0x111) {
		uVar3 = FUN_0017f240(this_00,(uint)*(byte *)((int)&this->arg1 + 3));
		*(char *)((int)&this->arg1 + 3) = (char)uVar3;
		}
		else if (uVar1 == 0x107) {
		uVar3 = FUN_0017f240(this_00,this->arg1 & 0xff);
		*(char *)&this->arg1 = (char)uVar3;
		}
		else if (uVar1 == 0x108) {
		uVar3 = FUN_0017f240(this_00,(uint)*(byte *)((int)&this->arg1 + 1));
		*(char *)((int)&this->arg1 + 1) = (char)uVar3;
		}
		else if (uVar1 == 0x110) {
		uVar3 = FUN_0017f240(this_00,(uint)*(byte *)((int)&this->arg1 + 2));
		*(char *)((int)&this->arg1 + 2) = (char)uVar3;
		}
		}
		else if (uVar1 == 0x139) {
		*(undefined *)&this->arg3 = *(undefined *)(this_00 + 2);
		}
		else if (uVar1 == 0x13a) {
		*(undefined *)((int)&this->arg3 + 1) = *(undefined *)(this_00 + 2);
		}
		else if ((uVar1 == 0xffff) && (*(char *)(this_00 + 1) == '\x04')) {
		if (*(int *)(this_00 + 2) == 0xdc) {
		this->arg2 = this->arg2 | 1;
		}
		else if (*(int *)(this_00 + 2) == 0xdd) {
		this->arg2 = this->arg2 & 0xfffffffd;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

