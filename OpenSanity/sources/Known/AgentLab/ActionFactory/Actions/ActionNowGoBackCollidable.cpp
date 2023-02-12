#include "headers/Known/AgentLab/ActionFactory/Actions/ActionNowGoBackCollidable.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionNowGoBackCollidable::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionNowGoBackCollidable * __fastcall ActionNowGoBackCollidable::Construct(ActionNowGoBackCollidable *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_NowGoBackCollidable;
		FUN_00180380(&this->unlabelled12,0x3f800000);
		return this;
		}
		
	*/
	return;
}

void ActionNowGoBackCollidable::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionNowGoBackCollidable::ExecuteFromCallContext(ActionNowGoBackCollidable *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		NodeRelated2C *this_00;
		BlackboardAbstract *this_01;
		InstanceNodeCharacter *node;
		float fVar2;
		float local_20;
		float local_1c;
		float local_18;
		InstanceNodeAbstract *local_14;
		InstanceNodeFurniture *pIVar2;
		pIVar1 = (ctx->parent).ctx;
		node = (InstanceNodeCharacter *)InstanceDataList::GetNode(&((pIVar1->parent).ctx)->nodes,Character);
		if (node != (InstanceNodeCharacter *)0x0) {
		this_00 = node->field1_0x18;
		this_01 = (this_00->parent).parent.blackboard;
		fVar2 = BlackboardAbstract::GetFloatByIndex(this_01,1);
		local_18 = FUN_00180490(&this->unlabelled12,this_01);
		pIVar2 = (InstanceNodeFurniture *)(pIVar1->nodes).array[0x10];
		local_14 = pIVar2[1].parent.field5_0x10;
		local_20 = (float)pIVar2[1].parent.ctx * local_18;
		local_1c = *(float *)&pIVar2[1].parent.field2_0x8 * local_18;
		local_18 = (float)pIVar2[1].parent.time * local_18;
		thunk_FUN_00069270((int)this_00,&local_20,(uint)fVar2,0x6f,0);
		}
		return;
		}
		
	*/
	return;
}

void ActionNowGoBackCollidable::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionNowGoBackCollidable::Dispose(ActionNowGoBackCollidable *this,byte param_1){
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

int ActionNowGoBackCollidable::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionNowGoBackCollidable::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionNowGoBackCollidable::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionNowGoBackCollidable::UnkMethod(ActionNowGoBackCollidable *this,int *param_1){
		char cVar1;
		short *this_00;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		this_00 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*this_00 == 0x59) {
		FUN_00180840(this_00,(US002 *)&this->unlabelled12);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

