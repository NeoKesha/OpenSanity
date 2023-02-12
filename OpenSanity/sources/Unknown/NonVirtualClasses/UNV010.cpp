#include "headers/Unknown/NonVirtualClasses/UNV010.h"

#include "headers/Known/Game/InstanceSystem/InstanceContextRefCounter.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void UNV010::Construct(uint param_1, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UNV010 * __thiscall UNV010::Construct(UNV010 *this,undefined4 param_1,InstanceContext *ctx){
		undefined4 *this_00;
		InstanceContextRefCounter **this_01;
		InstanceContext *pIVar1;
		undefined4 uVar2;
		this_00 = &this->field145_0x94;
		*this_00 = 0;
		this_01 = &this->refCounter;
		*this_01 = (InstanceContextRefCounter *)0x0;
		this->field148_0xa0 = param_1;
		pIVar1 = (InstanceContext *)*this_00;
		if (pIVar1 != (InstanceContext *)0x0) {
		pIVar1 = (InstanceContext *)(pIVar1->parent).vtable;
		}
		if (pIVar1 != ctx) {
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)this_00);
		if (ctx == (InstanceContext *)0x0) {
		*this_00 = 0;
		}
		else {
		uVar2 = InstanceContextSmartPtr::CreateRef(&ctx->smartPtr,ctx,0);
		*this_00 = uVar2;
		}
		}
		this->ctx = ctx;
		this->field149_0xa4 = 0;
		this->field150_0xa8 = 0;
		this->field160_0xb8 = this->field160_0xb8 & 0xfcffff00 | 0xff0000;
		if ((*this_01 != (InstanceContextRefCounter *)0x0) && ((*this_01)->ctx != (InstanceContext *)0x0)){
		InstanceContextSmartPtr::Release(this_01);
		*this_01 = (InstanceContextRefCounter *)0x0;
		}
		this->field155_0xb0 = 0;
		return this;
		}
		
	*/
	return;
}

void UNV010::Construct_1(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UNV010 * __thiscall UNV010::Construct(UNV010 *this,undefined4 param_1,undefined4 param_2){
		InstanceContextRefCounter **this_00;
		this->field145_0x94 = 0;
		this->refCounter = (InstanceContextRefCounter *)0x0;
		this_00 = &this->refCounter;
		this->field148_0xa0 = param_1;
		this->field146_0x98 = param_2;
		this->field149_0xa4 = 0;
		this->field160_0xb8 = this->field160_0xb8 & 0xfcffff11 | 0xff0011;
		if ((*this_00 != (InstanceContextRefCounter *)0x0) && ((*this_00)->ctx != (InstanceContext *)0x0)){
		InstanceContextSmartPtr::Release(this_00);
		*this_00 = (InstanceContextRefCounter *)0x0;
		}
		return this;
		}
		
	*/
	return;
}

