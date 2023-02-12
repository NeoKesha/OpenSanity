#include "headers/Unknown/Families/Families0X/Family6/UnkFamily6F.h"

#include "headers/Known/Math/Vector4.h"
void UnkFamily6F::Construct(int param_1, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily6F::Construct(UnkFamily6F *this,int param_1,int param_2,int param_3){
		(this->parent).field14_0x14 = param_2;
		(this->parent).field15_0x18 = param_3;
		(this->parent).field13_0x10 = 0;
		(this->parent).vtable = &UnkFamily6_VT_F;
		this->field17_0xf0 = param_1;
		return;
		}
		
	*/
	return;
}

void UnkFamily6F::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily6F::Dispose(UnkFamily6F *this,byte param_1){
		InstanceNodePhysics *node;
		(this->parent).vtable = &UnkFamily6_VT_Abstract;
		node = (InstanceNodePhysics *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)((this->parent).field14_0x14 + 0x10) + 0xe4),Physics);
		if (node != (InstanceNodePhysics *)0x0) {
		FUN_001dde00(PTR_003e6bf4,node);
		}
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void UnkFamily6F::FUN_000815e0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily6F::FUN_000815e0(void){
		return 0;
		}
		
	*/
	return;
}

void UnkFamily6F::FUN_00081650(uint* param_1, float* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily6F::FUN_00081650(UnkFamily6F *this,undefined4 *param_1,float *param_2){
		int this_00;
		this_00 = thunk_FUN_00066e10(*(int *)((this->parent).field15_0x18 + 0x10));
		thunk_FUN_00068460(this_00,param_1,param_2);
		return;
		}
		
	*/
	return;
}

void UnkFamily6F::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily6F::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint UnkFamily6F::FUN_000a5880() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall UnkFamily6F::FUN_000a5880(UnkFamily6F *this){
		return this->field17_0xf0;
		}
		
	*/
	return 0;
}

void UnkFamily6F::FUN_000a5890(Vector4* param_1, Vector4* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily6F::FUN_000a5890(Vector4 *param_1,Vector4 *param_2){
		float fVar1;
		fVar1 = FLOAT_003869d8;
		param_1->z = FLOAT_003869d8;
		param_1->y = fVar1;
		param_1->x = fVar1;
		fVar1 = FLOAT_0038639c;
		param_1->w = FLOAT_0038639c;
		param_2->z = fVar1;
		param_2->y = fVar1;
		param_2->x = fVar1;
		param_2->w = fVar1;
		return;
		}
		
	*/
	return;
}

void UnkFamily6F::FUN_000a58f0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily6F::FUN_000a58f0(void){
		return 0;
		}
		
	*/
	return;
}

