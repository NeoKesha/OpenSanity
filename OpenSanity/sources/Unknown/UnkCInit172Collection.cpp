#include "headers/Unknown/UnkCInit172Collection.h"

#include "headers/Known/Game/InstanceSystem/InstanceContextRefCounter.h"
void* UnkCInit172Collection::FUN_000fd6e0(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined * __thiscall UnkCInit172Collection::FUN_000fd6e0(UnkCInit172Collection *this,undefined param_1){
		InstanceContextSmartPtr *this_00;
		InstanceContextRefCounter **ppIVar1;
		InstanceContextRefCounter *pIVar2;
		InstanceContext *pIVar3;
		InstanceContextRefCounter *pIVar4;
		int *piVar5;
		uint uVar6;
		uint uVar7;
		int cnt;
		InstanceContextRefCounter **this_01;
		undefined3 in_stack_00000005;
		InstanceContextRefCounter **local_8;
		if (this->cnt == this->field2_0x8) {
		cnt = this->field3_0xc + this->field2_0x8;
		piVar5 = (int *)VirtualPool::AllocateMemory(cnt * 4 + 4);
		uVar7 = 0;
		if (piVar5 == (int *)0x0) {
		local_8 = (InstanceContextRefCounter **)0x0;
		}
		else {
		local_8 = (InstanceContextRefCounter **)(piVar5 + 1);
		*piVar5 = cnt;
		ForEach(local_8,4,cnt,thunk_FUN_00059c50);
		}
		this_01 = local_8;
		if (this->cnt != 0) {
		do {
		ppIVar1 = this->array;
		if (*this_01 != ppIVar1[uVar7]) {
		InstanceContextSmartPtr::Release(this_01);
		pIVar2 = ppIVar1[uVar7];
		*this_01 = pIVar2;
		if (pIVar2 != (InstanceContextRefCounter *)0x0) {
		uVar6 = pIVar2->refCount;
		pIVar2->refCount = (uVar6 + 1 ^ uVar6) & 0xffffff ^ uVar6;
		}
		}
		uVar7 = uVar7 + 1;
		this_01 = this_01 + 1;
		}
		 while (uVar7 < this->cnt);
		}
		if (this->array != (InstanceContextRefCounter **)0x0) {
		thunk_FUN_00024820(this->array,3);
		}
		this->array = local_8;
		this->field2_0x8 = cnt;
		}
		pIVar4 = _param_1;
		this_00 = (InstanceContextSmartPtr *)(this->array + this->cnt);
		this->cnt = this->cnt + 1;
		pIVar2 = this_00->refCounter;
		if (pIVar2 != _param_1) {
		if (pIVar2 != (InstanceContextRefCounter *)0x0) {
		uVar7 = pIVar2->refCount;
		uVar7 = (uVar7 - 1 ^ uVar7) & 0xffffff ^ uVar7;
		pIVar2->refCount = uVar7;
		if (((uVar7 & 0xffffff) == 0) && ((uVar7 & 0x1000000) != 0)) {
		pIVar3 = pIVar2->ctx;
		if (pIVar3 != (InstanceContext *)0x0) {
		(*((pIVar3->parent).vtable)->Dispose)(pIVar3,1);
		}
		pIVar2->ctx = (InstanceContext *)0x0;
		}
		if ((pIVar2->refCount & 0xffffff) == 0) {
		InstanceContextSmartPtr::FreeCtx(this_00,this_00->refCounter->ctx);
		}
		}
		this_00->refCounter = pIVar4;
		if (pIVar4 != (InstanceContextRefCounter *)0x0) {
		uVar7 = pIVar4->refCount;
		pIVar4->refCount = (uVar7 + 1 ^ uVar7) & 0xffffff ^ uVar7;
		}
		}
		uVar7 = this->cnt;
		if (pIVar4 != (InstanceContextRefCounter *)0x0) {
		uVar6 = pIVar4->refCount;
		uVar6 = (uVar6 - 1 ^ uVar6) & 0xffffff ^ uVar6;
		pIVar4->refCount = uVar6;
		if (((uVar6 & 0xffffff) == 0) && ((uVar6 & 0x1000000) != 0)) {
		pIVar3 = pIVar4->ctx;
		if (pIVar3 != (InstanceContext *)0x0) {
		(*((pIVar3->parent).vtable)->Dispose)(pIVar3,1);
		}
		pIVar4->ctx = (InstanceContext *)0x0;
		}
		if ((pIVar4->refCount & 0xffffff) == 0) {
		InstanceContextSmartPtr::FreeCtx((InstanceContextSmartPtr *)&param_1,pIVar4->ctx);
		}
		}
		return (undefined *)(uVar7 - 1);
		}
		
	*/
	return null;
}

