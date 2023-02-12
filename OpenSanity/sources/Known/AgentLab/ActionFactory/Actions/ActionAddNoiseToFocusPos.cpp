#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAddNoiseToFocusPos.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionAddNoiseToFocusPos::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionAddNoiseToFocusPos::Dispose(ActionAddNoiseToFocusPos *this,byte param_1){
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

void ActionAddNoiseToFocusPos::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionAddNoiseToFocusPos::ExecuteFromCallContext(ActionAddNoiseToFocusPos *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceContext *this_00;
		int iVar1;
		void *pvVar2;
		undefined4 uVar3;
		float fVar4;
		InstanceContext *local_20;
		undefined4 local_1c;
		undefined4 local_18;
		Matrix4 *local_14;
		this_00 = (ctx->parent).ctx;
		iVar1 = (this_00->parent).field14_0x20.field27_0x78;
		if (iVar1 == 0) {
		pvVar2 = (void *)(this_00->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar2 = (void *)FUN_00017ba8(iVar1);
		}
		fVar4 = FUN_00180490(&this->field2_0x10,pvVar2);
		if ((*(byte *)&this->unlabelled12 & 7) == 0) {
		if ((*(byte *)&(this_00->parent).field14_0x20.matrix2.m43 & 2) != 0) {
		local_20 = (this_00->parent).field14_0x20.field4_0x10;
		local_1c = (this_00->parent).field14_0x20.field5_0x14;
		local_18 = (this_00->parent).field14_0x20.field6_0x18;
		local_14 = (this_00->parent).field14_0x20.matrix1;
		FUN_0016d590((float *)&local_20,fVar4,this->unlabelled24,(this->field2_0x10).field1_0x4,this->unlabelled28);
		(this_00->parent).field14_0x20.field4_0x10 = local_20;
		(this_00->parent).field14_0x20.field5_0x14 = local_1c;
		(this_00->parent).field14_0x20.field6_0x18 = local_18;
		(this_00->parent).field14_0x20.matrix1 = local_14;
		(this_00->parent).field14_0x20.matrix2.m43 =(float)((uint)(this_00->parent).field14_0x20.matrix2.m43 & 0xfffffffe | 2);
		}
		}
		else if ((*(byte *)&this->unlabelled12 & 7) == 3) {
		uVar3 = InstanceNodeInstance::FUN_0016be20((InstanceNodeInstance *)this_00,&local_20);
		if ((char)uVar3 != '\0') {
		FUN_0016d590((float *)&local_20,fVar4,this->unlabelled24,(this->field2_0x10).field1_0x4,this->unlabelled28);
		InstanceContext::FUN_0016dda0(this_00,&local_20);
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionAddNoiseToFocusPos::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionAddNoiseToFocusPos::UnkMethod(ActionAddNoiseToFocusPos *this,int *param_1){
		US002 *this_00;
		char cVar1;
		undefined2 *this_01;
		IteratorE2 local_10;
		this_00 = &this->field2_0x10;
		this_00->field0_0x0 = (this->field2_0x10).field0_0x0 & 0xfffffffdU | 4;
		US002::FUN_00180430(this_00,1.0);
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		this_01 = (undefined2 *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		switch(*this_01) {
		case 0x65:FUN_00180840(this_01,this_00);
		break;
		case 0x9c:this->unlabelled24 = *(float *)(this_01 + 2);
		break;
		case 0xf1:(this->field2_0x10).field1_0x4 = *(float *)(this_01 + 2);
		break;
		case 0xf2:this->unlabelled28 = *(float *)(this_01 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionAddNoiseToFocusPos::Construct(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAddNoiseToFocusPos * __thiscall ActionAddNoiseToFocusPos::Construct(ActionAddNoiseToFocusPos *this,byte param_1){
		byte bVar1;
		float fVar2;
		fVar2 = FLOAT_0038639c;
		bVar1 = *(byte *)&this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_AddNoiseToFocusPos;
		*(ushort *)&this->unlabelled12 = *(ushort *)&this->unlabelled12 ^ (bVar1 ^ param_1) & 7;
		(this->field2_0x10).field0_0x0 = 0;
		(this->field2_0x10).field1_0x4 = fVar2;
		this->unlabelled24 = fVar2;
		this->unlabelled28 = fVar2;
		return this;
		}
		
	*/
	return;
}

int ActionAddNoiseToFocusPos::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionAddNoiseToFocusPos::GetSize(void){
		return 0x20;
		}
		
	*/
	return 0;
}

