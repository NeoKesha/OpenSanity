#include "headers/Known/Game/SaveSystem/SaveController/SaveControllerAbstract.h"

#include "headers/Unknown/CollectionUnk2/CollectionUnk2.h"
#include "headers/Known/Game/SaveSystem/SaveFile/SaveFileA.h"
#include "headers/Known/Game/SaveSystem/SaveFile/SaveFileC.h"
void SaveControllerAbstract::Construct(uint banks, CollectionUnk2* param_2, SaveFileA* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveControllerAbstract * __thiscall SaveControllerAbstract::Construct(SaveControllerAbstract *this,uint banks,CollectionUnk2 *param_2,SaveFileA *param_3){
		uint *puVar1;
		SaveFileC **ppSVar2;
		uint i;
		int *piVar3;
		this->vtable = (SaveController_VTable *)&SaveController_VT_Abstract;
		this->field4_0x10 = (int)(TicksPerTime * FLOAT_00386394);
		this->field5_0x14 = param_2;
		this->field6_0x18 = param_3;
		puVar1 = &this->field1_0x4;
		*puVar1 = 0;
		this->field2_0x8 = 0;
		*puVar1 = *puVar1 & 0xfc0fe0f0 | banks & 0xf | 0xe000;
		ppSVar2 = (SaveFileC **)VirtualPool::AllocateMemory(banks * 4);
		this->banks = ppSVar2;
		i = 0;
		if (banks != 0) {
		do {
		this->banks[i] = (SaveFileC *)0x0;
		i = i + 1;
		}
		 while (i < banks);
		}
		piVar3 = (int *)VirtualPool::AllocateMemory(banks << 3);
		this->array = piVar3;
		i = 0;
		if (banks * 2 != 0) {
		do {
		this->array[i] = 0;
		i = i + 1;
		}
		 while (i < banks * 2);
		}
		return this;
		}
		
	*/
	return;
}

void SaveControllerAbstract::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SaveControllerAbstract::Dispose(SaveControllerAbstract *this){
		this->vtable = (SaveController_VTable *)&SaveController_VT_Abstract;
		VirtualPool::FreeMemory(this->banks);
		VirtualPool::FreeMemory(this->array);
		return;
		}
		
	*/
	return;
}

void SaveControllerAbstract::Dispose_2(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall SaveControllerAbstract::Dispose(SaveControllerAbstract *this,byte param_1){
		this->vtable = (SaveController_VTable *)&SaveController_VT_Abstract;
		VirtualPool::FreeMemory(this->banks);
		VirtualPool::FreeMemory(this->array);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->vtable;
		}
		
	*/
	return;
}

