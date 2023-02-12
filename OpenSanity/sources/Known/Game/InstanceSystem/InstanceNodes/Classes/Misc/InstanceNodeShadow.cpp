#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeShadow.h"

#include "headers/Unknown/NonVirtualClasses/UNV005.h"
void InstanceNodeShadow::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeShadow * __fastcall InstanceNodeShadow::Construct(InstanceNodeShadow *this){
		InstanceNodeAbstract::Contruct(&this->parent);
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_Shadow;
		this->field1_0x18 = 0;
		this->array[0] = (UNV005 *)0x0;
		this->array[1] = (UNV005 *)0x0;
		this->array[2] = (UNV005 *)0x0;
		this->array[3] = (UNV005 *)0x0;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeShadow::ReplaceElement(int index, UNV005* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeShadow::ReplaceElement(InstanceNodeShadow *this,int index,UNV005 *element){
		UNV005 *ptr;
		void *this_00;
		ptr = this->array[index];
		if (ptr != (UNV005 *)0x0) {
		this_00 = (void *)ptr->field2_0x8;
		if (this_00 != (void *)0x0) {
		FUN_001069c0(this_00);
		VirtualPool::FreeMemory(this_00);
		}
		VirtualPool::FreeMemory(ptr);
		this->array[index] = element;
		return;
		}
		this->array[index] = element;
		return;
		}
		
	*/
	return;
}

void InstanceNodeShadow::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeShadow::CleanUp(InstanceNodeShadow *this){
		UNV005 *ptr;
		void *this_00;
		UNV005 **ppUVar1;
		int iVar2;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_Shadow;
		ppUVar1 = this->array;
		iVar2 = 4;
		do {
		ptr = *ppUVar1;
		if (ptr != (UNV005 *)0x0) {
		this_00 = (void *)ptr->field2_0x8;
		if (this_00 != (void *)0x0) {
		FUN_001069c0(this_00);
		VirtualPool::FreeMemory(this_00);
		}
		VirtualPool::FreeMemory(ptr);
		}
		ppUVar1 = ppUVar1 + 1;
		iVar2 = iVar2 + -1;
		}
		 while (iVar2 != 0);
		InstanceNodeAbstract::UnrollVtable(&this->parent);
		return;
		}
		
	*/
	return;
}

bool InstanceNodeShadow::Step(byte* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeShadow::Step(InstanceNodeShadow *this,byte *param_1){
		InstanceContext *pIVar1;
		UNV005 *this_00;
		bool bVar2;
		uint uVar3;
		pIVar1 = (this->parent).ctx;
		uVar3 = (pIVar1->parent).flags;
		if (((((uVar3 & 0x1000) != 0) && ((uVar3 & 0x400) != 0)) && ((uVar3 & 0x200) != 0)) &&((this_00 = this->array[this->field1_0x18 & 0xff], this_00 != (UNV005 *)0x0 &&(uVar3 = pIVar1->field35_0x160 & 0xffffff, uVar3 < this_00->field1_0x4)))) {
		FUN_0010dd70(this_00,(int)(this->parent).ctx,SQRT((float)uVar3));
		}
		bVar2 = InstanceNodeAbstract::Step(&this->parent,(UnkTimePack *)param_1);
		return bVar2;
		}
		
	*/
	return false;
}

void InstanceNodeShadow::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodeShadow::Dispose(InstanceNodeShadow *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void InstanceNodeShadow::FUN_00170490(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeShadow::FUN_00170490(InstanceNodeShadow *this,byte param_1){
		uint uVar1;
		uint uVar2;
		uVar1 = 0;
		uVar2 = (uint)this[2].array[3] & 0xf;
		if (uVar2 != 0) {
		while ((this->array[uVar1 - 7]->field0_0x0 & 7) != (uint)param_1) {
		uVar1 = uVar1 + 1;
		if (uVar2 <= uVar1) {
		return;
		}
		}
		*(undefined *)((int)this[1].array + (uVar1 - 8)) = 0;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeShadow::FUN_001704d0(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeShadow::FUN_001704d0(InstanceNodeShadow *this,byte param_1){
		uint uVar1;
		uint uVar2;
		uVar1 = 0;
		uVar2 = (uint)this[2].array[3] & 0xf;
		if (uVar2 != 0) {
		while ((this->array[uVar1 - 7]->field0_0x0 & 7) != (uint)param_1) {
		uVar1 = uVar1 + 1;
		if (uVar2 <= uVar1) {
		return;
		}
		}
		*(undefined *)((int)this[1].array + (uVar1 - 8)) = 1;
		}
		return;
		}
		
	*/
	return;
}

byte InstanceNodeShadow::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte InstanceNodeShadow::GetIndex(void){
		return 10;
		}
		
	*/
	return 0;
}

uint InstanceNodeShadow::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodeShadow::GetBuilderIndex(void){
		return 0x1428;
		}
		
	*/
	return 0;
}

