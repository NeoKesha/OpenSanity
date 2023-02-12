#include "headers/Unknown/NonVirtualClasses/UNV006.h"

void UNV006::Init() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UNV006::Init(UNV006 *this){
		Vector4 *pVVar1;
		Vector4 *vec;
		int index;
		uint i;
		i = 0;
		vec = this->field14_0x20;
		if (SOME_VEC_ARRAY_CNT != 0) {
		index = 0;
		do {
		vec->x = *(float *)((int)&SOME_VEC_ARRAY[0].x + index);
		vec->y = *(float *)((int)&SOME_VEC_ARRAY[0].y + index);
		vec->z = *(float *)((int)&SOME_VEC_ARRAY[0].z + index);
		pVVar1 = (Vector4 *)&vec->w;
		if (DAT_003eb3d4 != 0) {
		vec->w = *(float *)((int)&DAT_003eb738 + index);
		vec[1].x = *(float *)((int)&DAT_003eb73c + index);
		vec[1].y = *(float *)((int)&DAT_003eb740 + index);
		pVVar1 = (Vector4 *)&vec[1].z;
		}
		vec = pVVar1;
		if (DAT_003a97e0 != 0) {
		vec->x = *(float *)((int)&DAT_003ea810 + index);
		vec = (Vector4 *)&vec->y;
		}
		if (DAT_003eb728 != 0) {
		vec->x = *(float *)((int)&DAT_003ec148 + index);
		vec->y = *(float *)((int)&DAT_003ec14c + index);
		vec = (Vector4 *)&vec->z;
		}
		i = i + 1;
		index = index + 0x10;
		}
		 while (i < SOME_VEC_ARRAY_CNT);
		}
		this->field7_0x10 = SOME_VEC_ARRAY_CNT;
		this->field9_0x18 = 2;
		this->field8_0x14 = 0xc;
		if (DAT_003eb3d4 != 0) {
		this->field9_0x18 = 0x12;
		this->field8_0x14 = 0x18;
		}
		if (DAT_003a97e0 != 0) {
		this->field9_0x18 = this->field9_0x18 | 0x40;
		this->field8_0x14 = this->field8_0x14 + 4;
		}
		if (DAT_003eb728 != 0) {
		this->field8_0x14 = this->field8_0x14 + 8;
		}
		return;
		}
		
	*/
	return;
}

UNV006* UNV006::Create() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UNV006 * UNV006::Create(void){
		undefined4 uVar1;
		UNV006 *puVar2;
		UNV006 *extraout_ECX;
		puVar2 = (UNV006 *)VirtualPool::AllocateMemory(2464);
		if (puVar2 == (UNV006 *)0x0) {
		puVar2 = (UNV006 *)0x0;
		}
		else {
		puVar2->field2_0x8 = 0;
		puVar2->field_0xc = 0;
		puVar2->field_0xd = 0;
		puVar2->field0_0x0 = 0;
		puVar2->field1_0x4 = 0;
		}
		if (SOME_VEC_ARRAY_CNT != 0) {
		Init(puVar2);
		puVar2 = extraout_ECX;
		}
		puVar2->field0_0x0 = MaterialShader;
		uVar1 = DAT_003eb468;
		puVar2->field2_0x8 = 0;
		puVar2->field1_0x4 = uVar1;
		return puVar2;
		}
		
	*/
	return null;
}

