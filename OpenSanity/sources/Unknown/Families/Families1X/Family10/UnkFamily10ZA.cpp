#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10ZA.h"

#include "headers/Known/Oleg/Modules/OlegModuleLabelSelectable.h"
#include "headers/Known/Game/SaveSystem/SaveSystem/SaveSystem.h"
void UnkFamily10ZA::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily10ZA::CleanUp(UnkFamily10ZA *this){
		uint uVar1;
		int *piVar2;
		uint uVar3;
		uVar1 = this->field2_0x54;
		uVar3 = 0;
		(this->parent).parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_ZA;
		if (uVar1 != 0) {
		do {
		piVar2 = *(int **)((int)this->field3_0x58 + uVar3 * 4);
		if (piVar2 != (int *)0x0) {
		(**(code **)(*piVar2 + 0x20))(1);
		}
		piVar2 = *(int **)((int)this->field4_0x5c + uVar3 * 4);
		if (piVar2 != (int *)0x0) {
		(**(code **)(*piVar2 + 0x20))(1);
		}
		uVar3 = uVar3 + 1;
		}
		 while (uVar3 < this->field2_0x54);
		}
		VirtualPool::FreeMemory(this->field3_0x58);
		VirtualPool::FreeMemory(this->field4_0x5c);
		UnkFamily10Base::CleanUp((UnkFamily10Base *)this);
		return;
		}
		
	*/
	return;
}

void UnkFamily10ZA::Construct(SaveSystem* mainMenu, OlegModuleLabelSelectable* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10ZA * __thiscall UnkFamily10ZA::Construct(UnkFamily10ZA *this,SaveSystem *mainMenu,OlegModuleLabelSelectable *param_2){
		OlegModuleAbstract *pOVar1;
		SaveFileC *pSVar2;
		float fVar3;
		GameController *pGVar4;
		byte bVar5;
		uint uVar6;
		void *pvVar7;
		UnkFamily8BE *pUVar8;
		OlegModuleMenuBubble *pOVar9;
		OlegModuleAIB *pOVar10;
		OlegModuleLabelSelectable *local_3c;
		ColorTransparent local_28;
		ColorTransparent local_20;
		ColorTransparent local_18;
		float local_10;
		float local_c;
		UnkFamily10Z::Construct(&this->parent,mainMenu);
		(this->parent).parent.vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_ZA;
		pGVar4 = GameController3;
		pOVar1 = (param_2->parent).parent.next;
		uVar6 = (((mainMenu->parent).saveController)->parent).field1_0x4 & 0xf;
		this->field2_0x54 = uVar6;
		local_3c = param_2;
		pvVar7 = VirtualPool::AllocateMemory(uVar6 << 2);
		this->field3_0x58 = pvVar7;
		pvVar7 = VirtualPool::AllocateMemory(this->field2_0x54 << 2);
		this->field4_0x5c = pvVar7;
		uVar6 = 0;
		if (this->field2_0x54 != 0) {
		do {
		pSVar2 = mainMenu->saveFiles[uVar6];
		pUVar8 = (UnkFamily8BE *)VirtualPool::AllocateMemory(0x20);
		if (pUVar8 == (UnkFamily8BE *)0x0) {
		pUVar8 = (UnkFamily8BE *)0x0;
		}
		else {
		pUVar8 = UnkFamily8BE::Construct(pUVar8,0,uVar6 + 0x100,0,mainMenu);
		}
		bVar5 = ~(byte)uVar6 & 1;
		local_18.alpha = FLOAT_0038bc04;
		if (bVar5 == 0) {
		local_18.alpha = FLOAT_0038a834;
		}
		fVar3 = (float)uVar6;
		if ((int)uVar6 < 0) {
		fVar3 = fVar3 + FLOAT_00386458;
		}
		local_20.alpha = FLOAT_0038639c;
		local_18.color = fVar3 * FLOAT_0038c9c4 + FLOAT_0038c9c0;
		local_20.color = FLOAT_0038639c;
		local_28.alpha = FLOAT_0038639c;
		if (bVar5 != 0) {
		local_28.alpha = FLOAT_003869d8;
		}
		local_28.color = 0;
		pOVar9 = (OlegModuleMenuBubble *)VirtualPool::AllocateMemory(0x94);
		if (pOVar9 == (OlegModuleMenuBubble *)0x0) {
		pOVar9 = (OlegModuleMenuBubble *)0x0;
		}
		else {
		pOVar9 = OlegModuleMenuBubble::Construct(pOVar9,0.5,4,1,0x20,0);
		}
		*(OlegModuleMenuBubble **)((int)this->field4_0x5c + uVar6 * 4) = pOVar9;
		pOVar10 = (OlegModuleAIB *)VirtualPool::AllocateMemory(0x98);
		if (pOVar10 == (OlegModuleAIB *)0x0) {
		pOVar10 = (OlegModuleAIB *)0x0;
		}
		else {
		pOVar10 = OlegModuleAIB::Construct(pOVar10,0.5,(UIElementImage *)this,(char)pUVar8,pGVar4,&pSVar2->bankSub);
		}
		*(OlegModuleAIB **)((int)this->field3_0x58 + uVar6 * 4) = pOVar10;
		OlegModuleA::FUN_001a2e90(*(OlegModuleA **)((int)this->field4_0x5c + uVar6 * 4),COLOR_WHITE,&local_18,&local_20,&local_28);
		OlegModuleA::FUN_001a2e90(*(OlegModuleA **)((int)this->field3_0x58 + uVar6 * 4),COLOR_WHITE,&local_18,&local_20,&local_28);
		local_10 = FLOAT_0038a828;
		local_c = FLOAT_0038c9bc;
		thunk_FUN_000ad710(&local_10,*(OlegModuleMenuBubble **)((int)this->field4_0x5c + uVar6 * 4));
		(local_3c->parent).parent.next = *(OlegModuleAbstract **)((int)this->field4_0x5c + uVar6 * 4);
		*(undefined4 *)(*(int *)((int)this->field4_0x5c + uVar6 * 4) + 0x20) =*(undefined4 *)((int)this->field3_0x58 + uVar6 * 4);
		local_3c = *(OlegModuleLabelSelectable **)((int)this->field3_0x58 + uVar6 * 4);
		UnkFamily10Base::Add((UnkFamily10Base *)this,(UnkFamily8Abstract *)pUVar8);
		uVar6 = uVar6 + 1;
		}
		 while (uVar6 < this->field2_0x54);
		}
		(local_3c->parent).parent.next = pOVar1;
		FUN_002023f0(this);
		return this;
		}
		
	*/
	return;
}

void UnkFamily10ZA::FUN_002023f0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily10ZA::FUN_002023f0(UnkFamily10ZA *this){
		undefined *puVar1;
		UnkFamily8BE *element;
		UnkFamily8BE *element_00;
		element = (UnkFamily8BE *)VirtualPool::AllocateMemory(0x20);
		if (element == (UnkFamily8BE *)0x0) {
		element = (UnkFamily8BE *)0x0;
		}
		else {
		puVar1 = (this->parent).field1_0x50;
		UnkFamily8B::Construct((UnkFamily8B *)element,&DAT_00388031,0,0,1);
		(element->parent).parent.vtable = &UnkFamily8_VT_BE;
		element->field1_0x14 = (uint)puVar1;
		element->field2_0x18 = 2;
		element->field3_0x1c = 0x21;
		}
		element_00 = (UnkFamily8BE *)VirtualPool::AllocateMemory(0x20);
		if (element_00 != (UnkFamily8BE *)0x0) {
		puVar1 = (this->parent).field1_0x50;
		UnkFamily8B::Construct((UnkFamily8B *)element_00,&DAT_00388031,1,0,1);
		element_00->field1_0x14 = (uint)puVar1;
		(element_00->parent).parent.vtable = &UnkFamily8_VT_BE;
		element_00->field2_0x18 = 1;
		element_00->field3_0x1c = 0x1e;
		UnkFamily10Base::Add((UnkFamily10Base *)this,(UnkFamily8Abstract *)element);
		UnkFamily10Base::Add((UnkFamily10Base *)this,(UnkFamily8Abstract *)element_00);
		return;
		}
		UnkFamily10Base::Add((UnkFamily10Base *)this,(UnkFamily8Abstract *)element);
		UnkFamily10Base::Add((UnkFamily10Base *)this,(UnkFamily8Abstract *)0x0);
		return;
		}
		
	*/
	return;
}

void UnkFamily10ZA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10ZA * __thiscall UnkFamily10ZA::Dispose(UnkFamily10ZA *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

