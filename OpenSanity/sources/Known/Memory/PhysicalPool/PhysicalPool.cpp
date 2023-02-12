#include "headers/Known/Memory/PhysicalPool/PhysicalPool.h"

#include "headers/Known/Memory/PhysicalPool/PhysicalPoolElement.h"
PhysicalPool* PhysicalPool::GetPool() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PhysicalPool * PhysicalPool::GetPool(void){
		if ((DAT_003e8cc0 & 1) == 0) {
		DAT_003e8cc0 = DAT_003e8cc0 | 1;
		Construct(&PHYSICAL_POOL);
		_atexit((__func *)&LAB_0027d030);
		}
		if (DAT_003e6c50 == '\0') {
		DAT_003e6c50 = '\x01';
		PHYSICAL_POOL_BASE_ADDRESS = _XPhysicalAlloc@16(0x1200000,-1,0,4);
		InitPool(&PHYSICAL_POOL,PHYSICAL_POOL_BASE_ADDRESS,0x1200000);
		}
		return &PHYSICAL_POOL;
		}
		
	*/
	return null;
}

void PhysicalPool::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PhysicalPool * __thiscall PhysicalPool::Construct(PhysicalPool *this){
		PhysicalPoolSubStruct *puVar1;
		int iVar1;
		undefined **piVar2;
		this->alignedStart = (void *)0x0;
		this->alignedSize = 0;
		this->field2_0x8 = 0;
		this->field19_0x4c = 0;
		this->listTail = (PhysicalPoolElement *)0x0;
		this->alignedEnd = (void *)0x0;
		this->field22_0x58 = 0;
		piVar2 = (undefined **)this->memoryArena;
		for (iVar1 = 0x800;
		 iVar1 != 0;
		 iVar1 = iVar1 + -1) {
		*piVar2 = (undefined *)0x0;
		piVar2 = piVar2 + 1;
		}
		this->field25_0x2060 = 0;
		this->field26_0x2064 = 0;
		puVar1 = (PhysicalPoolSubStruct *)VirtualPool::AllocateMemory(0x18);
		if (puVar1 == (PhysicalPoolSubStruct *)0x0) {
		puVar1 = (PhysicalPoolSubStruct *)0x0;
		}
		else {
		puVar1->element1 = (PhysicalPoolElement *)0x0;
		puVar1->element2 = (PhysicalPoolElement *)0x0;
		puVar1->field2_0x8 = 0;
		puVar1->field3_0xc = 0;
		puVar1->field4_0x10 = 0;
		puVar1->pool = this;
		}
		this->field24_0x205c = puVar1;
		this->field3_0xc = 0;
		this->field4_0x10 = 0;
		this->field5_0x14 = 0;
		this->field6_0x18 = 0;
		this->field7_0x1c = 0;
		this->field8_0x20 = 0;
		this->field9_0x24 = 0;
		this->field10_0x28 = 0;
		this->field11_0x2c = 0;
		this->field12_0x30 = 0;
		this->field13_0x34 = 0;
		this->field14_0x38 = 0;
		this->field15_0x3c = 0;
		this->field16_0x40 = 0;
		this->field17_0x44 = 0;
		this->field18_0x48 = 0;
		return this;
		}
		
	*/
	return;
}

void PhysicalPool::FUN_001599b0(PhysicalPoolElement* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall PhysicalPool::FUN_001599b0(PhysicalPool *this,PhysicalPoolElement *element){
		PhysicalPoolElement *pPVar1;
		uint uVar2;
		this->field19_0x4c = this->field19_0x4c + -1;
		uVar2 = AlignUnknown(element->length);
		PhysicalPoolElement::FUN_00156ae0(element,this->memoryArena + (uVar2 - 0x14),0x14,0x18);
		if (element == (PhysicalPoolElement *)this->field2_0x8) {
		this->field2_0x8 = 0;
		for (pPVar1 = this->memoryArena[uVar2 - 0x14];
		 pPVar1 != (PhysicalPoolElement *)0x0;
		pPVar1 = pPVar1->next2) {
		if ((this->field2_0x8 == 0) || (pPVar1->alignedStart < *(void **)(this->field2_0x8 + 4))) {
		this->field2_0x8 = pPVar1;
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void PhysicalPool::InitPool(void* baseAddress, size_t size) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall PhysicalPool::InitPool(PhysicalPool *this,void *baseAddress,size_t size){
		PhysicalPoolElement *poolElement;
		void *alignedStart;
		size_t alignedSize;
		alignedStart = (void *)((int)baseAddress + 0x7fU & 0xffffff80);
		this->alignedStart = alignedStart;
		this->alignedSize = (int)baseAddress + (size - (int)alignedStart) & 0xffffff80;
		poolElement = (PhysicalPoolElement *)VirtualPool::AllocateMemory(0x28);
		if (poolElement == (PhysicalPoolElement *)0x0) {
		poolElement = (PhysicalPoolElement *)0x0;
		}
		else {
		poolElement->bufferIndex = -1;
		poolElement->alignedStart = (void *)0x0;
		poolElement->length = 0;
		poolElement->field3_0xc = 0;
		poolElement->field4_0x10 = 0;
		poolElement->field5_0x14 = 0;
		poolElement->next2 = (PhysicalPoolElement *)0x0;
		poolElement->next = (PhysicalPoolElement *)0x0;
		poolElement->prev = (PhysicalPoolElement *)0x0;
		poolElement->field9_0x24 = poolElement->field9_0x24 & 0xfffc4000 | 0x4000;
		}
		poolElement->alignedStart = this->alignedStart;
		alignedSize = this->alignedSize;
		poolElement->field9_0x24 = poolElement->field9_0x24 & 0xfffffff1 | 1;
		poolElement->length = alignedSize;
		PhysicalPoolElement::Init(poolElement);
		if (this->listTail == (PhysicalPoolElement *)0x0) {
		this->listTail = poolElement;
		poolElement->next = (PhysicalPoolElement *)0x0;
		poolElement->prev = (PhysicalPoolElement *)0x0;
		this->alignedEnd = (void *)(this->alignedSize + (int)this->alignedStart);
		return;
		}
		this->listTail->next = poolElement;
		poolElement->prev = this->listTail;
		this->listTail = poolElement;
		this->alignedEnd = (void *)(this->alignedSize + (int)this->alignedStart);
		return;
		}
		
	*/
	return;
}

void* PhysicalPool::Allocate(uint* length) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void * __thiscall PhysicalPool::Allocate(PhysicalPool *this,uint *length){
		PhysicalPoolElement *pPVar1;
		for (pPVar1 = this->memoryArena[*length & 0x7ff];
		 pPVar1 != (PhysicalPoolElement *)0x0;
		pPVar1 = (PhysicalPoolElement *)pPVar1->field4_0x10) {
		if (*length == pPVar1->bufferIndex) goto LAB_00159b12;
		}
		pPVar1 = (PhysicalPoolElement *)0x0;
		LAB_00159b12:return pPVar1->alignedStart;
		}
		
	*/
	return null;
}

int* PhysicalPool::GetBufferPointerByIndex(int* bufferIndex) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall PhysicalPool::GetBufferPointerByIndex(PhysicalPool *this,int *bufferIndex){
		uint uVar1;
		PhysicalPoolElement *pPVar2;
		for (pPVar2 = this->memoryArena[*bufferIndex & 0x7ff];
		 pPVar2 != (PhysicalPoolElement *)0x0;
		pPVar2 = (PhysicalPoolElement *)pPVar2->field4_0x10) {
		if (*bufferIndex == pPVar2->bufferIndex) goto LAB_00159b82;
		}
		pPVar2 = (PhysicalPoolElement *)0x0;
		LAB_00159b82:uVar1 = pPVar2->field9_0x24;
		if (((uVar1 & 0xf) != 0) && (((uVar1 >> 0xe & 1) != 0 || ((uVar1 & 0x18000) == 0x10000)))) {
		pPVar2->field9_0x24 = uVar1 | 0x4000;
		return (int *)pPVar2->alignedStart;
		}
		return (int *)0x0;
		}
		
	*/
	return null;
}

void PhysicalPool::FUN_0015ad70(PhysicalPoolElement* element) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall PhysicalPool::FUN_0015ad70(PhysicalPool *this,PhysicalPoolElement *element){
		PhysicalPoolElement *pPVar1;
		PhysicalPool *this_00;
		PhysicalPool *this_01;
		pPVar1 = element->next;
		if ((pPVar1 != (PhysicalPoolElement *)0x0) && (((byte)pPVar1->field9_0x24 & 0xf) == 1)) {
		FUN_001599b0(this,pPVar1);
		pPVar1->length = pPVar1->length + element->length;
		PhysicalPoolElement::FUN_0015a8f0(pPVar1);
		FUN_001599b0(this_00,element);
		PhysicalPoolElement::FUN_00156ae0(element,&this->listTail,0x1c,0x20);
		VirtualPool::FreeMemory(element);
		element = pPVar1;
		}
		pPVar1 = element->prev;
		if ((pPVar1 != (PhysicalPoolElement *)0x0) && (((byte)pPVar1->field9_0x24 & 0xf) == 1)) {
		FUN_001599b0(this,element);
		element->length = element->length + pPVar1->length;
		PhysicalPoolElement::FUN_0015a8f0(element);
		FUN_001599b0(this_01,pPVar1);
		PhysicalPoolElement::FUN_00156ae0(pPVar1,&this->listTail,0x1c,0x20);
		VirtualPool::FreeMemory(pPVar1);
		}
		return;
		}
		
	*/
	return;
}

PhysicalPoolElement* PhysicalPool::FUN_0015ae10(uint len) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PhysicalPoolElement * __thiscall PhysicalPool::FUN_0015ae10(PhysicalPool *this,uint len){
		PhysicalPoolElement **ppPVar1;
		size_t sVar2;
		uint uVar3;
		PhysicalPoolElement *pPVar4;
		int length;
		PhysicalPoolElement *puVar4;
		PhysicalPoolElement **elementArray;
		PhysicalPoolElement *this_00;
		PhysicalPoolElement *element;
		length = AlignUnknown(len);
		if (length < 0x10) {
		elementArray = this->memoryArena + length + -0x14;
		do {
		for (element = *elementArray;
		 element != (PhysicalPoolElement *)0x0;
		 element = element->next2){
		if (len <= element->length) {
		sVar2 = element->length;
		if (sVar2 == len) {
		element->field9_0x24 = element->field9_0x24 & 0xfffc7ff2 | 0x4002;
		FUN_001599b0(this,element);
		uVar3 = this->field22_0x58;
		this->field22_0x58 = uVar3 + 1;
		element->bufferIndex = uVar3;
		ppPVar1 = this->memoryArena + (uVar3 & 0x7ff);
		if (this->memoryArena[uVar3 & 0x7ff] != (PhysicalPoolElement *)0x0) {
		this->memoryArena[uVar3 & 0x7ff]->field3_0xc = element;
		element->field4_0x10 = *ppPVar1;
		*ppPVar1 = element;
		return element;
		}
		*ppPVar1 = element;
		element->field3_0xc = 0;
		element->field4_0x10 = 0;
		return element;
		}
		FUN_001599b0(this,element);
		element->field9_0x24 = element->field9_0x24 & 0xfffc7ff2 | 0x4002;
		element->length = len;
		uVar3 = this->field22_0x58;
		this->field22_0x58 = uVar3 + 1;
		element->bufferIndex = uVar3;
		ppPVar1 = this->memoryArena + (uVar3 & 0x7ff);
		if (this->memoryArena[uVar3 & 0x7ff] == (PhysicalPoolElement *)0x0) {
		*ppPVar1 = element;
		element->field3_0xc = 0;
		element->field4_0x10 = 0;
		}
		else {
		this->memoryArena[uVar3 & 0x7ff]->field3_0xc = element;
		element->field4_0x10 = *ppPVar1;
		*ppPVar1 = element;
		}
		puVar4 = (PhysicalPoolElement *)VirtualPool::AllocateMemory(0x28);
		this_00 = (PhysicalPoolElement *)0x0;
		if (puVar4 != (PhysicalPoolElement *)0x0) {
		puVar4->alignedStart = (void *)0x0;
		puVar4->length = 0;
		puVar4->field3_0xc = 0;
		puVar4->field4_0x10 = 0;
		puVar4->field5_0x14 = 0;
		puVar4->next2 = (PhysicalPoolElement *)0x0;
		puVar4->next = (PhysicalPoolElement *)0x0;
		puVar4->prev = (PhysicalPoolElement *)0x0;
		puVar4->bufferIndex = -1;
		puVar4->field9_0x24 = puVar4->field9_0x24 & 0xfffc4000 | 0x4000;
		this_00 = puVar4;
		}
		this_00->alignedStart = (void *)((int)element->alignedStart + len);
		this_00->length = sVar2 - len;
		this_00->field9_0x24 = this_00->field9_0x24 & 0xfffffff1 | 1;
		this_00->bufferIndex = -2;
		PhysicalPoolElement::FUN_0015a8f0(this_00);
		pPVar4 = element->prev;
		element->prev = this_00;
		this_00->next = element;
		if (pPVar4 != (PhysicalPoolElement *)0x0) {
		pPVar4->next = this_00;
		this_00->prev = pPVar4;
		return element;
		}
		this_00->prev = (PhysicalPoolElement *)0x0;
		return element;
		}
		}
		length = length + 1;
		elementArray = elementArray + 1;
		}
		 while (length < 0x10);
		}
		return (PhysicalPoolElement *)0x0;
		}
		
	*/
	return null;
}

void PhysicalPool::CreateBuffer(int* bufferOut, uint length, bool param_3, bool param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall PhysicalPool::CreateBuffer(PhysicalPool *this,int *bufferOut,uint length,bool param_3,bool param_4){
		PhysicalPoolElement *pPVar1;
		pPVar1 = FUN_0015ae10(this,length + 0x7f & 0xffffff80);
		if (param_3 != false) {
		pPVar1->field9_0x24 = pPVar1->field9_0x24 & 0xfffebfff | 0x8000;
		}
		pPVar1->field9_0x24 =pPVar1->field9_0x24 ^ ((uint)param_4 << 0x11 ^ pPVar1->field9_0x24) & 0x20000;
		*bufferOut = pPVar1->bufferIndex;
		return;
		}
		
	*/
	return;
}

void PhysicalPool::FUN_0015b050() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __fastcall PhysicalPool::FUN_0015b050(PhysicalPool *this){
		PhysicalPoolElement *pPVar1;
		PhysicalPoolElement *this_00;
		uint uVar2;
		PhysicalPoolElement **ppPVar3;
		PhysicalPool *this_01;
		int *piVar4;
		PhysicalPoolElement *ptr;
		int iVar5;
		int local_8;
		local_8 = this->field26_0x2064;
		if (local_8 < 0x11) {
		iVar5 = local_8;
		if (local_8 < 1) goto LAB_0015b07e;
		}
		else {
		iVar5 = 0x10;
		}
		this->field26_0x2064 = local_8 - iVar5;
		local_8 = iVar5;
		LAB_0015b07e:ptr = (PhysicalPoolElement *)this->field25_0x2060;
		piVar4 = &this->field25_0x2060;
		if (0 < local_8) {
		do {
		pPVar1 = (PhysicalPoolElement *)ptr->length;
		this_00 = (PhysicalPoolElement *)ptr->bufferIndex;
		FUN_00156d00((int)ptr,piVar4,4,8);
		VirtualPool::FreeMemory(ptr);
		uVar2 = this_00->field9_0x24;
		switch(uVar2 & 0xf) {
		case 5:iVar5 = (uVar2 >> 4 & 0x3ff) + 1;
		if (iVar5 == 2) {
		uVar2 = uVar2 & 0xfffffff6 | 6;
		goto LAB_0015b192;
		}
		uVar2 = uVar2 & 0xfffffff5 | 5;
		LAB_0015b10c:this_00->field9_0x24 = uVar2;
		ppPVar3 = (PhysicalPoolElement **)VirtualPool::AllocateMemory(0xc);
		if (ppPVar3 == (PhysicalPoolElement **)0x0) {
		ppPVar3 = (PhysicalPoolElement **)0x0;
		}
		else {
		*ppPVar3 = this_00;
		ppPVar3[2] = (PhysicalPoolElement *)0x0;
		ppPVar3[1] = (PhysicalPoolElement *)0x0;
		}
		if (*piVar4 == 0) {
		*piVar4 = (int)ppPVar3;
		ppPVar3[1] = (PhysicalPoolElement *)0x0;
		ppPVar3[2] = (PhysicalPoolElement *)0x0;
		}
		else {
		*(PhysicalPoolElement ***)(*piVar4 + 4) = ppPVar3;
		ppPVar3[2] = (PhysicalPoolElement *)*piVar4;
		*piVar4 = (int)ppPVar3;
		}
		this->field26_0x2064 = this->field26_0x2064 + 1;
		if (iVar5 != -1) {
		this_00->field9_0x24 = this_00->field9_0x24 ^ (iVar5 << 4 ^ this_00->field9_0x24) & 0x3ff0;
		}
		break;
		case 6:this_00->field9_0x24 = uVar2 & 0xfffffff1 | 1;
		PhysicalPoolElement::FUN_0015a8f0(this_00);
		FUN_0015ad70(this_01,this_00);
		break;
		case 7:iVar5 = (uVar2 >> 4 & 0x3ff) + 1;
		if (iVar5 != 2) {
		uVar2 = uVar2 & 0xfffffff7 | 7;
		goto LAB_0015b10c;
		}
		uVar2 = uVar2 & 0xfffffff8 | 8;
		LAB_0015b192:this_00->field9_0x24 = uVar2;
		ppPVar3 = (PhysicalPoolElement **)VirtualPool::AllocateMemory(0xc);
		if (ppPVar3 == (PhysicalPoolElement **)0x0) {
		ppPVar3 = (PhysicalPoolElement **)0x0;
		}
		else {
		*ppPVar3 = this_00;
		ppPVar3[2] = (PhysicalPoolElement *)0x0;
		ppPVar3[1] = (PhysicalPoolElement *)0x0;
		}
		if (*piVar4 == 0) {
		*piVar4 = (int)ppPVar3;
		ppPVar3[1] = (PhysicalPoolElement *)0x0;
		ppPVar3[2] = (PhysicalPoolElement *)0x0;
		}
		else {
		*(PhysicalPoolElement ***)(*piVar4 + 4) = ppPVar3;
		ppPVar3[2] = (PhysicalPoolElement *)*piVar4;
		*piVar4 = (int)ppPVar3;
		}
		this->field26_0x2064 = this->field26_0x2064 + 1;
		this_00->field9_0x24 = this_00->field9_0x24 & 0xffffc00f;
		break;
		case 8:FUN_0015aff0((int)this,(uint *)this_00);
		}
		local_8 = local_8 + -1;
		ptr = pPVar1;
		}
		 while (local_8 != 0);
		}
		return;
		}
		
	*/
	return;
}

void PhysicalPool::FreeBufferByIndex(void* ptr) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall PhysicalPool::FreeBufferByIndex(PhysicalPool *this,void *ptr){
		PhysicalPoolElement *pPVar1;
		 WARNING: Load size is inaccurate for (pPVar1 = this->memoryArena[*ptr & 0x7ff];
		 pPVar1 != (PhysicalPoolElement *)0x0;
		pPVar1 = (PhysicalPoolElement *)pPVar1->field4_0x10) {
		if (*ptr == pPVar1->bufferIndex) goto break;
		}
		pPVar1 = (PhysicalPoolElement *)0x0;
		break:if ((pPVar1->field9_0x24 >> 0x11 & 1) == 0) {
		FUN_0015bf80((int)this,(uint *)ptr);
		return;
		}
		FUN_0015c010((int)this,(uint *)ptr);
		return;
		}
		
	*/
	return;
}

bool PhysicalPool::FUN_0015c290(bool flag) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall PhysicalPool::FUN_0015c290(PhysicalPool *this,bool flag){
		PhysicalPoolSubStruct *this_00;
		bool bVar1;
		uint uVar2;
		undefined4 uVar3;
		if (flag != false) {
		bVar1 = PhysicalPoolSubStruct::FUN_0015bf00(this->field24_0x205c);
		return bVar1;
		}
		this_00 = this->field24_0x205c;
		if (this_00->field4_0x10 == 0) {
		uVar3 = FUN_0015bc40(this_00);
		if ((char)uVar3 != '\0') {
		this_00->field4_0x10 = 1;
		return true;
		}
		}
		else if (this_00->field4_0x10 == 1) {
		uVar2 = FUN_00158840((int *)this_00);
		if ((char)uVar2 == '\0') {
		PhysicalPoolSubStruct::FUN_0015bd90(this_00);
		}
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void PhysicalPool::UnkMethod2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PhysicalPool::UnkMethod2(PhysicalPool *this){
		bool bVar1;
		while( true ) {
		bVar1 = PhysicalPoolSubStruct::FUN_0015bf00(this->field24_0x205c);
		if ((bVar1 == false) && (this->field26_0x2064 == 0)) break;
		FUN_0015b050(this);
		}
		return;
		}
		
	*/
	return;
}

