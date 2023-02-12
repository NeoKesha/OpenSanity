#include "headers/Unknown/NonVirtualClasses/UNV007.h"

#include "headers/Known/Math/BoundingBox.h"
void UNV007::Construct(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UNV007 * __thiscall UNV007::Construct(UNV007 *this,undefined4 param_1,undefined4 param_2){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		this->field0_0x0 = param_1;
		this->field14_0x30 = fVar1;
		this->field15_0x34 = param_2;
		this->field17_0x3a = -1;
		this->field16_0x38 = 0;
		this->field18_0x3c = 0;
		this->field19_0x40 = 0;
		(this->bb).v1.x = Vector4_0039ef70.x;
		(this->bb).v1.y = Vector4_0039ef70.y;
		(this->bb).v1.z = Vector4_0039ef70.z;
		(this->bb).v1.w = Vector4_0039ef70.w;
		(this->bb).v2.x = Vector4_0039ef70.x;
		(this->bb).v2.y = Vector4_0039ef70.y;
		(this->bb).v2.z = Vector4_0039ef70.z;
		(this->bb).v2.w = Vector4_0039ef70.w;
		return this;
		}
		
	*/
	return;
}

void UNV007::FUN_001e2c60() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Function: __chkstk replaced with injection: alloca_probe void __fastcall UNV007::FUN_001e2c60(UNV007 *this){
		ushort uVar1;
		int iVar2;
		int iVar3;
		int *piVar4;
		void *notthis;
		uint **ppuVar5;
		uint *local_1000 [1023];
		undefined4 uStack4;
		uStack4 = 0x1e2c6a;
		iVar2 = *(int *)(this->field0_0x0 + 0xb0);
		iVar3 = FUN_001eadb0(iVar2,(float *)&this->bb,this->field15_0x34,(int)local_1000,0x400);
		piVar4 = FUN_001e8900(iVar2);
		this->field16_0x38 = (short)iVar3;
		FUN_001e2bd0((int)this,(short)iVar3 + 7 >> 3);
		if (this->field16_0x38 != 0) {
		notthis = (void *)(this->field19_0x40 + 0x10);
		this->field17_0x3a = 0;
		this->field18_0x3c = this->field19_0x40;
		if (notthis != (void *)0x0) {
		ppuVar5 = local_1000;
		do {
		FUN_001e81b0(notthis,*ppuVar5,(int)piVar4);
		ppuVar5 = ppuVar5 + 1;
		this->field17_0x3a = this->field17_0x3a + 1;
		uVar1 = this->field17_0x3a;
		if (uVar1 == this->field16_0x38) {
		return;
		}
		if ((uVar1 & 7) == 0) {
		this->field18_0x3c = *(undefined4 *)this->field18_0x3c;
		}
		notthis = (void *)((uVar1 & 7) * 0x40 + 0x10 + this->field18_0x3c);
		}
		 while (notthis != (void *)0x0);
		}
		}
		return;
		}
		
	*/
	return;
}

bool UNV007::FUN_001e2d20(BoundingBox* bb) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall UNV007::FUN_001e2d20(UNV007 *this,BoundingBox *bb){
		BoundingBox *other;
		bool bVar1;
		other = &this->bb;
		bVar1 = BoundingBox::IsSomething(bb,other);
		if (bVar1 != false) {
		return false;
		}
		(other->v1).x = (bb->v1).x;
		(this->bb).v1.y = (bb->v1).y;
		(this->bb).v1.z = (bb->v1).z;
		(this->bb).v1.w = (bb->v1).w;
		(this->bb).v2.x = (bb->v2).x;
		(this->bb).v2.y = (bb->v2).y;
		(this->bb).v2.z = (bb->v2).z;
		(this->bb).v2.w = (bb->v2).w;
		BoundingBox::Expand(other,this->field14_0x30);
		FUN_001e2c60(this);
		return true;
		}
		
	*/
	return false;
}

