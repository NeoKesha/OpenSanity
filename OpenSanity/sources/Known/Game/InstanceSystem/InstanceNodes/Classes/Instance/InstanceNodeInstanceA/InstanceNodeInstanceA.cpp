#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Instance/InstanceNodeInstanceA/InstanceNodeInstanceA.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/Known/Time/UnkTimePack.h"
void InstanceNodeInstanceA::Init() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstanceA::Init(InstanceNodeInstanceA *this){
		float fVar1;
		int iVar2;
		(this->body).parent.field61_0x9c.x =(float)((uint)(this->body).parent.field61_0x9c.x & 0xfffffc04 | 4);
		(this->body).parent.field61_0x9c.y = 0.0;
		fVar1 = DAT_003cff78;
		iVar2 = (int)DAT_003cff78 + 8;
		if (0x2f < (int)DAT_003cff78 + 8) {
		iVar2 = (int)DAT_003cff78 + -0x28;
		}
		DAT_003cff78 = (float)iVar2;
		(this->body).parent.field61_0x9c.w = fVar1;
		(this->body).parent.vec2.x = Vector4_0039ef70.x;
		(this->body).parent.vec2.y = Vector4_0039ef70.y;
		(this->body).parent.vec2.z = Vector4_0039ef70.z;
		(this->body).parent.vec2.w = FLOAT_0038639c;
		(this->body).parent.field61_0x9c.z = 0.0;
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceA::InstanceMethod15(float* param_1, float param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstanceA::InstanceMethod15(InstanceNodeInstanceA *this,float *param_1,float param_2){
		uint *puVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		InstanceTransform *pIVar5;
		InstanceNodePhysicsA *this_00;
		float fStack32;
		float fStack28;
		float fStack24;
		float fStack20;
		fVar2 = FLOAT_00386394;
		(this->body).parent.vec2.x = *param_1;
		(this->body).parent.vec2.y = param_1[1];
		(this->body).parent.vec2.z = param_1[2];
		(this->body).parent.vec2.w = param_1[3];
		if ((fVar2 < param_2) && ((this->body).parent.field61_0x9c.z == 0.0)) {
		(*this->vtable->IsD)();
		this_00 = FUN_001e5dc0(PTR_003e6bf4,(this->body).parent.parent.ctx,'\x01');
		(this->body).parent.field61_0x9c.z = (float)this_00;
		InstanceNodePhysics::InitStuff((InstanceNodePhysics *)this_00,1.0,1.0,1.0,1.0);
		*(float *)((int)(this->body).parent.field61_0x9c.z + 0x24) = FLOAT_0038a764;
		*(float *)((int)(this->body).parent.field61_0x9c.z + 0x28) = FLOAT_0038a760;
		FUN_001dbc80((int)(this->body).parent.field61_0x9c.z,0x3e99999a);
		FUN_001dbcc0((int)(this->body).parent.field61_0x9c.z,0x3f800000);
		pIVar5 = (((this->body).parent.parent.ctx)->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar2 = (pIVar5->matrix).m44;
		fVar3 = (pIVar5->matrix).m43;
		fVar4 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar4;
		(pIVar5->position).z = fVar3;
		(pIVar5->position).w = fVar2;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		fVar3 = FLOAT_00386618;
		fStack32 = (pIVar5->position).x;
		fStack24 = (pIVar5->position).z;
		fStack28 = (pIVar5->position).y + FLOAT_00386ab4;
		fStack20 = (pIVar5->position).w;
		fVar2 = (this->body).parent.field61_0x9c.z;
		*(undefined *)((int)fVar2 + 0x390) = 0;
		*(float *)((int)fVar2 + 0x380) = fVar3;
		FUN_001e0260((int)(this->body).parent.field61_0x9c.z,param_1,&fStack32);
		puVar1 = &(this->body).parent.field50_0x84;
		*puVar1 = *puVar1 | 4;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceA::UpdateTime() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstanceA::UpdateTime(InstanceNodeInstanceA *this){
		int unaff_retaddr;
		(*this->vtable->InstanceMethod2)((InstanceNodeInstance *)this);
		AutoClass52::FUN_000fb0b0(&(this->body).parent.field41_0x3c,(this->body).parent.parent.ctx);
		(this->body).parent.parent.time = *(uint *)(unaff_retaddr + 4);
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceA::InstanceMethod12(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstanceA::InstanceMethod12(InstanceNodeInstanceA *this,undefined4 *param_1){
		InstanceNodeInstanceASub *pvVar1;
		InstanceNodeInstanceASub *pIVar1;
		if ((this->body).parent.field61_0x9c.y == 0.0) {
		pvVar1 = (InstanceNodeInstanceASub *)VirtualPool::AllocateMemory(0x6c);
		if (pvVar1 == (InstanceNodeInstanceASub *)0x0) {
		pIVar1 = (InstanceNodeInstanceASub *)0x0;
		}
		else {
		pIVar1 = InstanceNodeInstanceASub::FUN_00176000(pvVar1);
		}
		(this->body).parent.field61_0x9c.y = (float)pIVar1;
		}
		InstanceNodeInstanceASub::FUN_00170550((InstanceNodeInstanceASub *)(this->body).parent.field61_0x9c.y,param_1);
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceA::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeInstanceA * __fastcall InstanceNodeInstanceA::Construct(InstanceNodeInstanceA *this){
		InstanceNodeInstance::Construct((InstanceNodeInstance *)this);
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance_A;
		Init(this);
		return this;
		}
		
	*/
	return;
}

bool InstanceNodeInstanceA::IsE() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall InstanceNodeInstanceA::IsE(InstanceNodeInstanceA *this){
		Matrix4 local_50;
		Matrix4::Construct1(&local_50);
		FUN_000d80e0((int)&local_50,&(this->body).parent.field41_0x3c.vec2.x);
		AutoClass2::FUN_0013dff0(&(((this->body).parent.parent.ctx)->parent).field14_0x20,&local_50);
		(this->body).parent.vec2.x = Vector4_0039ef70.x;
		(this->body).parent.vec2.y = Vector4_0039ef70.y;
		(this->body).parent.vec2.z = Vector4_0039ef70.z;
		(this->body).parent.vec2.w = FLOAT_0038639c;
		return true;
		}
		
	*/
	return false;
}

void InstanceNodeInstanceA::InstanceMethod2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstanceA::InstanceMethod2(InstanceNodeInstanceA *this){
		uint *puVar1;
		InstanceNodePhysics *node;
		InstanceNodeInstance_VTable *pIVar2;
		(*this->vtable->InstanceMethod13)((InstanceNodeInstance *)this);
		node = (InstanceNodePhysics *)(this->body).parent.field61_0x9c.z;
		if (node != (InstanceNodePhysics *)0x0) {
		FUN_001dde00(PTR_003e6bf4,node);
		(this->body).parent.field61_0x9c.z = 0.0;
		}
		puVar1 = &(this->body).parent.field50_0x84;
		*puVar1 = *puVar1 & 0xfffffffb;
		(this->body).parent.vec2.x = Vector4_0039ef70.x;
		(this->body).parent.vec2.y = Vector4_0039ef70.y;
		(this->body).parent.vec2.z = Vector4_0039ef70.z;
		(this->body).parent.vec2.w = FLOAT_0038639c;
		pIVar2 = this->vtable;
		(this->body).parent.field61_0x9c.x =(float)((uint)(this->body).parent.field61_0x9c.x & 0xfffffc04 | 4);
		(this->body).parent.field63_0xbc = 0;
		(*pIVar2->IsE)();
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceA::InstanceMethod13() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstanceA::InstanceMethod13(InstanceNodeInstanceA *this){
		void *ptr;
		ptr = (void *)(this->body).parent.field61_0x9c.y;
		if (ptr != (void *)0x0) {
		FUN_00170510((int)ptr);
		VirtualPool::FreeMemory(ptr);
		(this->body).parent.field61_0x9c.y = 0.0;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceA::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstanceA::Dispose(InstanceNodeInstanceA *this){
		uint *puVar1;
		InstanceNodePhysics *node;
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance_A;
		if (DAT_00491bc1 == '\0') {
		(*(code *)PTR_InstanceMethod13_0038aad4)();
		node = (InstanceNodePhysics *)(this->body).parent.field61_0x9c.z;
		if (node != (InstanceNodePhysics *)0x0) {
		FUN_001dde00(PTR_003e6bf4,node);
		(this->body).parent.field61_0x9c.z = 0.0;
		}
		puVar1 = &(this->body).parent.field50_0x84;
		*puVar1 = *puVar1 & 0xfffffffb;
		}
		InstanceNodeInstance::Dispose((InstanceNodeInstance *)this);
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceA::Dispose_9(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeInstanceA * __thiscall InstanceNodeInstanceA::Dispose(InstanceNodeInstanceA *this,byte param_1){
		uint *puVar1;
		InstanceNodePhysics *node;
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance_A;
		if (DAT_00491bc1 == '\0') {
		(*(code *)PTR_InstanceMethod13_0038aad4)();
		node = (InstanceNodePhysics *)(this->body).parent.field61_0x9c.z;
		if (node != (InstanceNodePhysics *)0x0) {
		FUN_001dde00(PTR_003e6bf4,node);
		(this->body).parent.field61_0x9c.z = 0.0;
		}
		puVar1 = &(this->body).parent.field50_0x84;
		*puVar1 = *puVar1 & 0xfffffffb;
		}
		InstanceNodeInstance::Dispose((InstanceNodeInstance *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

InstanceNodeInstanceA* InstanceNodeInstanceA::Cosntruct(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeInstanceA * __thiscall InstanceNodeInstanceA::Cosntruct(InstanceNodeInstanceA *this,int param_1){
		InstanceNodeInstance::Construct((InstanceNodeInstance *)this,param_1);
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance_A;
		Init(this);
		return this;
		}
		
	*/
	return null;
}

void InstanceNodeInstanceA::InstanceMethod1(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstanceA::InstanceMethod1(InstanceNodeInstanceA *this,int param_1){
		BlackboardAbstract *this_00;
		float fVar1;
		int iVar2;
		InstanceNodeInstance::InstanceMethod1((InstanceNodeInstance *)this,(undefined *)param_1);
		this_00 = (BlackboardAbstract *)(this->body).parent.field48_0x7c;
		if (this_00 != (BlackboardAbstract *)0x0) {
		iVar2 = BlackboardAbstract::GetIntValue(this_00,0);
		fVar1 = (this->body).parent.field61_0x9c.x;
		(this->body).parent.field61_0x9c.x = (float)((uint)fVar1 ^ (iVar2 << 10 ^ (uint)fVar1) & 0x7c00);
		}
		return;
		}
		
	*/
	return;
}

bool InstanceNodeInstanceA::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling bool __fastcall InstanceNodeInstanceA::IsD(InstanceNodeInstanceA *this){
		InstanceContext *pIVar1;
		Matrix4 *ptr;
		pIVar1 = (this->body).parent.parent.ctx;
		ptr = (pIVar1->parent).field14_0x20.matrix1;
		if (ptr != (Matrix4 *)0x0) {
		VirtualPool::FreeMemory(ptr);
		(pIVar1->parent).field14_0x20.matrix1 = (Matrix4 *)0x0;
		}
		return true;
		}
		
	*/
	return false;
}

void InstanceNodeInstanceA::SetCtx(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstanceA::SetCtx(InstanceNodeInstanceA *this,InstanceContext *ctx){
		AutoClass52::FUN_000f6ab0(&(this->body).parent.field41_0x3c,ctx,1);
		InstanceNodeAbstract::SetCtx((InstanceNodeAbstract *)this,ctx);
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceA::InstanceMethod0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstanceA::InstanceMethod0(InstanceNodeInstanceA *this){
		uint *puVar1;
		InstanceNodePhysics *node;
		if (DAT_00491bc1 == '\0') {
		(*this->vtable->InstanceMethod13)((InstanceNodeInstance *)this);
		node = (InstanceNodePhysics *)(this->body).parent.field61_0x9c.z;
		if (node != (InstanceNodePhysics *)0x0) {
		FUN_001dde00(PTR_003e6bf4,node);
		(this->body).parent.field61_0x9c.z = 0.0;
		}
		puVar1 = &(this->body).parent.field50_0x84;
		*puVar1 = *puVar1 & 0xfffffffb;
		}
		return;
		}
		
	*/
	return;
}

bool InstanceNodeInstanceA::Step(UnkTimePack* time) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeInstanceA::Step(InstanceNodeInstanceA *this,UnkTimePack *time){
		Vector4 *pVVar1;
		InstanceContext *pIVar2;
		float fVar3;
		float fVar4;
		bool bVar5;
		uint uVar6;
		uint uVar7;
		InstanceContext *pIVar8;
		if ((*(byte *)&time->flags & 1) == 0) goto switchD_00046582_caseD_3;
		pIVar2 = (this->body).parent.parent.ctx;
		uVar7 = (uint)(this->body).parent.parent.field2_0x6;
		uVar6 = pIVar2->field35_0x160 & 0xffffff;
		if ((uVar7 == 0xffff) || (uVar6 <= uVar7)) {
		LAB_0004654d:uVar6 = 0;
		}
		else {
		uVar6 = uVar6 - uVar7;
		if (uVar6 <= AI_DIST_SQR) goto LAB_0004654d;
		uVar6 = uVar6 - AI_DIST_SQR;
		if ((0x9c4 < uVar6) && (pIVar2->field36_0x164 != -1)) {
		pIVar8 = (InstanceContext *)PTR_00496350;
		if (PTR_00496350 != (InstanceContextRefCounter *)0x0) {
		pIVar8 = PTR_00496350->ctx;
		}
		if ((pIVar8->parent).chunkData == (pIVar2->parent).chunkData) {
		(*this->vtable->InstanceMethod0)((InstanceNodeInstance *)this);
		pIVar2 = (this->body).parent.parent.ctx;
		(*((pIVar2->parent).vtable)->Method2)(pIVar2);
		pVVar1 = &(this->body).parent.field61_0x9c;
		pVVar1->x = (float)((uint)pVVar1->x & 0xffffffe0);
		bVar5 = InstanceNodeAbstract::Step((InstanceNodeAbstract *)this,time);
		return bVar5;
		}
		}
		}
		if (uVar6 < AI_DIST_SQR2) {
		fVar3 = (this->body).parent.field61_0x9c.x;
		fVar4 = Float5Array[(uint)fVar3 >> 10 & 0x1f];
		switch((uint)fVar3 & 0x1f) {
		case 2:fVar3 = (this->body).parent.field61_0x9c.y;
		if (fVar3 != 0.0) {
		FUN_00176030((int)fVar3,(InstanceNodeInstance *)this);
		}
		fVar3 = (this->body).parent.field61_0x9c.x;
		if ((((uint)fVar3 & 0x1f) != 4) &&((this->body).parent.parent.field2_0x6 = 0, ((uint)fVar3 & 0x80000) == 0)) {
		(this->body).parent.field61_0x9c.x =(float)((uint)fVar3 & 0xfffffc04 | ((uint)fVar3 & 0x1f) << 5 | 4);
		bVar5 = InstanceNodeAbstract::Step((InstanceNodeAbstract *)this,time);
		return bVar5;
		}
		break;
		case 4:if ((*(byte *)((int)fVar4 + 0x10) & 0x40) != 0) {
		thunk_FUN_0003db40((int)this);
		}
		fVar3 = (this->body).parent.field61_0x9c.y;
		if (fVar3 != 0.0) {
		FUN_00176030((int)fVar3,(InstanceNodeInstance *)this);
		bVar5 = InstanceNodeAbstract::Step((InstanceNodeAbstract *)this,time);
		return bVar5;
		}
		break;
		case 6:fVar3 = (this->body).parent.field61_0x9c.y;
		if (fVar3 != 0.0) {
		FUN_00176030((int)fVar3,(InstanceNodeInstance *)this);
		}
		thunk_FUN_0003e180(this,(int)fVar4,(int)time);
		bVar5 = InstanceNodeAbstract::Step((InstanceNodeAbstract *)this,time);
		return bVar5;
		case 7:fVar3 = (this->body).parent.field61_0x9c.y;
		if (fVar3 != 0.0) {
		FUN_00176030((int)fVar3,(InstanceNodeInstance *)this);
		}
		case 9:thunk_FUN_0003dc60(this,(int)time,0);
		break;
		case 8:fVar3 = (this->body).parent.field61_0x9c.y;
		if (fVar3 != 0.0) {
		FUN_00176030((int)fVar3,(InstanceNodeInstance *)this);
		}
		thunk_FUN_0003e710(this,fVar4,(int)time);
		bVar5 = InstanceNodeAbstract::Step((InstanceNodeAbstract *)this,time);
		return bVar5;
		}
		}
		switchD_00046582_caseD_3:bVar5 = InstanceNodeAbstract::Step((InstanceNodeAbstract *)this,time);
		return bVar5;
		}
		
	*/
	return false;
}

void InstanceNodeInstanceA::DisposeSomething(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstanceA::DisposeSomething(InstanceNodeInstanceA *this,int *param_1){
		InstanceContext *this_00;
		bool bVar1;
		int iVar2;
		uint *puVar3;
		uint uVar4;
		InstanceNodeInstanceA *local_4;
		if (param_1 == (int *)0x0) {
		iVar2 = 0;
		}
		else {
		iVar2 = *param_1;
		}
		local_4 = this;
		if ((*(short *)(iVar2 + 8) == 0x100) &&(this_00 = (this->body).parent.parent.ctx, (*(byte *)&(this_00->parent).flags & 0x10) != 0)) {
		iVar2 = *param_1;
		local_4 = (InstanceNodeInstanceA *)(*(ushort *)(iVar2 + 0x14) & 0x7fff);
		bVar1 = thunk_FUN_00036f20((short *)&local_4);
		if (bVar1 != false) {
		iVar2 = *(int *)(iVar2 + 0x1c);
		*(int *)&(this->body).parent.field_0x2c = iVar2;
		if (iVar2 != 0) {
		puVar3 = &(this->body).parent.field50_0x84;
		*puVar3 = *puVar3 | 1;
		}
		uVar4 = (uint)local_4 & 0xffff;
		(this->body).parent.field50_0x84 = (this->body).parent.field50_0x84 & 0xfffffffd;
		puVar3 = InstanceContext::FUN_000f7220(this_00);
		thunk_FUN_0003dc60(this,(int)puVar3,uVar4);
		}
		}
		InstanceNodeAbstract::UnkMethod1((undefined *)&param_1);
		return;
		}
		
	*/
	return;
}

bool InstanceNodeInstanceA::InstanceMethod31() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodeInstanceA::InstanceMethod31(void){
		return false;
		}
		
	*/
	return false;
}

bool InstanceNodeInstanceA::IsB() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodeInstanceA::IsB(void){
		return false;
		}
		
	*/
	return false;
}

bool InstanceNodeInstanceA::IsC() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodeInstanceA::IsC(void){
		return false;
		}
		
	*/
	return false;
}

void InstanceNodeInstanceA::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeInstanceA::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint InstanceNodeInstanceA::InstanceMethod14() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __fastcall InstanceNodeInstanceA::InstanceMethod14(InstanceNodeInstanceA *this){
		return (uint)(this->body).parent.field61_0x9c.x >> 10 & 0x1f;
		}
		
	*/
	return 0;
}

uint InstanceNodeInstanceA::GetIndex2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodeInstanceA::GetIndex2(void){
		return 0x11;
		}
		
	*/
	return 0;
}

void InstanceNodeInstanceA::Construct_23(void* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeInstanceA * __thiscall InstanceNodeInstanceA::Construct(InstanceNodeInstanceA *this,undefined *param_1){
		InstanceNodeInstance::Construct((InstanceNodeInstance *)this,(ChunkData *)param_1);
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance_A;
		Init(this);
		return this;
		}
		
	*/
	return;
}

