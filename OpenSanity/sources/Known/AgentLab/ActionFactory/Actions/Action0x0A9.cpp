#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0A9.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0A9::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0A9::Dispose(Action0x0A9 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0A9::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall Action0x0A9::ExecuteFromCallContext(Action0x0A9 *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		InstanceContext *this_00;
		InstanceTransform *pIVar2;
		bool bVar3;
		InstanceContext *pIVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		Vector4 VStack72;
		float fStack56;
		float fStack52;
		float fStack48;
		float fStack44;
		float fStack40;
		float fStack36;
		float fStack32;
		float fStack28;
		this_00 = (ctx->parent).ctx;
		pIVar4 = (*(this_00->parent).vtable[7].Dispose)(this_00,*(byte *)((int)&this->unlabelled12 + 1));
		if (pIVar4 == (InstanceContext *)0x0) {
		bVar3 = (*(this_00->parent).vtable[7].Method1)(this_00);
		if ((bVar3 == false) && ((*(byte *)((int)&this->unlabelled12 + 3) & 0xf) == 2)) {
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)(this_00->parent).ctx,&VStack72);
		}
		}
		else {
		pIVar2 = (pIVar4->parent).transform;
		if ((*(byte *)&pIVar2->field3_0x60 & 4) != 0) {
		fVar6 = (pIVar2->matrix).m44;
		fVar7 = (pIVar2->matrix).m43;
		fVar8 = (pIVar2->matrix).m42;
		(pIVar2->position).x = (pIVar2->matrix).m41;
		(pIVar2->position).y = fVar8;
		(pIVar2->position).z = fVar7;
		(pIVar2->position).w = fVar6;
		pIVar2->field3_0x60 = (float)((uint)pIVar2->field3_0x60 & 0xfffffffa);
		}
		VStack72.z = (pIVar2->position).x;
		VStack72.w = (pIVar2->position).y;
		fStack56 = (pIVar2->position).z;
		fStack52 = (pIVar2->position).w;
		}
		pIVar4 = (*(this_00->parent).vtable[7].Dispose)(this_00,*(byte *)((int)&this->unlabelled12 + 2));
		if (pIVar4 == (InstanceContext *)0x0) {
		(*(this_00->parent).vtable[7].Method1)(this_00);
		fVar6 = VStack72.z;
		fVar7 = VStack72.w;
		fVar8 = fStack56;
		}
		else {
		pIVar2 = (pIVar4->parent).transform;
		if ((*(byte *)&pIVar2->field3_0x60 & 4) != 0) {
		fVar6 = (pIVar2->matrix).m44;
		fVar7 = (pIVar2->matrix).m43;
		fVar8 = (pIVar2->matrix).m42;
		(pIVar2->position).x = (pIVar2->matrix).m41;
		(pIVar2->position).y = fVar8;
		(pIVar2->position).z = fVar7;
		(pIVar2->position).w = fVar6;
		pIVar2->field3_0x60 = (float)((uint)pIVar2->field3_0x60 & 0xfffffffa);
		}
		fStack56 = (pIVar2->position).x;
		fStack52 = (pIVar2->position).y;
		fStack48 = (pIVar2->position).z;
		fStack44 = (pIVar2->position).w;
		fVar6 = fStack56;
		fVar7 = fStack52;
		fVar8 = fStack48;
		}
		fVar7 = fVar7 - VStack72.y;
		fVar8 = fVar8 - VStack72.z;
		fVar6 = fVar6 - VStack72.x;
		fVar5 = fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6;
		if (fVar5 <= _DAT_004962e0) {
		fVar5 = 0.0;
		}
		else {
		fVar5 = FLOAT_0038639c / SQRT(fVar5);
		}
		fVar1 = (float)this->unlabelled16;
		fStack40 = fVar6 * fVar5 * fVar1 + VStack72.x;
		fStack36 = fVar7 * fVar5 * fVar1 + VStack72.y;
		fStack32 = fVar8 * fVar5 * fVar1 + VStack72.z;
		fStack28 = FLOAT_0038639c;
		(*(this_00->parent).vtable[7].Method2)(this_00);
		return;
		}
		
	*/
	return;
}

void Action0x0A9::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0A9 * __fastcall Action0x0A9::Construct(Action0x0A9 *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0A9;
		this->unlabelled12 = uVar1 | 0xfffffff;
		this->unlabelled16 = 0;
		return this;
		}
		
	*/
	return;
}

int Action0x0A9::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0A9::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

void Action0x0A9::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0A9::UnkMethod(Action0x0A9 *this,int *param_1){
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
		if (uVar1 < 0x106) {
		if (uVar1 == 0x105) {
		uVar3 = FUN_0017f240(this_00,(uint)*(byte *)((int)&this->unlabelled12 + 2));
		*(char *)((int)&this->unlabelled12 + 2) = (char)uVar3;
		}
		else if (uVar1 == 200) {
		uVar3 = FUN_0017f240(this_00,this->unlabelled12 & 0xff);
		*(char *)&this->unlabelled12 = (char)uVar3;
		}
		else if (uVar1 == 0x104) {
		uVar3 = FUN_0017f240(this_00,(uint)*(byte *)((int)&this->unlabelled12 + 1));
		*(char *)((int)&this->unlabelled12 + 1) = (char)uVar3;
		}
		}
		else if (uVar1 == 0x106) {
		this->unlabelled16 = *(int *)(this_00 + 2);
		}
		else if (((uVar1 == 0xffff) && (*(char *)(this_00 + 1) == '\x04')) &&(*(int *)(this_00 + 2) == 0xcd)) {
		this->unlabelled12 = this->unlabelled12 & 0xf2ffffffU | 0x2000000;
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

