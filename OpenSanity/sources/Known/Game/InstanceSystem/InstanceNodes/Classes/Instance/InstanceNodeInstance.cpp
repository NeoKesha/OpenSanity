#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Instance/InstanceNodeInstance.h"

#include "headers/Unknown/AutoClasses/AutoClass52.h"
#include "headers/Known/Game/Chunks/ChunkData.h"
uint InstanceNodeInstance::FUN_0016be20(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall InstanceNodeInstance::FUN_0016be20(InstanceNodeInstance *this,undefined4 *param_1){
		uint uVar1;
		uVar1 = (this->body).field50_0x84;
		if ((uVar1 >> 0xd & 1) != 0) {
		*param_1 = this[1].body.parent.field4_0xc;
		param_1[1] = this[1].body.parent.field5_0x10;
		param_1[2] = *(undefined4 *)&this[1].body.field_0x14;
		param_1[3] = *(undefined4 *)&this[1].body.field_0x18;
		return CONCAT31((int3)((uint)param_1 >> 8),1);
		}
		return (uVar1 >> 0x15) << 8;
		}
		
	*/
	return 0;
}

void InstanceNodeInstance::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstance::Dispose(InstanceNodeInstance *this){
		AutoClass52 *ptr;
		ptr = (this->body).field42_0x6c;
		(this->body).field43_0x70 = &(this->body).field41_0x3c;
		if (ptr != (AutoClass52 *)0x0) {
		TwinString::Dispose(&ptr->chunkName);
		VirtualPool::FreeMemory(ptr);
		}
		(this->body).field42_0x6c = (AutoClass52 *)0x0;
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstance::SetAC52Fields(AutoClass52* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstance::SetAC52Fields(InstanceNodeInstance *this,AutoClass52 *other){
		AutoClass52 *pAVar1;
		pAVar1 = (this->body).field42_0x6c;
		if (pAVar1 != (AutoClass52 *)0x0) {
		AutoClass52::Copy(pAVar1,other);
		(this->body).field43_0x70 = (this->body).field42_0x6c;
		return;
		}
		pAVar1 = (AutoClass52 *)VirtualPool::AllocateMemory(0x30);
		if (pAVar1 != (AutoClass52 *)0x0) {
		pAVar1 = AutoClass52::Cosntruct(pAVar1,other);
		(this->body).field42_0x6c = pAVar1;
		(this->body).field43_0x70 = pAVar1;
		return;
		}
		(this->body).field42_0x6c = (AutoClass52 *)0x0;
		(this->body).field43_0x70 = (AutoClass52 *)0x0;
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstance::Dispose_3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstance::Dispose(InstanceNodeInstance *this){
		AutoClass52 *ptr;
		ptr = (this->body).field42_0x6c;
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance;
		if (ptr != (AutoClass52 *)0x0) {
		TwinString::Dispose(&ptr->chunkName);
		VirtualPool::FreeMemory(ptr);
		}
		TwinString::Dispose(&(this->body).field41_0x3c.chunkName);
		InstanceNodeAbstract::UnrollVtable((InstanceNodeAbstract *)this);
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstance::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeInstance * __fastcall InstanceNodeInstance::Construct(InstanceNodeInstance *this){
		AutoClass52 *this_00;
		InstanceNodeInstance_VTable *pIVar1;
		InstanceNodeAbstract::Contruct((InstanceNodeAbstract *)this);
		this_00 = &(this->body).field41_0x3c;
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance;
		AutoClass52::Construct(this_00,(ChunkData *)0x0);
		(this->body).field43_0x70 = this_00;
		(this->body).field42_0x6c = (AutoClass52 *)0x0;
		(this->body).field45_0x78 = -1;
		pIVar1 = this->vtable;
		(this->body).field50_0x84 = 0;
		(*pIVar1->InstanceMethod1)(this,(undefined *)0x0);
		(this->body).field53_0x8a = -1;
		(this->body).field45_0x78 = -1;
		(this->body).field54_0x8c = 0;
		(this->body).field55_0x90 = 0;
		(this->body).field56_0x94 = 0;
		(this->body).field51_0x88 = -1;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeInstance::FUN_00177380(float param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall InstanceNodeInstance::FUN_00177380(InstanceNodeInstance *this,float param_1){
		Vector4 *pVVar1;
		float fVar2;
		float fVar3;
		InstanceTransform *pIVar4;
		uint uVar5;
		int iVar6;
		float fVar7;
		float fVar8;
		float local_20;
		float local_1c;
		float local_18;
		float local_14;
		pVVar1 = &this[1].body.field61_0x9c;
		if (pVVar1->x <= 0.0 && pVVar1->x != 0.0) {
		uVar5 = (uint)(byte)this[1].body.field_0x98;
		iVar6 = FUN_000d4380(uVar5,((byte)this[1].body.field_0x99 - uVar5) + 1);
		uVar5 = InstanceContext::FUN_0018f1e0((InstanceContext *)this,(ushort)iVar6);
		if ((ushort)uVar5 != 0xffff) {
		fVar7 = SQRT(param_1) * _DAT_00393d90 + FLOAT_0038a828;
		iVar6 = FUN_00177160();
		pIVar4 = (((this->body).parent.ctx)->parent).transform;
		if ((*(byte *)&pIVar4->field3_0x60 & 4) != 0) {
		fVar8 = (pIVar4->matrix).m44;
		fVar2 = (pIVar4->matrix).m43;
		fVar3 = (pIVar4->matrix).m42;
		(pIVar4->position).x = (pIVar4->matrix).m41;
		(pIVar4->position).y = fVar3;
		(pIVar4->position).z = fVar2;
		(pIVar4->position).w = fVar8;
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffffa);
		}
		local_20 = (pIVar4->position).x;
		local_1c = (pIVar4->position).y;
		local_18 = (pIVar4->position).z;
		local_14 = (pIVar4->position).w;
		fVar8 = FUN_000d4420(0.07);
		FUN_00133d40((ushort)uVar5,0,(int)(((this->body).parent.ctx)->parent).chunkData,&local_20,(uint)fVar7,(uint)(fVar8 + FLOAT_0038639c),iVar6,-1);
		}
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstance::Construct_6(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeInstance * __thiscall InstanceNodeInstance::Construct(InstanceNodeInstance *this,int param_1){
		AutoClass52 *this_00;
		InstanceNodeInstance_VTable *pIVar1;
		ChunkData *pCVar2;
		InstanceNodeAbstract::Contruct((InstanceNodeAbstract *)this);
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance;
		if (*(ChunkData ***)(param_1 + 0x14) == (ChunkData **)0x0) {
		pCVar2 = (ChunkData *)0x0;
		}
		else {
		pCVar2 = **(ChunkData ***)(param_1 + 0x14);
		}
		this_00 = &(this->body).field41_0x3c;
		AutoClass52::Construct(this_00,pCVar2);
		(this->body).field43_0x70 = this_00;
		(this->body).field42_0x6c = (AutoClass52 *)0x0;
		(this->body).field45_0x78 = -1;
		pIVar1 = this->vtable;
		(this->body).field50_0x84 = 0;
		(*pIVar1->InstanceMethod1)(this,(undefined *)0x0);
		(this->body).field53_0x8a = -1;
		(this->body).field45_0x78 = -1;
		(this->body).field54_0x8c = 0;
		(this->body).field55_0x90 = 0;
		(this->body).field56_0x94 = 0;
		(this->body).field51_0x88 = -1;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeInstance::Construct_7(ChunkData* chunkData) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeInstance * __thiscall InstanceNodeInstance::Construct(InstanceNodeInstance *this,ChunkData *chunkData){
		AutoClass52 *this_00;
		InstanceNodeInstance_VTable *pIVar1;
		InstanceNodeAbstract::Contruct((InstanceNodeAbstract *)this);
		this_00 = &(this->body).field41_0x3c;
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance;
		AutoClass52::Construct(this_00,chunkData);
		(this->body).field43_0x70 = this_00;
		(this->body).field42_0x6c = (AutoClass52 *)0x0;
		(this->body).field45_0x78 = -1;
		pIVar1 = this->vtable;
		(this->body).field50_0x84 = 0;
		(*pIVar1->InstanceMethod1)(this,(undefined *)0x0);
		(this->body).field53_0x8a = -1;
		(this->body).field45_0x78 = -1;
		(this->body).field54_0x8c = 0;
		(this->body).field55_0x90 = 0;
		(this->body).field56_0x94 = 0;
		(this->body).field51_0x88 = -1;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeInstance::Dispose_8(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeInstance * __thiscall InstanceNodeInstance::Dispose(InstanceNodeInstance *this,byte param_1){
		AutoClass52 *ptr;
		ptr = (this->body).field42_0x6c;
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance;
		if (ptr != (AutoClass52 *)0x0) {
		TwinString::Dispose(&ptr->chunkName);
		VirtualPool::FreeMemory(ptr);
		}
		TwinString::Dispose(&(this->body).field41_0x3c.chunkName);
		InstanceNodeAbstract::UnrollVtable((InstanceNodeAbstract *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void InstanceNodeInstance::InstanceMethod1(void* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstance::InstanceMethod1(InstanceNodeInstance *this,undefined *param_1){
		int iVar1;
		if (param_1 == (undefined *)0x0) {
		(this->body).field44_0x74 = 0;
		(this->body).field49_0x80 = (ushort *)0x0;
		(this->body).field48_0x7c = 0;
		return;
		}
		(this->body).field44_0x74 = *(int *)(param_1 + 0x18);
		iVar1 = *(int *)(param_1 + 0x1c);
		(this->body).field49_0x80 = (ushort *)param_1;
		(this->body).field48_0x7c = iVar1;
		return;
		}
		
	*/
	return;
}

uint InstanceNodeInstance::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodeInstance::GetBuilderIndex(void){
		return 0x180d;
		}
		
	*/
	return 0;
}

byte InstanceNodeInstance::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte InstanceNodeInstance::GetIndex(void){
		return 1;
		}
		
	*/
	return 0;
}

bool InstanceNodeInstance::InstanceMethod7() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodeInstance::InstanceMethod7(void){
		return false;
		}
		
	*/
	return false;
}

void InstanceNodeInstance::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeInstance::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstance::EmptyFunction_14() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeInstance::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstance::EmptyFunction_15() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeInstance::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstance::EmptyFunction_16() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeInstance::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstance::EmptyFunction_17() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeInstance::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

bool InstanceNodeInstance::InstanceMethod16() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodeInstance::InstanceMethod16(void){
		return true;
		}
		
	*/
	return false;
}

bool InstanceNodeInstance::InstanceMethod18() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodeInstance::InstanceMethod18(void){
		return false;
		}
		
	*/
	return false;
}

bool InstanceNodeInstance::InstanceMethod19() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodeInstance::InstanceMethod19(void){
		return false;
		}
		
	*/
	return false;
}

bool InstanceNodeInstance::InstanceMethod20() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodeInstance::InstanceMethod20(void){
		return false;
		}
		
	*/
	return false;
}

void InstanceNodeInstance::EmptyFunction_22() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeInstance::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstance::EmptyFunction_23() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeInstance::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstance::EmptyFunction_24() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeInstance::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstance::EmptyFunction_25() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeInstance::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

bool InstanceNodeInstance::InstanceMethod25() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodeInstance::InstanceMethod25(void){
		return false;
		}
		
	*/
	return false;
}

bool InstanceNodeInstance::InstanceMethod26() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodeInstance::InstanceMethod26(void){
		return false;
		}
		
	*/
	return false;
}

bool InstanceNodeInstance::InstanceMethod27() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodeInstance::InstanceMethod27(void){
		return false;
		}
		
	*/
	return false;
}

bool InstanceNodeInstance::InstanceMethod28() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodeInstance::InstanceMethod28(void){
		return false;
		}
		
	*/
	return false;
}

bool InstanceNodeInstance::IsF() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodeInstance::IsF(void){
		return false;
		}
		
	*/
	return false;
}

bool InstanceNodeInstance::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodeInstance::IsD(void){
		return false;
		}
		
	*/
	return false;
}

bool InstanceNodeInstance::IsE() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodeInstance::IsE(void){
		return false;
		}
		
	*/
	return false;
}

void InstanceNodeInstance::InstanceMethod21() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstance::InstanceMethod21(InstanceNodeInstance *this){
		(**(code **)(*(int *)(this->body).field49_0x80 + 0x1c))();
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstance::Method5(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstance::Method5(InstanceNodeInstance *this,uint param_1){
		AutoClass52 *ptr;
		if (param_1 < 2) {
		ptr = (this->body).field42_0x6c;
		(this->body).field43_0x70 = &(this->body).field41_0x3c;
		if (ptr != (AutoClass52 *)0x0) {
		TwinString::Dispose(&ptr->chunkName);
		VirtualPool::FreeMemory(ptr);
		}
		(this->body).field42_0x6c = (AutoClass52 *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstance::DisposeSomething(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstance::DisposeSomething(InstanceNodeInstance *this,int **param_1){
		ushort uVar1;
		InstanceContext *this_00;
		int **ppiVar2;
		uint *puVar3;
		int *piVar4;
		(this->body).field50_0x84 = (this->body).field50_0x84 | 0x20;
		if (param_1 == (int **)0x0) {
		piVar4 = (int *)0x0;
		}
		else {
		piVar4 = *param_1;
		}
		uVar1 = *(ushort *)(piVar4 + 2);
		if (0xff < uVar1) {
		if (uVar1 < 0x102) {
		(**(code **)(**param_1 + 4))(this,GameResources);
		}
		else if (uVar1 == 0x103) {
		if (param_1 == (int **)0x0) {
		piVar4 = (int *)0x0;
		}
		else {
		piVar4 = *param_1;
		}
		piVar4 = (int *)piVar4[4];
		if (piVar4 != (int *)0x0) {
		piVar4 = (int *)*piVar4;
		}
		(this->body).field54_0x8c = piVar4;
		ppiVar2 = param_1;
		if (param_1 != (int **)0x0) {
		ppiVar2 = (int **)*param_1;
		}
		this_00 = (this->body).parent.ctx;
		(this->body).field53_0x8a = *(short *)((int)ppiVar2 + 10);
		puVar3 = InstanceContext::FUN_000f7220(this_00);
		(this->body).field55_0x90 = puVar3[1];
		if (*(char *)((this->body).field44_0x74 + 0xf) != '\0') {
		(*this->vtable->InstanceMethod8)(this,(this->body).field53_0x8a);
		InstanceNodeAbstract::UnkMethod1((undefined *)&param_1);
		return;
		}
		}
		}
		InstanceNodeAbstract::UnkMethod1((undefined *)&param_1);
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstance::EmptyFunction_36() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeInstance::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

byte InstanceNodeInstance::InstanceMethod12() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte InstanceNodeInstance::InstanceMethod12(void){
		return 0xff;
		}
		
	*/
	return 0;
}

void InstanceNodeInstance::EmptyFunction_38() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeInstance::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

byte InstanceNodeInstance::InstanceMethod14() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte InstanceNodeInstance::InstanceMethod14(void){
		return 0xff;
		}
		
	*/
	return 0;
}

void InstanceNodeInstance::EmptyFunction_40() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeInstance::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

