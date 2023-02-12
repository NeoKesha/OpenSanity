#include "headers/Unknown/Families/Families0X/Family4/UnkFamily4A.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeR.h"
void UnkFamily4A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily4A::Dispose(UnkFamily4A *this,byte param_1){
		InstanceContext *this_00;
		this_00 = (this->parent).ctx;
		(this->parent).vtable = (UnkFamily4Base_VTable *)&UnkFamily4_VT_Base;
		(*((this_00->parent).vtable)->Method3)(this_00);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void UnkFamily4A::Construct(uint param_1, void* param_2, InstanceNodeR* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily4A * __thiscall UnkFamily4A::Construct(UnkFamily4A *this,undefined *param_1,void *param_2,InstanceNodeR *param_3){
		InstanceContextRefCounter **this_00;
		InstanceContext *ctx;
		InstanceNodeR *this_01;
		AutoClass25 *pAVar1;
		InstanceContext *pIVar2;
		InstanceContextRefCounter *pIVar3;
		float aspectRatio;
		(this->parent).vtable = (UnkFamily4Base_VTable *)&UnkFamily4_VT_Base;
		(this->parent).field1_0x4 = param_1;
		UnkFamily4Base::Init(&this->parent,1.0,(int)param_3);
		(this->parent).vtable = (UnkFamily4Base_VTable *)&UnkFamily4_VT_A;
		this->field1_0xc = (undefined *)param_2;
		this_01 = (InstanceNodeR *)VirtualPool::AllocateMemory(0x3c);
		if (this_01 == (InstanceNodeR *)0x0) {
		param_3 = (InstanceNodeR *)0x0;
		}
		else {
		param_3 = InstanceNodeR::Construct(this_01);
		}
		ctx = (this->parent).ctx;
		pAVar1 = (AutoClass25 *)VirtualPool::AllocateMemory(0x170);
		if (pAVar1 == (AutoClass25 *)0x0) {
		pAVar1 = (AutoClass25 *)0x0;
		}
		else {
		pAVar1 = AutoClass25::Construct(pAVar1);
		}
		this_00 = &pAVar1->ctxPtr;
		this->field2_0x10 = pAVar1;
		pIVar2 = (InstanceContext *)*this_00;
		if (pIVar2 != (InstanceContext *)0x0) {
		pIVar2 = (InstanceContext *)(pIVar2->parent).vtable;
		}
		if (pIVar2 != ctx) {
		InstanceContextSmartPtr::Release(this_00);
		if (ctx == (InstanceContext *)0x0) {
		*this_00 = (InstanceContextRefCounter *)0x0;
		}
		else {
		pIVar3 = (InstanceContextRefCounter *)InstanceContextSmartPtr::CreateRef(&ctx->smartPtr,ctx,0);
		*this_00 = pIVar3;
		}
		}
		aspectRatio = DAT_003943b8;
		if (IS_WIDESCREEN == false) {
		aspectRatio = DAT_003943b4;
		}
		AutoClass25::FUN_001cb0b0(this->field2_0x10,aspectRatio);
		InstanceContext::SetNode(ctx,true,&param_3->parent);
		FUN_00104350(param_2,this->field2_0x10);
		*(uint *)((int)param_2 + 0xc) = *(uint *)((int)param_2 + 0xc) | 1;
		return this;
		}
		
	*/
	return;
}

