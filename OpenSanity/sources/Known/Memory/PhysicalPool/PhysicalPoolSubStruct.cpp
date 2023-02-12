#include "headers/Known/Memory/PhysicalPool/PhysicalPoolSubStruct.h"

#include "headers/Known/Memory/PhysicalPool/PhysicalPoolElement.h"
#include "headers/Known/Memory/PhysicalPool/PhysicalPool.h"
void PhysicalPoolSubStruct::FUN_0015b970(PhysicalPoolElement* element1, PhysicalPoolElement* element2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall PhysicalPoolSubStruct::FUN_0015b970(PhysicalPoolSubStruct *this,PhysicalPoolElement *element1,PhysicalPoolElement *element2){
		uint *puVar1;
		size_t sVar2;
		uint uVar3;
		PhysicalPoolElement *pPVar4;
		PhysicalPoolElement *this_00;
		this->element1 = element1;
		element1->field9_0x24 = element1->field9_0x24 & 0xfffffff3 | 3;
		this->field3_0xc = element1->length;
		this->field2_0x8 = 0;
		sVar2 = element2->length;
		this->element2 = element2;
		PhysicalPool::FUN_001599b0(this->pool,element2);
		this->element2->field9_0x24 = this->element2->field9_0x24 & 0xfffc7ff2 | 0x4002;
		this->element2->length = this->field3_0xc;
		this->element2->field9_0x24 = this->element2->field9_0x24 & 0xfffffff4 | 4;
		puVar1 = &this->element2->field9_0x24;
		*puVar1 = *puVar1 | 0x4000;
		uVar3 = this->element2->field9_0x24;
		this->element2->field9_0x24 = uVar3 ^ (this->element1->field9_0x24 ^ uVar3) & 0x20000;
		uVar3 = this->element2->field9_0x24;
		this->element2->field9_0x24 = uVar3 ^ (this->element1->field9_0x24 ^ uVar3) & 0x18000;
		if (sVar2 != this->field3_0xc) {
		pPVar4 = (PhysicalPoolElement *)VirtualPool::AllocateMemory(0x28);
		this_00 = (PhysicalPoolElement *)0x0;
		if (pPVar4 != (PhysicalPoolElement *)0x0) {
		pPVar4->alignedStart = (void *)0x0;
		pPVar4->length = 0;
		pPVar4->field3_0xc = 0;
		pPVar4->field4_0x10 = 0;
		pPVar4->field5_0x14 = 0;
		pPVar4->next2 = (PhysicalPoolElement *)0x0;
		pPVar4->next = (PhysicalPoolElement *)0x0;
		pPVar4->prev = (PhysicalPoolElement *)0x0;
		pPVar4->bufferIndex = -1;
		pPVar4->field9_0x24 = pPVar4->field9_0x24 & 0xfffc4000 | 0x4000;
		this_00 = pPVar4;
		}
		this_00->alignedStart = (void *)((int)element2->alignedStart + this->field3_0xc);
		this_00->length = sVar2 - this->field3_0xc;
		this_00->field9_0x24 = this_00->field9_0x24 & 0xfffffff1 | 1;
		this_00->bufferIndex = -2;
		PhysicalPoolElement::FUN_0015a8f0(this_00);
		pPVar4 = element2->prev;
		element2->prev = this_00;
		this_00->next = element2;
		if (pPVar4 == (PhysicalPoolElement *)0x0) {
		this_00->prev = (PhysicalPoolElement *)0x0;
		}
		else {
		pPVar4->next = this_00;
		this_00->prev = pPVar4;
		}
		PhysicalPool::FUN_0015ad70(this->pool,this_00);
		}
		this->field4_0x10 = 1;
		return;
		}
		
	*/
	return;
}

void PhysicalPoolSubStruct::FUN_0015bd90() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PhysicalPoolSubStruct::FUN_0015bd90(PhysicalPoolSubStruct *this){
		PhysicalPoolElement **ppPVar1;
		PhysicalPoolElement *pPVar2;
		PhysicalPool *pPVar3;
		UNV003 *ppPVar3;
		PhysicalPoolElement::FUN_00156ae0(this->element1,this->pool->memoryArena + (this->element1->bufferIndex & 0x7ff),0xc,0x10);
		this->element2->bufferIndex = this->element1->bufferIndex;
		this->element2->field9_0x24 = this->element2->field9_0x24 & 0xfffffff2 | 2;
		pPVar2 = this->element2;
		ppPVar1 = this->pool->memoryArena + (pPVar2->bufferIndex & 0x7ff);
		if (*ppPVar1 == (PhysicalPoolElement *)0x0) {
		*ppPVar1 = pPVar2;
		pPVar2->field3_0xc = 0;
		pPVar2->field4_0x10 = 0;
		}
		else {
		(*ppPVar1)->field3_0xc = pPVar2;
		pPVar2->field4_0x10 = *ppPVar1;
		*ppPVar1 = pPVar2;
		}
		this->element1->bufferIndex = -2;
		pPVar2 = this->element1;
		if ((pPVar2->field9_0x24 >> 0x11 & 1) != 0) {
		pPVar3 = this->pool;
		pPVar2->field9_0x24 = pPVar2->field9_0x24 & 0xfffffff5 | 5;
		ppPVar3 = (UNV003 *)VirtualPool::AllocateMemory(0xc);
		if (ppPVar3 == (UNV003 *)0x0) {
		ppPVar3 = (UNV003 *)0x0;
		}
		else {
		ppPVar3->element = pPVar2;
		ppPVar3->field2_0x8 = 0;
		ppPVar3->field1_0x4 = 0;
		}
		if (pPVar3->field25_0x2060 == 0) {
		pPVar3->field25_0x2060 = (int)ppPVar3;
		ppPVar3->field1_0x4 = 0;
		ppPVar3->field2_0x8 = 0;
		}
		else {
		*(UNV003 **)(pPVar3->field25_0x2060 + 4) = ppPVar3;
		ppPVar3->field2_0x8 = pPVar3->field25_0x2060;
		pPVar3->field25_0x2060 = (int)ppPVar3;
		}
		pPVar3->field26_0x2064 = pPVar3->field26_0x2064 + 1;
		pPVar2->field9_0x24 = pPVar2->field9_0x24 & 0xffffc00f;
		this->element1 = (PhysicalPoolElement *)0x0;
		this->element2 = (PhysicalPoolElement *)0x0;
		this->field2_0x8 = 0;
		this->field3_0xc = 0;
		this->field4_0x10 = 0;
		return;
		}
		pPVar2->field9_0x24 = pPVar2->field9_0x24 & 0xfffffff1 | 1;
		PhysicalPoolElement::FUN_0015a8f0(this->element1);
		PhysicalPool::FUN_0015ad70(this->pool,this->element1);
		this->element1 = (PhysicalPoolElement *)0x0;
		this->element2 = (PhysicalPoolElement *)0x0;
		this->field2_0x8 = 0;
		this->field3_0xc = 0;
		this->field4_0x10 = 0;
		return;
		}
		
	*/
	return;
}

bool PhysicalPoolSubStruct::FUN_0015bf00() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall PhysicalPoolSubStruct::FUN_0015bf00(PhysicalPoolSubStruct *this){
		PhysicalPoolElement *element1;
		PhysicalPoolElement *element2;
		element1 = this->pool->listTail;
		while( true ) {
		if (element1 == (PhysicalPoolElement *)0x0) {
		return false;
		}
		if ((((((byte)element1->field9_0x24 & 0xf) == 2) &&((element1->field9_0x24 & 0x18000) != 0x8000)) &&(element2 = element1->next, element2 != (PhysicalPoolElement *)0x0)) &&(((byte)element2->field9_0x24 & 0xf) == 1)) break;
		element1 = element1->prev;
		}
		FUN_0015b970(this,element1,element2);
		_memmove(this->element2->alignedStart,this->element1->alignedStart,this->field3_0xc);
		FUN_0015bd90(this);
		return true;
		}
		
	*/
	return false;
}

