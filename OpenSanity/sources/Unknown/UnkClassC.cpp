#include "headers/Unknown/UnkClassC.h"

void UnkClassC::FUN_001e2940() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkClassC::FUN_001e2940(UnkClassC *this){
		float fVar1;
		InstanceContext *this_00;
		InstanceNodePhysics *pIVar2;
		uint uVar3;
		float fVar4;
		uint *puVar5;
		float fVar6;
		int cnt;
		int i;
		float fVar7;
		InstanceNodePhysics *apIStack1600 [200];
		float afStack800 [200];
		float *piVar3;
		int j;
		cnt = 0;
		i = 0;
		do {
		j = *(int *)(i + (int)this->arr1);
		if ((((j != 0) &&(this_00 = *(InstanceContext **)(j + 0x2e4), (~*(byte *)&(this_00->parent).flags & 1) != 0)) && (puVar5 = InstanceContext::FUN_000f7220(this_00), (*(byte *)puVar5 & 1) != 0)) &&(pIVar2 = *(InstanceNodePhysics **)(i + (int)this->arr1),((pIVar2->body).field1_0x14 >> 3 & 1) == 0)) {
		uVar3 = puVar5[2];
		apIStack1600[cnt] = pIVar2;
		afStack800[cnt] = (float)uVar3 * TimePerTick1;
		cnt = cnt + 1;
		}
		i = i + 4;
		}
		 while (i < 800);
		j = 0;
		if (0 < cnt) {
		do {
		piVar3 = (float *)apIStack1600[j];
		fVar6 = piVar3[0x19];
		fVar1 = afStack800[j];
		fVar7 = (float)(int)fVar6;
		piVar3[0x85] = 0.0;
		piVar3[6] = (float)((uint)piVar3[6] & 0xffffffeb);
		piVar3[0xb8] = (float)((uint)piVar3[0xb8] & 0xffffffc7);
		piVar3[0xd0] = Vector4_0039ef70.x;
		piVar3[0xd1] = Vector4_0039ef70.y;
		piVar3[0xd2] = Vector4_0039ef70.z;
		fVar4 = FLOAT_0038639c;
		piVar3[0xd3] = FLOAT_0038639c;
		piVar3[0xd4] = Vector4_0039ef70.x;
		piVar3[0xd5] = Vector4_0039ef70.y;
		piVar3[0xd6] = Vector4_0039ef70.z;
		piVar3[0xd7] = fVar4;
		piVar3[0xd8] = 0.0;
		if (0 < (int)fVar6) {
		do {
		FUN_001dfe20((int)piVar3,fVar1 / fVar7);
		(**(code **)((int)*piVar3 + 0x30))();
		(**(code **)((int)*piVar3 + 0x2c))();
		fVar6 = (float)((int)fVar6 + -1);
		piVar3[0x58] = piVar3[0x54];
		piVar3[0x59] = piVar3[0x55];
		piVar3[0x5a] = piVar3[0x56];
		piVar3[0x5b] = piVar3[0x57];
		}
		 while (fVar6 != 0.0);
		}
		j = j + 1;
		}
		 while (j < cnt);
		}
		j = 0;
		if (0 < cnt) {
		do {
		pIVar2 = apIStack1600[j];
		FUN_001dc070(pIVar2,afStack800[j]);
		InstanceNodePhysics::FUN_001df330(pIVar2);
		(pIVar2->body).field41_0x1bc.x = Vector4_0039ef70.x;
		(pIVar2->body).field41_0x1bc.y = Vector4_0039ef70.y;
		(pIVar2->body).field41_0x1bc.z = Vector4_0039ef70.z;
		fVar1 = FLOAT_0038639c;
		(pIVar2->body).field41_0x1bc.w = FLOAT_0038639c;
		(pIVar2->body).field42_0x1cc.x = Vector4_0039ef70.x;
		(pIVar2->body).field42_0x1cc.y = Vector4_0039ef70.y;
		(pIVar2->body).field42_0x1cc.z = Vector4_0039ef70.z;
		(pIVar2->body).field42_0x1cc.w = fVar1;
		FUN_001dbde0((int *)pIVar2);
		j = j + 1;
		}
		 while (j < cnt);
		}
		return;
		}
		
	*/
	return;
}

UnkClassC::UnkClassC() {
	int* piVar1;
	short* psVar2;
	int i;
	this->arr1length = 200;
	this->arr1 = new void* [this->arr1length];
	this->arr2length = 200;
	this->arr2 = new short[this->arr2length];
	i = 0;
	do {
		this->arr1[i] = 0;
		this->arr2[i] = (short)i;
		i = i + 1;
	} while (i < 200);
	this->field4_0x10 = (void*)0x0;
}

