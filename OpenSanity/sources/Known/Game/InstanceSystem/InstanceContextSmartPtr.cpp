#include "headers/Known/Game/InstanceSystem/InstanceContextSmartPtr.h"

#include "headers/Known/Game/InstanceSystem/InstanceContextRefCounter.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void InstanceContextSmartPtr::FreeCtx(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceContextSmartPtr::FreeCtx(InstanceContextSmartPtr *this,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceContextRefCounter *refCounter;
		if (ctx == (InstanceContext *)0x0) {
		refCounter = this->refCounter;
		if (refCounter != (InstanceContextRefCounter *)0x0) {
		if ((*(byte *)((int)&refCounter->refCount + 3) & 1) != 0) {
		pIVar1 = refCounter->ctx;
		if (pIVar1 != (InstanceContext *)0x0) {
		(*((pIVar1->parent).vtable)->Dispose)(pIVar1,1);
		}
		refCounter->ctx = (InstanceContext *)0x0;
		}
		VirtualPool::FreeMemory(refCounter);
		this->refCounter = (InstanceContextRefCounter *)0x0;
		return;
		}
		}
		else {
		refCounter = (ctx->smartPtr).refCounter;
		if (refCounter != (InstanceContextRefCounter *)0x0) {
		if ((*(byte *)((int)&refCounter->refCount + 3) & 1) != 0) {
		pIVar1 = refCounter->ctx;
		if (pIVar1 != (InstanceContext *)0x0) {
		(*((pIVar1->parent).vtable)->Dispose)(pIVar1,1);
		}
		refCounter->ctx = (InstanceContext *)0x0;
		}
		VirtualPool::FreeMemory(refCounter);
		(ctx->smartPtr).refCounter = (InstanceContextRefCounter *)0x0;
		}
		}
		this->refCounter = (InstanceContextRefCounter *)0x0;
		return;
		}
		
	*/
	return;
}

InstanceContextSmartPtr* InstanceContextSmartPtr::SetCtx(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceContextSmartPtr * __thiscall InstanceContextSmartPtr::SetCtx(InstanceContextSmartPtr *this,InstanceContext *ctx){
		InstanceContextRefCounter *pIVar1;
		if (ctx == (InstanceContext *)0x0) {
		this->refCounter = (InstanceContextRefCounter *)0x0;
		return this;
		}
		pIVar1 = (InstanceContextRefCounter *)CreateRef(&ctx->smartPtr,ctx,0);
		this->refCounter = pIVar1;
		return this;
		}
		
	*/
	return null;
}

void InstanceContextSmartPtr::CreateRef(InstanceContext* ctx, byte flag) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceContextRefCounter * __thiscall InstanceContextSmartPtr::CreateRef(InstanceContextSmartPtr *this,InstanceContext *ctx,byte flag){
		uint uVar1;
		InstanceContextRefCounter *refCounter;
		if (this->refCounter == (InstanceContextRefCounter *)0x0) {
		refCounter = (InstanceContextRefCounter *)VirtualPool::AllocateMemory(8);
		if (refCounter == (InstanceContextRefCounter *)0x0) {
		refCounter = (InstanceContextRefCounter *)0x0;
		}
		else {
		refCounter->ctx = ctx;
		refCounter->refCount = (flag & 1) << 0x18 | refCounter->refCount & 0xfe000000;
		}
		this->refCounter = refCounter;
		}
		uVar1 = this->refCounter->refCount;
		this->refCounter->refCount = (uVar1 + 1 ^ uVar1) & 0xffffff ^ uVar1;
		return this->refCounter;
		}
		
	*/
	return;
}

void InstanceContextSmartPtr::FUN_00059e80(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceContextSmartPtr * __thiscall InstanceContextSmartPtr::FUN_00059e80(InstanceContextSmartPtr *this,int *param_1){
		InstanceContext *pIVar1;
		InstanceContextRefCounter *pIVar2;
		pIVar1 = (InstanceContext *)this->refCounter;
		if (pIVar1 != (InstanceContext *)0x0) {
		pIVar1 = *(InstanceContext **)&pIVar1->parent;
		}
		if (pIVar1 != (InstanceContext *)param_1) {
		Release(&this->refCounter);
		if (param_1 == (int *)0x0) {
		this->refCounter = (InstanceContextRefCounter *)0x0;
		return this;
		}
		pIVar2 = (InstanceContextRefCounter *)CreateRef((InstanceContextSmartPtr *)(param_1 + 0x30),(InstanceContext *)param_1,0);
		this->refCounter = pIVar2;
		}
		return this;
		}
		
	*/
	return;
}

void InstanceContextSmartPtr::Release() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceContextSmartPtr::Release(InstanceContextRefCounter **this){
		InstanceContext *this_00;
		InstanceContextRefCounter *refCounter;
		uint cnt;
		refCounter = *this;
		if (refCounter != (InstanceContextRefCounter *)0x0) {
		cnt = refCounter->refCount;
		cnt = (cnt - 1 ^ cnt) & 0xffffff ^ cnt;
		refCounter->refCount = cnt;
		if (((cnt & 0xffffff) == 0) && ((cnt & 0x1000000) != 0)) {
		this_00 = refCounter->ctx;
		if (this_00 != (InstanceContext *)0x0) {
		(*((this_00->parent).vtable)->Dispose)(this_00,1);
		}
		refCounter->ctx = (InstanceContext *)0x0;
		}
		if ((refCounter->refCount & 0xffffff) == 0) {
		FreeCtx((InstanceContextSmartPtr *)this,(*this)->ctx);
		}
		}
		return;
		}
		
	*/
	return;
}

