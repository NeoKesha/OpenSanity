#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10Q.h"

#include "headers/Known/Oleg/Modules/OlegModuleLabelSelectable.h"
void UnkFamily10Q::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __fastcall UnkFamily10Q::CleanUp(UnkFamily10Q *this){
		OlegModuleA *this_00;
		OlegModuleA **ppOVar1;
		int iVar2;
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_Q;
		ppOVar1 = &this->field21_0x64;
		iVar2 = 5;
		do {
		if ((OlegModuleAbstract *)ppOVar1[-5] != (OlegModuleAbstract *)0x0) {
		(*((OlegModuleAbstract *)ppOVar1[-5])->vtable->Dispose)(1);
		}
		this_00 = *ppOVar1;
		if (this_00 != (OlegModuleA *)0x0) {
		(*((this_00->parent).vtable)->Dispose)(&this_00->parent,1);
		}
		ppOVar1 = ppOVar1 + 1;
		iVar2 = iVar2 + -1;
		}
		 while (iVar2 != 0);
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp(&this->parent);
		return;
		}
		
	*/
	return;
}

void UnkFamily10Q::Construct(uint param_1, OlegModuleLabelSelectable* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10Q * __thiscall UnkFamily10Q::Construct(UnkFamily10Q *this,undefined4 param_1,OlegModuleLabelSelectable *param_2){
		OlegModuleAbstract *pOVar1;
		UnkFamily8Abstract *element;
		float fVar2;
		UnkFamily8B *pUVar3;
		OlegModuleMenuBubble *pOVar4;
		OlegModuleAIA *this_00;
		uint uVar5;
		OlegModuleA **ppOVar6;
		float fVar7;
		float local_64;
		float local_60;
		float local_58;
		OlegModuleLabelSelectable *local_54;
		ColorTransparent local_44;
		ColorTransparent local_3c;
		ColorTransparent local_34;
		ColorTransparent local_2c;
		float local_24;
		float local_20;
		UnkFamily8Abstract *local_1c;
		UnkFamily8B *local_18;
		UnkFamily8B *local_14;
		UnkFamily8B *local_10;
		undefined4 local_c;
		UnkFamily10Base::Construct(&this->parent,"",1);
		(this->parent).field7_0x1c = (int)&PTR_UnkFamily10_VT_Base_003a3950;
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_Q;
		pOVar1 = (param_2->parent).parent.next;
		local_54 = param_2;
		switch(param_1) {
		case 0:pUVar3 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar3 == (UnkFamily8B *)0x0) {
		local_1c = (UnkFamily8Abstract *)0x0;
		}
		else {
		local_1c = (UnkFamily8Abstract *)UnkFamily8B::Construct(pUVar3,&DAT_00388031,0,0,1);
		}
		pUVar3 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar3 == (UnkFamily8B *)0x0) {
		local_18 = (UnkFamily8B *)0x0;
		}
		else {
		local_18 = UnkFamily8B::Construct(pUVar3,&DAT_00388031,1,0,1);
		}
		pUVar3 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar3 == (UnkFamily8B *)0x0) {
		local_14 = (UnkFamily8B *)0x0;
		}
		else {
		local_14 = UnkFamily8B::Construct(pUVar3,&DAT_00388031,3,0,1);
		}
		pUVar3 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar3 == (UnkFamily8B *)0x0) goto LAB_000a9062;
		uVar5 = 4;
		LAB_000a8f0f:local_10 = UnkFamily8B::Construct(pUVar3,&DAT_00388031,uVar5,0,1);
		break;
		case 1:pUVar3 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar3 == (UnkFamily8B *)0x0) {
		local_1c = (UnkFamily8Abstract *)0x0;
		}
		else {
		local_1c = (UnkFamily8Abstract *)UnkFamily8B::Construct(pUVar3,&DAT_00388031,6,0,1);
		}
		pUVar3 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar3 == (UnkFamily8B *)0x0) {
		local_18 = (UnkFamily8B *)0x0;
		}
		else {
		local_18 = UnkFamily8B::Construct(pUVar3,&DAT_00388031,7,0,1);
		}
		pUVar3 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar3 == (UnkFamily8B *)0x0) {
		local_14 = (UnkFamily8B *)0x0;
		}
		else {
		local_14 = UnkFamily8B::Construct(pUVar3,&DAT_00388031,9,0,1);
		}
		pUVar3 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar3 == (UnkFamily8B *)0x0) goto LAB_000a9116;
		uVar5 = 10;
		LAB_000a8fb8:local_10 = UnkFamily8B::Construct(pUVar3,&DAT_00388031,uVar5,0,1);
		goto LAB_000a911a;
		case 2:pUVar3 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar3 == (UnkFamily8B *)0x0) {
		local_1c = (UnkFamily8Abstract *)0x0;
		}
		else {
		local_1c = (UnkFamily8Abstract *)UnkFamily8B::Construct(pUVar3,&DAT_00388031,0xd,0,1);
		}
		pUVar3 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar3 == (UnkFamily8B *)0x0) {
		local_18 = (UnkFamily8B *)0x0;
		}
		else {
		local_18 = UnkFamily8B::Construct(pUVar3,&DAT_00388031,0xf,0,1);
		}
		pUVar3 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar3 == (UnkFamily8B *)0x0) {
		local_14 = (UnkFamily8B *)0x0;
		}
		else {
		local_14 = UnkFamily8B::Construct(pUVar3,&DAT_00388031,0x11,0,1);
		}
		pUVar3 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar3 != (UnkFamily8B *)0x0) {
		uVar5 = 0x12;
		goto LAB_000a8f0f;
		}
		LAB_000a9062:local_10 = (UnkFamily8B *)0x0;
		break;
		case 3:pUVar3 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar3 == (UnkFamily8B *)0x0) {
		local_1c = (UnkFamily8Abstract *)0x0;
		}
		else {
		local_1c = (UnkFamily8Abstract *)UnkFamily8B::Construct(pUVar3,&DAT_00388031,0x14,0,1);
		}
		pUVar3 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar3 == (UnkFamily8B *)0x0) {
		local_18 = (UnkFamily8B *)0x0;
		}
		else {
		local_18 = UnkFamily8B::Construct(pUVar3,&DAT_00388031,0x15,0,1);
		}
		pUVar3 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar3 == (UnkFamily8B *)0x0) {
		local_14 = (UnkFamily8B *)0x0;
		}
		else {
		local_14 = UnkFamily8B::Construct(pUVar3,&DAT_00388031,0x16,0,1);
		}
		pUVar3 = (UnkFamily8B *)VirtualPool::AllocateMemory(0x14);
		if (pUVar3 != (UnkFamily8B *)0x0) {
		uVar5 = 0x17;
		goto LAB_000a8fb8;
		}
		LAB_000a9116:local_10 = (UnkFamily8B *)0x0;
		LAB_000a911a:local_64 = FLOAT_0038a82c;
		local_60 = FLOAT_0038a830;
		goto LAB_000a9130;
		default:local_64 = FLOAT_0038a82c;
		local_60 = FLOAT_0038a830;
		local_58 = FLOAT_0038a828;
		fVar7 = FLOAT_0038c850;
		goto LAB_000a917c;
		}
		local_64 = FLOAT_0038a830;
		local_60 = FLOAT_0038a82c;
		LAB_000a9130:local_c = 0;
		local_58 = FLOAT_0038ab54;
		fVar7 = FLOAT_0038ab54;
		LAB_000a917c:uVar5 = 0;
		ppOVar6 = &this->field21_0x64;
		do {
		element = (&local_1c)[uVar5];
		if (element == (UnkFamily8Abstract *)0x0) {
		*ppOVar6 = (OlegModuleA *)0x0;
		ppOVar6[-5] = (OlegModuleA *)0x0;
		}
		else {
		local_3c.alpha = local_64;
		if ((~(byte)uVar5 & 1) == 0) {
		local_3c.alpha = local_60;
		}
		fVar2 = (float)uVar5;
		if ((int)uVar5 < 0) {
		fVar2 = fVar2 + FLOAT_00386458;
		}
		local_2c.alpha = FLOAT_0038a830;
		local_3c.color = fVar2 * fVar7 + local_58;
		local_2c.color = FLOAT_00386608;
		local_34.alpha = FLOAT_0038639c;
		local_34.color = FLOAT_0038639c;
		local_44.alpha = FLOAT_0038639c;
		if (local_3c.alpha < FLOAT_00386ab4) {
		local_44.alpha = FLOAT_003869d8;
		}
		local_44.color = 0;
		pOVar4 = (OlegModuleMenuBubble *)VirtualPool::AllocateMemory(0x94);
		if (pOVar4 == (OlegModuleMenuBubble *)0x0) {
		pOVar4 = (OlegModuleMenuBubble *)0x0;
		}
		else {
		pOVar4 = OlegModuleMenuBubble::Construct(pOVar4,0.5,4,1,0x20,0);
		}
		*ppOVar6 = &pOVar4->parent;
		this_00 = (OlegModuleAIA *)VirtualPool::AllocateMemory(0x98);
		if (this_00 == (OlegModuleAIA *)0x0) {
		pOVar4 = (OlegModuleMenuBubble *)0x0;
		}
		else {
		pOVar4 = (OlegModuleMenuBubble *)OlegModuleAIA::Construct(this_00,0.5,(UIElementImage *)this,element,GameController3);
		}
		ppOVar6[-5] = &pOVar4->parent;
		OlegModuleA::FUN_001a2e90((OlegModuleA *)*ppOVar6,COLOR_WHITE,&local_3c,&local_34,&local_44);
		OlegModuleA::FUN_001a2e90((OlegModuleA *)ppOVar6[-5],COLOR_WHITE,&local_3c,&local_2c,&local_44);
		local_24 = FLOAT_0038bc04;
		local_20 = FLOAT_0038a934;
		thunk_FUN_000ad710(&local_24,(OlegModuleMenuBubble *)*ppOVar6);
		(local_54->parent).parent.next = (OlegModuleAbstract *)*ppOVar6;
		(((OlegModuleMenuBubble *)*ppOVar6)->parent).parent.next = (OlegModuleAbstract *)ppOVar6[-5];
		local_54 = (OlegModuleLabelSelectable *)ppOVar6[-5];
		UnkFamily10Base::Add(&this->parent,element);
		}
		uVar5 = uVar5 + 1;
		ppOVar6 = ppOVar6 + 1;
		}
		 while (uVar5 < 5);
		(local_54->parent).parent.next = pOVar1;
		return this;
		}
		
	*/
	return;
}

void UnkFamily10Q::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily10Q::Dispose(UnkFamily10Q *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

