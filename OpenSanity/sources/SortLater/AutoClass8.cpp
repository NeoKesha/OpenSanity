#include "headers/SortLater/AutoClass8.h"

#include "headers/Known/Math/Vector4.h"
#include "headers/Unknown/AutoClasses/AutoClass40.h"
void AutoClass8::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	AutoClass8 * __fastcall AutoClass8::Construct(AutoClass8 *this){
		this->cap = 0;
		return this;
		}
		
	*/
	return;
}

AutoClass40* AutoClass8::Add(Vector4* vec1, Vector4* vec2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	AutoClass40 * __thiscall AutoClass8::Add(AutoClass8 *this,Vector4 *vec1,Vector4 *vec2){
		AutoClass40 *pAVar1;
		float *pfVar2;
		Vector4 *pfVar3;
		int cnt;
		AutoClass40 *this_00;
		Vector4 *pfVar4;
		int cap;
		cap = this->cap;
		cnt = 0;
		if (0 < cap) {
		pfVar2 = (float *)&this->field_0x18;
		do {
		if ((((pfVar2[-6] == vec1->x) && (pfVar2[-5] == vec1->y)) && (pfVar2[-4] == vec1->z)) &&(((pfVar2[-2] == vec2->x && (pfVar2[-1] == vec2->y)) && (*pfVar2 == vec2->z)))) break;
		cnt = cnt + 1;
		pfVar2 = pfVar2 + 8;
		}
		 while (cnt < this->cap);
		}
		if (cnt == cap) {
		pfVar3 = this->field0_0x0 + cap * 2;
		pfVar3->x = vec1->x;
		pfVar3->y = vec1->y;
		pfVar3->z = vec1->z;
		pfVar3->w = vec1->w;
		pfVar4 = this->field0_0x0 + this->cap * 2 + 1;
		pfVar4->x = vec2->x;
		pfVar4->y = vec2->y;
		pfVar4->z = vec2->z;
		pfVar4->w = vec2->w;
		pAVar1 = (AutoClass40 *)VirtualPool::AllocateMemory(0x20);
		this_00 = (AutoClass40 *)0x0;
		if (pAVar1 != (AutoClass40 *)0x0) {
		pAVar1->vectorArray = (Vector4 (*) [8])0x0;
		*(undefined4 *)pAVar1 = 0;
		*(undefined4 *)&pAVar1->field2_0x4 = 0;
		*(undefined4 *)&pAVar1->field4_0x8 = 0;
		*(undefined4 *)&pAVar1->offset2 = 0;
		*(undefined4 *)&pAVar1->offset4 = 0;
		pAVar1->offset6 = 0;
		pAVar1->field11_0x16 = 0;
		pAVar1->memoryLength = 0;
		this_00 = pAVar1;
		}
		(&this->field241_0x100)[this->cap] = this_00;
		AutoClass40::Set(this_00,vec1,vec2);
		this->cap = this->cap + 1;
		return this_00;
		}
		return (&this->field241_0x100)[cnt];
		}
		
	*/
	return null;
}

